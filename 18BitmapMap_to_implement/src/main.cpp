#include <iostream>
#include <rpos/features/location_provider/map.h>

int main(int argc, char**argv)
{
	rpos::features::location_provider::BitmapMap bmp_map;

	/* Methods */
	static BitmapMap createMap();
	BitmapMapPixelFormat getMapFormat();
	void clear();

	void setMapData(
		float real_x,
		float real_y,
		int dimension_x,
		int dimension_y,
		float resolution,
		const std::vector<rpos::system::types::_u8>& data,
		rpos::system::types::_u64 timestamp=0
	)

	std::vector<rpos::system::types::_u8>& getMapData() const
	return 0;
}