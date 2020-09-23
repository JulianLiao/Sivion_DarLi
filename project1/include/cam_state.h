
#include "imu_state.h"


struct CAMState {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    // Current CAM State
    StateIDType id;

    // Time when current state is recorded
    double time;



    // Orientation, direction
    // Take a vector from the world frame to the camera frame
    Eigen::Vector4d orientation;

    // position of the camera frame in the world frame
    Eigen::Vector3d position;

    // These two variables should have the same physical interpretation with 'orientation' and 'position'.
    // These two variables are used to modify the measurement Jacobian matrices to make the observability matrix have proper null space.
    Eigen::Vector4d orientation_null;
    Eigen::Vector3d position_null;

    // Takes a vector from the cam0 to the cam1 frame.
    static Eigen::Isometry3d T_cam0_cam1;

    CAMState(): id(0), time(0),
        oritentation(Eigen::Vector4d(0, 0, 0, 1)),
        position(Eigen::Vector3d::Zero()),
        orientation_null(Eigen::Vector4d(0, 0, 0, 1)),
        position_null(Eigen::Vector3d::Zero()) {}

    CAMState(const StateIDType& new_id): id(new_id), time(0),
        oritentation(Eigen::Vector4d(0, 0, 0, 1)),
        position(Eigen::Vector3d::Zero()),
        orientation_null(Eigen::Vector4d(0, 0, 0, 1)),
        position_null(Eigen::Vector3d::Zero()) {}
};

typedef std::map<StateIDType, CAMState, std::less<int>, Eigen::aligned_allocator<std::pair<const StateIDType, CAMState>>> CamStateServer;


