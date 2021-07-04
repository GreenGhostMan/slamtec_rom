#include <iostream>
#include <rpos/core/pose.h> 

//using namespace rpos::robot_platforms;
// radian , Tait-Bryan angles rules

int main(int argc, char * argv[])
{
	rpos::core::Rotation rot(1.0, 0, 0);
	rpos::core::Location loc(5, 6, 0);
	rpos::core::Pose pos(loc, rot);

	rpos::core::Rotation rot2 = pos.rotation();
	rpos::core::Location loc2 = pos.location();

	double x = loc2.x(); double y = loc2.y(); double yaw = pos.yaw();
	std::cout << "x: " << x << " y: " << y << " yaw: " << yaw << std::endl; // Euclidean distance between 2 points ( R3 )
	return 0;
}
