#include <iostream>
#include <rpos/core/laser_point.h>

int main(int argc, char **argv)
{
	rpos::core::LaserPoint obstacle1(0.3490, 2.334534, false);
	// distance() is meter unit
	// angle is right hand rule radian unit

	std::string s = ( obstacle1.valid() )? "true": "false";
	std::cout<< "\t obstacle distance: " << obstacle1.distance() << "\n\t angle: " << obstacle1.angle() << "\n\t valid: " << s << std::endl;
	return 0;
}