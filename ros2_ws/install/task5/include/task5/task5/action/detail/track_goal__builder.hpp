// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task5:action/TrackGoal.idl
// generated code does not contain a copyright notice

#ifndef TASK5__ACTION__DETAIL__TRACK_GOAL__BUILDER_HPP_
#define TASK5__ACTION__DETAIL__TRACK_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task5/action/detail/track_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_Goal_y
{
public:
  explicit Init_TrackGoal_Goal_y(::task5::action::TrackGoal_Goal & msg)
  : msg_(msg)
  {}
  ::task5::action::TrackGoal_Goal y(::task5::action::TrackGoal_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_Goal msg_;
};

class Init_TrackGoal_Goal_x
{
public:
  Init_TrackGoal_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackGoal_Goal_y x(::task5::action::TrackGoal_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrackGoal_Goal_y(msg_);
  }

private:
  ::task5::action::TrackGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_Goal>()
{
  return task5::action::builder::Init_TrackGoal_Goal_x();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_Result_result
{
public:
  Init_TrackGoal_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task5::action::TrackGoal_Result result(::task5::action::TrackGoal_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_Result>()
{
  return task5::action::builder::Init_TrackGoal_Result_result();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_Feedback_distance_left
{
public:
  Init_TrackGoal_Feedback_distance_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task5::action::TrackGoal_Feedback distance_left(::task5::action::TrackGoal_Feedback::_distance_left_type arg)
  {
    msg_.distance_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_Feedback>()
{
  return task5::action::builder::Init_TrackGoal_Feedback_distance_left();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_SendGoal_Request_goal
{
public:
  explicit Init_TrackGoal_SendGoal_Request_goal(::task5::action::TrackGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::task5::action::TrackGoal_SendGoal_Request goal(::task5::action::TrackGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_SendGoal_Request msg_;
};

class Init_TrackGoal_SendGoal_Request_goal_id
{
public:
  Init_TrackGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackGoal_SendGoal_Request_goal goal_id(::task5::action::TrackGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrackGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::task5::action::TrackGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_SendGoal_Request>()
{
  return task5::action::builder::Init_TrackGoal_SendGoal_Request_goal_id();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_SendGoal_Response_stamp
{
public:
  explicit Init_TrackGoal_SendGoal_Response_stamp(::task5::action::TrackGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::task5::action::TrackGoal_SendGoal_Response stamp(::task5::action::TrackGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_SendGoal_Response msg_;
};

class Init_TrackGoal_SendGoal_Response_accepted
{
public:
  Init_TrackGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackGoal_SendGoal_Response_stamp accepted(::task5::action::TrackGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TrackGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::task5::action::TrackGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_SendGoal_Response>()
{
  return task5::action::builder::Init_TrackGoal_SendGoal_Response_accepted();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_GetResult_Request_goal_id
{
public:
  Init_TrackGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task5::action::TrackGoal_GetResult_Request goal_id(::task5::action::TrackGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_GetResult_Request>()
{
  return task5::action::builder::Init_TrackGoal_GetResult_Request_goal_id();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_GetResult_Response_result
{
public:
  explicit Init_TrackGoal_GetResult_Response_result(::task5::action::TrackGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::task5::action::TrackGoal_GetResult_Response result(::task5::action::TrackGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_GetResult_Response msg_;
};

class Init_TrackGoal_GetResult_Response_status
{
public:
  Init_TrackGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackGoal_GetResult_Response_result status(::task5::action::TrackGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrackGoal_GetResult_Response_result(msg_);
  }

private:
  ::task5::action::TrackGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_GetResult_Response>()
{
  return task5::action::builder::Init_TrackGoal_GetResult_Response_status();
}

}  // namespace task5


namespace task5
{

namespace action
{

namespace builder
{

class Init_TrackGoal_FeedbackMessage_feedback
{
public:
  explicit Init_TrackGoal_FeedbackMessage_feedback(::task5::action::TrackGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::task5::action::TrackGoal_FeedbackMessage feedback(::task5::action::TrackGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task5::action::TrackGoal_FeedbackMessage msg_;
};

class Init_TrackGoal_FeedbackMessage_goal_id
{
public:
  Init_TrackGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackGoal_FeedbackMessage_feedback goal_id(::task5::action::TrackGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrackGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::task5::action::TrackGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task5::action::TrackGoal_FeedbackMessage>()
{
  return task5::action::builder::Init_TrackGoal_FeedbackMessage_goal_id();
}

}  // namespace task5

#endif  // TASK5__ACTION__DETAIL__TRACK_GOAL__BUILDER_HPP_
