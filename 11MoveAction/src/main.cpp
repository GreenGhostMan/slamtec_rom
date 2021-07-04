#include <iostream>
#include <rpos/features/motion_planner/move_action.h>

int main(int argc, char** argv)
{
	/* An object of MoveAction represents a specific movement action. The current planned path, key points list and progress of motion */

	/* Retrieves the remaining path to follow of the current task */
	rpos::features::motion_planner::Path getRemainingPath();

	/* Retrieves the remaining keypoints( milestones ) the robot is required to reach to. */
	rpos::features::motion_planner::Path getRemainingMilestones();

	/* Methods inherit from rpos::core::Action */
	// rpos::core::Action is parent class
	/*
	ActionStatus getStatus()
	std::string Action::getReason()
	void cancel()
	ActionStatus waitUntilDone()
	template ActionT cast()
	*/ 
	return 0;
}