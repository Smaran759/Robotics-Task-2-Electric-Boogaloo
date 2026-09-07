// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK2__MSG__DETAIL__ROBO_STATUS__TRAITS_HPP_
#define TASK2__MSG__DETAIL__ROBO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task2/msg/detail/robo_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoboStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: bot_name
  {
    out << "bot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bot_name, out);
    out << ", ";
  }

  // member: battery_lvl
  {
    out << "battery_lvl: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_lvl, out);
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoboStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bot_name, out);
    out << "\n";
  }

  // member: battery_lvl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_lvl: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_lvl, out);
    out << "\n";
  }

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoboStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace task2

namespace rosidl_generator_traits
{

[[deprecated("use task2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task2::msg::RoboStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  task2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task2::msg::to_yaml() instead")]]
inline std::string to_yaml(const task2::msg::RoboStatus & msg)
{
  return task2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<task2::msg::RoboStatus>()
{
  return "task2::msg::RoboStatus";
}

template<>
inline const char * name<task2::msg::RoboStatus>()
{
  return "task2/msg/RoboStatus";
}

template<>
struct has_fixed_size<task2::msg::RoboStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task2::msg::RoboStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task2::msg::RoboStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TASK2__MSG__DETAIL__ROBO_STATUS__TRAITS_HPP_
