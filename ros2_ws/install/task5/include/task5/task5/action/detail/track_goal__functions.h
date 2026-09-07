// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from task5:action/TrackGoal.idl
// generated code does not contain a copyright notice

#ifndef TASK5__ACTION__DETAIL__TRACK_GOAL__FUNCTIONS_H_
#define TASK5__ACTION__DETAIL__TRACK_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "task5/msg/rosidl_generator_c__visibility_control.h"

#include "task5/action/detail/track_goal__struct.h"

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_Goal
 * )) before or use
 * task5__action__TrackGoal_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Goal__init(task5__action__TrackGoal_Goal * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Goal__fini(task5__action__TrackGoal_Goal * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_Goal *
task5__action__TrackGoal_Goal__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Goal__destroy(task5__action__TrackGoal_Goal * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Goal__are_equal(const task5__action__TrackGoal_Goal * lhs, const task5__action__TrackGoal_Goal * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Goal__copy(
  const task5__action__TrackGoal_Goal * input,
  task5__action__TrackGoal_Goal * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Goal__Sequence__init(task5__action__TrackGoal_Goal__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Goal__Sequence__fini(task5__action__TrackGoal_Goal__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_Goal__Sequence *
task5__action__TrackGoal_Goal__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Goal__Sequence__destroy(task5__action__TrackGoal_Goal__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Goal__Sequence__are_equal(const task5__action__TrackGoal_Goal__Sequence * lhs, const task5__action__TrackGoal_Goal__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Goal__Sequence__copy(
  const task5__action__TrackGoal_Goal__Sequence * input,
  task5__action__TrackGoal_Goal__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_Result
 * )) before or use
 * task5__action__TrackGoal_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Result__init(task5__action__TrackGoal_Result * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Result__fini(task5__action__TrackGoal_Result * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_Result *
task5__action__TrackGoal_Result__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Result__destroy(task5__action__TrackGoal_Result * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Result__are_equal(const task5__action__TrackGoal_Result * lhs, const task5__action__TrackGoal_Result * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Result__copy(
  const task5__action__TrackGoal_Result * input,
  task5__action__TrackGoal_Result * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Result__Sequence__init(task5__action__TrackGoal_Result__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Result__Sequence__fini(task5__action__TrackGoal_Result__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_Result__Sequence *
task5__action__TrackGoal_Result__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Result__Sequence__destroy(task5__action__TrackGoal_Result__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Result__Sequence__are_equal(const task5__action__TrackGoal_Result__Sequence * lhs, const task5__action__TrackGoal_Result__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Result__Sequence__copy(
  const task5__action__TrackGoal_Result__Sequence * input,
  task5__action__TrackGoal_Result__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_Feedback
 * )) before or use
 * task5__action__TrackGoal_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Feedback__init(task5__action__TrackGoal_Feedback * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Feedback__fini(task5__action__TrackGoal_Feedback * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_Feedback *
task5__action__TrackGoal_Feedback__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Feedback__destroy(task5__action__TrackGoal_Feedback * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Feedback__are_equal(const task5__action__TrackGoal_Feedback * lhs, const task5__action__TrackGoal_Feedback * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Feedback__copy(
  const task5__action__TrackGoal_Feedback * input,
  task5__action__TrackGoal_Feedback * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Feedback__Sequence__init(task5__action__TrackGoal_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Feedback__Sequence__fini(task5__action__TrackGoal_Feedback__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_Feedback__Sequence *
task5__action__TrackGoal_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_Feedback__Sequence__destroy(task5__action__TrackGoal_Feedback__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Feedback__Sequence__are_equal(const task5__action__TrackGoal_Feedback__Sequence * lhs, const task5__action__TrackGoal_Feedback__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_Feedback__Sequence__copy(
  const task5__action__TrackGoal_Feedback__Sequence * input,
  task5__action__TrackGoal_Feedback__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_SendGoal_Request
 * )) before or use
 * task5__action__TrackGoal_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Request__init(task5__action__TrackGoal_SendGoal_Request * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Request__fini(task5__action__TrackGoal_SendGoal_Request * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_SendGoal_Request *
task5__action__TrackGoal_SendGoal_Request__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Request__destroy(task5__action__TrackGoal_SendGoal_Request * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Request__are_equal(const task5__action__TrackGoal_SendGoal_Request * lhs, const task5__action__TrackGoal_SendGoal_Request * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Request__copy(
  const task5__action__TrackGoal_SendGoal_Request * input,
  task5__action__TrackGoal_SendGoal_Request * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Request__Sequence__init(task5__action__TrackGoal_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Request__Sequence__fini(task5__action__TrackGoal_SendGoal_Request__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_SendGoal_Request__Sequence *
task5__action__TrackGoal_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Request__Sequence__destroy(task5__action__TrackGoal_SendGoal_Request__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Request__Sequence__are_equal(const task5__action__TrackGoal_SendGoal_Request__Sequence * lhs, const task5__action__TrackGoal_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Request__Sequence__copy(
  const task5__action__TrackGoal_SendGoal_Request__Sequence * input,
  task5__action__TrackGoal_SendGoal_Request__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_SendGoal_Response
 * )) before or use
 * task5__action__TrackGoal_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Response__init(task5__action__TrackGoal_SendGoal_Response * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Response__fini(task5__action__TrackGoal_SendGoal_Response * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_SendGoal_Response *
task5__action__TrackGoal_SendGoal_Response__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Response__destroy(task5__action__TrackGoal_SendGoal_Response * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Response__are_equal(const task5__action__TrackGoal_SendGoal_Response * lhs, const task5__action__TrackGoal_SendGoal_Response * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Response__copy(
  const task5__action__TrackGoal_SendGoal_Response * input,
  task5__action__TrackGoal_SendGoal_Response * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Response__Sequence__init(task5__action__TrackGoal_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Response__Sequence__fini(task5__action__TrackGoal_SendGoal_Response__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_SendGoal_Response__Sequence *
task5__action__TrackGoal_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_SendGoal_Response__Sequence__destroy(task5__action__TrackGoal_SendGoal_Response__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Response__Sequence__are_equal(const task5__action__TrackGoal_SendGoal_Response__Sequence * lhs, const task5__action__TrackGoal_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_SendGoal_Response__Sequence__copy(
  const task5__action__TrackGoal_SendGoal_Response__Sequence * input,
  task5__action__TrackGoal_SendGoal_Response__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_GetResult_Request
 * )) before or use
 * task5__action__TrackGoal_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Request__init(task5__action__TrackGoal_GetResult_Request * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Request__fini(task5__action__TrackGoal_GetResult_Request * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_GetResult_Request *
task5__action__TrackGoal_GetResult_Request__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Request__destroy(task5__action__TrackGoal_GetResult_Request * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Request__are_equal(const task5__action__TrackGoal_GetResult_Request * lhs, const task5__action__TrackGoal_GetResult_Request * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Request__copy(
  const task5__action__TrackGoal_GetResult_Request * input,
  task5__action__TrackGoal_GetResult_Request * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Request__Sequence__init(task5__action__TrackGoal_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Request__Sequence__fini(task5__action__TrackGoal_GetResult_Request__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_GetResult_Request__Sequence *
task5__action__TrackGoal_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Request__Sequence__destroy(task5__action__TrackGoal_GetResult_Request__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Request__Sequence__are_equal(const task5__action__TrackGoal_GetResult_Request__Sequence * lhs, const task5__action__TrackGoal_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Request__Sequence__copy(
  const task5__action__TrackGoal_GetResult_Request__Sequence * input,
  task5__action__TrackGoal_GetResult_Request__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_GetResult_Response
 * )) before or use
 * task5__action__TrackGoal_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Response__init(task5__action__TrackGoal_GetResult_Response * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Response__fini(task5__action__TrackGoal_GetResult_Response * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_GetResult_Response *
task5__action__TrackGoal_GetResult_Response__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Response__destroy(task5__action__TrackGoal_GetResult_Response * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Response__are_equal(const task5__action__TrackGoal_GetResult_Response * lhs, const task5__action__TrackGoal_GetResult_Response * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Response__copy(
  const task5__action__TrackGoal_GetResult_Response * input,
  task5__action__TrackGoal_GetResult_Response * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Response__Sequence__init(task5__action__TrackGoal_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Response__Sequence__fini(task5__action__TrackGoal_GetResult_Response__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_GetResult_Response__Sequence *
task5__action__TrackGoal_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_GetResult_Response__Sequence__destroy(task5__action__TrackGoal_GetResult_Response__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Response__Sequence__are_equal(const task5__action__TrackGoal_GetResult_Response__Sequence * lhs, const task5__action__TrackGoal_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_GetResult_Response__Sequence__copy(
  const task5__action__TrackGoal_GetResult_Response__Sequence * input,
  task5__action__TrackGoal_GetResult_Response__Sequence * output);

/// Initialize action/TrackGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task5__action__TrackGoal_FeedbackMessage
 * )) before or use
 * task5__action__TrackGoal_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_FeedbackMessage__init(task5__action__TrackGoal_FeedbackMessage * msg);

/// Finalize action/TrackGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_FeedbackMessage__fini(task5__action__TrackGoal_FeedbackMessage * msg);

/// Create action/TrackGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task5__action__TrackGoal_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_FeedbackMessage *
task5__action__TrackGoal_FeedbackMessage__create();

/// Destroy action/TrackGoal message.
/**
 * It calls
 * task5__action__TrackGoal_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_FeedbackMessage__destroy(task5__action__TrackGoal_FeedbackMessage * msg);

/// Check for action/TrackGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_FeedbackMessage__are_equal(const task5__action__TrackGoal_FeedbackMessage * lhs, const task5__action__TrackGoal_FeedbackMessage * rhs);

/// Copy a action/TrackGoal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_FeedbackMessage__copy(
  const task5__action__TrackGoal_FeedbackMessage * input,
  task5__action__TrackGoal_FeedbackMessage * output);

/// Initialize array of action/TrackGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * task5__action__TrackGoal_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_FeedbackMessage__Sequence__init(task5__action__TrackGoal_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_FeedbackMessage__Sequence__fini(task5__action__TrackGoal_FeedbackMessage__Sequence * array);

/// Create array of action/TrackGoal messages.
/**
 * It allocates the memory for the array and calls
 * task5__action__TrackGoal_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
task5__action__TrackGoal_FeedbackMessage__Sequence *
task5__action__TrackGoal_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TrackGoal messages.
/**
 * It calls
 * task5__action__TrackGoal_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
void
task5__action__TrackGoal_FeedbackMessage__Sequence__destroy(task5__action__TrackGoal_FeedbackMessage__Sequence * array);

/// Check for action/TrackGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_FeedbackMessage__Sequence__are_equal(const task5__action__TrackGoal_FeedbackMessage__Sequence * lhs, const task5__action__TrackGoal_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TrackGoal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task5
bool
task5__action__TrackGoal_FeedbackMessage__Sequence__copy(
  const task5__action__TrackGoal_FeedbackMessage__Sequence * input,
  task5__action__TrackGoal_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TASK5__ACTION__DETAIL__TRACK_GOAL__FUNCTIONS_H_
