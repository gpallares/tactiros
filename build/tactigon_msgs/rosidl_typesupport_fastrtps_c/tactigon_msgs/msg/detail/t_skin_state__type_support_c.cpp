// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice
#include "tactigon_msgs/msg/detail/t_skin_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tactigon_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tactigon_msgs/msg/detail/t_skin_state__struct.h"
#include "tactigon_msgs/msg/detail/t_skin_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tactigon_msgs/msg/detail/angle__functions.h"  // angle
#include "tactigon_msgs/msg/detail/gesture__functions.h"  // gesture
#include "tactigon_msgs/msg/detail/touch__functions.h"  // touchpad

// forward declare type support functions

bool cdr_serialize_tactigon_msgs__msg__Angle(
  const tactigon_msgs__msg__Angle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_tactigon_msgs__msg__Angle(
  eprosima::fastcdr::Cdr & cdr,
  tactigon_msgs__msg__Angle * ros_message);

size_t get_serialized_size_tactigon_msgs__msg__Angle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tactigon_msgs__msg__Angle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_tactigon_msgs__msg__Angle(
  const tactigon_msgs__msg__Angle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_tactigon_msgs__msg__Angle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_tactigon_msgs__msg__Angle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tactigon_msgs, msg, Angle)();

bool cdr_serialize_tactigon_msgs__msg__Gesture(
  const tactigon_msgs__msg__Gesture * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_tactigon_msgs__msg__Gesture(
  eprosima::fastcdr::Cdr & cdr,
  tactigon_msgs__msg__Gesture * ros_message);

size_t get_serialized_size_tactigon_msgs__msg__Gesture(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tactigon_msgs__msg__Gesture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_tactigon_msgs__msg__Gesture(
  const tactigon_msgs__msg__Gesture * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_tactigon_msgs__msg__Gesture(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_tactigon_msgs__msg__Gesture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tactigon_msgs, msg, Gesture)();

bool cdr_serialize_tactigon_msgs__msg__Touch(
  const tactigon_msgs__msg__Touch * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_tactigon_msgs__msg__Touch(
  eprosima::fastcdr::Cdr & cdr,
  tactigon_msgs__msg__Touch * ros_message);

size_t get_serialized_size_tactigon_msgs__msg__Touch(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tactigon_msgs__msg__Touch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_tactigon_msgs__msg__Touch(
  const tactigon_msgs__msg__Touch * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_tactigon_msgs__msg__Touch(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_tactigon_msgs__msg__Touch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tactigon_msgs, msg, Touch)();


using _TSkinState__ros_msg_type = tactigon_msgs__msg__TSkinState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_serialize_tactigon_msgs__msg__TSkinState(
  const tactigon_msgs__msg__TSkinState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  // Field name: selector
  {
    cdr << ros_message->selector;
  }

  // Field name: selector_valid
  {
    cdr << (ros_message->selector_valid ? true : false);
  }

  // Field name: touchpad
  {
    cdr_serialize_tactigon_msgs__msg__Touch(
      &ros_message->touchpad, cdr);
  }

  // Field name: touchpad_valid
  {
    cdr << (ros_message->touchpad_valid ? true : false);
  }

  // Field name: angle
  {
    cdr_serialize_tactigon_msgs__msg__Angle(
      &ros_message->angle, cdr);
  }

  // Field name: angle_valid
  {
    cdr << (ros_message->angle_valid ? true : false);
  }

  // Field name: gesture
  {
    cdr_serialize_tactigon_msgs__msg__Gesture(
      &ros_message->gesture, cdr);
  }

  // Field name: gesture_valid
  {
    cdr << (ros_message->gesture_valid ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_deserialize_tactigon_msgs__msg__TSkinState(
  eprosima::fastcdr::Cdr & cdr,
  tactigon_msgs__msg__TSkinState * ros_message)
{
  // Field name: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connected = tmp ? true : false;
  }

  // Field name: battery
  {
    cdr >> ros_message->battery;
  }

  // Field name: selector
  {
    cdr >> ros_message->selector;
  }

  // Field name: selector_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->selector_valid = tmp ? true : false;
  }

  // Field name: touchpad
  {
    cdr_deserialize_tactigon_msgs__msg__Touch(cdr, &ros_message->touchpad);
  }

  // Field name: touchpad_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->touchpad_valid = tmp ? true : false;
  }

  // Field name: angle
  {
    cdr_deserialize_tactigon_msgs__msg__Angle(cdr, &ros_message->angle);
  }

  // Field name: angle_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->angle_valid = tmp ? true : false;
  }

  // Field name: gesture
  {
    cdr_deserialize_tactigon_msgs__msg__Gesture(cdr, &ros_message->gesture);
  }

  // Field name: gesture_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gesture_valid = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t get_serialized_size_tactigon_msgs__msg__TSkinState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TSkinState__ros_msg_type * ros_message = static_cast<const _TSkinState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery
  {
    size_t item_size = sizeof(ros_message->battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: selector
  {
    size_t item_size = sizeof(ros_message->selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: selector_valid
  {
    size_t item_size = sizeof(ros_message->selector_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: touchpad
  current_alignment += get_serialized_size_tactigon_msgs__msg__Touch(
    &(ros_message->touchpad), current_alignment);

  // Field name: touchpad_valid
  {
    size_t item_size = sizeof(ros_message->touchpad_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: angle
  current_alignment += get_serialized_size_tactigon_msgs__msg__Angle(
    &(ros_message->angle), current_alignment);

  // Field name: angle_valid
  {
    size_t item_size = sizeof(ros_message->angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gesture
  current_alignment += get_serialized_size_tactigon_msgs__msg__Gesture(
    &(ros_message->gesture), current_alignment);

  // Field name: gesture_valid
  {
    size_t item_size = sizeof(ros_message->gesture_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t max_serialized_size_tactigon_msgs__msg__TSkinState(
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

  // Field name: connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: selector
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: selector_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: touchpad
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tactigon_msgs__msg__Touch(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: touchpad_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: angle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tactigon_msgs__msg__Angle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: angle_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gesture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tactigon_msgs__msg__Gesture(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: gesture_valid
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
    using DataType = tactigon_msgs__msg__TSkinState;
    is_plain =
      (
      offsetof(DataType, gesture_valid) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_serialize_key_tactigon_msgs__msg__TSkinState(
  const tactigon_msgs__msg__TSkinState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  // Field name: battery
  {
    cdr << ros_message->battery;
  }

  // Field name: selector
  {
    cdr << ros_message->selector;
  }

  // Field name: selector_valid
  {
    cdr << (ros_message->selector_valid ? true : false);
  }

  // Field name: touchpad
  {
    cdr_serialize_key_tactigon_msgs__msg__Touch(
      &ros_message->touchpad, cdr);
  }

  // Field name: touchpad_valid
  {
    cdr << (ros_message->touchpad_valid ? true : false);
  }

  // Field name: angle
  {
    cdr_serialize_key_tactigon_msgs__msg__Angle(
      &ros_message->angle, cdr);
  }

  // Field name: angle_valid
  {
    cdr << (ros_message->angle_valid ? true : false);
  }

  // Field name: gesture
  {
    cdr_serialize_key_tactigon_msgs__msg__Gesture(
      &ros_message->gesture, cdr);
  }

  // Field name: gesture_valid
  {
    cdr << (ros_message->gesture_valid ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t get_serialized_size_key_tactigon_msgs__msg__TSkinState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TSkinState__ros_msg_type * ros_message = static_cast<const _TSkinState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery
  {
    size_t item_size = sizeof(ros_message->battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: selector
  {
    size_t item_size = sizeof(ros_message->selector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: selector_valid
  {
    size_t item_size = sizeof(ros_message->selector_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: touchpad
  current_alignment += get_serialized_size_key_tactigon_msgs__msg__Touch(
    &(ros_message->touchpad), current_alignment);

  // Field name: touchpad_valid
  {
    size_t item_size = sizeof(ros_message->touchpad_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: angle
  current_alignment += get_serialized_size_key_tactigon_msgs__msg__Angle(
    &(ros_message->angle), current_alignment);

  // Field name: angle_valid
  {
    size_t item_size = sizeof(ros_message->angle_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gesture
  current_alignment += get_serialized_size_key_tactigon_msgs__msg__Gesture(
    &(ros_message->gesture), current_alignment);

  // Field name: gesture_valid
  {
    size_t item_size = sizeof(ros_message->gesture_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t max_serialized_size_key_tactigon_msgs__msg__TSkinState(
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
  // Field name: connected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: battery
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: selector
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: selector_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: touchpad
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_tactigon_msgs__msg__Touch(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: touchpad_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: angle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_tactigon_msgs__msg__Angle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: angle_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: gesture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_tactigon_msgs__msg__Gesture(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: gesture_valid
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
    using DataType = tactigon_msgs__msg__TSkinState;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const tactigon_msgs__msg__TSkinState * ros_message = static_cast<const tactigon_msgs__msg__TSkinState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_tactigon_msgs__msg__TSkinState(ros_message, cdr);
}

static bool _TSkinState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  tactigon_msgs__msg__TSkinState * ros_message = static_cast<tactigon_msgs__msg__TSkinState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_tactigon_msgs__msg__TSkinState(cdr, ros_message);
}

static uint32_t _TSkinState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tactigon_msgs__msg__TSkinState(
      untyped_ros_message, 0));
}

static size_t _TSkinState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tactigon_msgs__msg__TSkinState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TSkinState = {
  "tactigon_msgs::msg",
  "TSkinState",
  _TSkinState__cdr_serialize,
  _TSkinState__cdr_deserialize,
  _TSkinState__get_serialized_size,
  _TSkinState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TSkinState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TSkinState,
  get_message_typesupport_handle_function,
  &tactigon_msgs__msg__TSkinState__get_type_hash,
  &tactigon_msgs__msg__TSkinState__get_type_description,
  &tactigon_msgs__msg__TSkinState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tactigon_msgs, msg, TSkinState)() {
  return &_TSkinState__type_support;
}

#if defined(__cplusplus)
}
#endif
