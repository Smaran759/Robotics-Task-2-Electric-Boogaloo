// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice
#include "task2/msg/detail/robo_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bot_name`
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
task2__msg__RoboStatus__init(task2__msg__RoboStatus * msg)
{
  if (!msg) {
    return false;
  }
  // bot_name
  if (!rosidl_runtime_c__String__init(&msg->bot_name)) {
    task2__msg__RoboStatus__fini(msg);
    return false;
  }
  // battery_lvl
  // is_moving
  // error_code
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    task2__msg__RoboStatus__fini(msg);
    return false;
  }
  return true;
}

void
task2__msg__RoboStatus__fini(task2__msg__RoboStatus * msg)
{
  if (!msg) {
    return;
  }
  // bot_name
  rosidl_runtime_c__String__fini(&msg->bot_name);
  // battery_lvl
  // is_moving
  // error_code
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
task2__msg__RoboStatus__are_equal(const task2__msg__RoboStatus * lhs, const task2__msg__RoboStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bot_name), &(rhs->bot_name)))
  {
    return false;
  }
  // battery_lvl
  if (lhs->battery_lvl != rhs->battery_lvl) {
    return false;
  }
  // is_moving
  if (lhs->is_moving != rhs->is_moving) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
task2__msg__RoboStatus__copy(
  const task2__msg__RoboStatus * input,
  task2__msg__RoboStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // bot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->bot_name), &(output->bot_name)))
  {
    return false;
  }
  // battery_lvl
  output->battery_lvl = input->battery_lvl;
  // is_moving
  output->is_moving = input->is_moving;
  // error_code
  output->error_code = input->error_code;
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

task2__msg__RoboStatus *
task2__msg__RoboStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task2__msg__RoboStatus * msg = (task2__msg__RoboStatus *)allocator.allocate(sizeof(task2__msg__RoboStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task2__msg__RoboStatus));
  bool success = task2__msg__RoboStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task2__msg__RoboStatus__destroy(task2__msg__RoboStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task2__msg__RoboStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task2__msg__RoboStatus__Sequence__init(task2__msg__RoboStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task2__msg__RoboStatus * data = NULL;

  if (size) {
    data = (task2__msg__RoboStatus *)allocator.zero_allocate(size, sizeof(task2__msg__RoboStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task2__msg__RoboStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task2__msg__RoboStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task2__msg__RoboStatus__Sequence__fini(task2__msg__RoboStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task2__msg__RoboStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task2__msg__RoboStatus__Sequence *
task2__msg__RoboStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task2__msg__RoboStatus__Sequence * array = (task2__msg__RoboStatus__Sequence *)allocator.allocate(sizeof(task2__msg__RoboStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task2__msg__RoboStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task2__msg__RoboStatus__Sequence__destroy(task2__msg__RoboStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task2__msg__RoboStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task2__msg__RoboStatus__Sequence__are_equal(const task2__msg__RoboStatus__Sequence * lhs, const task2__msg__RoboStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task2__msg__RoboStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task2__msg__RoboStatus__Sequence__copy(
  const task2__msg__RoboStatus__Sequence * input,
  task2__msg__RoboStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task2__msg__RoboStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task2__msg__RoboStatus * data =
      (task2__msg__RoboStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task2__msg__RoboStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task2__msg__RoboStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task2__msg__RoboStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
