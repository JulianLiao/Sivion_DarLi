
// prototype: void InitTwe(const Eigen::Isometry3d& T_b_e);
void InitTwe(const Eigen::Isometry3d& T_gpsantenna_e) {
    Eigen::Isometry3d T_b_e;
    T_b_e = T_gpsantenna_e * T_b_gpsantenna;

}

