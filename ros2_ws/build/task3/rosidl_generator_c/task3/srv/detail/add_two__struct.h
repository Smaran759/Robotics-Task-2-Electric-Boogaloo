// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task3:srv/AddTwo.idl
// generated code does not contain a copyright notice

#ifndef TASK3__SRV__DETAIL__ADD_TWO__STRUCT_H_
#define TASK3__SRV__DETAIL__ADD_TWO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwo in the package task3.
typedef struct task3__srv__AddTwo_Request
{
  int64_t a;
  int64_t b;
} task3__srv__AddTwo_Request;

// Struct for a sequence of task3__srv__AddTwo_Request.
typedef struct task3__srv__AddTwo_Request__Sequence
{
  task3__srv__AddTwo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task3__srv__AddTwo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwo in the package task3.
typedef struct task3__srv__AddTwo_Response
{
  int64_t sum;
} task3__srv__AddTwo_Response;

// Struct for a sequence of task3__srv__AddTwo_Response.
typedef struct task3__srv__AddTwo_Response__Sequence
{
  task3__srv__AddTwo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task3__srv__AddTwo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK3__SRV__DETAIL__ADD_TWO__STRUCT_H_
