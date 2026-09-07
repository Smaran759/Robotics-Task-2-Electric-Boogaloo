// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task3:srv/AddTwo.idl
// generated code does not contain a copyright notice

#ifndef TASK3__SRV__DETAIL__ADD_TWO__BUILDER_HPP_
#define TASK3__SRV__DETAIL__ADD_TWO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task3/srv/detail/add_two__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task3
{

namespace srv
{

namespace builder
{

class Init_AddTwo_Request_b
{
public:
  explicit Init_AddTwo_Request_b(::task3::srv::AddTwo_Request & msg)
  : msg_(msg)
  {}
  ::task3::srv::AddTwo_Request b(::task3::srv::AddTwo_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task3::srv::AddTwo_Request msg_;
};

class Init_AddTwo_Request_a
{
public:
  Init_AddTwo_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwo_Request_b a(::task3::srv::AddTwo_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwo_Request_b(msg_);
  }

private:
  ::task3::srv::AddTwo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task3::srv::AddTwo_Request>()
{
  return task3::srv::builder::Init_AddTwo_Request_a();
}

}  // namespace task3


namespace task3
{

namespace srv
{

namespace builder
{

class Init_AddTwo_Response_sum
{
public:
  Init_AddTwo_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task3::srv::AddTwo_Response sum(::task3::srv::AddTwo_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task3::srv::AddTwo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task3::srv::AddTwo_Response>()
{
  return task3::srv::builder::Init_AddTwo_Response_sum();
}

}  // namespace task3

#endif  // TASK3__SRV__DETAIL__ADD_TWO__BUILDER_HPP_
