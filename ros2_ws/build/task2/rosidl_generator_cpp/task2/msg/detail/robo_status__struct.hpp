// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task2:msg/RoboStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK2__MSG__DETAIL__ROBO_STATUS__STRUCT_HPP_
#define TASK2__MSG__DETAIL__ROBO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__task2__msg__RoboStatus __attribute__((deprecated))
#else
# define DEPRECATED__task2__msg__RoboStatus __declspec(deprecated)
#endif

namespace task2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoboStatus_
{
  using Type = RoboStatus_<ContainerAllocator>;

  explicit RoboStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bot_name = "";
      this->battery_lvl = 0.0f;
      this->is_moving = false;
      this->error_code = 0l;
      this->data = "";
    }
  }

  explicit RoboStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bot_name(_alloc),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bot_name = "";
      this->battery_lvl = 0.0f;
      this->is_moving = false;
      this->error_code = 0l;
      this->data = "";
    }
  }

  // field types and members
  using _bot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bot_name_type bot_name;
  using _battery_lvl_type =
    float;
  _battery_lvl_type battery_lvl;
  using _is_moving_type =
    bool;
  _is_moving_type is_moving;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__bot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bot_name = _arg;
    return *this;
  }
  Type & set__battery_lvl(
    const float & _arg)
  {
    this->battery_lvl = _arg;
    return *this;
  }
  Type & set__is_moving(
    const bool & _arg)
  {
    this->is_moving = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task2::msg::RoboStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const task2::msg::RoboStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task2::msg::RoboStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task2::msg::RoboStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task2::msg::RoboStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task2::msg::RoboStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task2::msg::RoboStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task2::msg::RoboStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task2::msg::RoboStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task2::msg::RoboStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task2__msg__RoboStatus
    std::shared_ptr<task2::msg::RoboStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task2__msg__RoboStatus
    std::shared_ptr<task2::msg::RoboStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoboStatus_ & other) const
  {
    if (this->bot_name != other.bot_name) {
      return false;
    }
    if (this->battery_lvl != other.battery_lvl) {
      return false;
    }
    if (this->is_moving != other.is_moving) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoboStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoboStatus_

// alias to use template instance with default allocator
using RoboStatus =
  task2::msg::RoboStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace task2

#endif  // TASK2__MSG__DETAIL__ROBO_STATUS__STRUCT_HPP_
