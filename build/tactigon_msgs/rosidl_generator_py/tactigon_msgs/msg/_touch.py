# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tactigon_msgs:msg/Touch.idl
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


class Metaclass_Touch(type):
    """Metaclass of message 'Touch'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ONE_FINGER_NONE': 0,
        'ONE_FINGER_SINGLE_TAP': 1,
        'ONE_FINGER_TAP_AND_HOLD': 2,
        'ONE_FINGER_SWIPE_X_NEG': 4,
        'ONE_FINGER_SWIPE_X_POS': 8,
        'ONE_FINGER_SWIPE_Y_POS': 16,
        'ONE_FINGER_SWIPE_Y_NEG': 32,
        'TWO_FINGER_NONE': 0,
        'TWO_FINGER_TAP': 1,
        'TWO_FINGER_SCROLL': 2,
        'TWO_FINGER_ZOOM': 4,
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
                'tactigon_msgs.msg.Touch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__touch
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__touch
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__touch
            cls._TYPE_SUPPORT = module.type_support_msg__msg__touch
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__touch

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ONE_FINGER_NONE': cls.__constants['ONE_FINGER_NONE'],
            'ONE_FINGER_SINGLE_TAP': cls.__constants['ONE_FINGER_SINGLE_TAP'],
            'ONE_FINGER_TAP_AND_HOLD': cls.__constants['ONE_FINGER_TAP_AND_HOLD'],
            'ONE_FINGER_SWIPE_X_NEG': cls.__constants['ONE_FINGER_SWIPE_X_NEG'],
            'ONE_FINGER_SWIPE_X_POS': cls.__constants['ONE_FINGER_SWIPE_X_POS'],
            'ONE_FINGER_SWIPE_Y_POS': cls.__constants['ONE_FINGER_SWIPE_Y_POS'],
            'ONE_FINGER_SWIPE_Y_NEG': cls.__constants['ONE_FINGER_SWIPE_Y_NEG'],
            'TWO_FINGER_NONE': cls.__constants['TWO_FINGER_NONE'],
            'TWO_FINGER_TAP': cls.__constants['TWO_FINGER_TAP'],
            'TWO_FINGER_SCROLL': cls.__constants['TWO_FINGER_SCROLL'],
            'TWO_FINGER_ZOOM': cls.__constants['TWO_FINGER_ZOOM'],
        }

    @property
    def ONE_FINGER_NONE(self):
        """Message constant 'ONE_FINGER_NONE'."""
        return Metaclass_Touch.__constants['ONE_FINGER_NONE']

    @property
    def ONE_FINGER_SINGLE_TAP(self):
        """Message constant 'ONE_FINGER_SINGLE_TAP'."""
        return Metaclass_Touch.__constants['ONE_FINGER_SINGLE_TAP']

    @property
    def ONE_FINGER_TAP_AND_HOLD(self):
        """Message constant 'ONE_FINGER_TAP_AND_HOLD'."""
        return Metaclass_Touch.__constants['ONE_FINGER_TAP_AND_HOLD']

    @property
    def ONE_FINGER_SWIPE_X_NEG(self):
        """Message constant 'ONE_FINGER_SWIPE_X_NEG'."""
        return Metaclass_Touch.__constants['ONE_FINGER_SWIPE_X_NEG']

    @property
    def ONE_FINGER_SWIPE_X_POS(self):
        """Message constant 'ONE_FINGER_SWIPE_X_POS'."""
        return Metaclass_Touch.__constants['ONE_FINGER_SWIPE_X_POS']

    @property
    def ONE_FINGER_SWIPE_Y_POS(self):
        """Message constant 'ONE_FINGER_SWIPE_Y_POS'."""
        return Metaclass_Touch.__constants['ONE_FINGER_SWIPE_Y_POS']

    @property
    def ONE_FINGER_SWIPE_Y_NEG(self):
        """Message constant 'ONE_FINGER_SWIPE_Y_NEG'."""
        return Metaclass_Touch.__constants['ONE_FINGER_SWIPE_Y_NEG']

    @property
    def TWO_FINGER_NONE(self):
        """Message constant 'TWO_FINGER_NONE'."""
        return Metaclass_Touch.__constants['TWO_FINGER_NONE']

    @property
    def TWO_FINGER_TAP(self):
        """Message constant 'TWO_FINGER_TAP'."""
        return Metaclass_Touch.__constants['TWO_FINGER_TAP']

    @property
    def TWO_FINGER_SCROLL(self):
        """Message constant 'TWO_FINGER_SCROLL'."""
        return Metaclass_Touch.__constants['TWO_FINGER_SCROLL']

    @property
    def TWO_FINGER_ZOOM(self):
        """Message constant 'TWO_FINGER_ZOOM'."""
        return Metaclass_Touch.__constants['TWO_FINGER_ZOOM']


class Touch(metaclass=Metaclass_Touch):
    """
    Message class 'Touch'.

    Constants:
      ONE_FINGER_NONE
      ONE_FINGER_SINGLE_TAP
      ONE_FINGER_TAP_AND_HOLD
      ONE_FINGER_SWIPE_X_NEG
      ONE_FINGER_SWIPE_X_POS
      ONE_FINGER_SWIPE_Y_POS
      ONE_FINGER_SWIPE_Y_NEG
      TWO_FINGER_NONE
      TWO_FINGER_TAP
      TWO_FINGER_SCROLL
      TWO_FINGER_ZOOM
    """

    __slots__ = [
        '_one_finger',
        '_two_finger',
        '_x_pos',
        '_y_pos',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'one_finger': 'uint8',
        'two_finger': 'uint8',
        'x_pos': 'float',
        'y_pos': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.one_finger = kwargs.get('one_finger', int())
        self.two_finger = kwargs.get('two_finger', int())
        self.x_pos = kwargs.get('x_pos', float())
        self.y_pos = kwargs.get('y_pos', float())

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
        if self.one_finger != other.one_finger:
            return False
        if self.two_finger != other.two_finger:
            return False
        if self.x_pos != other.x_pos:
            return False
        if self.y_pos != other.y_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def one_finger(self):
        """Message field 'one_finger'."""
        return self._one_finger

    @one_finger.setter
    def one_finger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'one_finger' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'one_finger' field must be an unsigned integer in [0, 255]"
        self._one_finger = value

    @builtins.property
    def two_finger(self):
        """Message field 'two_finger'."""
        return self._two_finger

    @two_finger.setter
    def two_finger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'two_finger' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'two_finger' field must be an unsigned integer in [0, 255]"
        self._two_finger = value

    @builtins.property
    def x_pos(self):
        """Message field 'x_pos'."""
        return self._x_pos

    @x_pos.setter
    def x_pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'x_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_pos = value

    @builtins.property
    def y_pos(self):
        """Message field 'y_pos'."""
        return self._y_pos

    @y_pos.setter
    def y_pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'y_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_pos = value
