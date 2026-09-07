// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK2__MSG__DETAIL__ROBO_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TASK2__MSG__DETAIL__ROBO_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "task2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "task2/msg/detail/robo_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace task2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task2
cdr_serialize(
  const task2::msg::RoboStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  task2::msg::RoboStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task2
get_serialized_size(
  const task2::msg::RoboStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task2
max_serialized_size_RoboStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace task2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, task2, msg, RoboStatus)();

#ifdef __cplusplus
}
#endif

#endif  // TASK2__MSG__DETAIL__ROBO_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
