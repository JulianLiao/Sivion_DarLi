
#include <Eigen/Geometry>

// prototype: void InitTwe(const Eigen::Isometry3d& T_b_e);
/**
 *  T_gpsantenna_e: 从天线坐标系到ENU坐标系
 *  T_b_gpsantenna: 从车体坐标系到天线坐标系
 *  T_b_e: 从车体坐标系到ENU坐标系
 */
void InitTwe(const Eigen::Isometry3d& T_gpsantenna_e) {
    Eigen::Isometry3d T_b_e;
    T_b_e = T_gpsantenna_e * T_b_gpsantenna;
    Eigen::Vector4d Q_b_w_;
    Eigen::Vector3d t_b_w_;


    is_inited_T_w_e = true;

}

