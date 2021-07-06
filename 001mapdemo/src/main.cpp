/* 
*	OPEN SOURCE ROBOTICS FOR MYANMAR ( OSRFM )
*	
* 	slamtec Robot Go Action and Get Path Demo
*	Created by Pyae Soan Aung @ 2021 july 6 ( during Spring Revolution )
* 	Copyright (c) 2021 ROM ROBOTICS Co., Ltd.
*/
#include <iostream>
#include <rpos/robot_platforms/slamware_core_platform.h>
#include <rpos/features/location_provider/map.h>
#include <rpos/core/detail/geometry_rectangle.h>

std::string ipaddress = "192.168.1.1";

// don't fucking use using namespace bla::bla
int main(int argc, char** argv)
{
	if( argc != 2 ) { std::cout << "Usage : AppName <ip address>" << std::endl; return -1; }
	const char * ip = argv[1];

	rpos::robot_platforms::SlamwareCorePlatform sdp;

	try
	{
		sdp = rpos::robot_platforms::SlamwareCorePlatform::connect(ip, 1445);
		std::cout << "SDK Version: " << sdp.getSDKVersion() << std::endl;
		std::cout << "SDP Version: " << sdp.getSDPVersion() << std::endl;
		//std::cout <<"Barttery Status: " << sdp.getBatteryIsCharging() << std::endl;
        //std::cout <<"Barttery Percetage: " << sdp.getBatteryPercentage() << std::endl;
        //std::cout <<"Power Status: " << sdp.getDCIsConnected() << std::endl;
	}	
				catch( rpos::robot_platforms::ConnectionTimeOutException& e )
				{
					std::cout << e.what() << std::endl;
					return 1;
				}
				catch( rpos::robot_platforms::ConnectionFailException& e )
				{
					std::cout << e.what() << std::endl;
					return 1;
				}
	std::cout << "Connection Successfully!" << std::endl;

	try
	{
		rpos::features::location_provider::Map map = sdp.getMap(
			rpos::features::location_provider::MapTypeBitmap8Bit,
			rpos::core::RectangleF(-1, -1, 2, 2),
			rpos::features::location_provider::EXPLORERMAP
		);

		std::vector<rpos::system::types::_u8>& mapData = map.getMapData();
		std::cout << "Map Data: " << std::endl;
		for( std::vector<rpos::system::types::_u8>::const_iterator it=mapData.begin(); it!=mapData.end(); it++ )
		{
			std::cout << int(*it) << " ";
		}
		std::cout << std::endl << std::endl;

		std::cout << "Map Position" << std::endl;
		std::cout << map.getMapPosition() << std::endl << std::endl;

		std::cout << "Map Dimension" << std::endl;
		std::cout << map.getMapDimension() << std::endl << std::endl;

		std::cout << "Map Resolution" << std::endl;
		std::cout << map.getMapResolution() << std::endl << std::endl;

		std::cout << "Map Area" << std::endl;
		rpos::core::RectangleF rec = map.getMapArea();
		std::cout << "x: " << rec.x() << std::endl;
		std::cout << "y: " << rec.y() << std::endl;
		std::cout << "width: " << rec.width() << std::endl;
		std::cout << "height: " << rec.height() << std::endl;

	}			
				catch( rpos::robot_platforms::ConnectionFailException e )
				{
					std::cout << e.what() << std::endl;
				}
				catch( rpos::robot_platforms::RequestTimeOutException& e )
				{
					std::cout << e.what() << std::endl;
				}

	while(true)
	{
		try
		{
			rpos::core::RectangleF knownArea = sdp.getKnownArea(
				rpos::features::location_provider::MapTypeBitmap8Bit,
				rpos::features::location_provider::EXPLORERMAP
			);
			std::cout << "Know Area: " << std::endl;
			std::cout << "("  << knownArea.x()
					  << ", " << knownArea.y()
					  << ", " << knownArea.width()
					  << ", " << knownArea.height()
					  << ")"  << std::endl;
			rpos::features::location_provider::Map map = sdp.getMap(
				rpos::features::location_provider::MapTypeBitmap8Bit,
				knownArea,
				rpos::features::location_provider::EXPLORERMAP
			);

			rpos::features::system_resource::LaserScan laser_scan = sdp.getLaserScan();
			std::vector<rpos::core::LaserPoint> points = laser_scan.getLaserPoints();
			
			for( std::vector<rpos::core::LaserPoint>::const_iterator it=points.begin(); it!=points.end(); it++ )
			{
				std::cout << "distance: "
						  << it->distance()
						  << ", angle: "
						  << it->angle()
						  << ", valid: "
						  << ( it->valid() ? "true": "false" ) << std::endl;
			}

		}
				catch( rpos::robot_platforms::ConnectionFailException e )
				{
					std::cout << e.what() << std::endl;
					break;
				}
				catch ( rpos::robot_platforms::RequestTimeOutException& e )
				{
					std::cout << e.what() << std::endl;
				}
	}

	return 0;
}