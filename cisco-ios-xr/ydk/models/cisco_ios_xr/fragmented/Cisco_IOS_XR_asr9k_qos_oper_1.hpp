#ifndef _CISCO_IOS_XR_ASR9K_QOS_OPER_1_
#define _CISCO_IOS_XR_ASR9K_QOS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_asr9k_qos_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_qos_oper {


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters : public ydk::Entity
{
    public:
        PoliceConfigParameters();
        ~PoliceConfigParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
{
    public:
        AverageRate();
        ~AverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
{
    public:
        ConformBurst();
        ~ConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
{
    public:
        ExceedBurst();
        ~ExceedBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf queue_type; //type: Queue
        ydk::YLeaf class_name; //type: string

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters : public ydk::Entity
{
    public:
        QueueLimitParameters();
        ~QueueLimitParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf scaling_profile_id; //type: uint32
        class QueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit : public ydk::Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint16
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir> pir;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth : public ydk::Entity
{
    public:
        ConfigBandwidth();
        ~ConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MinimumRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate : public ydk::Entity
{
    public:
        MinimumRate();
        ~MinimumRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq : public ydk::Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf committed_weight; //type: uint32
        ydk::YLeaf excess_weight; //type: uint16
        ydk::YLeaf excess_ratio; //type: uint16
        ydk::YLeaf chunk_id; //type: uint32
        ydk::YLeaf level; //type: uint8
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth : public ydk::Entity
{
    public:
        ParentBandwidth();
        ~ParentBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Wred
        ydk::YLeaf curve_xr; //type: uint16
        ydk::YLeaf table_id; //type: uint8
        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf scaling_profile_id; //type: uint32
        class Curve; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve : public ydk::Entity
{
    public:
        Curve();
        ~Curve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf match; //type: string
        class MinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold : public ydk::Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
{
    public:
        MaxThresholdUserConfig();
        ~MaxThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold : public ydk::Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
{
    public:
        MinThresholdUserConfig();
        ~MinThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon : public ydk::Entity
{
    public:
        PolicyTyphoon();
        ~PolicyTyphoon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosShowEaStV2; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2 : public ydk::Entity
{
    public:
        QosShowEaStV2();
        ~QosShowEaStV2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_level; //type: uint8
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf parent_policy_name; //type: string
        ydk::YLeaf parent_class_name; //type: string
        class Queue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape
        class Police; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police
        class Wfq; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ChildMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark : public ydk::Entity
{
    public:
        ChildMark();
        ~ChildMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark : public ydk::Entity
{
    public:
        ParentMark();
        ~ParentMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform : public ydk::Entity
{
    public:
        ParentPoliceConform();
        ~ParentPoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed : public ydk::Entity
{
    public:
        ParentPoliceExceed();
        ~ParentPoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate : public ydk::Entity
{
    public:
        ParentPoliceViolate();
        ~ParentPoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform : public ydk::Entity
{
    public:
        PoliceConform();
        ~PoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed : public ydk::Entity
{
    public:
        PoliceExceed();
        ~PoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate : public ydk::Entity
{
    public:
        PoliceViolate();
        ~PoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policer_type; //type: TbAlgorithm
        ydk::YLeaf profile_id; //type: uint32
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters : public ydk::Entity
{
    public:
        PoliceConfigParameters();
        ~PoliceConfigParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
{
    public:
        AverageRate();
        ~AverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
{
    public:
        ConformBurst();
        ~ConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
{
    public:
        ExceedBurst();
        ~ExceedBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf queue_type; //type: Queue
        ydk::YLeaf class_name; //type: string

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters : public ydk::Entity
{
    public:
        QueueLimitParameters();
        ~QueueLimitParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf absolute_index; //type: uint16
        ydk::YLeaf template_id; //type: uint16
        ydk::YLeaf curve_id; //type: uint16
        class QueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit : public ydk::Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cir_shape_type; //type: ShapeProfiletypeV2
        ydk::YLeaf pir_shape_type; //type: ShapeProfiletypeV2
        class CirShape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape
        class PirShape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape : public ydk::Entity
{
    public:
        CirShape();
        ~CirShape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chunk_id; //type: uint32
        ydk::YLeaf profile_id; //type: uint16
        ydk::YLeaf scale_factor; //type: uint16
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth : public ydk::Entity
{
    public:
        ConfigBandwidth();
        ~ConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MinimumRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate : public ydk::Entity
{
    public:
        MinimumRate();
        ~MinimumRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape : public ydk::Entity
{
    public:
        PirShape();
        ~PirShape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chunk_id; //type: uint32
        ydk::YLeaf profile_id; //type: uint16
        ydk::YLeaf scale_factor; //type: uint16
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq : public ydk::Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf committed_weight; //type: uint32
        ydk::YLeaf excess_weight; //type: uint16
        ydk::YLeaf excess_ratio; //type: uint16
        ydk::YLeaf chunk_id; //type: uint32
        ydk::YLeaf level; //type: uint8
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth : public ydk::Entity
{
    public:
        ParentBandwidth();
        ~ParentBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Wred
        ydk::YLeaf curve_xr; //type: uint16
        class Curve; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve> > curve;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve : public ydk::Entity
{
    public:
        Curve();
        ~Curve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf absolute_index; //type: uint16
        ydk::YLeaf template_id; //type: uint16
        ydk::YLeaf curve_id; //type: uint16
        ydk::YLeaf match; //type: string
        ydk::YLeaf exp_match; //type: string
        class MinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold : public ydk::Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
{
    public:
        MaxThresholdUserConfig();
        ~MaxThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold : public ydk::Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
{
    public:
        MinThresholdUserConfig();
        ~MinThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_policy_maps; //type: uint32
        ydk::YLeaf max_policy_hierarchy; //type: uint32
        ydk::YLeaf max_policy_name_length; //type: uint32
        ydk::YLeaf max_classes_per_child_policy; //type: uint32
        ydk::YLeaf max_classes_per_policy; //type: uint32
        ydk::YLeaf max_classes_per_grand_parent_policy; //type: uint32
        ydk::YLeaf max_police_actions_per_class; //type: uint32
        ydk::YLeaf max_marking_actions_per_class; //type: uint32
        ydk::YLeaf max_matches_per_class; //type: uint32
        ydk::YLeaf max_classmap_name_length; //type: uint32
        ydk::YLeaf max_bundle_members; //type: uint32
        ydk::YLeaf max_instance_name_length; //type: uint32

}; // PlatformQos::Nodes::Node::Capability


class PlatformQos::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: PlatformQos::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface> > interface;
        
}; // PlatformQos::Nodes::Node::Interfaces


class PlatformQos::Nodes::Node::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Input; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input
        class Output; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output> output;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface


class PlatformQos::Nodes::Node::Interfaces::Interface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Details; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details> details;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header
        class Policy; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy
        class PolicyTyphoon; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy> policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon> policy_typhoon;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classes; //type: uint16
        ydk::YLeaf policy_name; //type: string
        class InterfaceParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters
        class ProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters> interface_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth> programmed_bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters : public ydk::Entity
{
    public:
        InterfaceParameters();
        ~InterfaceParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth
        class AncpConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth
        class AncpProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth
        class PortShaperRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth : public ydk::Entity
{
    public:
        AncpConfigBandwidth();
        ~AncpConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth : public ydk::Entity
{
    public:
        AncpProgrammedBandwidth();
        ~AncpProgrammedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth : public ydk::Entity
{
    public:
        PortConfigBandwidth();
        ~PortConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate : public ydk::Entity
{
    public:
        PortShaperRate();
        ~PortShaperRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth : public ydk::Entity
{
    public:
        ProgrammedBandwidth();
        ~ProgrammedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosShowEaStV1; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1 : public ydk::Entity
{
    public:
        QosShowEaStV1();
        ~QosShowEaStV1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_level; //type: uint8
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf parent_policy_name; //type: string
        ydk::YLeaf parent_class_name; //type: string
        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark> mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred> wred;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ChildMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark : public ydk::Entity
{
    public:
        ChildMark();
        ~ChildMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark : public ydk::Entity
{
    public:
        ParentMark();
        ~ParentMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform : public ydk::Entity
{
    public:
        ParentPoliceConform();
        ~ParentPoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed : public ydk::Entity
{
    public:
        ParentPoliceExceed();
        ~ParentPoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate : public ydk::Entity
{
    public:
        ParentPoliceViolate();
        ~ParentPoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform : public ydk::Entity
{
    public:
        PoliceConform();
        ~PoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed : public ydk::Entity
{
    public:
        PoliceExceed();
        ~PoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate : public ydk::Entity
{
    public:
        PoliceViolate();
        ~PoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policer_type; //type: TbAlgorithm
        ydk::YLeaf profile_id; //type: uint32
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters : public ydk::Entity
{
    public:
        PoliceConfigParameters();
        ~PoliceConfigParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
{
    public:
        AverageRate();
        ~AverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
{
    public:
        ConformBurst();
        ~ConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
{
    public:
        ExceedBurst();
        ~ExceedBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf queue_type; //type: Queue
        ydk::YLeaf class_name; //type: string

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters : public ydk::Entity
{
    public:
        QueueLimitParameters();
        ~QueueLimitParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf scaling_profile_id; //type: uint32
        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit : public ydk::Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint16
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir> pir;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth : public ydk::Entity
{
    public:
        ConfigBandwidth();
        ~ConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate : public ydk::Entity
{
    public:
        MinimumRate();
        ~MinimumRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq : public ydk::Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf committed_weight; //type: uint32
        ydk::YLeaf excess_weight; //type: uint16
        ydk::YLeaf excess_ratio; //type: uint16
        ydk::YLeaf chunk_id; //type: uint32
        ydk::YLeaf level; //type: uint8
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth : public ydk::Entity
{
    public:
        ParentBandwidth();
        ~ParentBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Wred
        ydk::YLeaf curve_xr; //type: uint16
        ydk::YLeaf table_id; //type: uint8
        ydk::YLeaf profile_id; //type: uint32
        ydk::YLeaf scaling_profile_id; //type: uint32
        class Curve; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve : public ydk::Entity
{
    public:
        Curve();
        ~Curve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf match; //type: string
        class MinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold : public ydk::Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
{
    public:
        MaxThresholdUserConfig();
        ~MaxThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold : public ydk::Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
{
    public:
        MinThresholdUserConfig();
        ~MinThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon : public ydk::Entity
{
    public:
        PolicyTyphoon();
        ~PolicyTyphoon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosShowEaStV2; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2 : public ydk::Entity
{
    public:
        QosShowEaStV2();
        ~QosShowEaStV2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_level; //type: uint8
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf parent_policy_name; //type: string
        ydk::YLeaf parent_class_name; //type: string
        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ChildMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark : public ydk::Entity
{
    public:
        ChildMark();
        ~ChildMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark : public ydk::Entity
{
    public:
        ParentMark();
        ~ParentMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform : public ydk::Entity
{
    public:
        ParentPoliceConform();
        ~ParentPoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed : public ydk::Entity
{
    public:
        ParentPoliceExceed();
        ~ParentPoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_value; //type: uint8
        ydk::YLeaf action_opcode; //type: ActionOpcode

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate : public ydk::Entity
{
    public:
        ParentPoliceViolate();
        ~ParentPoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: Action
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


}
}

#endif /* _CISCO_IOS_XR_ASR9K_QOS_OPER_1_ */

