// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "task2/msg/detail/robo_status__rosidl_typesupport_introspection_c.h"
#include "task2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "task2/msg/detail/robo_status__functions.h"
#include "task2/msg/detail/robo_status__struct.h"


// Include directives for member types
// Member `bot_name`
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  task2__msg__RoboStatus__init(message_memory);
}

void task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_fini_function(void * message_memory)
{
  task2__msg__RoboStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_member_array[5] = {
  {
    "bot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task2__msg__RoboStatus, bot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_lvl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task2__msg__RoboStatus, battery_lvl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_moving",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task2__msg__RoboStatus, is_moving),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task2__msg__RoboStatus, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task2__msg__RoboStatus, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_members = {
  "task2__msg",  // message namespace
  "RoboStatus",  // message name
  5,  // number of fields
  sizeof(task2__msg__RoboStatus),
  task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_member_array,  // message members
  task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_type_support_handle = {
  0,
  &task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task2, msg, RoboStatus)() {
  if (!task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_type_support_handle.typesupport_identifier) {
    task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &task2__msg__RoboStatus__rosidl_typesupport_introspection_c__RoboStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
