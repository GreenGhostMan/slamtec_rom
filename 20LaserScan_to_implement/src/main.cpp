#include <iostream>
#include <rpos/features/system_resource.h>

int main(int argc, char**argv)
{
	rpos::features::system_resource::LaserScan lase_scan(const std::vector<rpos::core::LaserPoint>&);

	/* Methods */
	const std::vector<rpos::core::LaserPoint>& getLaserPoints() const; // retrieves the laser point data collection
	void setLaserPoints(const std::vector<rpos::core::LaserPoint>& data, rpos::system::types::_u64 timestamp...blablabla);

	void setLaserPointsPose( const rpos::core::Pose& pose); // set the centor pose of the current laser scan
	const rpos::core::Pose& getLaserPointsPose() const; //retrieve the center pose of the current laser scan

	void setHasPose(bool hasPose);
	bool getHasPose() const;

	return 0;
}