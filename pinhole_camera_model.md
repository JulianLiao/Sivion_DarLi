
## 真实的世界

<img src="images/pinhole_camera_model/pinhole_camera_model_a.png" alt="drawing" width="362.5" height="195"/>

<img src="images/pinhole_camera_model/pinhole_camera_model_b.png" alt="drawing" width="370.5" height="207"/>

如果按照真实的情况走，就会出现倒影现象(flipped images)。

<img src="images/pinhole_camera_model/pinhole_camera_model_flipped_image.png" alt="drawing" width="331" height="217"/>

## 虚拟的成像平面(image plane)

- 真实的成像平面是在光心的后面，为了避免“倒影现象”，就虚拟出一个在光心前面的成像平面，这个成像平面位于障碍物与光心之间；
- 《视觉slam十四讲》第5讲 “相机与图像”有提到
  “为了简化模型，我们可以把成像平面对称到相机前方，和三维空间点一起放在摄像机坐标系的同一侧。”
  “这只是我们处理真实世界与相机投影的数学手段，并且，大多数相机输出的图像并不是倒像——相机自身的软件会帮你翻转这张图像，所以你看到的一般是正着的像，也就是对称的成像平面的像。”



## 坐标系的定义

### 图像坐标系

<img src="images/pinhole_camera_model/pinhole_camera_model_image_coordinate_a.png" alt="drawing" width="385" height="226"/>