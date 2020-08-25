// Generated by gencpp from file rosapi/TopicsForTypeRequest.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_TOPICSFORTYPEREQUEST_H
#define ROSAPI_MESSAGE_TOPICSFORTYPEREQUEST_H


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
struct TopicsForTypeRequest_
{
  typedef TopicsForTypeRequest_<ContainerAllocator> Type;

  TopicsForTypeRequest_()
    : type()  {
    }
  TopicsForTypeRequest_(const ContainerAllocator& _alloc)
    : type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TopicsForTypeRequest_

typedef ::rosapi::TopicsForTypeRequest_<std::allocator<void> > TopicsForTypeRequest;

typedef boost::shared_ptr< ::rosapi::TopicsForTypeRequest > TopicsForTypeRequestPtr;
typedef boost::shared_ptr< ::rosapi::TopicsForTypeRequest const> TopicsForTypeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::TopicsForTypeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::TopicsForTypeRequest_<ContainerAllocator1> & lhs, const ::rosapi::TopicsForTypeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::TopicsForTypeRequest_<ContainerAllocator1> & lhs, const ::rosapi::TopicsForTypeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc67331de85cf97091b7d45e5c64ab75";
  }

  static const char* value(const ::rosapi::TopicsForTypeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc67331de85cf970ULL;
  static const uint64_t static_value2 = 0x91b7d45e5c64ab75ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/TopicsForTypeRequest";
  }

  static const char* value(const ::rosapi::TopicsForTypeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type\n"
;
  }

  static const char* value(const ::rosapi::TopicsForTypeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TopicsForTypeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::TopicsForTypeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::TopicsForTypeRequest_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_TOPICSFORTYPEREQUEST_H
