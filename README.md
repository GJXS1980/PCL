### Tutorial
#### 1.编译
```
mkdir -p ~/ROS_PCL/src
git clone https://github.com/GJXS1980/PCL.git
cd ..
catkin_make
```
#### 2.打开仿真模型
```
cd ~/ros_pcl/build/PCL/pcl_visualizer_demo
./pcl_visualizer_demo -h
```
七种模式

  Options|...
--|--
  -h |this help
-s   |  Simple visualisation example
-r   | RGB colour visualisation example
-c   | Custom colour visualisation example
-n|  Normals visualisation example
-a |  Shapes visualisation example
-v  |   Viewports example
-i   |  Interaction Customization example
