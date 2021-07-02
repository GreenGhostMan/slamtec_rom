#include <rpos/robot_platforms/slamware_core_platform.h>
#include <iostream>

#include <rpos/core/pose.h>
#include <chrono>
//using namespace std;
//using namespace rpos::robot_platforms;

int main(int argc, char * argv[])
{
	//SlamwareCorePlatform platform = SlamwareCorePlatform::connect("192.168.11.1", 1445);
	//cout << "Base Version: " << platform.getSDPVersion() << endl;

	rpos::core::Location start(0, 0, 0);
	rpos::core::Location stop(5,6,0);
	std::cout << "Start Location x: " << start.x() << " y: " << start.y() << " z: " << start.z() << std::endl;
	std::cout << "Stop Location  x: " << stop.x()  << " y: " << stop.y()  << " z: " << stop.z()  << std::endl; 

	double euler_distance = start.distanceTo(stop);
	std::cout<< "Start to Stop is " << euler_distance << std::endl; // Euclidean distance between 2 points ( R3 )
	return 0;
}
