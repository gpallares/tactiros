// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tactigon_msgs/msg/detail/t_skin_state__struct.h"
#include "tactigon_msgs/msg/detail/t_skin_state__functions.h"

bool tactigon_msgs__msg__touch__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tactigon_msgs__msg__touch__convert_to_py(void * raw_ros_message);
bool tactigon_msgs__msg__angle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tactigon_msgs__msg__angle__convert_to_py(void * raw_ros_message);
bool tactigon_msgs__msg__gesture__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tactigon_msgs__msg__gesture__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tactigon_msgs__msg__t_skin_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tactigon_msgs.msg._t_skin_state.TSkinState", full_classname_dest, 42) == 0);
  }
  tactigon_msgs__msg__TSkinState * ros_message = _ros_message;
  {  // connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // selector
    PyObject * field = PyObject_GetAttrString(_pymsg, "selector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->selector = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // selector_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "selector_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->selector_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // touchpad
    PyObject * field = PyObject_GetAttrString(_pymsg, "touchpad");
    if (!field) {
      return false;
    }
    if (!tactigon_msgs__msg__touch__convert_from_py(field, &ros_message->touchpad)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // touchpad_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "touchpad_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->touchpad_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    if (!tactigon_msgs__msg__angle__convert_from_py(field, &ros_message->angle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angle_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->angle_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gesture
    PyObject * field = PyObject_GetAttrString(_pymsg, "gesture");
    if (!field) {
      return false;
    }
    if (!tactigon_msgs__msg__gesture__convert_from_py(field, &ros_message->gesture)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gesture_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "gesture_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gesture_valid = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tactigon_msgs__msg__t_skin_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TSkinState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tactigon_msgs.msg._t_skin_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TSkinState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tactigon_msgs__msg__TSkinState * ros_message = (tactigon_msgs__msg__TSkinState *)raw_ros_message;
  {  // connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // selector
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->selector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "selector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // selector_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->selector_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "selector_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // touchpad
    PyObject * field = NULL;
    field = tactigon_msgs__msg__touch__convert_to_py(&ros_message->touchpad);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "touchpad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // touchpad_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->touchpad_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "touchpad_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = tactigon_msgs__msg__angle__convert_to_py(&ros_message->angle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->angle_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gesture
    PyObject * field = NULL;
    field = tactigon_msgs__msg__gesture__convert_to_py(&ros_message->gesture);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gesture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gesture_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gesture_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gesture_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
