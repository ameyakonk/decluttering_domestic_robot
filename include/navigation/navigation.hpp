/**
 * @file navigation.hpp
 * @author Abhijit Mahalle (abhimah@umd.edu)
 * @brief 
 * @version 0.1s
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once

// ROS headers
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/utils.h>
#include <actionlib/client/simple_action_client.h>
#include <std_srvs/Empty.h>
#include <ros/ros.h>

// Std C++ headers
#include <vector>

class Navigation {
 public:
    explicit Navigation(ros::NodeHandle*);
    geometry_msgs::Point getNextCheckpoint();
    geometry_msgs::Point getBinLocation();
    void moveToNextCheckpoint();
    void moveNearObject(geometry_msgs::Pose);
    void turnAround();
};

