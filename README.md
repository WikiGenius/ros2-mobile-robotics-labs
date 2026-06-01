# ROS2 Mobile Robotics Labs

## Overview
This repository is a public scaffold for ROS 2 Humble learning labs focused on mobile robotics. It is intended to collect reproducible exercises for ROS 2 nodes, launch files, URDF, RViz, simulation workflows, and basic robot autonomy experiments.

The current repository contains the initial public structure. Labs and runnable examples will be added incrementally.

## Research/Engineering Motivation
Mobile robotics requires the integration of software architecture, robot models, simulation, sensing, transforms, visualization, and control. ROS 2 provides the middleware for connecting those pieces, but learning it is easier when each concept is isolated in a clean lab.

This repository is designed to become a practical bridge between robotics theory and runnable ROS 2 workflows.

## Features
- ROS 2 package scaffold for mobile robotics labs.
- Planned examples for nodes, topics, services, actions, and parameters.
- Planned launch-file and RViz workflows.
- Planned URDF and robot-state-publisher examples.
- Planned simulation exercises and experiment logs.

## Method
Each lab will follow a reproducible pattern:

1. Introduce one robotics/ROS 2 concept.
2. Provide the minimal node, launch file, model, or simulation setup.
3. Show the expected command sequence.
4. Record observations, screenshots, and logs.
5. Connect the lab to a larger mobile robotics workflow.

Public labs will stay simple and readable so they can be reused as learning references.

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
Planned run pattern after lab launch files are added:

```bash
ros2 launch ros2_mobile_robotics_labs <lab_name>.launch.py
```

Until runnable labs are added, this repository acts as a structured public outline for the ROS 2 mobile robotics lab series.

## Results
Results will be stored in `results/`, and screenshots/GIFs/videos in `media/`.

Planned artifacts:

- RViz screenshots.
- Simulation GIFs.
- Topic graph snapshots.
- Lab-specific logs and notes.

## Limitations
- The repository is currently a scaffold and does not yet include full runnable labs.
- Examples will target ROS 2 Humble first.
- Simulation environments and robot models may be simplified for learning purposes.

## Roadmap
- [ ] Add first ROS 2 node lab.
- [ ] Add launch-file lab.
- [ ] Add URDF/RViz lab.
- [ ] Add simulation workflow and logs.
- [ ] Add report links or learning notes.

## Citation / Acknowledgment
Acknowledge ROS 2, Gazebo/Ignition, RViz, robot model packages, course materials, or tutorials used in each lab. Third-party materials remain under their own licenses.
