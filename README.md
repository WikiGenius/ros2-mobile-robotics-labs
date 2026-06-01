# ROS2 Mobile Robotics Labs

## Overview
This repository is a public ROS 2 Humble learning lab focused on mobile robotics. It collects reproducible exercises for ROS 2 nodes, launch files, URDF, RViz, simulation workflows, and basic robot autonomy experiments.

The repository now includes a minimal C++ `cmd_vel_demo` publisher and launch file as the first runnable lab.

## Repository Role
This repo is the ROS2 systems foundation for the broader mobile-manipulation research portfolio. It should hold the clean learning labs and integration patterns that support the more research-specific demos.

| Related repo | Relationship |
|---|---|
| [`hello_world_ros2_edx`](https://github.com/WikiGenius/hello_world_ros2_edx) | Earlier ROS2 learning/migration evidence; keep as support, not pinned. |
| [`ros2-moveit-grasping-demo`](https://github.com/WikiGenius/ros2-moveit-grasping-demo) | Manipulation execution layer using ROS2 and MoveIt2. |
| [`line-scan-mobile-manipulator-demo`](https://github.com/WikiGenius/line-scan-mobile-manipulator-demo) | Main public active-scanning demo that will need ROS2 launch/simulation patterns. |
| [`orb_slam_demo`](https://github.com/WikiGenius/orb_slam_demo) | Visual state-estimation scaffold that can share ROS2 integration patterns. |
| [`robotics-control-learning-labs`](https://github.com/WikiGenius/robotics-control-learning-labs) | Control foundation that can feed mobile robot and mobile manipulator examples. |

## Research/Engineering Motivation
Mobile robotics requires the integration of software architecture, robot models, simulation, sensing, transforms, visualization, and control. ROS 2 provides the middleware for connecting those pieces, but learning it is easier when each concept is isolated in a clean lab.

This repository is designed to become a practical bridge between robotics theory and runnable ROS 2 workflows.

## Features
- Runnable minimal C++ ROS2 node publishing `geometry_msgs/msg/Twist` on `/cmd_vel_demo`.
- Launch file for the starter node.
- Planned examples for nodes, topics, services, actions, and parameters.
- Planned launch-file and RViz workflows.
- Planned URDF and robot-state-publisher examples.
- Planned simulation exercises and experiment logs.
- Public cross-links to mobile manipulation, active scanning, visual SLAM, and control support repos.

## Method
Each lab follows a reproducible pattern:

1. Introduce one robotics/ROS 2 concept.
2. Provide the minimal node, launch file, model, or simulation setup.
3. Show the expected command sequence.
4. Record observations, screenshots, and logs.
5. Connect the lab to a larger mobile robotics workflow.

Public labs stay simple and readable so they can be reused as learning references.

## Installation
Create or enter a ROS 2 workspace:

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
git clone https://github.com/WikiGenius/ros2-mobile-robotics-labs.git
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y
colcon build --packages-select ros2_mobile_robotics_labs
source install/setup.bash
```

## Run
Run the current starter node:

```bash
ros2 run ros2_mobile_robotics_labs minimal_cmd_vel_demo
```

Or launch it:

```bash
ros2 launch ros2_mobile_robotics_labs minimal_cmd_vel_demo.launch.py
```

Inspect the published topic:

```bash
ros2 topic echo /cmd_vel_demo
```

## Results
Results will be stored in `results/`, and screenshots/GIFs/videos in `media/`.

Current starter artifact:

- `/cmd_vel_demo` publishes a toy velocity command for ROS2 topic inspection.

Planned artifacts:

- RViz screenshots.
- Simulation GIFs.
- Topic graph snapshots.
- Lab-specific logs and notes.

## Limitations
- The current node publishes a toy command only and is not a robot controller.
- Examples target ROS 2 Humble first.
- Simulation environments and robot models may be simplified for learning purposes.
- Research-specific launch files or datasets stay in private repos until public release is appropriate.

## Roadmap
- [x] Add first minimal ROS2 node lab.
- [x] Add launch file for the starter lab.
- [ ] Add URDF/RViz lab.
- [ ] Add simulation workflow and logs.
- [ ] Add a bridge note to the active-scanning demo.
- [ ] Add report links or learning notes.

## Citation / Acknowledgment
Acknowledge ROS 2, Gazebo/Ignition, RViz, robot model packages, course materials, or tutorials used in each lab. Third-party materials remain under their own licenses.

## Related Organization
See [`docs/related-repositories.md`](docs/related-repositories.md) for how this ROS2 lab fits into the public portfolio and [`docs/lab-01-minimal-cmd-vel.md`](docs/lab-01-minimal-cmd-vel.md) for the starter lab notes.
