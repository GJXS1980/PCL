#include <iostream>
#include <pcl/io/pcd_io.h>       //pcl / io / pcd_io.h是包含PCD I / O操作定义的头文件
#include <pcl/point_types.h>     //pcl / point_types.h包含几个PointT类型结构

int
  main (int argc, char** argv)
{
  pcl::PointCloud<pcl::PointXYZ> cloud;        //每个点的类型设置为pcl :: PointXYZ

  // Fill in the cloud data
  cloud.width    = 5;
  cloud.height   = 1;
  cloud.is_dense = false;
  cloud.points.resize (cloud.width * cloud.height);

  for (size_t i = 0; i < cloud.points.size (); ++i)
  {
    cloud.points[i].x = 1024 * rand () / (RAND_MAX + 1.0f);
    cloud.points[i].y = 1024 * rand () / (RAND_MAX + 1.0f);
    cloud.points[i].z = 1024 * rand () / (RAND_MAX + 1.0f);
  }
  //用随机点值填充PointCloud结构，并设置合适的参数（宽度，高度，深度）


  pcl::io::savePCDFileASCII ("test_pcd.pcd", cloud);    //将PointCloud数据保存到磁盘中，名为test_pcd.pcd


  std::cerr << "Saved " << cloud.points.size () << " data points to test_pcd.pcd." << std::endl;

  for (size_t i = 0; i < cloud.points.size (); ++i)
    std::cerr << "    " << cloud.points[i].x << " " << cloud.points[i].y << " " << cloud.points[i].z << std::endl;
//用于显示生成的数据。


  return (0);
}