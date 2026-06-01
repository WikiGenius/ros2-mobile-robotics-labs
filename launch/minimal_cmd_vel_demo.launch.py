from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="ros2_mobile_robotics_labs",
                executable="minimal_cmd_vel_demo",
                name="minimal_cmd_vel_demo",
                output="screen",
                parameters=[{"linear_speed": 0.10, "angular_speed": 0.20}],
            )
        ]
    )
