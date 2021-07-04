#include <iostream>
#include <rpos/core/pose.h> 

//using namespace rpos::robot_platforms;
// radian , Tait-Bryan angles rules

int main(int argc, char * argv[])
{
	rpos::core::Rotation rot(1.0, 0, 0);

	std::cout<< "Rotation yaw: " << rot.yaw() << " pitch: " << rot.pitch() << " roll: "<< rot.roll() << std::endl; // Euclidean distance between 2 points ( R3 )
	return 0;
}
