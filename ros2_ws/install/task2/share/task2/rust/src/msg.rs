#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to task2__msg__RoboStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoboStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub bot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_lvl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_moving: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for RoboStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoboStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RoboStatus {
  type RmwMsg = super::msg::rmw::RoboStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        bot_name: msg.bot_name.as_str().into(),
        battery_lvl: msg.battery_lvl,
        is_moving: msg.is_moving,
        error_code: msg.error_code,
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        bot_name: msg.bot_name.as_str().into(),
      battery_lvl: msg.battery_lvl,
      is_moving: msg.is_moving,
      error_code: msg.error_code,
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      bot_name: msg.bot_name.to_string(),
      battery_lvl: msg.battery_lvl,
      is_moving: msg.is_moving,
      error_code: msg.error_code,
      data: msg.data.to_string(),
    }
  }
}


