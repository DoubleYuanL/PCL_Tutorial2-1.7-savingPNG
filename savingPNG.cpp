#include <pcl/io/pcd_io.h>
#include <pcl/io/png_io.h>
int
main(int argc, char ** argv)
{
	pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
	if(pcl::io::loadPCDFile<pcl::PointXYZRGB>(argv[1], *cloud) != 0)
		return -1;
	pcl::io::savePNGFile("output.png", *cloud, "rgb");
	return 0;
}
