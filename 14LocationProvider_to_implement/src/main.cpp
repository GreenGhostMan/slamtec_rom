#include <iostream>
#include <rpos/features/location_provider.h>

int main(int argc, char** argv)
{
	rpos::features::LocationProvider lp;

	/* Methods */
	std::vector<rpos::features::location_provider::MapType> get_available_maps = lp.getAvailableMaps();
	/*
	rpos::features::location_provider::Map getMap( 
		rpos::features::location_provider::MapType,
		rpos::core::RectangleF,
		rpos::features::location_provider:;MapKind 
		);
	*/

	/*
	bool setMap(
		const rpos::features::location_provider::Map&,
		rpos::features::location_provider::MapType,
		rpos::features::location_provider::MapKind
		);
	*/

	/* 
	bool setMapAndPose (
		const core::Pose& pose;
		const location_provider::Map& map,
		const location_provider::MapType& type,
		const location_provider::MapKind& kind,
		bool partially
	)
	*/

	/* 
	rpos::core::RectangleF getKnownArea(
		rpos::features::location_provider::MapType,
		rpos::features::location_provider::MapKind
	)
	*/

	// bool clearMap();
	// bool clearMap(location_provider::MapKind kind)
	// rpos::core::Location getLocation();
	// rpos::core::Pose getPose();
	// bool setPose(const rpos::core::Pose&)
	// bool getMapLocation()
	// bool setMapLocation(bool)
	// bool getMapUpdate( rpos::features::location_provider::MapKind kind = rpos::features::location_provider::EXPLORER); )

	/*
	bool setMapUpdate(
		bool update,
		rpos::features::location_provider::MapKind kind = rpos::features::location_provider::EXPLORER
	);
	*/

	// int getLocalizationQuality()
	// bool getHomePose( rpos::core::Pose )
	// bool setHomePose( rpos::core::Pose )
	// rpos::feature::location_providerPointPDF getAuxLocation()
	// rpos::feature::location_provider::AuxLocationStatus getAuxLocalizationStatus( location_provider::AuxLocalizationSource source );
	
	return 0;
}