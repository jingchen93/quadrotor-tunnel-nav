// obstacle_avoidance.hpp
// 161230
// this is a component for obstacle avoidance
// 

#ifndef _OBSTACLE_AVOIDANCE_HPP
#define _OBSTACLE_AVOIDANCE_HPP

#include "layer_base.hpp"

///////////////////////////////////////////////////////////////
// Constants

#define DIST_OBS 0.5
#define VEL_OBS 0.5

#define DIST_OFF_ALT 0.5
#define VEL_ALT 0.5

#define DIST_RATE_TURN 1.1
#define VEL_TURN 1.0

#define DIST_RATE_ADJL 0.9
#define DIST_RATE_ADJR 1.1

#define DIST_MAX 10.0
#define DIST_OFF 1.0
#define VEL_MIDDLE 0.5

#define VEL_STRAIGHT 0.8
#define VEL_FIND 1.0


// ============================================================================================
// Obstacle Avoidance Layer class
// it contains everything necessary for control
// ============================================================================================
class Obs_Avoid: public LAYER_BASE
{
public:
  Obs_Avoid();
  ~Obs_Avoid();

private:
  void command();
  void stop();
};

#endif // _OBSTACLE_AVOIDANCE_HPP
