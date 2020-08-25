// Generated by gencpp from file rosauth/AuthenticationResponse.msg
// DO NOT EDIT!


#ifndef ROSAUTH_MESSAGE_AUTHENTICATIONRESPONSE_H
#define ROSAUTH_MESSAGE_AUTHENTICATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosauth
{
template <class ContainerAllocator>
struct AuthenticationResponse_
{
  typedef AuthenticationResponse_<ContainerAllocator> Type;

  AuthenticationResponse_()
    : authenticated(false)  {
    }
  AuthenticationResponse_(const ContainerAllocator& _alloc)
    : authenticated(false)  {
  (void)_alloc;
    }



   typedef uint8_t _authenticated_type;
  _authenticated_type authenticated;





  typedef boost::shared_ptr< ::rosauth::AuthenticationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosauth::AuthenticationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AuthenticationResponse_

typedef ::rosauth::AuthenticationResponse_<std::allocator<void> > AuthenticationResponse;

typedef boost::shared_ptr< ::rosauth::AuthenticationResponse > AuthenticationResponsePtr;
typedef boost::shared_ptr< ::rosauth::AuthenticationResponse const> AuthenticationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosauth::AuthenticationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosauth::AuthenticationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosauth

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosauth::AuthenticationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosauth::AuthenticationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosauth::AuthenticationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7eb9cf569b3e4581e3eff49da1ca4f39";
  }

  static const char* value(const ::rosauth::AuthenticationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7eb9cf569b3e4581ULL;
  static const uint64_t static_value2 = 0xe3eff49da1ca4f39ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosauth/AuthenticationResponse";
  }

  static const char* value(const ::rosauth::AuthenticationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool authenticated\n\
\n\
";
  }

  static const char* value(const ::rosauth::AuthenticationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.authenticated);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AuthenticationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosauth::AuthenticationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosauth::AuthenticationResponse_<ContainerAllocator>& v)
  {
    s << indent << "authenticated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.authenticated);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAUTH_MESSAGE_AUTHENTICATIONRESPONSE_H
