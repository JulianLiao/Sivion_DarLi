
#include <Eigen/Geometry>


#include "math_utils.hpp"

using namespace Eigen;

// utility function to extract Q and T
void extractQandT(Eigen::Vector4d& q, Eigen::Vector3d& t, bool enable_interpolation) {
    const IMUState& imu_state = state_server.imu_state;

    Vector4d q_imu = imu_state.orientation;
    Vector3d v_imu = imu_state.velocity;
    Vector3d p_imu = imu_state.position;

    if (m_running_mode == MODE_ONLINE && enable_interpolation) {
        // Do a simple interpolation to reduce the pos error caused by the VIO pipeline latency.
        // Caution: Only do it under online mode.
        double time_start = state_server.imu_state.time;
        double time_bound = g_latest_imu_stamp;
        LOG(INFO) << std::setprecision(20) << "extractQandT time_start=state_server.imu_state.time=" << state_server.imu_state.time
                << " time_bound=g_latest_imu_stamp=" << g_latest_imu_stamp;
        int used_imu_msg_cntr = 0;
        double last_time = time_start;

        for (const auto& imu_msg : imu_msg_buffer) {
            double imu_time = imu_msg.stamp;
            if (imu_time < time_start) {
                continue;
            }
            if (imu_time > time_bound) {
                LOG(INFO) << "DEBUG issue #56==>batchImuProcessing, used_imu_msg_cntr: " << used_imu_msg_cntr << ", imu_time: " << imu_time << ", time_bound: " << time_bound;
                break;
            }

            // Convert the msgs.
            Vector3d m_gyro, m_acc;
            m_gyro = imu_msg.angular_velocity;
            m_acc = imu_msg.linear_acceleration;

            // Remove the bias from the measured gyro and acceleration
            Vector3d acc = IMUState::acc_m * (m_acc - imu_state.acc_bias);
            Vector3d gyro = IMUState::gyro_m * (m_gyro - imu_state.gyro_bias);

            double time = imu_time;
            double dtime = time - last_time;

            if (dtime > 0.5) {
                LOG(WARNING) << "extractQandT in processModel: something wrong with IMU as the time difference between IMU samples is too large " << dtime;
                dtime = 0.005;  // NOTE: assuming 200Hz
            }

            predictNewStateFix(dtime, gyro, acc, q_imu, v_imu, p_imu);
            ++used_imu_msg_cntr;
            last_time = imu_time;
        }

        LOG(INFO) << " used_imu_msg_cntr=" << used_imu_msg_cntr;

    }

    Eigen::Isometry3d T_i_w = Eigen::Isometry3d::Identity();
    T_i_w.linear() = quaternionToRotation(q_imu).transpose();
    T_i_w.translation() = p_imu;


    Eigen::Isometry3d T_b_w = T_i_w * IMUState::T_imu_body.inverse();
    q = rotationToQuaternion(T_b_w.linear());
    t = T_b_w.translation();
}




// prototype: void InitTwe(const Eigen::Isometry3d& T_b_e);
/**
 *  T_gpsantenna_e: 从天线坐标系到ENU坐标系
 *  T_b_gpsantenna: 从body坐标系到天线坐标系
 *  T_b_e: 从body坐标系到ENU坐标系
 *
 *  Q_b_w_: body到world四元数
 *  t_b_w_: body到world平移量
 *  T_b_w: body到world包含(R, t)的转换矩阵
 *  T_b_w.inverse(): world到body的转换矩阵
 */
void InitTwe(const Eigen::Isometry3d& T_gpsantenna_e) {
    Eigen::Isometry3d T_b_e;
    T_b_e = T_gpsantenna_e * T_b_gpsantenna;
    Eigen::Vector4d Q_b_w_;
    Eigen::Vector3d t_b_w_;
    extractQandT(Q_b_w_, t_b_w_);  // Current T_b_w // from imu(Right-Down-Front) to body(Right-Front-Up),
    // need to make sure body is (Right-Front-Up) such that body_xy is in the same surface of utm_xy.


    Eigen::Matrix4d T_b_w = Eigen::Matrix4d::Identity();
    T_b_w.block<3, 3>(0, 0) = quaternionToRotation(Q_b_w_);
    T_b_w.block<3, 1>(0, 3) = t_b_w_;
    Eigen::Matrix4d T_w_e = T_b_e * T_b_w.inverse();

    state_server.imu_state.R_w_e = T_w_e.block<3, 3>(0, 0);
    state_server.imu_state.t_w_e = T_w_e.block<3, 1>(0, 3);

    is_inited_T_w_e = true;
}


bool GetGPSByTime() {
    PIAUTO::gnss::gnss_data_t selected_data;
    double min_diff = 99999999999;
}



bool GNSSFusion(const double& timestamp) {

}


