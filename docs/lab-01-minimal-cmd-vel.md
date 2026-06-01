# Lab 01: Minimal cmd_vel Publisher

This starter lab gives the repository one small ROS2 node that can be built and launched.

## Purpose

The node publishes a toy `geometry_msgs/msg/Twist` command on:

```text
/cmd_vel_demo
```

It is not intended to drive a real robot. It is a minimal ROS2 package pattern for:

- C++ node structure,
- publisher creation,
- parameters,
- launch files,
- `colcon build` workflow.

## Build

From a ROS2 workspace:

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

```bash
ros2 run ros2_mobile_robotics_labs minimal_cmd_vel_demo
```

Or launch it:

```bash
ros2 launch ros2_mobile_robotics_labs minimal_cmd_vel_demo.launch.py
```

Inspect the topic:

```bash
ros2 topic echo /cmd_vel_demo
```

## Limitations

- Publishes a toy command only.
- No robot model, simulation, controller, or safety layer.
- Uses `/cmd_vel_demo` instead of `/cmd_vel` to avoid accidental robot motion.
- Intended as a public learning seed for future labs.
