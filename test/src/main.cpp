#include <iostream>
#include <rpos/core/pose.h> 

//using namespace rpos::robot_platforms;
// radian , Tait-Bryan angles rules

int main(int argc, char * argv[])
{
	rpos::core::Rotation rot()
	rpos::core::Location start(0, 0, 0);
	rpos::core::Location stop(5,6,0);
	std::cout << "Start Location x: " << start.x() << " y: " << start.y() << " z: " << start.z() << std::endl;
	std::cout << "Stop Location  x: " << stop.x()  << " y: " << stop.y()  << " z: " << stop.z()  << std::endl; 

	double euler_distance = start.distanceTo(stop);
	std::cout<< "Start to Stop is " << euler_distance << std::endl; // Euclidean distance between 2 points ( R3 )
	return 0;
}
