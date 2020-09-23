# 坐标系

## ENU坐标系

- 原点
```
ENU原点可以自己定。我们自定义的ENU原点是在启车位置处的gps位置。
```

- 朝向
```
x - East    y - North    z - Up
```

## world坐标系

- 原点
```
vio原点在imu位置，vio的起点是(0, 0 , 0)，vio的第一帧
```

- 朝向
```
body坐标系是RFU，而world就是body的第一帧坐标系，所以world也是RFU。body是动起来的
```
**world是body的第一帧，这是所有odometry的习惯。**

## imu坐标系

- 原点
```
dragonfly上的imu位置处
```

- 朝向
```
RDF

x - Right    y - Down    z - Front
```

## body坐标系

- 原点
```
dragonfly上的imu位置处
```

- 朝向
```
RFU

x - Right    y - Front    z - Up
```

imu坐标系 和 body坐标系之间差了一个旋转。

body是动起来的。

## 车体坐标系

- 原点
```
后轮轮轴中心
```

- 朝向
```
FLU

x - Front    y - Left    z - Up
```

## gps天线坐标系

- 原点
```
主天线的相位中心，对于2座车，就是左天线的相位中心
```

- 朝向
```
对于2座车，

x - Rear（指向后方）    y - Right（从左天线指向右天线）    z - Up
```


# 可以参考的论文

1. www.xinliang-zhong.vip/msckf-notes/

2. 阿里云 -> <1-hw> -> vio -> msckf -> [S-MSCKF论文公式推导与代码解析_20190901.pdf]














