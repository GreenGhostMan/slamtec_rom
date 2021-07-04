#include <iostream>
#include <rpos/features/motion_planner/feature.h>

int main(int argc,char**argv)
{
	rpos::features::motion_planner::MoveOptionFlag flag_;
	rpos::features::motion_planner::MoveOptions move_option;

	boost::optional<double> speed_ratio_ = 100;
	boost::optional<int> fail_retry_count_ = 6;

	move_option.flag = flag_;
	move_option.speed_ratio = speed_ratio_;
	move_option.fail_retry_count = fail_retry_count_;


	return 0;
}