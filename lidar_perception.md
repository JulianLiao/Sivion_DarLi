
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
   <tr>
      <td>package</td>
      <td>node</td>
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
      <td rowspan="6">points_preprocessor</td>
      <td  align="left">1. ray_ground_filter<br></td>
   </tr>
   <tr>
      <td align="left">2. space_filter</td>
   </tr>
   <tr>
      <td align="left">3. cloud_transformer</td>
   </tr>
   <tr>
      <td align="left">4. points_concat_filter</td>
   </tr>
   <tr>
      <td align="left">5. ring_ground_filter</td>
   </tr>
   <tr>
      <td align="left">6. compare_map_filter</td>
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
      <td>lidar_euclidean_cluster_detect</td>
      <td  align="left">1. lidar_euclidean_cluster_detect<br></td>
   </tr>
   <tr>
      <td rowspan="2">lidar_imm_ukf_pda_track</td>
      <td  align="left">1. imm_ukf_pda_lanelet2<br></td>
   </tr>
   <tr>
      <td align="left">2. imm_ukf_pda</td>
   </tr>
</table>



在执行 sudo dpkg -i *.deb，launch文件会被安装到工控机上




# 问题记录

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


1- lidar_ws/devel/lib/libpi_time.a
3- lidar_ws/devel/lib/libpi_parameter.a
4- lidar_ws/devel/lib/libpi_msg_utils.a
5- lidar_ws/devel/lib/libpi_proto.a

2- lidar_ws/devel/lib/libsensor_data_proto.a

9- lidar_ws/devel/lib/detected_objects_visualizer/visualize_detected_objects
12- lidar_ws/devel/lib/detected_objects_visualizer/visualize_rects

7- lidar_ws/devel/lib/points_preprocessor/space_filter
11- lidar_ws/devel/lib/points_preprocessor/ring_ground_filter
18- lidar_ws/devel/lib/points_preprocessor/points_concat_filter
13- lidar_ws/devel/lib/points_preprocessor/compare_map_filter
14- lidar_ws/devel/lib/points_preprocessor/cloud_transformer
20- lidar_ws/devel/lib/points_preprocessor/ray_ground_filter

10- lidar_ws/devel/lib/libamathutils_lib.a

6- lidar_ws/devel/lib/ros2nanomsg/localization_sample
8- lidar_ws/devel/lib/ros2nanomsg/ros2nanomsg

16- lidar_ws/devel/lib/libray_ground_filter_lib.so

17- lidar_ws/devel/lib/lidar_euclidean_cluster_detect/lidar_euclidean_cluster_detect

15- lidar_ws/devel/lib/libvector_map.so

19- lidar_ws/devel/lib/imm_ukf_pda_track/imm_ukf_pda

我将 repo: DragonFly-Perception branch: feature/lidar_perception 整个lidar目录拷贝到 /home/julian/catkin_ws/src/lidar，修改DF_3RDPARTY_ROOT_DIR，具体在 /home/julian/catkin_ws/src/lidar/ros2nanomsg/CMakeLists.txt，修改Line130，由 "set(DF_3RDPARTY_ROOT_DIR /home/allride/Documents/yuc/ThirdParty)" 改成 "set(DF_3RDPARTY_ROOT_DIR /home/julian/Documents/5-github-code/0-PerceptIn/2-DragonFly-Perception/0-DragonFly-Perception_20201030_1130/ThirdParty)"，之后在 /home/julian/catkin_ws目录下执行**catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv**，遇到错误提示"fatal error: pi_msgs/DetectedObject.h: No such file or directory"。

尝试解决办法1：

再次运行 catkin_make 即可解决这个编译问题。

另外，在联想X1笔记本上，运行catkin_make -DOPENCV_ROOT_DIR=/usr/local/opencv可以一次编过。