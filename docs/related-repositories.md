# Related projects

This repository is a navigation and lab scaffold. See the [main index](../README.md) for its current scope; it does not yet provide a runnable ROS2 lab.

| Project | Role |
| --- | --- |
| [Husky image capture](https://github.com/WikiGenius/husky-gazebo-image-capture) | ROS2 image and odometry collection in simulation |
| [MoveIt grasping](https://github.com/WikiGenius/ros2-moveit-grasping-demo) | Arm and gripper execution from a target pose, with external robot configuration and perception |
| [Traffic-sign detection](https://github.com/WikiGenius/ros-husky-traffic-sign-detection) | Earlier ROS 1 perception example |
| [Line-scan application scaffold](https://github.com/WikiGenius/line-scan-mobile-manipulator-demo) | Planned scanning and coverage application; no complete runnable demo |

Transforms, timestamps, sensor acquisition, and motion execution are the infrastructure connecting perception-aware planning to a robot. The research direction is open to different sensing modalities and platforms; each application needs its own observation model, calibration, and robot constraints.

These repositories are separate components and examples. Their presence does not imply that an end-to-end planning system has been integrated or validated.
