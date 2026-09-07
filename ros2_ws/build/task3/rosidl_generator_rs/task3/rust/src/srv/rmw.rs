#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "task3__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task3__srv__AddTwo_Request() -> *const std::ffi::c_void;
}

#[link(name = "task3__rosidl_generator_c")]
extern "C" {
    fn task3__srv__AddTwo_Request__init(msg: *mut AddTwo_Request) -> bool;
    fn task3__srv__AddTwo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddTwo_Request>, size: usize) -> bool;
    fn task3__srv__AddTwo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddTwo_Request>);
    fn task3__srv__AddTwo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddTwo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddTwo_Request>) -> bool;
}

// Corresponds to task3__srv__AddTwo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddTwo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,

}



impl Default for AddTwo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task3__srv__AddTwo_Request__init(&mut msg as *mut _) {
        panic!("Call to task3__srv__AddTwo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddTwo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task3__srv__AddTwo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task3__srv__AddTwo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task3__srv__AddTwo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddTwo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddTwo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "task3/srv/AddTwo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task3__srv__AddTwo_Request() }
  }
}


#[link(name = "task3__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__task3__srv__AddTwo_Response() -> *const std::ffi::c_void;
}

#[link(name = "task3__rosidl_generator_c")]
extern "C" {
    fn task3__srv__AddTwo_Response__init(msg: *mut AddTwo_Response) -> bool;
    fn task3__srv__AddTwo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddTwo_Response>, size: usize) -> bool;
    fn task3__srv__AddTwo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddTwo_Response>);
    fn task3__srv__AddTwo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddTwo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddTwo_Response>) -> bool;
}

// Corresponds to task3__srv__AddTwo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddTwo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for AddTwo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !task3__srv__AddTwo_Response__init(&mut msg as *mut _) {
        panic!("Call to task3__srv__AddTwo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddTwo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task3__srv__AddTwo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task3__srv__AddTwo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { task3__srv__AddTwo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddTwo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddTwo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "task3/srv/AddTwo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__task3__srv__AddTwo_Response() }
  }
}






#[link(name = "task3__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__task3__srv__AddTwo() -> *const std::ffi::c_void;
}

// Corresponds to task3__srv__AddTwo
#[allow(missing_docs, non_camel_case_types)]
pub struct AddTwo;

impl rosidl_runtime_rs::Service for AddTwo {
    type Request = AddTwo_Request;
    type Response = AddTwo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__task3__srv__AddTwo() }
    }
}


