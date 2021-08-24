// Generated by gencpp from file aruco/vel.msg
// DO NOT EDIT!


#ifndef ARUCO_MESSAGE_VEL_H
#define ARUCO_MESSAGE_VEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aruco
{
template <class ContainerAllocator>
struct vel_
{
  typedef vel_<ContainerAllocator> Type;

  vel_()
    : linear_x(0.0)
    , linear_y(0.0)
    , angular_z(0.0)  {
    }
  vel_(const ContainerAllocator& _alloc)
    : linear_x(0.0)
    , linear_y(0.0)
    , angular_z(0.0)  {
  (void)_alloc;
    }



   typedef float _linear_x_type;
  _linear_x_type linear_x;

   typedef float _linear_y_type;
  _linear_y_type linear_y;

   typedef float _angular_z_type;
  _angular_z_type angular_z;





  typedef boost::shared_ptr< ::aruco::vel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aruco::vel_<ContainerAllocator> const> ConstPtr;

}; // struct vel_

typedef ::aruco::vel_<std::allocator<void> > vel;

typedef boost::shared_ptr< ::aruco::vel > velPtr;
typedef boost::shared_ptr< ::aruco::vel const> velConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aruco::vel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aruco::vel_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::aruco::vel_<ContainerAllocator1> & lhs, const ::aruco::vel_<ContainerAllocator2> & rhs)
{
  return lhs.linear_x == rhs.linear_x &&
    lhs.linear_y == rhs.linear_y &&
    lhs.angular_z == rhs.angular_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::aruco::vel_<ContainerAllocator1> & lhs, const ::aruco::vel_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace aruco

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::aruco::vel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aruco::vel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aruco::vel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aruco::vel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aruco::vel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aruco::vel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aruco::vel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ee8ad4cb7809be2d5a0a76352fea86a";
  }

  static const char* value(const ::aruco::vel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ee8ad4cb7809be2ULL;
  static const uint64_t static_value2 = 0xd5a0a76352fea86aULL;
};

template<class ContainerAllocator>
struct DataType< ::aruco::vel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aruco/vel";
  }

  static const char* value(const ::aruco::vel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aruco::vel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 linear_x\n"
"float32 linear_y\n"
"float32 angular_z\n"
;
  }

  static const char* value(const ::aruco::vel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aruco::vel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear_x);
      stream.next(m.linear_y);
      stream.next(m.angular_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aruco::vel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aruco::vel_<ContainerAllocator>& v)
  {
    s << indent << "linear_x: ";
    Printer<float>::stream(s, indent + "  ", v.linear_x);
    s << indent << "linear_y: ";
    Printer<float>::stream(s, indent + "  ", v.linear_y);
    s << indent << "angular_z: ";
    Printer<float>::stream(s, indent + "  ", v.angular_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARUCO_MESSAGE_VEL_H