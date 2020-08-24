// Generated by gencpp from file rosbridge_library/TestArrayRequestResponse.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTARRAYREQUESTRESPONSE_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTARRAYREQUESTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestArrayRequestResponse_
{
  typedef TestArrayRequestResponse_<ContainerAllocator> Type;

  TestArrayRequestResponse_()
    {
    }
  TestArrayRequestResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TestArrayRequestResponse_

typedef ::rosbridge_library::TestArrayRequestResponse_<std::allocator<void> > TestArrayRequestResponse;

typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestResponse > TestArrayRequestResponsePtr;
typedef boost::shared_ptr< ::rosbridge_library::TestArrayRequestResponse const> TestArrayRequestResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'rosbridge_library': ['/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/webRos/rosbridge_suite-master/rosbridge_library/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestArrayRequestResponse";
  }

  static const char* value(const ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestArrayRequestResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosbridge_library::TestArrayRequestResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTARRAYREQUESTRESPONSE_H
