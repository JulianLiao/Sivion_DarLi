
## 对 deb文件的理解

执行 sudo dpkg -i ros-kinetic-pi-msgs_1.13.0-0xenial_amd64.deb之前，在/opt/ros/kinetic使用命令find|grep pi_msgs找不到任何东西的，执行 sudo dpkg -i ros-kinetic-pi-msgs_1.13.0-0xenial_amd64.deb后，在/opt/ros/kinetic目录下，多了以下pi_msgs相关的文件/文件夹，

- 1. /opt/ros/kinetic/lib/pkgconfig/pi_msgs.pc
- 2. /opt/ros/kinetic/lib/python2.7/dist-packages/pi_msgs
- 3. /opt/ros/kinetic/share/common-lisp/ros/pi_msgs
- 4. /opt/ros/kinetic/share/pi_msgs
  * 4.1 /opt/ros/kinetic/share/pi_msgs/cmake
  * 4.2 /opt/ros/kinetic/share/pi_msgs/package.xml
  * 4.3 /opt/ros/kinetic/share/pi_msgs/srv
  * 4.4 /opt/ros/kinetic/share/pi_msgs/msg
- 5. /opt/ros/kinetic/share/gennodejs/ros/pi_msgs
- 6. /opt/ros/kinetic/share/roseus/ros/pi_msgs
- 7. /opt/ros/kinetic/include/pi_msgs

当我执行完 sudo dpkg -i ros-kinetic-pi-config-msgs_1.13.0-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下pi_config_msgs相关的文件/文件夹，

- 1. lib/pkgconfig/pi_config_msgs.pc
- 2. lib/python2.7/dist-packages/pi_config_msgs
- 3. share/common-lisp/ros/pi_config_msgs
- 4. share/pi_config_msgs
  * 4.1 share/pi_config_msgs/cmake
  * 4.2 share/pi_config_msgs/package.xml
  * 4.3 share/pi_config_msgs/msg
- 5. share/gennodejs/ros/pi_config_msgs
- 6. share/roseus/ros/pi_config_msgs
- 7. include/pi_config_msgs

当我执行完 sudo dpkg -i ros-kinetic-vector-map-msgs_1.13.0-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下vector_map_msgs相关的文件/文件夹，

- 1. lib/pkgconfig/vector_map_msgs.pc
- 2. lib/python2.7/dist-packages/vector_map_msgs
- 3. share/common-lisp/ros/vector_map_msgs
- 4. share/gennodejs/ros/vector_map_msgs
- 5. share/vector_map_msgs
  * 5.1 share/vector_map_msgs/cmake
  * 5.2 share/vector_map_msgs/package.xml
  * 5.3 share/vector_map_msgs/msg
- 6. share/roseus/ros/vector_map_msgs
- 7. include/vector_map_msgs

当我执行完 sudo dpkg -i ros-kinetic-vector-map_1.12.0-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下vector_map相关的文件/文件夹，

- 1. lib/libvector_map.so
- 2. lib/pkgconfig/vector_map.pc
- 3. share/vector_map
  * 3.1 share/vector_map/cmake
  * 3.2 share/vector_map/package.xml
- 4. include/vector_map

当我执行完 sudo dpkg -i ros-kinetic-detected-objects-visualizer_1.12.0-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下 detected_objects_visualizer相关的文件/文件夹，

- 1. lib/pkgconfig/detected_objects_visualizer.pc
- 2. lib/detected_objects_visualizer
  * 2.1. lib/detected_objects_visualizer/visualize_rects
  * 2.2. lib/detected_objects_visualizer/visualize_detected_objects
- 3. share/detected_objects_visualizer
  * 3.1. share/detected_objects_visualizer/cmake
  * 3.2. share/detected_objects_visualizer/models
  * 3.3. share/detected_objects_visualizer/package.xml

执行完 sudo dpkg -i ros-kinetic-lidar-loc-trans_0.1.2-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下lidar_loc_trans相关的文件/文件夹，

- 1. lib/pkgconfig/lidar_loc_trans.pc
- 2. lib/lidar_loc_trans
  * 2.1. lib/lidar_loc_trans/lidar_node
- 3. share/lidar_loc_trans
  * 3.1. share/lidar_loc_trans/cmake
  * 3.2. share/lidar_loc_trans/package.xml
  * 3.3. share/lidar_loc_trans/launch
    * 3.3.1 share/lidar_loc_trans/launch/lidar_loc_trans.launch
- 4. include/lidar_loc_trans  （备注：include/lidar_loc_trans目录下是空的）

执行完 sudo dpkg -i ros-kinetic-ros2nanomsg_0.1.2-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下ros2nanomsg相关的文件/文件夹，

- 1. lib/pkgconfig/ros2nanomsg.pc
- 2. lib/ros2nanomsg
  * 2.1. lib/ros2nanomsg/ros2nanomsg
- 3. share/ros2nanomsg
  * 3.1. share/ros2nanomsg/cmake
  * 3.2. share/ros2nanomsg/package.xml
  * 3.3. share/ros2nanomsg/launch
    * 3.3.1 share/ros2nanomsg/launch/ros2nanomsg.launch

当我执行完 sudo dpkg -i ros-kinetic-points-preprocessor_1.12.1-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下points_preprocessor相关的文件/文件夹，

- 1. lib/pkgconfig/points_preprocessor.pc
- 2. lib/points_preprocessor
  * 2.1. lib/points_preprocessor/ray_ground_filter
  * 2.2. lib/points_preprocessor/space_filter
  * 2.3. lib/points_preprocessor/cloud_transformer
  * 2.4. lib/points_preprocessor/points_concat_filter
  * 2.5. lib/points_preprocessor/ring_ground_filter
  * 2.6. lib/points_preprocessor/compare_map_filter
- 3. share/points_preprocessor
  * 3.1. share/points_preprocessor/cmake
  * 3.2. share/points_preprocessor/package.xml
  * 3.3. share/points_preprocessor/launch
    * 3.3.1. share/points_preprocessor/launch/ring_ground_filter.launch
    * 3.3.2. share/points_preprocessor/launch/compare_map_filter.launch
    * 3.3.3. share/points_preprocessor/launch/space_filter.launch
    * 3.3.4. share/points_preprocessor/launch/points_concat_filter.launch
    * 3.3.5. share/points_preprocessor/launch/ray_ground_filter.launch
    * 3.3.6. share/points_preprocessor/launch/cloud_transformer.launch
- 4. include/points_preprocessor
  * 4.1. include/points_preprocessor/ray_ground_filter
    * 4.1.1. include/points_preprocessor/ray_ground_filter/ray_ground_filter.h

问题：关于 ros-kinetic-points-preprocessor_1.12.1-0xenial_amd64.deb，它都依赖于哪些deb？

答： DragonFly-Perception feature/lidar_perception，查看lidar/points_preprocessor/package.xml有如下的几个 depend，

- <depend>pi_config_msgs</depend>，当通过sudo dpkg -i ros-kinetic-points-preprocessor_1.12.1-0xenial_amd64.deb，提示 ros-kinetic-points-preprocessor depedns on ros-kinetic-pi-config-msgs。
- <depend>velodyne_pointcloud</depend>，当通过sudo dpkg -i ros-kinetic-points-preprocessor_1.12.1-0xenial_amd64.deb，提示 ros-kinetic-points-preprocessor depends on ros-kinetic-velodyne-pointcloud。

当我执行完 sudo dpkg -i ros-kinetic-lidar-euclidean-cluster-detect_1.12.0-0xenial_amd64.deb，在/opt/ros/kinetic目录下，多了以下lidar_euclidean_cluster_detect相关的文件/文件夹，

- 1. lib/pkgconfig/lidar_euclidean_cluster_detect.pc
- 2. lib/lidar_euclidean_cluster_detect
  * 2.1. lib/lidar_euclidean_cluster_detect/lidar_euclidean_cluster_detect
- 3. share/lidar_euclidean_cluster_detect
  * 3.1. share/lidar_euclidean_cluster_detect/cmake
  * 3.2. share/lidar_euclidean_cluster_detect/config
    * 3.2.1. share/lidar_euclidean_cluster_detect/config/params.yaml
  * 3.2. share/lidar_euclidean_cluster_detect/package.xml
  * 3.3. share/lidar_euclidean_cluster_detect/launch
    * 3.3.1. share/lidar_euclidean_cluster_detect/launch/euclidean_clustering_Exp.launch
    * 3.3.2. share/lidar_euclidean_cluster_detect/launch/lidar_euclidean_cluster_detect.launch
    * 3.3.3. share/lidar_euclidean_cluster_detect/launch/lidar_euclidean_cluster_detect_param.launch
- 4. include/lidar_euclidean_cluster_detect
  * 4.1. include/lidar_euclidean_cluster_detect/cluster.h
  * 4.1. include/lidar_euclidean_cluster_detect/gpu_euclidean_clustering.h
  * 4.1. include/lidar_euclidean_cluster_detect/gencolors.cpp





## 编译Lidar Perception

在一台已经安装有ros-kinetic-desktop-full ubuntu16.04机器上，如何编译Lidar perception？

### 安装Dependency

```bash
sudo apt install ros-kinetic-jsk-recognition-msgs
sudo apt install ros-kinetic-grid-map
sudo apt install ros-kinetic-jsk-rviz-plugins
sudo apt install ros-kinetic-velodyne-pointcloud
```

### build steps

```bash
- sudo apt install python-catkin-tools
- mkdir -p ~/catkin_ws/src && cd ~/catkin_ws
- source /opt/ros/kinetic/setup.bash
- catkin init && catkin config --cmake-args -DCMAKE_BUILD_TYPE=Release
- cp -a DragonFly-Perception(feature/lidar_perception)/lidar ~/catkin_ws/src
- 修改 lidar/ros2nanomsg/CMakeLists.txt DF_3RDPARTY_ROOT_DIR
- catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv
```

# Lidar-Perception目前已知的package 和 node

<table>
<tbody>
<tr>
<td>package</td>
<td>node</td>
<td>src file</td>
</tr>
<tr>
<td>pi_config_msgs</td>
</tr>
<tr>
<td>pi_msgs</td>
</tr>
<tr>
<td>ros2nanomsg</td>
</tr>
<tr>
<td rowspan="7">points_preprocessor</td>
<td rowspan="2">1. ray_ground_filter</td>
<td align="left">lidar/points_preprocessor/nodes/ray_ground_filter/ray_ground_filter.cpp</td>
</tr>
<tr>
<td align="left">lidar/points_preprocessor/nodes/ray_ground_filter/ray_ground_filter_main.cpp</td>
</tr>
<tr>
<td align="left">2. space_filter</td>
<td align="left">lidar/points_preprocessor/nodes/space_filter/space_filter.cpp</td>
</tr>
<tr>
<td align="left">3. cloud_transformer</td>
<td align="left">lidar/points_preprocessor/nodes/cloud_transformer/cloud_transformer_node.cpp</td>
</tr>
<tr>
<td align="left">4. points_concat_filter</td>
<td align="left">lidar/points_preprocessor/nodes/points_concat_filter/points_concat_filter.cpp</td>
</tr>
<tr>
<td align="left">5. ring_ground_filter</td>
<td align="left">lidar/points_preprocessor/nodes/ring_ground_filter/ring_ground_filter.cpp</td>
</tr>
<tr>
<td align="left">6. compare_map_filter</td>
<td align="left">lidar/points_preprocessor/nodes/compare_map_filter/compare_map_filter.cpp</td>
</tr>
<tr>
<td>detected_objects_visualizer</td>
</tr>
<tr>
<td>amathutils_lib</td>
</tr>
<tr>
<td>vector_map</td>
</tr>
<tr>
<td>vector_map_msgs</td>
</tr>
<tr>
<td rowspan="2">lidar_euclidean_cluster_detect</td>
<td rowspan="2">1. lidar_euclidean_cluster_detect</td>
<td align="left">lidar/lidar_euclidean_cluster_detect/nodes/lidar_euclidean_cluster_detect/cluster.cpp</td>
</tr>
<tr>
<td align="left">lidar/lidar_euclidean_cluster_detect/nodes/lidar_euclidean_cluster_detect/lidar_euclidean_cluster_detect.cpp</td>
</tr>
<tr>
<td rowspan="5">lidar_imm_ukf_pda_track</td>
<td rowspan="2">1. imm_ukf_pda_lanelet2</td>
<td align="left">lidar/lidar_imm_ukf_pda_track/nodes/imm_ukf_pda_lanelet2/imm_ukf_pda_main_lanelet2.cpp</td>
</tr>
<tr>
<td align="left">lidar/lidar_imm_ukf_pda_track/nodes/imm_ukf_pda_lanelet2/imm_ukf_pda_lanelet2.cpp</td>
</tr>
<tr>
<td rowspan="3">2. imm_ukf_pda</td>
<td align="left">lidar/lidar_imm_ukf_pda_track/nodes/imm_ukf_pda/imm_ukf_pda_main.cpp</td>
</tr>
<tr>
<td align="left">lidar/lidar_imm_ukf_pda_track/nodes/imm_ukf_pda/ukf.cpp</td>
</tr>
<tr>
<td align="left">lidar/lidar_imm_ukf_pda_track/nodes/imm_ukf_pda/imm_ukf_pda.cpp</td>
</tr>
</tbody>
</table>

在执行 sudo dpkg -i *.deb，launch文件会被安装到工控机上

问题1： launch文件放在工控机的哪个目录了？

答： 比如，package *points_preprocceeor*, node **ray_ground_filter**就会被放到/opt/ros/kinetic/share/points_preprocessor/launch/ray_ground_filter.launch






# 问题记录

## ros-kinetic-lidar-loc-trans_0.1.2-0xenial_amd64.deb 是如何生成的？

## 编译问题记录

### 问题1：

在小米本上第一次运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv编译，遇到如下报错："fatal error: pi_msgs/Lane.h: No such file or directory"，再次通过运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv即可解决此编译问题。

小米本将原来的lidar_ws删除后，新建lidar_ws再次运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv编译，遇到如下报错："fatal error: pi_msgs/WaypointState.h: No such file or directory"，再运行一次catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv，可以编译成功。

Dell G3上运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv编译碰到了以下两个问题，

- fatal error: pi_msgs/DetectedObject.h: No such file or directory
- fatal error: pi_msgs/LaneArray.h: No such file or directory

再次运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv就可以编译通过了。

在Lenovo X1电脑上第一次编译，可以顺利编过，我看到有下面20个lib

在小米笔记本上，通过连续两次运行catkin_make，我看到了相同的下面20个lib

在Dell G3电脑上，通过连续两次运行catkin_make，我也同样可以看到下面20个lib，下面的编号是以在Dell G3电脑上看到的顺利来编号的。


- 1- lidar_ws/devel/lib/libpi_time.a
- 3- lidar_ws/devel/lib/libpi_parameter.a
- 4- lidar_ws/devel/lib/libpi_msg_utils.a
- 5- lidar_ws/devel/lib/libpi_proto.a

- 2- lidar_ws/devel/lib/libsensor_data_proto.a

- 9- lidar_ws/devel/lib/detected_objects_visualizer/visualize_detected_objects
- 12- lidar_ws/devel/lib/detected_objects_visualizer/visualize_rects

- 7- lidar_ws/devel/lib/points_preprocessor/space_filter
- 11- lidar_ws/devel/lib/points_preprocessor/ring_ground_filter
- 18- lidar_ws/devel/lib/points_preprocessor/points_concat_filter
- 13- lidar_ws/devel/lib/points_preprocessor/compare_map_filter
- 14- lidar_ws/devel/lib/points_preprocessor/cloud_transformer
- 20- lidar_ws/devel/lib/points_preprocessor/ray_ground_filter

- 10- lidar_ws/devel/lib/libamathutils_lib.a

- 6- lidar_ws/devel/lib/ros2nanomsg/localization_sample
- 8- lidar_ws/devel/lib/ros2nanomsg/ros2nanomsg

- 16- lidar_ws/devel/lib/libray_ground_filter_lib.so

- 17- lidar_ws/devel/lib/lidar_euclidean_cluster_detect/lidar_euclidean_cluster_detect

- 15- lidar_ws/devel/lib/libvector_map.so

- 19- lidar_ws/devel/lib/imm_ukf_pda_track/imm_ukf_pda

我将 repo: DragonFly-Perception branch: feature/lidar_perception（同时，ThirdParty要求切换到branch feature/lidar_msg） 整个lidar目录拷贝到 /home/julian/catkin_ws/src/lidar，修改DF_3RDPARTY_ROOT_DIR，具体在 /home/julian/catkin_ws/src/lidar/ros2nanomsg/CMakeLists.txt，修改Line130，由 "set(DF_3RDPARTY_ROOT_DIR /home/allride/Documents/yuc/ThirdParty)" 改成 "set(DF_3RDPARTY_ROOT_DIR /home/julian/Documents/5-github-code/0-PerceptIn/2-DragonFly-Perception/0-DragonFly-Perception_20201030_1130/ThirdParty)"，之后在 /home/julian/catkin_ws目录下执行**catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv**，遇到错误提示"fatal error: pi_msgs/DetectedObject.h: No such file or directory"。

尝试解决办法1：

再次运行 catkin_make 即可解决这个编译问题。

另外，在联想X1笔记本上，运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv可以一次编过。




## sample rosbag

办公室环境下，

A. 不运行product/rideware_launch.sh 和 PI_SDK_v1.5/scripts/lidar_launch.sh，运行rosbag record -a有哪些topic

在Lenovo X1上，只有2个topic，/rosout 和 /rosout_agg

在hunter用的miniPC上，有35个topic

topic  |  msg
-------|-------
1./VehicleData_Info  |  rideware_msgs/VehicleData_Info
2./canbus/car_info  |  std_msgs/String
3./dbw/can_tx  |  can_msgs/Frame
4./diagnostics  |  diagnostics_msgs/DiagnosticArray
5./novatel_data/bestgnsspos  |  novatel_msgs/BESTGNSSPOS
6./novatel_data/bestgnssvel  |  novatel_msgs/BESTGNSSVEL
7./novatel_data/bestpos  |  novatel_msgs/BESTPOS
8./novatel_data/bestvel  |  novatel_msgs/BESTVEL
9./novatel_data/delay  |  scu_msgs/time_delay
10./novatel_data/dualantennaheading  |  novatel_msgs/DUALANTENNAHEADING
11./novatel_data/imuratecorrimus  |  novatel_msgs/IMURATECORRIMUS
12./novatel_data/inscov  |  novatel_msgs/INSCOV
13./novatel_data/inspvas  |  novatel_msgs/INSPVAS
14./novatel_data/inspvax  |  novatel_msgs/INSPVAX
15./novatel_data/rawimus  |  novatel_msgs/RAWIMUS
16./novatel_data/time  |  novatel_msgs/TIME
17./pylon_frontleft/status  |  dnb_msgs/ComponentStatus
18./pylon_frontright/status  |  dnb_msgs/ComponentStatus
19./pylon_sweepfront/status  |  dnb_msgs/ComponentStatus
20./rosout  |  rosgraph_msgs/Log
21./vehicle/brake_cmd  |  dbw_mkz_msgs/BrakeCmd
22./vehicle/dbw_enabled  |  std_msgs/Bool
23./vehicle/gear_cmd  |  dbw_mkz_msgs/GearCmd
24./vehicle/steering_cmd  |  dbw_mkz_msgs/SteeringCmd
25./vehicle/throttle_cmd  |  dbw_mkz_msgs/ThrottleCmd
26./vehicle/turnsignal_cmd  |  dbw_mkz_msgs/TurnSignalCmd
27./velodyne_32_nodelet_manager/bond  |  bond/Status
28./velodyne_32_nodelet_manager_cloud/parameter_descriptions  |  dynamic_reconfigure/ConfigDescription
29./velodyne_32_nodelet_manager_cloud/parameter_updates  |  dynamic_reconfigure/Config
30./velodyne_32_nodelet_manager_driver/parameter_descriptions  |  dynamic_reconfigure/ConfigDescription
31./velodyne_32_nodelet_manager_driver/parameter_updates  |  dynamic_reconfigure/Config
32./velodyne_32_nodelet_manager_laserscan/parameter_descriptions  |  dynamic_reconfigure/ConfigDescription
33./velodyne_32_nodelet_manager_laserscan/parameter_updates  |  dynamic_reconfigure/Config
34./velodyne_32_packets  |  velodyne_msgs/VelodyneScan
35./velodyne_32_points  |  sensor_msgs/PointCloud2

B. 运行product/rideware_launch.sh，但是不运行 PI_SDK_v1.5/scripts/lidar_launch.sh，运行rosbag record -a有哪些topic

如果是在室内，仍然只有上面35个topics。

如果是在室外运行，那要通过 docker logs -f loc_node来查看定位模块的情况，

如果是"wait for initial pose"（参见 oss://1-hw/2-Lidar/0-Velodyne/VLP32C/2020-11-04-21-00-54_only_rideware_wait_for_initial_pose.bag），

![wait for initial pose](images/lidar_perception/only_rideware_wait_for_initial_pose.png "wait for initial pose")

那么多了以下2个topics，

topic  |  msg
-------|-------
1./localization/gnss_base_obs  |  novatel_msgs/RANGE
2./localization/gnss_base_pos  |  novatel_msgs/BESTPOS

如果是"Initial Pose OK"（参见 oss://1-hw/2-Lidar/0-Velodyne/VLP32C/2020-11-04-21-02-49_only_rideware_INitialPoseOK.bag），

那么与室内场景相比，多了以下13个topics，

topic  |  msg
-------|-------
1./EstimatedPose  |  nav_msgs/Path
2./GroundTruthPose  |  nav_msgs/Path
3./MapRegistrationPoseWithCov  |  geometry_msgs/PoseWithCovarianceStamped
4./SensorFusionAccel  |  geometry_msgs/AccelStamped
5./SensorFusionPose  |  geometry_msgs/PoseStamped
6./SensorFusionVelocity  |  geometry_msgs/TwistStamped
7./as_rx/vehicle_motion  |  geometry_msgs/TwistStamped
8./canbus/car_state  |  std_msgs/String
9./current_accceleration  |  geometry_msgs/AccelStamped
10./current_pva  |  nav_msgs/Odometry
11./localization/gnss_base_obs  |  novatel_msgs/RANGE
12./localization/gnss_base_pos  |  novatel_msgs/BESTPOS
13./tf  |  tf2_msgs/TFMessage

![INitialPoseOK](images/lidar_perception/only_rideware_INitialPoseOK.png "INitialPoseOK")

C. 运行product/rideware_launch.sh，同时运行 PI_SDK_v1.5/scripts/lidar_launch.sh，运行rosbag record -a有哪些topic

当在室内运行 PI_SDK_v1.5/scripts/lidar_launch.sh，首先我看到了以下的错误，"Failed transform from base_link to velodyne_32"，此时我发现仍然只有这35个 topics，也就是室内并没有tf信息。

我现在要搞清楚的是，哪些ros topic是运行了./product/rideware_launch.sh才发出来的，哪些ros topic又是运行了 PI_SDK_v1.5/scripts/lidar_launch.sh才发出来的

product/rideware_launch.sh 正常（指的是Initial pose ok）同时 PI_SDK_v1.5/scripts/lidar_launch.sh 正常（指的是正常输入utm_x/utm_y），（事实上，只有product/rideware_launch.sh正常的前提下，才会有lidar_launch.sh正常），与仅仅product/rideware_launch.sh正常相比，多了以下个topics，

topic  |  msg
-------|-------
1./cluster_centroids  |  pi_msgs/Centroids
2./detection/lidar_detector/cloud_clusters  |  pi_msgs/CloudClusterArray
3./detection/lidar_detector/objects  |  pi_msgs/DetectedObjectArray
4./detection/lidar_detector/objects_markers  |  visualization_msgs/MarkerArray
5./points_cluster  |  sensor_msgs/PointCloud2
6./points_ground  |  sensor_msgs/PointCloud2
7./points_lanes  |  sensor_msgs/PointCloud2
8./points_no_ground  |  sensor_msgs/PointCloud2

### 2020-10-29-19-51-10_manuaaly_driving.bag

有一些topic是我们自己加的，

- /cluster_centroids                            ->    对应的msg是 pi_msgs/Centroids
- /detection/lidar_detector/cloud_clusters      ->    对应的msg是 pi_msgs/CloudClusterArray
- /detection/lidar_detector/objects             ->    对应的msg是 pi_msgs/DetectedObjectArray
- /detection/lidar_detector/object_markers      ->    对应的msg是 visualization_msgs/MarkerArray
- /points_cluster                               ->    对应的msg是 sensor_msgs/PointCloud2
- /points_ground                                ->    对应的msg是 sensor_msgs/PointCloud2
- /points_lanes                                 ->    对应的msg是 sensor_msgs/PointCloud2
- /points_no_ground                             ->    对应的msg是 sensor_msgs/PointCloud2

我想录制一个不包含以上8个topics的 rosbag包

rosbag record /current_pva /localization/gnss_base_obs /localization/gnss_base_pos /novatel_data/bestgnsspos /novatel_data/bestgnssvel /novatel_data/bestpos /novatel_data/bestvel /novatel_data/delay /novatel_data/dualantennaheading /novatel_data/imuratecorrimus /novatel_data/inscov /novatel_data/inspvas /novatel_data/inspvax /novatel_data/rawimus /novatel_data/time /tf /velodyne_32_nodelet_manager/bond /velodyne_32_nodelet_manager_cloud/parameter_descriptions /velodyne_32_nodelet_manager_cloud/parameter_updates /velodyne_32_nodelet_manager_driver/parameter_descriptions /velodyne_32_nodelet_manager_driver/parameter_updates /velodyne_32_nodelet_manager_laserscan/parameter_descriptions /velodyne_32_nodelet_manager_laserscan/parameter_updates /velodyne_32_packets /velodyne_32_points


## tmp

当我在电脑上 rosbag play **.bag -l，然后在运行./perception.sh，然后再用rviz去查看，会看到什么现象？