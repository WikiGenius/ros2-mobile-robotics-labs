cmake_minimum_required(VERSION 3.8)
project(ros2_mobile_robotics_labs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(minimal_cmd_vel_demo src/minimal_cmd_vel_demo.cpp)
ament_target_dependencies(minimal_cmd_vel_demo rclcpp geometry_msgs)

install(TARGETS
  minimal_cmd_vel_demo
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  docs
  results
  media
  DESTINATION share/${PROJECT_NAME}
  OPTIONAL
)

ament_package()
