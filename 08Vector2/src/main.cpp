#include <iostream>
#include <rpos/core/detail/geometry_matrix.h>

int main(int argc, char**argv)
{
	rpos::core::Vector2f position1(5.0, 10.0);
	rpos::core::Vector2f position2(19.45, 7.8);
	rpos::core::Vector2f position3(position2);

	std::cout<< "\tposition1 \n" << "\t      x: " << position1.x() << "\n\t      y: " << position1.y() << std::endl;
	std::cout<< "\tposition2 \n" << "\t      x: " << position2.x() << "\n\t      y: " << position2.y() << std::endl;
	std::cout<< "\tposition3 \n" << "\t      x: " << position3.x() << "\n\t      y: " << position3.y() << std::endl;

	rpos::core::Vector2i rotation1(66, 901);
	std::cout<< "\trotation1 \n" << "\t      x: " << rotation1.x() << "\n\t      y: " << rotation1.y() << std::endl;

	return 0;
}