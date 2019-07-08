# Sivion


![data_dispather linked dynamic libs](images/data_dispather.png "data_dispather binary analyze")

仓库：DragonFly
目录：perception/stereo_vision

在perception/stereo_vision/CMakeLists.txt 有如下语句：
    add_executable(data_dispatcher dispatcher_main.cpp)
    target_link_libraries(data_dispatcher
            yaml-cpp
            df_adapter
            nanomsg
            glog
            )