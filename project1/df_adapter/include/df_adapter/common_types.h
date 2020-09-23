

#include <Eigen/Geometry>






struct IMUData {
    double stamp;

    Eigen::Vector4d orientation;
    Eigen::Vector3d angular_velocity;
    Eigen::Vector3d linear_acceleration;
}


struct CustomIMURecord {
    long timestamp;
    float accel_x, accel_y, accel_z;
    float gyro_x, gyro_y, gyro_z;
}


struct CameraData {
    double stamp;
    std::string name;
    cv::Mat image;

    CameraData() {}

    CameraData(double st, std::string nm, cv::Mat img) : stamp(st), name(nm) {
        image = img.clone();
    }

    CameraData(const CameraData &rhs) {
        stamp = rhs.stamp;
        name = rhs.name;
        
        image = rhs.image.clone();
    }

    CameraData& operator=(const CameraData &rhs) {
        stamp = rhs.stamp;
        name = rhs.name;
        
        image = rhs.image.clone();
    }
};
