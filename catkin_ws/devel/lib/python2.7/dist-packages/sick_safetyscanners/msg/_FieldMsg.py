# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sick_safetyscanners/FieldMsg.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class FieldMsg(genpy.Message):
  _md5sum = "d92cc93fdff8827129e1f6fd20b75f7e"
  _type = "sick_safetyscanners/FieldMsg"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32[] ranges
float32 start_angle
float32 angular_resolution
bool protective_field
"""
  __slots__ = ['ranges','start_angle','angular_resolution','protective_field']
  _slot_types = ['float32[]','float32','float32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ranges,start_angle,angular_resolution,protective_field

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FieldMsg, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.ranges is None:
        self.ranges = []
      if self.start_angle is None:
        self.start_angle = 0.
      if self.angular_resolution is None:
        self.angular_resolution = 0.
      if self.protective_field is None:
        self.protective_field = False
    else:
      self.ranges = []
      self.start_angle = 0.
      self.angular_resolution = 0.
      self.protective_field = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.ranges)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.ranges))
      _x = self
      buff.write(_get_struct_2fB().pack(_x.start_angle, _x.angular_resolution, _x.protective_field))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.ranges = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 9
      (_x.start_angle, _x.angular_resolution, _x.protective_field,) = _get_struct_2fB().unpack(str[start:end])
      self.protective_field = bool(self.protective_field)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.ranges)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.ranges.tostring())
      _x = self
      buff.write(_get_struct_2fB().pack(_x.start_angle, _x.angular_resolution, _x.protective_field))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.ranges = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      _x = self
      start = end
      end += 9
      (_x.start_angle, _x.angular_resolution, _x.protective_field,) = _get_struct_2fB().unpack(str[start:end])
      self.protective_field = bool(self.protective_field)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2fB = None
def _get_struct_2fB():
    global _struct_2fB
    if _struct_2fB is None:
        _struct_2fB = struct.Struct("<2fB")
    return _struct_2fB
