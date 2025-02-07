# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tactigon_msgs:msg/TSkinState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TSkinState(type):
    """Metaclass of message 'TSkinState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLE_SELECTOR_NONE': 0,
        'BLE_SELECTOR_SENSORS': 1,
        'BLE_SELECTOR_AUDIO': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tactigon_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tactigon_msgs.msg.TSkinState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__t_skin_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__t_skin_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__t_skin_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__t_skin_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__t_skin_state

            from tactigon_msgs.msg import Angle
            if Angle.__class__._TYPE_SUPPORT is None:
                Angle.__class__.__import_type_support__()

            from tactigon_msgs.msg import Gesture
            if Gesture.__class__._TYPE_SUPPORT is None:
                Gesture.__class__.__import_type_support__()

            from tactigon_msgs.msg import Touch
            if Touch.__class__._TYPE_SUPPORT is None:
                Touch.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLE_SELECTOR_NONE': cls.__constants['BLE_SELECTOR_NONE'],
            'BLE_SELECTOR_SENSORS': cls.__constants['BLE_SELECTOR_SENSORS'],
            'BLE_SELECTOR_AUDIO': cls.__constants['BLE_SELECTOR_AUDIO'],
        }

    @property
    def BLE_SELECTOR_NONE(self):
        """Message constant 'BLE_SELECTOR_NONE'."""
        return Metaclass_TSkinState.__constants['BLE_SELECTOR_NONE']

    @property
    def BLE_SELECTOR_SENSORS(self):
        """Message constant 'BLE_SELECTOR_SENSORS'."""
        return Metaclass_TSkinState.__constants['BLE_SELECTOR_SENSORS']

    @property
    def BLE_SELECTOR_AUDIO(self):
        """Message constant 'BLE_SELECTOR_AUDIO'."""
        return Metaclass_TSkinState.__constants['BLE_SELECTOR_AUDIO']


class TSkinState(metaclass=Metaclass_TSkinState):
    """
    Message class 'TSkinState'.

    Constants:
      BLE_SELECTOR_NONE
      BLE_SELECTOR_SENSORS
      BLE_SELECTOR_AUDIO
    """

    __slots__ = [
        '_connected',
        '_battery',
        '_selector',
        '_selector_valid',
        '_touchpad',
        '_touchpad_valid',
        '_angle',
        '_angle_valid',
        '_gesture',
        '_gesture_valid',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'connected': 'boolean',
        'battery': 'float',
        'selector': 'uint8',
        'selector_valid': 'boolean',
        'touchpad': 'tactigon_msgs/Touch',
        'touchpad_valid': 'boolean',
        'angle': 'tactigon_msgs/Angle',
        'angle_valid': 'boolean',
        'gesture': 'tactigon_msgs/Gesture',
        'gesture_valid': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tactigon_msgs', 'msg'], 'Touch'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tactigon_msgs', 'msg'], 'Angle'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tactigon_msgs', 'msg'], 'Gesture'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connected = kwargs.get('connected', bool())
        self.battery = kwargs.get('battery', float())
        self.selector = kwargs.get('selector', int())
        self.selector_valid = kwargs.get('selector_valid', bool())
        from tactigon_msgs.msg import Touch
        self.touchpad = kwargs.get('touchpad', Touch())
        self.touchpad_valid = kwargs.get('touchpad_valid', bool())
        from tactigon_msgs.msg import Angle
        self.angle = kwargs.get('angle', Angle())
        self.angle_valid = kwargs.get('angle_valid', bool())
        from tactigon_msgs.msg import Gesture
        self.gesture = kwargs.get('gesture', Gesture())
        self.gesture_valid = kwargs.get('gesture_valid', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.connected != other.connected:
            return False
        if self.battery != other.battery:
            return False
        if self.selector != other.selector:
            return False
        if self.selector_valid != other.selector_valid:
            return False
        if self.touchpad != other.touchpad:
            return False
        if self.touchpad_valid != other.touchpad_valid:
            return False
        if self.angle != other.angle:
            return False
        if self.angle_valid != other.angle_valid:
            return False
        if self.gesture != other.gesture:
            return False
        if self.gesture_valid != other.gesture_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery = value

    @builtins.property
    def selector(self):
        """Message field 'selector'."""
        return self._selector

    @selector.setter
    def selector(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'selector' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'selector' field must be an unsigned integer in [0, 255]"
        self._selector = value

    @builtins.property
    def selector_valid(self):
        """Message field 'selector_valid'."""
        return self._selector_valid

    @selector_valid.setter
    def selector_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'selector_valid' field must be of type 'bool'"
        self._selector_valid = value

    @builtins.property
    def touchpad(self):
        """Message field 'touchpad'."""
        return self._touchpad

    @touchpad.setter
    def touchpad(self, value):
        if self._check_fields:
            from tactigon_msgs.msg import Touch
            assert \
                isinstance(value, Touch), \
                "The 'touchpad' field must be a sub message of type 'Touch'"
        self._touchpad = value

    @builtins.property
    def touchpad_valid(self):
        """Message field 'touchpad_valid'."""
        return self._touchpad_valid

    @touchpad_valid.setter
    def touchpad_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'touchpad_valid' field must be of type 'bool'"
        self._touchpad_valid = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if self._check_fields:
            from tactigon_msgs.msg import Angle
            assert \
                isinstance(value, Angle), \
                "The 'angle' field must be a sub message of type 'Angle'"
        self._angle = value

    @builtins.property
    def angle_valid(self):
        """Message field 'angle_valid'."""
        return self._angle_valid

    @angle_valid.setter
    def angle_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'angle_valid' field must be of type 'bool'"
        self._angle_valid = value

    @builtins.property
    def gesture(self):
        """Message field 'gesture'."""
        return self._gesture

    @gesture.setter
    def gesture(self, value):
        if self._check_fields:
            from tactigon_msgs.msg import Gesture
            assert \
                isinstance(value, Gesture), \
                "The 'gesture' field must be a sub message of type 'Gesture'"
        self._gesture = value

    @builtins.property
    def gesture_valid(self):
        """Message field 'gesture_valid'."""
        return self._gesture_valid

    @gesture_valid.setter
    def gesture_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'gesture_valid' field must be of type 'bool'"
        self._gesture_valid = value
