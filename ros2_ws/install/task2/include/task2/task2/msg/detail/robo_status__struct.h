// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK2__MSG__DETAIL__ROBO_STATUS__STRUCT_H_
#define TASK2__MSG__DETAIL__ROBO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bot_name'
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RoboStatus in the package task2.
typedef struct task2__msg__RoboStatus
{
  rosidl_runtime_c__String bot_name;
  float battery_lvl;
  bool is_moving;
  int32_t error_code;
  rosidl_runtime_c__String data;
} task2__msg__RoboStatus;

// Struct for a sequence of task2__msg__RoboStatus.
typedef struct task2__msg__RoboStatus__Sequence
{
  task2__msg__RoboStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task2__msg__RoboStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK2__MSG__DETAIL__ROBO_STATUS__STRUCT_H_
