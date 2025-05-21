#include "rclcpp/rclcpp.hpp"
#include "training_interfaces/srv/value.hpp"

#include <memory>

void add(const std::shared_ptr<training_interfaces::srv::Value::Request> request,
          std::shared_ptr<training_interfaces::srv::Value::Response>      response)
{
  response->val = request->a + request->b;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %d" " b: %d",
                request->a, request->b);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%d]", (int)response->val);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("value_server");

  rclcpp::Service<training_interfaces::srv::Value>::SharedPtr service =
    node->create_service<training_interfaces::srv::Value>("value", &add);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}
