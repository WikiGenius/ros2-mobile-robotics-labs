# ROS2 Mobile Robotics Labs

Public ROS2 Humble learning lab for mobile robotics systems, including nodes, launch files, URDF/RViz, simulation workflows, and reusable integration patterns.

## Purpose

This repository exists to organize public-safe ROS2 mobile robotics labs that support the broader mobile-manipulation research portfolio. It should show practical ROS2 competence without pretending that full robot simulation, autonomy, or research integration is already complete.

The repository currently includes a minimal C++ `cmd_vel_demo` publisher and launch file as the first runnable lab.

## Relation to My PhD Direction

My research direction needs reliable ROS2 systems for mobile manipulation, active scanning, state estimation, and control. This repo supports that by collecting reusable patterns for:

- ROS2 nodes and topics,
- launch files and parameters,
- mobile robot command interfaces,
- future URDF/RViz/simulation labs,
- integration with MoveIt2 and visual state-estimation repos,
- future active-scanning simulation workflows.

Related public repos:

| Related repo | Relationship |
|---|---|
| [`hello_world_ros2_edx`](https://github.com/WikiGenius/hello_world_ros2_edx) | Earlier ROS2 learning/migration evidence; support repo, not pinned. |
| [`ros2-moveit-grasping-demo`](https://github.com/WikiGenius/ros2-moveit-grasping-demo) | Perception-guided manipulation execution layer using ROS2 and MoveIt2. |
| [`line-scan-mobile-manipulator-demo`](https://github.com/WikiGenius/line-scan-mobile-manipulator-demo) | Main public active-scanning scaffold that will need ROS2 launch/simulation patterns. |
| [`orb_slam_demo`](https://github.com/WikiGenius/orb_slam_demo) | Visual state-estimation scaffold that can share ROS2 integration patterns. |
| [`robotics-control-learning-labs`](https://github.com/WikiGenius/robotics-control-learning-labs) | Control foundation that can feed mobile robot and mobile manipulator examples. |

## Maturity Level

**Current status:** Public research scaffold / early-stage organization repo with one runnable ROS2 starter lab

This repository is currently intended to organize public-facing ROS2 learning structure and host simplified, non-confidential demos. It does not yet represent a complete mobile robot simulation stack or a validated autonomy pipeline.

### Implemented now

- [x] Repository structure
- [x] README and project organization
- [x] Minimal C++ ROS2 publisher
- [x] Launch file for the starter node
- [x] Lab note for the starter node
- [ ] URDF/RViz lab
- [ ] Simulation world
- [ ] Mobile robot controller integration
- [ ] Active-scanning bridge demo
- [ ] Paper-supporting implementation

### Not included publicly

- Unpublished research algorithm
- Private paper draft
- Advisor/collaborator notes
- Real robot data
- Full simulation benchmark
- Confidential experiment results

## Current Contents

```text
src/       minimal C++ ROS2 starter node
launch/    launch file for the starter node
docs/      related-repository map and lab notes
results/   future logs/tables/outputs
media/     future screenshots/GIFs/videos
```

## What This Repo Demonstrates Now

This repo currently demonstrates:

- a minimal ROS2 C++ publisher pattern,
- launch-file structure,
- safe topic naming using `/cmd_vel_demo` instead of `/cmd_vel`,
- a public foundation for future mobile robotics labs.

The starter node publishes a toy velocity command for topic inspection. It is not a robot controller and should not be used to drive hardware.

## Planned Development Roadmap

- **Stage 0: repository scaffold** - organize README, package metadata, folders, docs, and public/private policy.
- **Stage 1: toy synthetic example** - provide minimal ROS2 node and launch file.
- **Stage 2: metric/logging pattern** - add topic graph screenshots or command logs.
- **Stage 3: baseline mobile robot lab** - add URDF/RViz and simulation basics.
- **Stage 4: ROS2/MoveIt integration** - connect mobile base concepts to manipulation workflows.
- **Stage 5: experiment logging and plots** - save public-safe logs/screenshots.
- **Stage 6: paper-supporting private implementation** - keep research-specific launch/data private until release.
- **Stage 7: post-publication public release** - expose sanitized demos after approval.

## Public / Private Boundary

Public here:

- simple ROS2 learning nodes,
- launch-file patterns,
- synthetic/simulated examples,
- screenshots and topic graphs,
- reusable setup notes.

Private elsewhere:

- unpublished planning/control algorithms,
- real lab data,
- advisor/collaborator notes,
- paper-specific launch files or logs,
- internal ablations.

## How to Run

Create or enter a ROS2 workspace:

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
git clone https://github.com/WikiGenius/ros2-mobile-robotics-labs.git
cd ~/ros2_ws
rosdep install --from-paths src --ignore-src -r -y
colcon build --packages-select ros2_mobile_robotics_labs
source install/setup.bash
```

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

## Expected Future Outputs

Future public artifacts may include:

- RViz screenshots,
- simulation GIFs,
- topic graph snapshots,
- launch logs,
- URDF/RViz notes,
- bridge notes to active scanning.

## Limitations

This repository is currently an early-stage public ROS2 scaffold. It does not yet include:

- a complete robot model,
- a full simulation world,
- real robot experiments,
- full mobile manipulation integration,
- state estimation,
- benchmark comparisons,
- paper-level results.

Examples target ROS2 Humble first, and robot-specific setup may need adaptation.

## Citation / Acknowledgment

Acknowledge ROS2, Gazebo/Ignition, RViz, robot model packages, course materials, or tutorials used in each lab. Third-party materials remain under their own licenses.

## Rights and Reuse

This repository is shared as a public academic portfolio/scaffold. Unless a separate open-source license is explicitly added, all rights are reserved by the author.

## Related Organization

See [`docs/related-repositories.md`](docs/related-repositories.md) for how this ROS2 lab fits into the public portfolio and [`docs/lab-01-minimal-cmd-vel.md`](docs/lab-01-minimal-cmd-vel.md) for the starter lab notes.
