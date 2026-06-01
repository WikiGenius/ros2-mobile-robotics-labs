# Related Repositories

This page explains how the ROS2 mobile robotics labs support the rest of the public research portfolio.

## Public ROS2 Family

| Repo | Role | Relationship |
|---|---|---|
| [`ros2-mobile-robotics-labs`](https://github.com/WikiGenius/ros2-mobile-robotics-labs) | ROS2 systems foundation | Clean labs for nodes, launch files, URDF, RViz, simulation, and mobile robotics basics. |
| [`hello_world_ros2_edx`](https://github.com/WikiGenius/hello_world_ros2_edx) | Earlier learning evidence | Useful history/migration reference, but not a main pinned repo. |
| [`ros2-moveit-grasping-demo`](https://github.com/WikiGenius/ros2-moveit-grasping-demo) | Manipulation execution | Uses ROS2/MoveIt2 patterns for Cartesian motion, gripper control, and grasping. |
| [`line-scan-mobile-manipulator-demo`](https://github.com/WikiGenius/line-scan-mobile-manipulator-demo) | Main active-scanning demo | Future launch/simulation patterns can reuse ROS2 lab structure. |
| [`orb_slam_demo`](https://github.com/WikiGenius/orb_slam_demo) | Visual state estimation | ROS2 scaffold for visual SLAM-style integration. |

## What Belongs Here

Keep this repo focused on reusable ROS2 patterns:

- minimal nodes,
- launch files,
- parameters,
- URDF/RViz examples,
- Gazebo/Ignition simulation notes,
- clean command sequences,
- small screenshots and topic graphs.

Research-specific algorithms, datasets, and private experiments should stay in private repos until a public distilled demo is ready.

## Connection to Main Research

The active scanning project will need robust ROS2 wiring for:

- mobile base control,
- manipulator control,
- sensor frames and transforms,
- RViz visualization,
- simulation launch files,
- logging and replay workflows.

Those reusable building blocks belong here before they are specialized in the main line-scan demo.
