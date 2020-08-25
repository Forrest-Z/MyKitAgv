// Generated by gencpp from file sick_safetyscanners/DataHeaderMsg.msg
// DO NOT EDIT!


#ifndef SICK_SAFETYSCANNERS_MESSAGE_DATAHEADERMSG_H
#define SICK_SAFETYSCANNERS_MESSAGE_DATAHEADERMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_safetyscanners
{
template <class ContainerAllocator>
struct DataHeaderMsg_
{
  typedef DataHeaderMsg_<ContainerAllocator> Type;

  DataHeaderMsg_()
    : version_version(0)
    , version_major_version(0)
    , version_minor_version(0)
    , version_release(0)
    , serial_number_of_device(0)
    , serial_number_of_channel_plug(0)
    , channel_number(0)
    , sequence_number(0)
    , scan_number(0)
    , timestamp_date(0)
    , timestamp_time(0)  {
    }
  DataHeaderMsg_(const ContainerAllocator& _alloc)
    : version_version(0)
    , version_major_version(0)
    , version_minor_version(0)
    , version_release(0)
    , serial_number_of_device(0)
    , serial_number_of_channel_plug(0)
    , channel_number(0)
    , sequence_number(0)
    , scan_number(0)
    , timestamp_date(0)
    , timestamp_time(0)  {
  (void)_alloc;
    }



   typedef uint8_t _version_version_type;
  _version_version_type version_version;

   typedef uint8_t _version_major_version_type;
  _version_major_version_type version_major_version;

   typedef uint8_t _version_minor_version_type;
  _version_minor_version_type version_minor_version;

   typedef uint8_t _version_release_type;
  _version_release_type version_release;

   typedef uint32_t _serial_number_of_device_type;
  _serial_number_of_device_type serial_number_of_device;

   typedef uint32_t _serial_number_of_channel_plug_type;
  _serial_number_of_channel_plug_type serial_number_of_channel_plug;

   typedef uint8_t _channel_number_type;
  _channel_number_type channel_number;

   typedef uint32_t _sequence_number_type;
  _sequence_number_type sequence_number;

   typedef uint32_t _scan_number_type;
  _scan_number_type scan_number;

   typedef uint16_t _timestamp_date_type;
  _timestamp_date_type timestamp_date;

   typedef uint32_t _timestamp_time_type;
  _timestamp_time_type timestamp_time;





  typedef boost::shared_ptr< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> const> ConstPtr;

}; // struct DataHeaderMsg_

typedef ::sick_safetyscanners::DataHeaderMsg_<std::allocator<void> > DataHeaderMsg;

typedef boost::shared_ptr< ::sick_safetyscanners::DataHeaderMsg > DataHeaderMsgPtr;
typedef boost::shared_ptr< ::sick_safetyscanners::DataHeaderMsg const> DataHeaderMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator1> & lhs, const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator2> & rhs)
{
  return lhs.version_version == rhs.version_version &&
    lhs.version_major_version == rhs.version_major_version &&
    lhs.version_minor_version == rhs.version_minor_version &&
    lhs.version_release == rhs.version_release &&
    lhs.serial_number_of_device == rhs.serial_number_of_device &&
    lhs.serial_number_of_channel_plug == rhs.serial_number_of_channel_plug &&
    lhs.channel_number == rhs.channel_number &&
    lhs.sequence_number == rhs.sequence_number &&
    lhs.scan_number == rhs.scan_number &&
    lhs.timestamp_date == rhs.timestamp_date &&
    lhs.timestamp_time == rhs.timestamp_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator1> & lhs, const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_safetyscanners

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "639f9d3c49bcb2f17e3c86d83f9746c8";
  }

  static const char* value(const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x639f9d3c49bcb2f1ULL;
  static const uint64_t static_value2 = 0x7e3c86d83f9746c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_safetyscanners/DataHeaderMsg";
  }

  static const char* value(const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 version_version\n"
"uint8 version_major_version\n"
"uint8 version_minor_version\n"
"uint8 version_release\n"
"\n"
"uint32 serial_number_of_device\n"
"uint32 serial_number_of_channel_plug\n"
"uint8 channel_number\n"
"\n"
"uint32 sequence_number\n"
"uint32 scan_number\n"
"\n"
"uint16 timestamp_date\n"
"uint32 timestamp_time\n"
;
  }

  static const char* value(const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.version_version);
      stream.next(m.version_major_version);
      stream.next(m.version_minor_version);
      stream.next(m.version_release);
      stream.next(m.serial_number_of_device);
      stream.next(m.serial_number_of_channel_plug);
      stream.next(m.channel_number);
      stream.next(m.sequence_number);
      stream.next(m.scan_number);
      stream.next(m.timestamp_date);
      stream.next(m.timestamp_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DataHeaderMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_safetyscanners::DataHeaderMsg_<ContainerAllocator>& v)
  {
    s << indent << "version_version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version_version);
    s << indent << "version_major_version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version_major_version);
    s << indent << "version_minor_version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version_minor_version);
    s << indent << "version_release: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version_release);
    s << indent << "serial_number_of_device: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.serial_number_of_device);
    s << indent << "serial_number_of_channel_plug: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.serial_number_of_channel_plug);
    s << indent << "channel_number: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel_number);
    s << indent << "sequence_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sequence_number);
    s << indent << "scan_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.scan_number);
    s << indent << "timestamp_date: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.timestamp_date);
    s << indent << "timestamp_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.timestamp_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SAFETYSCANNERS_MESSAGE_DATAHEADERMSG_H
