# ROS2 Mobile Robotics Labs

## Purpose

This repository is a public ROS2 mobile robotics scaffold for organizing future learning labs around nodes, launch files, URDF/RViz, simulation workflows, and reusable integration patterns.

It supports the broader mobile-manipulation research portfolio without pretending that full robot simulation, autonomy, or research integration is already complete.

## Tested Environment

No end-to-end runnable lab environment is fully documented yet.

- Ubuntu: not fully documented yet
- ROS 2: not fully documented yet
- Build system: colcon target scaffold
- Language: future C++ / Python labs
- Simulation/hardware: not included yet

Target future environment is ROS2 Humble on Ubuntu 22.04, but this should be confirmed after the first real public-safe lab is added and tested.

## Current Runnable Artifact

There is currently no runnable ROS2 node or launch demo in this public repo.

The repository contains a ROS2 package scaffold and folders reserved for future nodes, launch files, documentation, results, and media.

## Build and Run

Expected build workflow for a future ROS2 workspace:

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
git clone https://github.com/WikiGenius/ros2-mobile-robotics-labs.git
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y
colcon build --packages-select ros2_mobile_robotics_labs
source install/setup.bash
```

No `ros2 run` or `ros2 launch` command is listed yet because no runnable node or launch demo is currently included.

## What This Demonstrates

This repo currently demonstrates:

- a clean public scaffold for ROS2 mobile robotics labs,
- public folder organization for nodes, launch files, docs, results, and media,
- how ROS2 support work relates to MoveIt2 grasping, visual estimation, control, and active scanning.

## Limitations

This repository is currently an early-stage public ROS2 scaffold. It does not yet include:

- a complete robot model,
- a full simulation world,
- real robot experiments,
- runnable ROS2 nodes,
- launch demos,
- full mobile manipulation integration,
- state estimation,
- benchmark comparisons,
- paper-level results.

## Planned Additions

- Public-safe ROS2 node.
- Launch file for a real public-safe lab.
- URDF/RViz lab.
- Simulation world.
- Mobile robot controller integration.
- Active-scanning bridge demo.

## Rights and Reuse

This repository is shared as a public academic portfolio/scaffold. Unless a separate open-source license is explicitly added, all rights are reserved by the author.

## Related Organization

See [`docs/related-repositories.md`](docs/related-repositories.md) for how this ROS2 lab fits into the public portfolio.
