#include <iostream>
#include <rpos/core/action.h> 
#include <rpos/robot_platforms/slamware_core_platform.h>
using namespace rpos::robot_platforms;

int main(int argc, char * argv[])
{
	rpos::robot_platforms::SlamwareCorePlatform platform = rpos::robot_platforms::SlamwareCorePlatform::connect("192.168.1.1", 1445);
	std::cout<< "Base Version: " << platform.getSDPVersion() << std::endl;

	rpos::core::Action someAction = platform.startSomeAction(); // Error no member name startSomeAction()
	//rpos::actions::MoveAction moveAction = someAction.cast<rpos::actions::MoveAction>();  // child
	return 0;
}
