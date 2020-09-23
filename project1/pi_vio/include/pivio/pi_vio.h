
#include <Eigen/Dense>

#include "imu_state.h"
#include "cam_state.h"


// Filter related functions
// Propogate the state
void batchImuProcessing(const double& time_bound);

void processModel(const double& time, const Eigen::Vector3d& m_gyro, const Eigen::Vector3d& m_acc);

void predictNewState(const double& dt, const Eigen::Vector3d& gyro, const Eigen::Vector3d& acc);

void predictNewStateFix(const double& dt, const Eigen::Vector3d& gyro, const Eigen::Vector3d& acc, Eigen::Vector4d& q, Eigen::Vector3d& v, Eigen::Vector3d& p);



// =========== data logics ================ //
// IMU data
bool received_first_valid_imu = false;
// This buffer is used to handle the unsynchronization or transfer delay between IMU and Image messages.
std::mutex imu_sync_mutex;
std::vector<IMUData> imu_msg_buffer;
std::vector<IMUData> imu_recv_buf;
// Indicate if the gravity vector is set.
bool is_gravity_set;

// Image data
double g_latest_image_stamp = 0.0;


void extractQandT(Eigen::Vector4d& q, Eigen::Vector3d& t, bool enable_interpolation = false);

double g_latest_imu_stamp = 0.0;


/**
 * @brief StateServer Store one IMU states and several camera states for constructing measurement model.
 */
struct StateServer {
  IMUState imu_state;
  CamStateServer cam_states;

  // State covariance matrix
  Eigen::MatrixXd state_cov;
  Eigen::Matrix<double, 12, 12> continuous_noise_cov;
};

// State vector
StateServer state_server;
StateServer last_state_server;

// Maximum number of camera states
int max_cam_state_size;
// Features used
MapServer map_server;

std::string get_gps_error_info;
std::string init_gps_error_info;


// ================ GNSS fusion logics =================== //
// GPS Data
std::vector<PIAUTO::gnss::gnss_data_t> gps_buffer;
PIAUTO::gnss::gnss_data_t g_latest_pushback_gps;
bool received_first_valid_gps = false;
int gps_repeat_count = 0;
const int max_repeat = 20;
bool gps_lost = false;

// GPS Fusion
void InitTwe(const Eigen::Isometry3d& T_b_e);
bool GetGPSByTime(const double& timestamp, PIAUTO::gnss::gnss_data_t &selected_rtk_data, std::vector<PIAUTO::gnss::gnss_data>& near_rtk_datas);
bool GNSSFusion(const double& timestamp);




Eigen::Isometry3d T_b_gpsantenna;

bool is_inited_T_w_e = false;





// ============= system pipeline logics ===================
enum
{
    MODE_ONLINE = 0,
    MODE_OFFLINE = 1
};
int m_running_mode = MODE_ONLINE;