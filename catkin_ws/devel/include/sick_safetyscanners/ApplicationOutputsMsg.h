// Generated by gencpp from file sick_safetyscanners/ApplicationOutputsMsg.msg
// DO NOT EDIT!


#ifndef SICK_SAFETYSCANNERS_MESSAGE_APPLICATIONOUTPUTSMSG_H
#define SICK_SAFETYSCANNERS_MESSAGE_APPLICATIONOUTPUTSMSG_H


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
struct ApplicationOutputsMsg_
{
  typedef ApplicationOutputsMsg_<ContainerAllocator> Type;

  ApplicationOutputsMsg_()
    : evaluation_path_outputs_eval_out()
    , evaluation_path_outputs_is_safe()
    , evaluation_path_outputs_is_valid()
    , monitoring_case_number_outputs()
    , monitoring_case_number_outputs_flags()
    , sleep_mode_output(0)
    , sleep_mode_output_valid(false)
    , error_flag_contamination_warning(false)
    , error_flag_contamination_error(false)
    , error_flag_manipulation_error(false)
    , error_flag_glare(false)
    , error_flag_reference_contour_intruded(false)
    , error_flag_critical_error(false)
    , error_flags_are_valid(false)
    , linear_velocity_outputs_velocity_0(0)
    , linear_velocity_outputs_velocity_0_valid(false)
    , linear_velocity_outputs_velocity_0_transmitted_safely(false)
    , linear_velocity_outputs_velocity_1(0)
    , linear_velocity_outputs_velocity_1_valid(false)
    , linear_velocity_outputs_velocity_1_transmitted_safely(false)
    , resulting_velocity()
    , resulting_velocity_flags()  {
    }
  ApplicationOutputsMsg_(const ContainerAllocator& _alloc)
    : evaluation_path_outputs_eval_out(_alloc)
    , evaluation_path_outputs_is_safe(_alloc)
    , evaluation_path_outputs_is_valid(_alloc)
    , monitoring_case_number_outputs(_alloc)
    , monitoring_case_number_outputs_flags(_alloc)
    , sleep_mode_output(0)
    , sleep_mode_output_valid(false)
    , error_flag_contamination_warning(false)
    , error_flag_contamination_error(false)
    , error_flag_manipulation_error(false)
    , error_flag_glare(false)
    , error_flag_reference_contour_intruded(false)
    , error_flag_critical_error(false)
    , error_flags_are_valid(false)
    , linear_velocity_outputs_velocity_0(0)
    , linear_velocity_outputs_velocity_0_valid(false)
    , linear_velocity_outputs_velocity_0_transmitted_safely(false)
    , linear_velocity_outputs_velocity_1(0)
    , linear_velocity_outputs_velocity_1_valid(false)
    , linear_velocity_outputs_velocity_1_transmitted_safely(false)
    , resulting_velocity(_alloc)
    , resulting_velocity_flags(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _evaluation_path_outputs_eval_out_type;
  _evaluation_path_outputs_eval_out_type evaluation_path_outputs_eval_out;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _evaluation_path_outputs_is_safe_type;
  _evaluation_path_outputs_is_safe_type evaluation_path_outputs_is_safe;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _evaluation_path_outputs_is_valid_type;
  _evaluation_path_outputs_is_valid_type evaluation_path_outputs_is_valid;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _monitoring_case_number_outputs_type;
  _monitoring_case_number_outputs_type monitoring_case_number_outputs;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _monitoring_case_number_outputs_flags_type;
  _monitoring_case_number_outputs_flags_type monitoring_case_number_outputs_flags;

   typedef uint8_t _sleep_mode_output_type;
  _sleep_mode_output_type sleep_mode_output;

   typedef uint8_t _sleep_mode_output_valid_type;
  _sleep_mode_output_valid_type sleep_mode_output_valid;

   typedef uint8_t _error_flag_contamination_warning_type;
  _error_flag_contamination_warning_type error_flag_contamination_warning;

   typedef uint8_t _error_flag_contamination_error_type;
  _error_flag_contamination_error_type error_flag_contamination_error;

   typedef uint8_t _error_flag_manipulation_error_type;
  _error_flag_manipulation_error_type error_flag_manipulation_error;

   typedef uint8_t _error_flag_glare_type;
  _error_flag_glare_type error_flag_glare;

   typedef uint8_t _error_flag_reference_contour_intruded_type;
  _error_flag_reference_contour_intruded_type error_flag_reference_contour_intruded;

   typedef uint8_t _error_flag_critical_error_type;
  _error_flag_critical_error_type error_flag_critical_error;

   typedef uint8_t _error_flags_are_valid_type;
  _error_flags_are_valid_type error_flags_are_valid;

   typedef int16_t _linear_velocity_outputs_velocity_0_type;
  _linear_velocity_outputs_velocity_0_type linear_velocity_outputs_velocity_0;

   typedef uint8_t _linear_velocity_outputs_velocity_0_valid_type;
  _linear_velocity_outputs_velocity_0_valid_type linear_velocity_outputs_velocity_0_valid;

   typedef uint8_t _linear_velocity_outputs_velocity_0_transmitted_safely_type;
  _linear_velocity_outputs_velocity_0_transmitted_safely_type linear_velocity_outputs_velocity_0_transmitted_safely;

   typedef int16_t _linear_velocity_outputs_velocity_1_type;
  _linear_velocity_outputs_velocity_1_type linear_velocity_outputs_velocity_1;

   typedef uint8_t _linear_velocity_outputs_velocity_1_valid_type;
  _linear_velocity_outputs_velocity_1_valid_type linear_velocity_outputs_velocity_1_valid;

   typedef uint8_t _linear_velocity_outputs_velocity_1_transmitted_safely_type;
  _linear_velocity_outputs_velocity_1_transmitted_safely_type linear_velocity_outputs_velocity_1_transmitted_safely;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _resulting_velocity_type;
  _resulting_velocity_type resulting_velocity;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _resulting_velocity_flags_type;
  _resulting_velocity_flags_type resulting_velocity_flags;





  typedef boost::shared_ptr< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> const> ConstPtr;

}; // struct ApplicationOutputsMsg_

typedef ::sick_safetyscanners::ApplicationOutputsMsg_<std::allocator<void> > ApplicationOutputsMsg;

typedef boost::shared_ptr< ::sick_safetyscanners::ApplicationOutputsMsg > ApplicationOutputsMsgPtr;
typedef boost::shared_ptr< ::sick_safetyscanners::ApplicationOutputsMsg const> ApplicationOutputsMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sick_safetyscanners

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'sick_safetyscanners': ['/home/nhamtung/TungNV/MyKitAgv/catkin_ws/src/sick_safetyscanners-master/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04afaf34d19dee3d3399e6f11d12df15";
  }

  static const char* value(const ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04afaf34d19dee3dULL;
  static const uint64_t static_value2 = 0x3399e6f11d12df15ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_safetyscanners/ApplicationOutputsMsg";
  }

  static const char* value(const ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool[] evaluation_path_outputs_eval_out\n\
bool[] evaluation_path_outputs_is_safe\n\
bool[] evaluation_path_outputs_is_valid\n\
\n\
uint16[] monitoring_case_number_outputs \n\
bool[] monitoring_case_number_outputs_flags\n\
\n\
uint8 sleep_mode_output\n\
bool sleep_mode_output_valid\n\
\n\
bool error_flag_contamination_warning\n\
bool error_flag_contamination_error\n\
bool error_flag_manipulation_error\n\
bool error_flag_glare\n\
bool error_flag_reference_contour_intruded\n\
bool error_flag_critical_error\n\
bool error_flags_are_valid\n\
\n\
\n\
int16 linear_velocity_outputs_velocity_0\n\
bool linear_velocity_outputs_velocity_0_valid\n\
bool linear_velocity_outputs_velocity_0_transmitted_safely\n\
\n\
int16 linear_velocity_outputs_velocity_1\n\
bool linear_velocity_outputs_velocity_1_valid\n\
bool linear_velocity_outputs_velocity_1_transmitted_safely\n\
\n\
int16[] resulting_velocity\n\
bool[] resulting_velocity_flags\n\
\n\
 \n\
";
  }

  static const char* value(const ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.evaluation_path_outputs_eval_out);
      stream.next(m.evaluation_path_outputs_is_safe);
      stream.next(m.evaluation_path_outputs_is_valid);
      stream.next(m.monitoring_case_number_outputs);
      stream.next(m.monitoring_case_number_outputs_flags);
      stream.next(m.sleep_mode_output);
      stream.next(m.sleep_mode_output_valid);
      stream.next(m.error_flag_contamination_warning);
      stream.next(m.error_flag_contamination_error);
      stream.next(m.error_flag_manipulation_error);
      stream.next(m.error_flag_glare);
      stream.next(m.error_flag_reference_contour_intruded);
      stream.next(m.error_flag_critical_error);
      stream.next(m.error_flags_are_valid);
      stream.next(m.linear_velocity_outputs_velocity_0);
      stream.next(m.linear_velocity_outputs_velocity_0_valid);
      stream.next(m.linear_velocity_outputs_velocity_0_transmitted_safely);
      stream.next(m.linear_velocity_outputs_velocity_1);
      stream.next(m.linear_velocity_outputs_velocity_1_valid);
      stream.next(m.linear_velocity_outputs_velocity_1_transmitted_safely);
      stream.next(m.resulting_velocity);
      stream.next(m.resulting_velocity_flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ApplicationOutputsMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_safetyscanners::ApplicationOutputsMsg_<ContainerAllocator>& v)
  {
    s << indent << "evaluation_path_outputs_eval_out[]" << std::endl;
    for (size_t i = 0; i < v.evaluation_path_outputs_eval_out.size(); ++i)
    {
      s << indent << "  evaluation_path_outputs_eval_out[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.evaluation_path_outputs_eval_out[i]);
    }
    s << indent << "evaluation_path_outputs_is_safe[]" << std::endl;
    for (size_t i = 0; i < v.evaluation_path_outputs_is_safe.size(); ++i)
    {
      s << indent << "  evaluation_path_outputs_is_safe[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.evaluation_path_outputs_is_safe[i]);
    }
    s << indent << "evaluation_path_outputs_is_valid[]" << std::endl;
    for (size_t i = 0; i < v.evaluation_path_outputs_is_valid.size(); ++i)
    {
      s << indent << "  evaluation_path_outputs_is_valid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.evaluation_path_outputs_is_valid[i]);
    }
    s << indent << "monitoring_case_number_outputs[]" << std::endl;
    for (size_t i = 0; i < v.monitoring_case_number_outputs.size(); ++i)
    {
      s << indent << "  monitoring_case_number_outputs[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.monitoring_case_number_outputs[i]);
    }
    s << indent << "monitoring_case_number_outputs_flags[]" << std::endl;
    for (size_t i = 0; i < v.monitoring_case_number_outputs_flags.size(); ++i)
    {
      s << indent << "  monitoring_case_number_outputs_flags[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.monitoring_case_number_outputs_flags[i]);
    }
    s << indent << "sleep_mode_output: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sleep_mode_output);
    s << indent << "sleep_mode_output_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sleep_mode_output_valid);
    s << indent << "error_flag_contamination_warning: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag_contamination_warning);
    s << indent << "error_flag_contamination_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag_contamination_error);
    s << indent << "error_flag_manipulation_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag_manipulation_error);
    s << indent << "error_flag_glare: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag_glare);
    s << indent << "error_flag_reference_contour_intruded: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag_reference_contour_intruded);
    s << indent << "error_flag_critical_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flag_critical_error);
    s << indent << "error_flags_are_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_flags_are_valid);
    s << indent << "linear_velocity_outputs_velocity_0: ";
    Printer<int16_t>::stream(s, indent + "  ", v.linear_velocity_outputs_velocity_0);
    s << indent << "linear_velocity_outputs_velocity_0_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.linear_velocity_outputs_velocity_0_valid);
    s << indent << "linear_velocity_outputs_velocity_0_transmitted_safely: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.linear_velocity_outputs_velocity_0_transmitted_safely);
    s << indent << "linear_velocity_outputs_velocity_1: ";
    Printer<int16_t>::stream(s, indent + "  ", v.linear_velocity_outputs_velocity_1);
    s << indent << "linear_velocity_outputs_velocity_1_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.linear_velocity_outputs_velocity_1_valid);
    s << indent << "linear_velocity_outputs_velocity_1_transmitted_safely: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.linear_velocity_outputs_velocity_1_transmitted_safely);
    s << indent << "resulting_velocity[]" << std::endl;
    for (size_t i = 0; i < v.resulting_velocity.size(); ++i)
    {
      s << indent << "  resulting_velocity[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.resulting_velocity[i]);
    }
    s << indent << "resulting_velocity_flags[]" << std::endl;
    for (size_t i = 0; i < v.resulting_velocity_flags.size(); ++i)
    {
      s << indent << "  resulting_velocity_flags[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.resulting_velocity_flags[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SAFETYSCANNERS_MESSAGE_APPLICATIONOUTPUTSMSG_H
