
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_Goal() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_Goal__init(msg: *mut TrackGoal_Goal) -> bool;
    fn task5__action__TrackGoal_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Goal>, size: usize) -> bool;
    fn task5__action__TrackGoal_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Goal>);
    fn task5__action__TrackGoal_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Goal>) -> bool;
}

// Corresponds to task5__action__TrackGoal_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}



impl Default for TrackGoal_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_Goal__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_Goal() }
  }
}


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_Result() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_Result__init(msg: *mut TrackGoal_Result) -> bool;
    fn task5__action__TrackGoal_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Result>, size: usize) -> bool;
    fn task5__action__TrackGoal_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Result>);
    fn task5__action__TrackGoal_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Result>) -> bool;
}

// Corresponds to task5__action__TrackGoal_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: rosidl_runtime_rs::String,

}



impl Default for TrackGoal_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_Result__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_Result where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_Result() }
  }
}


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_Feedback__init(msg: *mut TrackGoal_Feedback) -> bool;
    fn task5__action__TrackGoal_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Feedback>, size: usize) -> bool;
    fn task5__action__TrackGoal_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Feedback>);
    fn task5__action__TrackGoal_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_Feedback>) -> bool;
}

// Corresponds to task5__action__TrackGoal_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_left: f32,

}



impl Default for TrackGoal_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_Feedback__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_Feedback() }
  }
}


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_FeedbackMessage__init(msg: *mut TrackGoal_FeedbackMessage) -> bool;
    fn task5__action__TrackGoal_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_FeedbackMessage>, size: usize) -> bool;
    fn task5__action__TrackGoal_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_FeedbackMessage>);
    fn task5__action__TrackGoal_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_FeedbackMessage>) -> bool;
}

// Corresponds to task5__action__TrackGoal_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::TrackGoal_Feedback,

}



impl Default for TrackGoal_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_FeedbackMessage() }
  }
}




#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_SendGoal_Request__init(msg: *mut TrackGoal_SendGoal_Request) -> bool;
    fn task5__action__TrackGoal_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Request>, size: usize) -> bool;
    fn task5__action__TrackGoal_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Request>);
    fn task5__action__TrackGoal_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Request>) -> bool;
}

// Corresponds to task5__action__TrackGoal_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::TrackGoal_Goal,

}



impl Default for TrackGoal_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_SendGoal_Request() }
  }
}


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_SendGoal_Response__init(msg: *mut TrackGoal_SendGoal_Response) -> bool;
    fn task5__action__TrackGoal_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Response>, size: usize) -> bool;
    fn task5__action__TrackGoal_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Response>);
    fn task5__action__TrackGoal_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_SendGoal_Response>) -> bool;
}

// Corresponds to task5__action__TrackGoal_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for TrackGoal_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_SendGoal_Response() }
  }
}


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_GetResult_Request__init(msg: *mut TrackGoal_GetResult_Request) -> bool;
    fn task5__action__TrackGoal_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Request>, size: usize) -> bool;
    fn task5__action__TrackGoal_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Request>);
    fn task5__action__TrackGoal_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Request>) -> bool;
}

// Corresponds to task5__action__TrackGoal_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for TrackGoal_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_GetResult_Request() }
  }
}


#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "task5__rosidl_generator_c")]
extern "C" {
    fn task5__action__TrackGoal_GetResult_Response__init(msg: *mut TrackGoal_GetResult_Response) -> bool;
    fn task5__action__TrackGoal_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Response>, size: usize) -> bool;
    fn task5__action__TrackGoal_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Response>);
    fn task5__action__TrackGoal_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TrackGoal_GetResult_Response>) -> bool;
}

// Corresponds to task5__action__TrackGoal_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrackGoal_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::TrackGoal_Result,

}



impl Default for TrackGoal_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task5__action__TrackGoal_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to task5__action__TrackGoal_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrackGoal_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task5__action__TrackGoal_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrackGoal_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrackGoal_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "task5/action/TrackGoal_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task5__action__TrackGoal_GetResult_Response() }
  }
}






#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__task5__action__TrackGoal_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to task5__action__TrackGoal_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct TrackGoal_SendGoal;

impl rosidl_runtime_rs::Service for TrackGoal_SendGoal {
    type Request = TrackGoal_SendGoal_Request;
    type Response = TrackGoal_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__task5__action__TrackGoal_SendGoal() }
    }
}




#[link(name = "task5__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__task5__action__TrackGoal_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to task5__action__TrackGoal_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct TrackGoal_GetResult;

impl rosidl_runtime_rs::Service for TrackGoal_GetResult {
    type Request = TrackGoal_GetResult_Request;
    type Response = TrackGoal_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__task5__action__TrackGoal_GetResult() }
    }
}


