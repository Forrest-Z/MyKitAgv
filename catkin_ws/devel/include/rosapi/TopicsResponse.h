// Generated by gencpp from file rosapi/TopicsResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_TOPICSRESPONSE_H
#define ROSAPI_MESSAGE_TOPICSRESPONSE_H


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
struct TopicsResponse_
{
  typedef TopicsResponse_<ContainerAllocator> Type;

  TopicsResponse_()
    : topics()
    , types()  {
    }
  TopicsResponse_(const ContainerAllocator& _alloc)
    : topics(_alloc)
    , types(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _topics_type;
  _topics_type topics;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _types_type;
  _types_type types;





  typedef boost::shared_ptr< ::rosapi::TopicsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::TopicsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TopicsResponse_

typedef ::rosapi::TopicsResponse_<std::allocator<void> > TopicsResponse;

typedef boost::shared_ptr< ::rosapi::TopicsResponse > TopicsResponsePtr;
typedef boost::shared_ptr< ::rosapi::TopicsResponse const> TopicsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::TopicsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::TopicsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::TopicsResponse_<ContainerAllocator1> & lhs, const ::rosapi::TopicsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.topics == rhs.topics &&
    lhs.types == rhs.types;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::TopicsResponse_<ContainerAllocator1> & lhs, const ::rosapi::TopicsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::TopicsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d966d98fc333fa1f3135af765eac1ba8";
  }

  static const char* value(const ::rosapi::TopicsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd966d98fc333fa1fULL;
  static const uint64_t static_value2 = 0x3135af765eac1ba8ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::TopicsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/TopicsResponse";
  }

  static const char* value(const ::rosapi::TopicsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::TopicsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] topics\n"
"string[] types\n"
;
  }

  static const char* value(const ::rosapi::TopicsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::TopicsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topics);
      stream.next(m.types);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TopicsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::TopicsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::TopicsResponse_<ContainerAllocator>& v)
  {
    s << indent << "topics[]" << std::endl;
    for (size_t i = 0; i < v.topics.size(); ++i)
    {
      s << indent << "  topics[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topics[i]);
    }
    s << indent << "types[]" << std::endl;
    for (size_t i = 0; i < v.types.size(); ++i)
    {
      s << indent << "  types[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.types[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_TOPICSRESPONSE_H
