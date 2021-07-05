#include <iostream>
#include <rpos/features/location_provider/map.h>

int main(int argc,char**argv)
{
	rpos::features::location_provider::Map map1;

	/* Methods */
	rpos::core::RectangleF& getMapArea() const;
	rpos::core::Vector2f& getMapPosition() const;
	rpos::core::Vector2i& getMapDimension() const;

	rpos::core::Vector2i& getMapDimension() const;
	rpos::core::Vector2f& getMapResolution() const;

	rpos::system::types::timestamp_t getMapTimestamp();
	std::vector<_u8>& getMapData() const;
	Maptype getMapType() const;

	virtual bool readFromStream( rpos::system::io::IStream& &in); // read map data from the specified input stream
	virtual bool writeToStream(rpos::system::io::IStream& &out); // write the map data from the specified output stream

	template<class MapT> MapT cast(); // Case the map object to it's sub class type



	return 0;

}