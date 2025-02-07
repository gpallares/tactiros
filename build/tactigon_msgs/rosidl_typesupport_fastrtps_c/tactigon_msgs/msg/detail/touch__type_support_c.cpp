// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice
#include "tactigon_msgs/msg/detail/touch__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tactigon_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tactigon_msgs/msg/detail/touch__struct.h"
#include "tactigon_msgs/msg/detail/touch__functions.h"
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


// forward declare type support functions


using _Touch__ros_msg_type = tactigon_msgs__msg__Touch;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_serialize_tactigon_msgs__msg__Touch(
  const tactigon_msgs__msg__Touch * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: one_finger
  {
    cdr << ros_message->one_finger;
  }

  // Field name: two_finger
  {
    cdr << ros_message->two_finger;
  }

  // Field name: x_pos
  {
    cdr << ros_message->x_pos;
  }

  // Field name: y_pos
  {
    cdr << ros_message->y_pos;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_deserialize_tactigon_msgs__msg__Touch(
  eprosima::fastcdr::Cdr & cdr,
  tactigon_msgs__msg__Touch * ros_message)
{
  // Field name: one_finger
  {
    cdr >> ros_message->one_finger;
  }

  // Field name: two_finger
  {
    cdr >> ros_message->two_finger;
  }

  // Field name: x_pos
  {
    cdr >> ros_message->x_pos;
  }

  // Field name: y_pos
  {
    cdr >> ros_message->y_pos;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t get_serialized_size_tactigon_msgs__msg__Touch(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Touch__ros_msg_type * ros_message = static_cast<const _Touch__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: one_finger
  {
    size_t item_size = sizeof(ros_message->one_finger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: two_finger
  {
    size_t item_size = sizeof(ros_message->two_finger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: x_pos
  {
    size_t item_size = sizeof(ros_message->x_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y_pos
  {
    size_t item_size = sizeof(ros_message->y_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t max_serialized_size_tactigon_msgs__msg__Touch(
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

  // Field name: one_finger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: two_finger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: x_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tactigon_msgs__msg__Touch;
    is_plain =
      (
      offsetof(DataType, y_pos) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
bool cdr_serialize_key_tactigon_msgs__msg__Touch(
  const tactigon_msgs__msg__Touch * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: one_finger
  {
    cdr << ros_message->one_finger;
  }

  // Field name: two_finger
  {
    cdr << ros_message->two_finger;
  }

  // Field name: x_pos
  {
    cdr << ros_message->x_pos;
  }

  // Field name: y_pos
  {
    cdr << ros_message->y_pos;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t get_serialized_size_key_tactigon_msgs__msg__Touch(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Touch__ros_msg_type * ros_message = static_cast<const _Touch__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: one_finger
  {
    size_t item_size = sizeof(ros_message->one_finger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: two_finger
  {
    size_t item_size = sizeof(ros_message->two_finger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: x_pos
  {
    size_t item_size = sizeof(ros_message->x_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y_pos
  {
    size_t item_size = sizeof(ros_message->y_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tactigon_msgs
size_t max_serialized_size_key_tactigon_msgs__msg__Touch(
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
  // Field name: one_finger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: two_finger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: x_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: y_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tactigon_msgs__msg__Touch;
    is_plain =
      (
      offsetof(DataType, y_pos) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Touch__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const tactigon_msgs__msg__Touch * ros_message = static_cast<const tactigon_msgs__msg__Touch *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_tactigon_msgs__msg__Touch(ros_message, cdr);
}

static bool _Touch__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  tactigon_msgs__msg__Touch * ros_message = static_cast<tactigon_msgs__msg__Touch *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_tactigon_msgs__msg__Touch(cdr, ros_message);
}

static uint32_t _Touch__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tactigon_msgs__msg__Touch(
      untyped_ros_message, 0));
}

static size_t _Touch__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tactigon_msgs__msg__Touch(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Touch = {
  "tactigon_msgs::msg",
  "Touch",
  _Touch__cdr_serialize,
  _Touch__cdr_deserialize,
  _Touch__get_serialized_size,
  _Touch__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Touch__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Touch,
  get_message_typesupport_handle_function,
  &tactigon_msgs__msg__Touch__get_type_hash,
  &tactigon_msgs__msg__Touch__get_type_description,
  &tactigon_msgs__msg__Touch__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tactigon_msgs, msg, Touch)() {
  return &_Touch__type_support;
}

#if defined(__cplusplus)
}
#endif
