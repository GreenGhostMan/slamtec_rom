#include <iostream>
#include <rpos/core/robot_platform.h>

int main(int argc, char** argv)
{
	rpos::core::RobotPlatform robotplatform( boost::shared_ptr<rpos::core::detail::RobotPlatformImpl> impl );
	
	//auto robot_feature = robotplatform.getFeatures();
	// std::vector<Feature> getFeatures()
	
	return 0;
}