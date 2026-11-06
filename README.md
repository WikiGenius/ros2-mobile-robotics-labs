# ROS2 Mobile Robotics Labs

A navigation hub and package scaffold for ROS-based robot experiments. There is currently no runnable node or launch demo in this repository.

## Implemented projects

| Project | Stack | Purpose |
| --- | --- | --- |
| [MoveIt grasping demo](https://github.com/WikiGenius/ros2-moveit-grasping-demo) | ROS2 / MoveIt2 | Arm/gripper execution with Cartesian approach and retreat |
| [Husky image capture](https://github.com/WikiGenius/husky-gazebo-image-capture) | ROS2 Humble | Keyboard driving, image snapshots, and odometry logging |
| [Traffic-sign detection](https://github.com/WikiGenius/ros-husky-traffic-sign-detection) | ROS 1 / catkin | Legacy camera-stream perception integration |
| [ROS2 course exercises](https://github.com/WikiGenius/hello_world_ros2_edx) | ROS2 | Learning and migration exercises |

Use each project's own installation and run instructions. Their robot models, topics, dependencies, and tested environments differ.

## Research connection

These implementations support the observation and execution sides of [perception-aware motion planning](https://github.com/WikiGenius): collect measurements, maintain frame relationships, and execute planned motions.

The research direction is not limited to ROS, mobile robots, or a particular sensing modality. ROS-based projects provide one practical integration environment.

## Next lab

A future lab should include a runnable node, explicit dependencies, a launch workflow, and an observable result before it is described as an implemented demonstration. ROS2 Humble on Ubuntu 22.04 is the intended starting environment for this scaffold, not a verified end-to-end setup.

See the linked projects for current evidence and license terms. No project-wide open-source license is granted by this index.
