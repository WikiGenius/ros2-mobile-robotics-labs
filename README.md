# ROS2 Mobile Robotics Labs

Public ROS2 Humble learning hub for organizing mobile robotics systems work, including nodes, launch files, URDF/RViz, simulation workflows, and reusable integration patterns.

## Purpose

This repository exists to organize public-safe ROS2 mobile robotics labs that support the broader mobile-manipulation research portfolio. It should show practical ROS2 direction and structure without pretending that full robot simulation, autonomy, or research integration is already complete.

It currently contains package scaffolding, folder organization, README documentation, and related-repository mapping. It does not currently contain a runnable node, launch demo, complete mobile robot simulation stack, or validated autonomy pipeline.

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

**Current status:** Public research organization repo / ROS2 mobile robotics scaffold

This repository is currently intended to organize public-facing ROS2 learning structure and connect mobile robotics work to the rest of the research portfolio.

### Implemented now

- [x] Repository structure
- [x] README and project organization
- [x] Related-repository map
- [x] ROS2 package metadata scaffold
- [ ] Public-safe ROS2 node
- [ ] Launch file for a real public-safe lab
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
src/       reserved for future public-safe ROS2 nodes
launch/    reserved for future public-safe launch files
docs/      related-repository map and lab notes
results/   reserved for future logs/tables/outputs
media/     reserved for future screenshots/GIFs/videos
```

## What This Repo Demonstrates Now

This repo currently demonstrates:

- a clean public scaffold for ROS2 mobile robotics labs,
- how ROS2 support work relates to MoveIt2 grasping, visual estimation, control, and active scanning,
- a place to add future launch/simulation patterns only when they are real and safe to publish.

## Planned Development Roadmap

- **Stage 0: repository scaffold** - organize README, package metadata, folders, docs, and public/private policy.
- **Stage 1: public-safe ROS2 lab** - add a minimal node or launch demo only when intentionally designed and reviewed.
- **Stage 2: metric/logging pattern** - add topic graph screenshots or command logs.
- **Stage 3: baseline mobile robot lab** - add URDF/RViz and simulation basics.
- **Stage 4: ROS2/MoveIt integration** - connect mobile base concepts to manipulation workflows.
- **Stage 5: experiment logging and plots** - save public-safe logs/screenshots.
- **Stage 6: paper-supporting private implementation** - keep research-specific launch/data private until release.
- **Stage 7: post-publication public release** - expose sanitized demos after approval.

## Public / Private Boundary

Public here:

- simple ROS2 learning notes,
- launch-file structure when real examples are added,
- synthetic/simulated examples after review,
- screenshots and topic graphs,
- reusable setup notes.

Private elsewhere:

- unpublished planning/control algorithms,
- real lab data,
- advisor/collaborator notes,
- paper-specific launch files or logs,
- internal ablations.

## How to Run

There is currently no runnable ROS2 node or launch demo in this public repo.

When a real public-safe lab is added, this section should include the exact workspace setup, `colcon build` command, and run/launch command.

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

See [`docs/related-repositories.md`](docs/related-repositories.md) for how this ROS2 lab fits into the public portfolio.
