// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task5:action/TrackGoal.idl
// generated code does not contain a copyright notice

#ifndef TASK5__ACTION__DETAIL__TRACK_GOAL__STRUCT_H_
#define TASK5__ACTION__DETAIL__TRACK_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_Goal
{
  float x;
  float y;
} task5__action__TrackGoal_Goal;

// Struct for a sequence of task5__action__TrackGoal_Goal.
typedef struct task5__action__TrackGoal_Goal__Sequence
{
  task5__action__TrackGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_Result
{
  rosidl_runtime_c__String result;
} task5__action__TrackGoal_Result;

// Struct for a sequence of task5__action__TrackGoal_Result.
typedef struct task5__action__TrackGoal_Result__Sequence
{
  task5__action__TrackGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_Feedback
{
  float distance_left;
} task5__action__TrackGoal_Feedback;

// Struct for a sequence of task5__action__TrackGoal_Feedback.
typedef struct task5__action__TrackGoal_Feedback__Sequence
{
  task5__action__TrackGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "task5/action/detail/track_goal__struct.h"

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  task5__action__TrackGoal_Goal goal;
} task5__action__TrackGoal_SendGoal_Request;

// Struct for a sequence of task5__action__TrackGoal_SendGoal_Request.
typedef struct task5__action__TrackGoal_SendGoal_Request__Sequence
{
  task5__action__TrackGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} task5__action__TrackGoal_SendGoal_Response;

// Struct for a sequence of task5__action__TrackGoal_SendGoal_Response.
typedef struct task5__action__TrackGoal_SendGoal_Response__Sequence
{
  task5__action__TrackGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} task5__action__TrackGoal_GetResult_Request;

// Struct for a sequence of task5__action__TrackGoal_GetResult_Request.
typedef struct task5__action__TrackGoal_GetResult_Request__Sequence
{
  task5__action__TrackGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "task5/action/detail/track_goal__struct.h"

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_GetResult_Response
{
  int8_t status;
  task5__action__TrackGoal_Result result;
} task5__action__TrackGoal_GetResult_Response;

// Struct for a sequence of task5__action__TrackGoal_GetResult_Response.
typedef struct task5__action__TrackGoal_GetResult_Response__Sequence
{
  task5__action__TrackGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "task5/action/detail/track_goal__struct.h"

/// Struct defined in action/TrackGoal in the package task5.
typedef struct task5__action__TrackGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  task5__action__TrackGoal_Feedback feedback;
} task5__action__TrackGoal_FeedbackMessage;

// Struct for a sequence of task5__action__TrackGoal_FeedbackMessage.
typedef struct task5__action__TrackGoal_FeedbackMessage__Sequence
{
  task5__action__TrackGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task5__action__TrackGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK5__ACTION__DETAIL__TRACK_GOAL__STRUCT_H_
