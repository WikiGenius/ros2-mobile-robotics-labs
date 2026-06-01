#include <chrono>
#include <functional>
#include <memory>

#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class MinimalCmdVelDemo : public rclcpp::Node
{
public:
  MinimalCmdVelDemo() : Node("minimal_cmd_vel_demo")
  {
    const double linear_speed = this->declare_parameter("linear_speed", 0.10);
    const double angular_speed = this->declare_parameter("angular_speed", 0.20);
    linear_speed_ = linear_speed;
    angular_speed_ = angular_speed;

    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel_demo", 10);
    timer_ = this->create_wall_timer(500ms, std::bind(&MinimalCmdVelDemo::publish_command, this));

    RCLCPP_INFO(this->get_logger(), "Publishing toy cmd_vel commands on /cmd_vel_demo");
  }

private:
  void publish_command()
  {
    geometry_msgs::msg::Twist msg;
    msg.linear.x = linear_speed_;
    msg.angular.z = angular_speed_;
    publisher_->publish(msg);

    if (tick_count_ % 10 == 0) {
      RCLCPP_INFO(
        this->get_logger(),
        "cmd_vel_demo linear.x=%.3f angular.z=%.3f",
        msg.linear.x,
        msg.angular.z);
    }
    ++tick_count_;
  }

  double linear_speed_{0.10};
  double angular_speed_{0.20};
  int tick_count_{0};
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalCmdVelDemo>());
  rclcpp::shutdown();
  return 0;
}
