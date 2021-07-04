#include <iostream>
#include <rpos/features/motion_planner.h>

int main(int argc,char**argv)
{
	rpos::features::MotionPlanner mp;

	/* methods */
	rpos::actions::MoveAction moveTo(
		const std::vector<rpos::core::Location>& locations, // vector
		bool appending,
		bool isMilestone
	)

	rpos::actions::MoveAction moveTo(
		const rpos::core::Location& location, // single
		bool appending,
		bool isMilestone
	)

	rpos::actions::MoveAction moveTo(
		const std::vector<rpos::core::Location>& locations, // vector locations
		const motion_planner::MoveOptions& options,
		float yaw
	)

	rpos::actions::MoveAction moveTo(
		const rpos::core::Location& location,  // single location
		const motion_planner::MoveOptions& options,
		float yaw
	)

	rpos::actions::MoveAction moveBy( const rpos::core::Direction& direction ); // make the robot move along with specified direction,No obstacle avoidance or path planning will be performed.

	rpos::actions::MoveAction moveBy(
		const rpos::core::Direction& direction,
		const motion_planner::MoveOptions& options
	)

	rpos::actions::MoveAction moveBy(
		float theta,
		const motion_planner::MoveOption& options
	)

	// Make the robot move with a turning angle theta
	rpos::actions::MoveAction rotateTo( const rpos::core::Rotation& orientation )

	rpos::actions::MoveAction rotate( const rpos::core::Rotation& rotation )

	rpos::actions::MoveAction rotate( 
		const rpos::core::Rotation& rotation,
		const motion_planner::MoveOptions& options
	)

	rpos::actions::MoveAction recoverLocalization(
		const core::RectangleF& area,
		const motion_planner::RecoverLocalizationOption& options
	)

	rpos::actions::VelocityControlMoveAction velocityControl()

	rpos::actions::MoveAction getCurrentAction()

	rpos::features::motion_planner::Path searchPath( const rpos::core::Location& )
	
	return 0;
}