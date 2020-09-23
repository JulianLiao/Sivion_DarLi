
#include <Eigen/Dense>


/**
 * @brief Create a skew-symmetric matrix from a 3-element vector.
 * @note Performs the operation:
 * w    ->  [  0 -w3   w2]
 *          [ w3   0  -w1]
 *          [-w2  w1    0]
 */
inline Eigen::Matrix3d skewSymmetric(const Eigen::Vector3d& w) {
    Eigen::Matrix3d w_hat;
    w_hat(0, 0) =     0;
    w_hat(0, 1) = -w(2);
    w_hat(0, 2) =  w(1);

    w_hat(1, 0) =  w(2);
    w_hat(1, 1) =     0;
    w_hat(1, 2) = -w(0);

    w_hat(2, 0) = -w(1);
    w_hat(2, 1) =  w(0);
    w_hat(2, 2) =     0;

    return w_hat;
}



inline Eigen::Matrix3d quaternionToRotation(const Eigen::Vector4d& q) {
    const Eigen::Vector3d& q_vec = q.block(0, 0, 3, 1);
    const double& q4 = q(3);
    Eigen::Matrix3d R = (2*q4*q4 - 1) * Eigen::Matrix3d::Identity() - 2 * q4 * skewSymmetric(q_vec) + 2 * q_vec * q_vec.transpose();
    return R;
}