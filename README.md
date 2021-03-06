# Video-Image-Processing

[![](https://img.shields.io/badge/author-TongxinV-green.svg)](https://github.com/TongxinV)
[![GitHub issues](https://img.shields.io/github/issues/TongxinV/Video-Image-Processing.svg)](https://github.com/TongxinV/Video-Image-Processing/issues)



DoING 基于嵌入式的视觉运动控制

> 还在进行...

### Environment

* Arch：s5pv210 cortex-A8
* OS：linux2.6.35
* Camera：映美精 DFK 22BUC03 USB2.0 CCD摄像头


### Features

* 图像采集 | 视频显示
* 图像处理 | 提取信息
* 利用串口发送消息(undetermined)
* 控制步进电机


### Tree


    .
    ├── app
    │   ├── app.pro
    │   └── main.cpp
    ├── bin
    │   
    ├── include
    │   ├── c1image.h
    │   ├── c1painter.h
    │   ├── c1screen.h
    │   ├── codec
    │   │   ├── e1bitmap.cpp
    │   │   └── e1bitmap.h
    │   └── smdkv210
    │       ├── linuxfbscreen.h
    │       ├── showvideo.h
    │       └── videodevice.h
    ├── lib
    │   
    ├── src
    │   ├── c1image.cpp
    │   ├── c1painter.cpp
    │   ├── c1screen.cpp
    │   ├── smdkv210
    │   │   ├── linuxfbscreen.cpp
    │   │   ├── showvideo.cpp
    │   │   └── videodevice.cpp
    │   └── src.pro
    │ 
    ├── complex.pro
    ├── complex.pro.user
    └── README.md


**视频显示效果**：

> gif图片有点大加载前会卡，而不是视频卡！！！请注意让它先加载完~


<p align="center">
  <img src="https://raw.githubusercontent.com/TongxinV/Video-Image-Processing/master/doc/assets/P003cc.gif" alt="P003cc-GIF">

</p>

    
**openCV处理图**:


![](https://raw.githubusercontent.com/TongxinV/Video-Image-Processing/master/doc/assets/opencv%E5%9B%BE%E5%83%8F%E5%A4%84%E7%90%86%E7%BB%93%E6%9E%9C.png)
    

**物体轮廓中心提取效果**

> 点击屏幕时开始进行图像处理

![](https://raw.githubusercontent.com/TongxinV/Video-Image-Processing/master/doc/assets/R002.png)




### License

 
---
author：@TongxinV
