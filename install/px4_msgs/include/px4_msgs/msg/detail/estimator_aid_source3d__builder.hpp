// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorAidSource3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE3D__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE3D__BUILDER_HPP_

#include "px4_msgs/msg/detail/estimator_aid_source3d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorAidSource3d_fused
{
public:
  explicit Init_EstimatorAidSource3d_fused(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorAidSource3d fused(::px4_msgs::msg::EstimatorAidSource3d::_fused_type arg)
  {
    msg_.fused = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_innovation_rejected
{
public:
  explicit Init_EstimatorAidSource3d_innovation_rejected(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_fused innovation_rejected(::px4_msgs::msg::EstimatorAidSource3d::_innovation_rejected_type arg)
  {
    msg_.innovation_rejected = std::move(arg);
    return Init_EstimatorAidSource3d_fused(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_fusion_enabled
{
public:
  explicit Init_EstimatorAidSource3d_fusion_enabled(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_innovation_rejected fusion_enabled(::px4_msgs::msg::EstimatorAidSource3d::_fusion_enabled_type arg)
  {
    msg_.fusion_enabled = std::move(arg);
    return Init_EstimatorAidSource3d_innovation_rejected(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_test_ratio
{
public:
  explicit Init_EstimatorAidSource3d_test_ratio(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_fusion_enabled test_ratio(::px4_msgs::msg::EstimatorAidSource3d::_test_ratio_type arg)
  {
    msg_.test_ratio = std::move(arg);
    return Init_EstimatorAidSource3d_fusion_enabled(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_innovation_variance
{
public:
  explicit Init_EstimatorAidSource3d_innovation_variance(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_test_ratio innovation_variance(::px4_msgs::msg::EstimatorAidSource3d::_innovation_variance_type arg)
  {
    msg_.innovation_variance = std::move(arg);
    return Init_EstimatorAidSource3d_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_innovation
{
public:
  explicit Init_EstimatorAidSource3d_innovation(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_innovation_variance innovation(::px4_msgs::msg::EstimatorAidSource3d::_innovation_type arg)
  {
    msg_.innovation = std::move(arg);
    return Init_EstimatorAidSource3d_innovation_variance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_observation_variance
{
public:
  explicit Init_EstimatorAidSource3d_observation_variance(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_innovation observation_variance(::px4_msgs::msg::EstimatorAidSource3d::_observation_variance_type arg)
  {
    msg_.observation_variance = std::move(arg);
    return Init_EstimatorAidSource3d_innovation(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_observation
{
public:
  explicit Init_EstimatorAidSource3d_observation(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_observation_variance observation(::px4_msgs::msg::EstimatorAidSource3d::_observation_type arg)
  {
    msg_.observation = std::move(arg);
    return Init_EstimatorAidSource3d_observation_variance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_time_last_fuse
{
public:
  explicit Init_EstimatorAidSource3d_time_last_fuse(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_observation time_last_fuse(::px4_msgs::msg::EstimatorAidSource3d::_time_last_fuse_type arg)
  {
    msg_.time_last_fuse = std::move(arg);
    return Init_EstimatorAidSource3d_observation(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_device_id
{
public:
  explicit Init_EstimatorAidSource3d_device_id(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_time_last_fuse device_id(::px4_msgs::msg::EstimatorAidSource3d::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_EstimatorAidSource3d_time_last_fuse(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_estimator_instance
{
public:
  explicit Init_EstimatorAidSource3d_estimator_instance(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_device_id estimator_instance(::px4_msgs::msg::EstimatorAidSource3d::_estimator_instance_type arg)
  {
    msg_.estimator_instance = std::move(arg);
    return Init_EstimatorAidSource3d_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_timestamp_sample
{
public:
  explicit Init_EstimatorAidSource3d_timestamp_sample(::px4_msgs::msg::EstimatorAidSource3d & msg)
  : msg_(msg)
  {}
  Init_EstimatorAidSource3d_estimator_instance timestamp_sample(::px4_msgs::msg::EstimatorAidSource3d::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorAidSource3d_estimator_instance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

class Init_EstimatorAidSource3d_timestamp
{
public:
  Init_EstimatorAidSource3d_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorAidSource3d_timestamp_sample timestamp(::px4_msgs::msg::EstimatorAidSource3d::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorAidSource3d_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorAidSource3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorAidSource3d>()
{
  return px4_msgs::msg::builder::Init_EstimatorAidSource3d_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE3D__BUILDER_HPP_
