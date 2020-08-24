// Generated by gencpp from file rosapi/SubscribersResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SUBSCRIBERSRESPONSE_H
#define ROSAPI_MESSAGE_SUBSCRIBERSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct SubscribersResponse_
{
  typedef SubscribersResponse_<ContainerAllocator> Type;

  SubscribersResponse_()
    : subscribers()  {
    }
  SubscribersResponse_(const ContainerAllocator& _alloc)
    : subscribers(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _subscribers_type;
  _subscribers_type subscribers;





  typedef boost::shared_ptr< ::rosapi::SubscribersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::SubscribersResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SubscribersResponse_

typedef ::rosapi::SubscribersResponse_<std::allocator<void> > SubscribersResponse;

typedef boost::shared_ptr< ::rosapi::SubscribersResponse > SubscribersResponsePtr;
typedef boost::shared_ptr< ::rosapi::SubscribersResponse const> SubscribersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::SubscribersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::SubscribersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosapi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosapi': ['/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosapi/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::SubscribersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::SubscribersResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::SubscribersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::SubscribersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::SubscribersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::SubscribersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::SubscribersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22418cab5ba9531d8c2b738b4e56153b";
  }

  static const char* value(const ::rosapi::SubscribersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22418cab5ba9531dULL;
  static const uint64_t static_value2 = 0x8c2b738b4e56153bULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::SubscribersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/SubscribersResponse";
  }

  static const char* value(const ::rosapi::SubscribersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::SubscribersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] subscribers\n\
";
  }

  static const char* value(const ::rosapi::SubscribersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::SubscribersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.subscribers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubscribersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::SubscribersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::SubscribersResponse_<ContainerAllocator>& v)
  {
    s << indent << "subscribers[]" << std::endl;
    for (size_t i = 0; i < v.subscribers.size(); ++i)
    {
      s << indent << "  subscribers[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.subscribers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SUBSCRIBERSRESPONSE_H
