// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice
#include "tactigon_msgs/msg/detail/t_skin_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tactigon_msgs/msg/detail/t_skin_state__functions.h"
#include "tactigon_msgs/msg/detail/t_skin_state__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tactigon_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tactigon_msgs::msg::Touch &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tactigon_msgs::msg::Touch &);
size_t get_serialized_size(
  const tactigon_msgs::msg::Touch &,
  size_t current_alignment);
size_t
max_serialized_size_Touch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const tactigon_msgs::msg::Touch &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const tactigon_msgs::msg::Touch &,
  size_t current_alignment);
size_t
max_serialized_size_key_Touch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tactigon_msgs

namespace tactigon_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tactigon_msgs::msg::Angle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tactigon_msgs::msg::Angle &);
size_t get_serialized_size(
  const tactigon_msgs::msg::Angle &,
  size_t current_alignment);
size_t
max_serialized_size_Angle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const tactigon_msgs::msg::Angle &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const tactigon_msgs::msg::Angle &,
  size_t current_alignment);
size_t
max_serialized_size_key_Angle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tactigon_msgs

namespace tactigon_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tactigon_msgs::msg::Gesture &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tactigon_msgs::msg::Gesture &);
size_t get_serialized_size(
  const tactigon_msgs::msg::Gesture &,
  size_t current_alignment);
size_t
max_serialized_size_Gesture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const tactigon_msgs::msg::Gesture &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const tactigon_msgs::msg::Gesture &,
  size_t current_alignment);
size_t
max_serialized_size_key_Gesture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tactigon_msgs


namespace tactigon_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
cdr_serialize(
  const tactigon_msgs::msg::TSkinState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: connected
  cdr << (ros_message.connected ? true : false);

  // Member: battery
  cdr << ros_message.battery;

  // Member: selector
  cdr << ros_message.selector;

  // Member: selector_valid
  cdr << (ros_message.selector_valid ? true : false);

  // Member: touchpad
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.touchpad,
    cdr);

  // Member: touchpad_valid
  cdr << (ros_message.touchpad_valid ? true : false);

  // Member: angle
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angle,
    cdr);

  // Member: angle_valid
  cdr << (ros_message.angle_valid ? true : false);

  // Member: gesture
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gesture,
    cdr);

  // Member: gesture_valid
  cdr << (ros_message.gesture_valid ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tactigon_msgs::msg::TSkinState & ros_message)
{
  // Member: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connected = tmp ? true : false;
  }

  // Member: battery
  cdr >> ros_message.battery;

  // Member: selector
  cdr >> ros_message.selector;

  // Member: selector_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.selector_valid = tmp ? true : false;
  }

  // Member: touchpad
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.touchpad);

  // Member: touchpad_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.touchpad_valid = tmp ? true : false;
  }

  // Member: angle
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angle);

  // Member: angle_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.angle_valid = tmp ? true : false;
  }

  // Member: gesture
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gesture);

  // Member: gesture_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gesture_valid = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
get_serialized_size(
  const tactigon_msgs::msg::TSkinState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: connected
  {
    size_t item_size = sizeof(ros_message.connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery
  {
    size_t item_size = sizeof(ros_message.battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: selector
  {
    size_t item_size = sizeof(ros_message.selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: selector_valid
  {
    size_t item_size = sizeof(ros_message.selector_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: touchpad
  current_alignment +=
    tactigon_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.touchpad, current_alignment);

  // Member: touchpad_valid
  {
    size_t item_size = sizeof(ros_message.touchpad_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: angle
  current_alignment +=
    tactigon_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angle, current_alignment);

  // Member: angle_valid
  {
    size_t item_size = sizeof(ros_message.angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gesture
  current_alignment +=
    tactigon_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gesture, current_alignment);

  // Member: gesture_valid
  {
    size_t item_size = sizeof(ros_message.gesture_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
max_serialized_size_TSkinState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: selector
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: selector_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: touchpad
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tactigon_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Touch(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: touchpad_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: angle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tactigon_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Angle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: angle_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: gesture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tactigon_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Gesture(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: gesture_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tactigon_msgs::msg::TSkinState;
    is_plain =
      (
      offsetof(DataType, gesture_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
cdr_serialize_key(
  const tactigon_msgs::msg::TSkinState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: connected
  cdr << (ros_message.connected ? true : false);

  // Member: battery
  cdr << ros_message.battery;

  // Member: selector
  cdr << ros_message.selector;

  // Member: selector_valid
  cdr << (ros_message.selector_valid ? true : false);

  // Member: touchpad
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.touchpad,
    cdr);

  // Member: touchpad_valid
  cdr << (ros_message.touchpad_valid ? true : false);

  // Member: angle
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.angle,
    cdr);

  // Member: angle_valid
  cdr << (ros_message.angle_valid ? true : false);

  // Member: gesture
  tactigon_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.gesture,
    cdr);

  // Member: gesture_valid
  cdr << (ros_message.gesture_valid ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
get_serialized_size_key(
  const tactigon_msgs::msg::TSkinState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: connected
  {
    size_t item_size = sizeof(ros_message.connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: battery
  {
    size_t item_size = sizeof(ros_message.battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: selector
  {
    size_t item_size = sizeof(ros_message.selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: selector_valid
  {
    size_t item_size = sizeof(ros_message.selector_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: touchpad
  current_alignment +=
    tactigon_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.touchpad, current_alignment);

  // Member: touchpad_valid
  {
    size_t item_size = sizeof(ros_message.touchpad_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: angle
  current_alignment +=
    tactigon_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.angle, current_alignment);

  // Member: angle_valid
  {
    size_t item_size = sizeof(ros_message.angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: gesture
  current_alignment +=
    tactigon_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.gesture, current_alignment);

  // Member: gesture_valid
  {
    size_t item_size = sizeof(ros_message.gesture_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tactigon_msgs
max_serialized_size_key_TSkinState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: selector
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: selector_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: touchpad
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tactigon_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Touch(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: touchpad_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: angle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tactigon_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Angle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angle_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gesture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tactigon_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Gesture(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gesture_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tactigon_msgs::msg::TSkinState;
    is_plain =
      (
      offsetof(DataType, gesture_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TSkinState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tactigon_msgs::msg::TSkinState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TSkinState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tactigon_msgs::msg::TSkinState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TSkinState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tactigon_msgs::msg::TSkinState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TSkinState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TSkinState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TSkinState__callbacks = {
  "tactigon_msgs::msg",
  "TSkinState",
  _TSkinState__cdr_serialize,
  _TSkinState__cdr_deserialize,
  _TSkinState__get_serialized_size,
  _TSkinState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TSkinState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TSkinState__callbacks,
  get_message_typesupport_handle_function,
  &tactigon_msgs__msg__TSkinState__get_type_hash,
  &tactigon_msgs__msg__TSkinState__get_type_description,
  &tactigon_msgs__msg__TSkinState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tactigon_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tactigon_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tactigon_msgs::msg::TSkinState>()
{
  return &tactigon_msgs::msg::typesupport_fastrtps_cpp::_TSkinState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tactigon_msgs, msg, TSkinState)() {
  return &tactigon_msgs::msg::typesupport_fastrtps_cpp::_TSkinState__handle;
}

#ifdef __cplusplus
}
#endif
