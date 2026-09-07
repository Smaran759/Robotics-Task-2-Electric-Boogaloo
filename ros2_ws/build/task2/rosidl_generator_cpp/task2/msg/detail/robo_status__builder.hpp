// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK2__MSG__DETAIL__ROBO_STATUS__BUILDER_HPP_
#define TASK2__MSG__DETAIL__ROBO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task2/msg/detail/robo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task2
{

namespace msg
{

namespace builder
{

class Init_RoboStatus_data
{
public:
  explicit Init_RoboStatus_data(::task2::msg::RoboStatus & msg)
  : msg_(msg)
  {}
  ::task2::msg::RoboStatus data(::task2::msg::RoboStatus::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task2::msg::RoboStatus msg_;
};

class Init_RoboStatus_error_code
{
public:
  explicit Init_RoboStatus_error_code(::task2::msg::RoboStatus & msg)
  : msg_(msg)
  {}
  Init_RoboStatus_data error_code(::task2::msg::RoboStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_RoboStatus_data(msg_);
  }

private:
  ::task2::msg::RoboStatus msg_;
};

class Init_RoboStatus_is_moving
{
public:
  explicit Init_RoboStatus_is_moving(::task2::msg::RoboStatus & msg)
  : msg_(msg)
  {}
  Init_RoboStatus_error_code is_moving(::task2::msg::RoboStatus::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_RoboStatus_error_code(msg_);
  }

private:
  ::task2::msg::RoboStatus msg_;
};

class Init_RoboStatus_battery_lvl
{
public:
  explicit Init_RoboStatus_battery_lvl(::task2::msg::RoboStatus & msg)
  : msg_(msg)
  {}
  Init_RoboStatus_is_moving battery_lvl(::task2::msg::RoboStatus::_battery_lvl_type arg)
  {
    msg_.battery_lvl = std::move(arg);
    return Init_RoboStatus_is_moving(msg_);
  }

private:
  ::task2::msg::RoboStatus msg_;
};

class Init_RoboStatus_bot_name
{
public:
  Init_RoboStatus_bot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoboStatus_battery_lvl bot_name(::task2::msg::RoboStatus::_bot_name_type arg)
  {
    msg_.bot_name = std::move(arg);
    return Init_RoboStatus_battery_lvl(msg_);
  }

private:
  ::task2::msg::RoboStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task2::msg::RoboStatus>()
{
  return task2::msg::builder::Init_RoboStatus_bot_name();
}

}  // namespace task2

#endif  // TASK2__MSG__DETAIL__ROBO_STATUS__BUILDER_HPP_
