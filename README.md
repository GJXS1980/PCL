### Tutorial
#### 1.编译
```bsh
mkdir -p ~/pcl_ws/src
cd ~/pcl_ws/src
git clone https://github.com/GJXS1980/PCL.git
cd ~/pcl_ws
catkin_make
echo "source ~/pcl_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
```
#### 2.打开仿真模型
```bash
cd ~/pcl_ws/build/PCL/pcl_visualizer_demo
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
