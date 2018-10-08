/****************************************************
 * Purpose : Hash defined constatnts for sub-system, covers
 *  1. Path point parameters
 *  2. Waypoints interpolation 
 *  3. Trajectory specific parameters
 *  4. Speed limits sonstatnts
 *  5. Cost specific parameters
 *  6. Sigma Values 
 *  7. Jerk limits
 * *************************************************/

#ifndef HASHDEF
#define HASHDEF

#define VEHICLE_RADIUS 1.25                // meters
#define FOLLOW_DISTANCE 8.0                // distance to keep behind leading cars
#define PREVIOUS_PATH_POINTS_TO_KEEP 25    // Previous path points
#define NUM_PATH_POINTS 50                 // Number of path points
#define PATH_DT 0.02                       // seconds
#define TRACK_LENGTH 6945.554              // meters

// number of waypoints to use for interpolation
#define NUM_WAYPOINTS_BEHIND 15            // Number of waypoint behind - 5
#define NUM_WAYPOINTS_AHEAD  15             // Number of waypoint ahead - 5

// for trajectory generation/evaluation and non-ego car predictions
#define N_SAMPLES 20
#define DT 0.20                           // seconds

// Speed parameters
#define SPEED_LIMIT    20.5                        // m/s maximum 21.5
#define VELOCITY_INCREMENT_LIMIT 0.127             // .125 

// cost function weights
#define COLLISION_COST_WEIGHT 99999
#define BUFFER_COST_WEIGHT 10
#define IN_LANE_BUFFER_COST_WEIGHT 1000
#define EFFICIENCY_COST_WEIGHT 10000
#define NOT_MIDDLE_LANE_COST_WEIGHT 100

// DEPRECATED CONSTANTS
#define NUM_RANDOM_TRAJ_TO_GEN 4        // the number of perturbed trajectories to generate (for each perturbed duration)
#define NUM_TIMESTEPS_TO_PERTURB 2      // the number of timesteps, +/- target time, to perturb trajectories

// sigma values for perturbing targets
#define SIGMA_S 10.0                     // s
#define SIGMA_S_DOT 3.0                 // s_dot
#define SIGMA_S_DDOT 0.1                // s
#define SIGMA_D 0                       // d
#define SIGMA_D_DOT 0                   // d_dot
#define SIGMA_D_DDOT 0                  // d_double_dot
#define SIGMA_T 0.05

#define MAX_INSTANTANEOUS_JERK  10      // m/s/s/s
#define MAX_INSTANTANEOUS_ACCEL 10      // m/s/s

#define EXPECTED_JERK_IN_ONE_SEC 1.8      // m/s/s - 2
#define EXPECTED_ACC_IN_ONE_SEC  .8      // m/s - 1

#define PERCENT_V_DIFF_TO_MAKE_UP 0.3   // the percent difference between current velocity and 
                                        // target velocity to allow ego car to make up in a single trajectory ( .5 ) 

#endif
