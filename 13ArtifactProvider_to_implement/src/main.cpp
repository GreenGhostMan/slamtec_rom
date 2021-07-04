#include <iostream>
#include <rpos/features/artifact_provider.h>

int main(int argc,char**argv)
{
	rpos::core::Feature feature;  // parent class
	//rpos::features::ArtifactProvider artifact_provider( boost::shared_ptr<rpos::detail::ArtifactProviderImpl> impl );  // class inherit from rpos::core::Feature
	rpos::features::ArtifactProvider artifact_provider;
	rpos::features::artifact_provider::ArtifactUsage artifact_usage;  //enum

	artifact_provider.addLine(rpos::features::Artifact_provider::ArtifactUsage usage, rpos::core::Line line1);
	artifact_provider.addLine(rpos::features::Artifact_provider::ArtifactUsage usage, std::vector<rpos::core::Line> lines);
	std::vector<rpos::core::Line> get_lines = artifact_provider.getLines();

	/* methods */
	bool clear_lines_ = artifact_provider.clearLines( rpos::features::artifact_provider::ArtifactUsage usage );
	bool move_line_   = artifact_provider.moveLine( rpos::features::artifact_provider::ArtifactUsage usage, rpos::core::Line line );
	bool move_line_   = artifact_provider.moveLine( rpos::features::artifact_provider::ArtifactUsage usage, std::vector<rpos::core::Line> lines );

	std::vector<rpos::core::Line> walls_ = artifact_provider.getWalls();
	bool addwall_ = artifact_provider.addWall(rpos::core::Line line);
	bool addwalls_= artifact_provider.addWalls(std::vector<rpos::core::Line> line);
	bool clearWallById_ = artifact_provider.clearWallById(rpos::core::SegmentId segmentid);
	bool clearWalls = artifact_provider.clearWalls();




	return 0;
}