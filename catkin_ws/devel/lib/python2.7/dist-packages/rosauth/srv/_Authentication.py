# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosauth/AuthenticationRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class AuthenticationRequest(genpy.Message):
  _md5sum = "cad474945b8be70807460ba22a018b32"
  _type = "rosauth/AuthenticationRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# MAC string given by the client
string mac
# IP of the client
string client
# IP of the destination
string dest
# Random string given by the client
string rand
# Time of the authorization request given by the client
time t
# User level as a string given by the client
string level
# End time of the client's session given by the client
time end
"""
  __slots__ = ['mac','client','dest','rand','t','level','end']
  _slot_types = ['string','string','string','string','time','string','time']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mac,client,dest,rand,t,level,end

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AuthenticationRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.mac is None:
        self.mac = ''
      if self.client is None:
        self.client = ''
      if self.dest is None:
        self.dest = ''
      if self.rand is None:
        self.rand = ''
      if self.t is None:
        self.t = genpy.Time()
      if self.level is None:
        self.level = ''
      if self.end is None:
        self.end = genpy.Time()
    else:
      self.mac = ''
      self.client = ''
      self.dest = ''
      self.rand = ''
      self.t = genpy.Time()
      self.level = ''
      self.end = genpy.Time()

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
      _x = self.mac
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.client
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.dest
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.rand
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.t.secs, _x.t.nsecs))
      _x = self.level
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.end.secs, _x.end.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.t is None:
        self.t = genpy.Time()
      if self.end is None:
        self.end = genpy.Time()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.mac = str[start:end].decode('utf-8')
      else:
        self.mac = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.client = str[start:end].decode('utf-8')
      else:
        self.client = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.dest = str[start:end].decode('utf-8')
      else:
        self.dest = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.rand = str[start:end].decode('utf-8')
      else:
        self.rand = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.t.secs, _x.t.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.level = str[start:end].decode('utf-8')
      else:
        self.level = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.end.secs, _x.end.nsecs,) = _get_struct_2I().unpack(str[start:end])
      self.t.canon()
      self.end.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.mac
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.client
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.dest
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.rand
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.t.secs, _x.t.nsecs))
      _x = self.level
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.end.secs, _x.end.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.t is None:
        self.t = genpy.Time()
      if self.end is None:
        self.end = genpy.Time()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.mac = str[start:end].decode('utf-8')
      else:
        self.mac = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.client = str[start:end].decode('utf-8')
      else:
        self.client = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.dest = str[start:end].decode('utf-8')
      else:
        self.dest = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.rand = str[start:end].decode('utf-8')
      else:
        self.rand = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.t.secs, _x.t.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.level = str[start:end].decode('utf-8')
      else:
        self.level = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.end.secs, _x.end.nsecs,) = _get_struct_2I().unpack(str[start:end])
      self.t.canon()
      self.end.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosauth/AuthenticationResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class AuthenticationResponse(genpy.Message):
  _md5sum = "7eb9cf569b3e4581e3eff49da1ca4f39"
  _type = "rosauth/AuthenticationResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# If the user has proper authentication
bool authenticated

"""
  __slots__ = ['authenticated']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       authenticated

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AuthenticationResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.authenticated is None:
        self.authenticated = False
    else:
      self.authenticated = False

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
      _x = self.authenticated
      buff.write(_get_struct_B().pack(_x))
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
      end += 1
      (self.authenticated,) = _get_struct_B().unpack(str[start:end])
      self.authenticated = bool(self.authenticated)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.authenticated
      buff.write(_get_struct_B().pack(_x))
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
      end += 1
      (self.authenticated,) = _get_struct_B().unpack(str[start:end])
      self.authenticated = bool(self.authenticated)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class Authentication(object):
  _type          = 'rosauth/Authentication'
  _md5sum = '0297b5bdd9c066699bfaf0157aad17e7'
  _request_class  = AuthenticationRequest
  _response_class = AuthenticationResponse
