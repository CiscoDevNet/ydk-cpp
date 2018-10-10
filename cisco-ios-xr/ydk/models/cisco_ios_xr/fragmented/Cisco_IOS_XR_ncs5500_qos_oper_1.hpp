#ifndef _CISCO_IOS_XR_NCS5500_QOS_OPER_1_
#define _CISCO_IOS_XR_NCS5500_QOS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ncs5500_qos_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_qos_oper {


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred : public ydk::Entity
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

        ydk::YLeaf wred_match_type; //type: DnxQoseaShowWred
        ydk::YLeaf hardware_min_threshold_bytes; //type: uint32
        ydk::YLeaf hardware_max_threshold_bytes; //type: uint32
        ydk::YLeaf first_segment; //type: uint16
        ydk::YLeaf segment_size; //type: uint32
        class WredMatchValue; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue : public ydk::Entity
{
    public:
        WredMatchValue();
        ~WredMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
{
    public:
        DnxQoseaShowRedMatchValue();
        ~DnxQoseaShowRedMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint8
        ydk::YLeaf range_end; //type: uint8

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
{
    public:
        ConfigMinThreshold();
        ~ConfigMinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
{
    public:
        ConfigMaxThreshold();
        ~ConfigMaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaceSingles : public ydk::Entity
{
    public:
        BundleInterfaceSingles();
        ~BundleInterfaceSingles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleInterfaceSingle; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle

        ydk::YList bundle_interface_single;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle : public ydk::Entity
{
    public:
        BundleInterfaceSingle();
        ~BundleInterfaceSingle();

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
        class PolicyDetails; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails
        class MemberInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces
        class ClassTable; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails> policy_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces> member_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable> class_table;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails : public ydk::Entity
{
    public:
        PolicyDetails();
        ~PolicyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf interface_bandwidth_kbps; //type: uint32
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf total_number_of_classes; //type: uint16
        ydk::YLeaf voq_base_address; //type: uint32
        ydk::YLeaf voq_stats_handle; //type: uint64
        ydk::YLeaf stats_accounting_type; //type: QosPolicyAccountEnum
        ydk::YLeaf policy_status; //type: DnxQoseaShowPolicyStatus
        ydk::YLeaf interface_status; //type: DnxQoseaShowIntfStatus

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::PolicyDetails


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces : public ydk::Entity
{
    public:
        MemberInterfaces();
        ~MemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberInterface; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface

        ydk::YList member_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

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
        class PolicyDetails; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails
        class ClassTable; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails> policy_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable> class_table;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails : public ydk::Entity
{
    public:
        PolicyDetails();
        ~PolicyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf interface_bandwidth_kbps; //type: uint32
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf total_number_of_classes; //type: uint16
        ydk::YLeaf voq_base_address; //type: uint32
        ydk::YLeaf voq_stats_handle; //type: uint64
        ydk::YLeaf stats_accounting_type; //type: QosPolicyAccountEnum
        ydk::YLeaf policy_status; //type: DnxQoseaShowPolicyStatus
        ydk::YLeaf interface_status; //type: DnxQoseaShowIntfStatus

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::PolicyDetails


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable : public ydk::Entity
{
    public:
        ClassTable();
        ~ClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_one_class_name; //type: string
        ydk::YLeaf level_two_class_name; //type: string
        ydk::YLeaf class_level; //type: DnxQoseaShowLevel
        ydk::YLeaf egress_queue_id; //type: int32
        ydk::YLeaf queue_type; //type: DnxQoseaShowQueue
        ydk::YLeaf priority_level; //type: DnxQoseaShowHpLevel
        ydk::YLeaf hardware_max_rate_kbps; //type: uint32
        ydk::YLeaf hardware_min_rate_kbps; //type: uint32
        ydk::YLeaf config_excess_bandwidth_percent; //type: uint32
        ydk::YLeaf config_excess_bandwidth_unit; //type: uint32
        ydk::YLeaf hardware_excess_bandwidth_weight; //type: uint32
        ydk::YLeaf network_min_bandwidth_kbps; //type: uint32
        ydk::YLeaf hardware_queue_limit_bytes; //type: uint64
        ydk::YLeaf hardware_queue_limit_microseconds; //type: uint64
        ydk::YLeaf policer_bucket_id; //type: uint32
        ydk::YLeaf policer_stats_handle; //type: uint64
        ydk::YLeaf hardware_policer_average_rate_kbps; //type: uint32
        ydk::YLeaf hardware_policer_peak_rate_kbps; //type: uint32
        ydk::YLeaf hardware_policer_conform_burst_bytes; //type: uint32
        ydk::YLeaf hardware_policer_excess_burst_bytes; //type: uint32
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate : public ydk::Entity
{
    public:
        ConfigMaxRate();
        ~ConfigMaxRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate : public ydk::Entity
{
    public:
        ConfigMinRate();
        ~ConfigMinRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
{
    public:
        ConfigPolicerAverageRate();
        ~ConfigPolicerAverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
{
    public:
        ConfigPolicerPeakRate();
        ~ConfigPolicerPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
{
    public:
        ConfigPolicerConformBurst();
        ~ConfigPolicerConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
{
    public:
        ConfigPolicerExcessBurst();
        ~ConfigPolicerExcessBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark : public ydk::Entity
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

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark : public ydk::Entity
{
    public:
        IpMark();
        ~IpMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark : public ydk::Entity
{
    public:
        CommonMark();
        ~CommonMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark : public ydk::Entity
{
    public:
        MplsMark();
        ~MplsMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred : public ydk::Entity
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

        ydk::YLeaf wred_match_type; //type: DnxQoseaShowWred
        ydk::YLeaf hardware_min_threshold_bytes; //type: uint32
        ydk::YLeaf hardware_max_threshold_bytes; //type: uint32
        ydk::YLeaf first_segment; //type: uint16
        ydk::YLeaf segment_size; //type: uint32
        class WredMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue : public ydk::Entity
{
    public:
        WredMatchValue();
        ~WredMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
{
    public:
        DnxQoseaShowRedMatchValue();
        ~DnxQoseaShowRedMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint8
        ydk::YLeaf range_end; //type: uint8

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
{
    public:
        ConfigMinThreshold();
        ~ConfigMinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
{
    public:
        ConfigMaxThreshold();
        ~ConfigMaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable : public ydk::Entity
{
    public:
        ClassTable();
        ~ClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_one_class_name; //type: string
        ydk::YLeaf level_two_class_name; //type: string
        ydk::YLeaf class_level; //type: DnxQoseaShowLevel
        ydk::YLeaf egress_queue_id; //type: int32
        ydk::YLeaf queue_type; //type: DnxQoseaShowQueue
        ydk::YLeaf priority_level; //type: DnxQoseaShowHpLevel
        ydk::YLeaf hardware_max_rate_kbps; //type: uint32
        ydk::YLeaf hardware_min_rate_kbps; //type: uint32
        ydk::YLeaf config_excess_bandwidth_percent; //type: uint32
        ydk::YLeaf config_excess_bandwidth_unit; //type: uint32
        ydk::YLeaf hardware_excess_bandwidth_weight; //type: uint32
        ydk::YLeaf network_min_bandwidth_kbps; //type: uint32
        ydk::YLeaf hardware_queue_limit_bytes; //type: uint64
        ydk::YLeaf hardware_queue_limit_microseconds; //type: uint64
        ydk::YLeaf policer_bucket_id; //type: uint32
        ydk::YLeaf policer_stats_handle; //type: uint64
        ydk::YLeaf hardware_policer_average_rate_kbps; //type: uint32
        ydk::YLeaf hardware_policer_peak_rate_kbps; //type: uint32
        ydk::YLeaf hardware_policer_conform_burst_bytes; //type: uint32
        ydk::YLeaf hardware_policer_excess_burst_bytes; //type: uint32
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate : public ydk::Entity
{
    public:
        ConfigMaxRate();
        ~ConfigMaxRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate : public ydk::Entity
{
    public:
        ConfigMinRate();
        ~ConfigMinRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
{
    public:
        ConfigPolicerAverageRate();
        ~ConfigPolicerAverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
{
    public:
        ConfigPolicerPeakRate();
        ~ConfigPolicerPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
{
    public:
        ConfigPolicerConformBurst();
        ~ConfigPolicerConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
{
    public:
        ConfigPolicerExcessBurst();
        ~ConfigPolicerExcessBurst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark : public ydk::Entity
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

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark : public ydk::Entity
{
    public:
        IpMark();
        ~IpMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::IpMark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark : public ydk::Entity
{
    public:
        CommonMark();
        ~CommonMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark : public ydk::Entity
{
    public:
        MplsMark();
        ~MplsMark();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred : public ydk::Entity
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

        ydk::YLeaf wred_match_type; //type: DnxQoseaShowWred
        ydk::YLeaf hardware_min_threshold_bytes; //type: uint32
        ydk::YLeaf hardware_max_threshold_bytes; //type: uint32
        ydk::YLeaf first_segment; //type: uint16
        ydk::YLeaf segment_size; //type: uint32
        class WredMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue : public ydk::Entity
{
    public:
        WredMatchValue();
        ~WredMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
{
    public:
        DnxQoseaShowRedMatchValue();
        ~DnxQoseaShowRedMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint8
        ydk::YLeaf range_end; //type: uint8

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
{
    public:
        ConfigMinThreshold();
        ~ConfigMinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
{
    public:
        ConfigMaxThreshold();
        ~ConfigMaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaceSingles::BundleInterfaceSingle::ClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::RemoteInterfaces : public ydk::Entity
{
    public:
        RemoteInterfaces();
        ~RemoteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteInterface; //type: PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface

        ydk::YList remote_interface;
        
}; // PlatformQos::Nodes::Node::RemoteInterfaces


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

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
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf virtual_output_queue_statistics_handle; //type: uint64
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf number_of_virtual_output_queues; //type: uint32
        ydk::YLeaf number_of_classes; //type: uint32
        class RemoteClass; //type: PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass

        ydk::YList remote_class;
        
}; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass : public ydk::Entity
{
    public:
        RemoteClass();
        ~RemoteClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf class_id; //type: uint32
        ydk::YLeaf cos_q; //type: uint32
        ydk::YLeaf queue_limit; //type: uint32
        ydk::YLeaf hardware_queue_limit; //type: uint32
        class Wred; //type: PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred
        class HwWred; //type: PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred

        ydk::YList wred;
        ydk::YList hw_wred;
        
}; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred : public ydk::Entity
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

        ydk::YLeaf min_threshold; //type: uint32
        ydk::YLeaf max_threshold; //type: uint32
        ydk::YLeaf drop_probability; //type: uint32

}; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred : public ydk::Entity
{
    public:
        HwWred();
        ~HwWred();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_threshold; //type: uint32
        ydk::YLeaf max_threshold; //type: uint32
        ydk::YLeaf drop_probability; //type: uint32

}; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred


}
}

#endif /* _CISCO_IOS_XR_NCS5500_QOS_OPER_1_ */

