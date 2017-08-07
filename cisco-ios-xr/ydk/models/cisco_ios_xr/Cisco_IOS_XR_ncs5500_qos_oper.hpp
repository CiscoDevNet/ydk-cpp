#ifndef _CISCO_IOS_XR_NCS5500_QOS_OPER_
#define _CISCO_IOS_XR_NCS5500_QOS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_qos_oper {

class PlatformQos : public ydk::Entity
{
    public:
        PlatformQos();
        ~PlatformQos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: PlatformQos::Nodes

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes> nodes;
        
}; // PlatformQos


class PlatformQos::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: PlatformQos::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node> > node;
        
}; // PlatformQos::Nodes


class PlatformQos::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class BundleInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces
        class Interfaces; //type: PlatformQos::Nodes::Node::Interfaces
        class RemoteInterfaces; //type: PlatformQos::Nodes::Node::RemoteInterfaces

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces> remote_interfaces;
        
}; // PlatformQos::Nodes::Node


class PlatformQos::Nodes::Node::BundleInterfaces : public ydk::Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleInterface; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface : public ydk::Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf npu_id; //type: int32
        ydk::YLeaf qos_direction; //type: string
        class MemberInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces
        class PolicyDetails; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails
        class Classes; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces> member_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails> policy_details;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces : public ydk::Entity
{
    public:
        MemberInterfaces();
        ~MemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberInterface; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface> > member_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class PolicyDetails; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails
        class Classes; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails> policy_details;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails : public ydk::Entity
{
    public:
        PolicyDetails();
        ~PolicyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class_; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_> > class_;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark> > common_mark;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate> config_max_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate> config_min_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction> conform_action;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction> exceed_action;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark> > ip_mark;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark> > mpls_mark;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction> violate_action;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred> > wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate : public ydk::Entity
{
    public:
        ConfigMaxRate();
        ~ConfigMaxRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate : public ydk::Entity
{
    public:
        ConfigMinRate();
        ~ConfigMinRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit : public ydk::Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate : public ydk::Entity
{
    public:
        ConfigPolicerAverageRate();
        ~ConfigPolicerAverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate : public ydk::Entity
{
    public:
        ConfigPolicerPeakRate();
        ~ConfigPolicerPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst : public ydk::Entity
{
    public:
        ConfigPolicerConformBurst();
        ~ConfigPolicerConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst : public ydk::Entity
{
    public:
        ConfigPolicerExcessBurst();
        ~ConfigPolicerExcessBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark : public ydk::Entity
{
    public:
        IpMark();
        ~IpMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark : public ydk::Entity
{
    public:
        CommonMark();
        ~CommonMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark : public ydk::Entity
{
    public:
        MplsMark();
        ~MplsMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold> config_max_threshold;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue> wred_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue : public ydk::Entity
{
    public:
        WredMatchValue();
        ~WredMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue> > dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
{
    public:
        DnxQoseaShowRedMatchValue();
        ~DnxQoseaShowRedMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint8
        ydk::YLeaf range_end; //type: uint8

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold : public ydk::Entity
{
    public:
        ConfigMinThreshold();
        ~ConfigMinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold : public ydk::Entity
{
    public:
        ConfigMaxThreshold();
        ~ConfigMaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails : public ydk::Entity
{
    public:
        PolicyDetails();
        ~PolicyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class_; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_> > class_;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark> > common_mark;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate> config_max_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate> config_min_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction> conform_action;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction> exceed_action;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark> > ip_mark;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark> > mpls_mark;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction> violate_action;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred> > wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate : public ydk::Entity
{
    public:
        ConfigMaxRate();
        ~ConfigMaxRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate : public ydk::Entity
{
    public:
        ConfigMinRate();
        ~ConfigMinRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit : public ydk::Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate : public ydk::Entity
{
    public:
        ConfigPolicerAverageRate();
        ~ConfigPolicerAverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate : public ydk::Entity
{
    public:
        ConfigPolicerPeakRate();
        ~ConfigPolicerPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst : public ydk::Entity
{
    public:
        ConfigPolicerConformBurst();
        ~ConfigPolicerConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst : public ydk::Entity
{
    public:
        ConfigPolicerExcessBurst();
        ~ConfigPolicerExcessBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark : public ydk::Entity
{
    public:
        IpMark();
        ~IpMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark : public ydk::Entity
{
    public:
        CommonMark();
        ~CommonMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark : public ydk::Entity
{
    public:
        MplsMark();
        ~MplsMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold> config_max_threshold;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue> wred_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue : public ydk::Entity
{
    public:
        WredMatchValue();
        ~WredMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue> > dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
{
    public:
        DnxQoseaShowRedMatchValue();
        ~DnxQoseaShowRedMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint8
        ydk::YLeaf range_end; //type: uint8

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold : public ydk::Entity
{
    public:
        ConfigMinThreshold();
        ~ConfigMinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold : public ydk::Entity
{
    public:
        ConfigMaxThreshold();
        ~ConfigMaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: PlatformQos::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface> > interface;
        
}; // PlatformQos::Nodes::Node::Interfaces


class PlatformQos::Nodes::Node::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf qos_direction; //type: string
        class PolicyDetails; //type: PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails
        class Classes; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails> policy_details;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface


class PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails : public ydk::Entity
{
    public:
        PolicyDetails();
        ~PolicyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class_; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_> > class_;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark> > common_mark;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate> config_max_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate> config_min_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction> conform_action;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction> exceed_action;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark> > ip_mark;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark> > mpls_mark;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction> violate_action;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred> > wred;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate : public ydk::Entity
{
    public:
        ConfigMaxRate();
        ~ConfigMaxRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate : public ydk::Entity
{
    public:
        ConfigMinRate();
        ~ConfigMinRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit : public ydk::Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate : public ydk::Entity
{
    public:
        ConfigPolicerAverageRate();
        ~ConfigPolicerAverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate : public ydk::Entity
{
    public:
        ConfigPolicerPeakRate();
        ~ConfigPolicerPeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst : public ydk::Entity
{
    public:
        ConfigPolicerConformBurst();
        ~ConfigPolicerConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst : public ydk::Entity
{
    public:
        ConfigPolicerExcessBurst();
        ~ConfigPolicerExcessBurst();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction : public ydk::Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction : public ydk::Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction : public ydk::Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action_type; //type: DnxQoseaShowAction
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark> > mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark : public ydk::Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark : public ydk::Entity
{
    public:
        IpMark();
        ~IpMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark : public ydk::Entity
{
    public:
        CommonMark();
        ~CommonMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark : public ydk::Entity
{
    public:
        MplsMark();
        ~MplsMark();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mark_type; //type: DnxQoseaShowMark
        ydk::YLeaf mark_value; //type: uint16

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold

        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold> config_max_threshold;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue> wred_match_value;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue : public ydk::Entity
{
    public:
        WredMatchValue();
        ~WredMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue> > dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
{
    public:
        DnxQoseaShowRedMatchValue();
        ~DnxQoseaShowRedMatchValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint8
        ydk::YLeaf range_end; //type: uint8

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold : public ydk::Entity
{
    public:
        ConfigMinThreshold();
        ~ConfigMinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold : public ydk::Entity
{
    public:
        ConfigMaxThreshold();
        ~ConfigMaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_value; //type: uint32
        ydk::YLeaf policy_unit; //type: PolicyParamUnit

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::RemoteInterfaces : public ydk::Entity
{
    public:
        RemoteInterfaces();
        ~RemoteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteInterface; //type: PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface> > remote_interface;
        
}; // PlatformQos::Nodes::Node::RemoteInterfaces


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass> > remote_class;
        
}; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass : public ydk::Entity
{
    public:
        RemoteClass();
        ~RemoteClass();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred> > hw_wred;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred> > wred;
        
}; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass


class PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred : public ydk::Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

class DnxQoseaShowIntfStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_unknown;
        static const ydk::Enum::YLeaf state_down;

};

class DnxQoseaShowPolicyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_error;
        static const ydk::Enum::YLeaf policy_in_reset;

};

class DnxQoseaShowLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level3;
        static const ydk::Enum::YLeaf level4;
        static const ydk::Enum::YLeaf level5;

};

class DnxQoseaShowHpLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_priority_level1;
        static const ydk::Enum::YLeaf high_priority_level2;
        static const ydk::Enum::YLeaf high_priority_level3;
        static const ydk::Enum::YLeaf high_priority_level4;
        static const ydk::Enum::YLeaf high_priority_level5;
        static const ydk::Enum::YLeaf high_priority_level6;
        static const ydk::Enum::YLeaf high_priority_level7;
        static const ydk::Enum::YLeaf unknown;

};

class DnxQoseaShowWred : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wred_cos;
        static const ydk::Enum::YLeaf wred_dscp;
        static const ydk::Enum::YLeaf wred_precedence;
        static const ydk::Enum::YLeaf wred_discard_class;
        static const ydk::Enum::YLeaf wred_mpls_exp;
        static const ydk::Enum::YLeaf red_with_user_min_max;
        static const ydk::Enum::YLeaf red_with_default_min_max;
        static const ydk::Enum::YLeaf wred_invalid;

};

class PolicyParamUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_param_unit_invalid;
        static const ydk::Enum::YLeaf policy_param_unit_bytes;
        static const ydk::Enum::YLeaf policy_param_unit_kbytes;
        static const ydk::Enum::YLeaf policy_param_unit_mbytes;
        static const ydk::Enum::YLeaf policy_param_unit_gbytes;
        static const ydk::Enum::YLeaf policy_param_unit_bitsps;
        static const ydk::Enum::YLeaf policy_param_unit_kbitsps;
        static const ydk::Enum::YLeaf policy_param_unit_mbitsps;
        static const ydk::Enum::YLeaf policy_param_unit_gbitsps;
        static const ydk::Enum::YLeaf policy_param_unit_cells_ps;
        static const ydk::Enum::YLeaf policy_param_unit_packets_ps;
        static const ydk::Enum::YLeaf policy_param_unit_us;
        static const ydk::Enum::YLeaf policy_param_unit_ms;
        static const ydk::Enum::YLeaf policy_param_unit_seconds;
        static const ydk::Enum::YLeaf policy_param_unit_packets;
        static const ydk::Enum::YLeaf policy_param_unit_cells;
        static const ydk::Enum::YLeaf policy_param_unit_percent;
        static const ydk::Enum::YLeaf policy_param_unit_per_thousand;
        static const ydk::Enum::YLeaf policy_param_unit_per_million;
        static const ydk::Enum::YLeaf policy_param_unit_hz;
        static const ydk::Enum::YLeaf policy_param_unit_khz;
        static const ydk::Enum::YLeaf policy_param_unit_mhz;
        static const ydk::Enum::YLeaf policy_param_unit_ratio;
        static const ydk::Enum::YLeaf policy_param_unit_max;

};

class DnxQoseaShowAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf action_none;
        static const ydk::Enum::YLeaf action_transmit;
        static const ydk::Enum::YLeaf action_drop;
        static const ydk::Enum::YLeaf action_mark;

};

class QosPolicyAccountEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos_serv_policy_no_ac_count_pref;
        static const ydk::Enum::YLeaf qos_serv_policy_ac_count_l2;
        static const ydk::Enum::YLeaf qos_serv_policy_no_ac_count_l2;
        static const ydk::Enum::YLeaf qos_serv_policy_ac_count_user_def;
        static const ydk::Enum::YLeaf qos_serv_policy_ac_count_l1;

};

class DnxQoseaShowMark : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mark_none;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf mpls_topmost;
        static const ydk::Enum::YLeaf mpls_imposition;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf discard_class;
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf inner_cos;
        static const ydk::Enum::YLeaf un_supported9;
        static const ydk::Enum::YLeaf un_supported10;
        static const ydk::Enum::YLeaf dscp_tunnel;
        static const ydk::Enum::YLeaf precedence_tunnel;
        static const ydk::Enum::YLeaf dei;
        static const ydk::Enum::YLeaf dei_imposition;

};

class DnxQoseaShowQueue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low_priority_default_queue;
        static const ydk::Enum::YLeaf low_priority_queue;
        static const ydk::Enum::YLeaf high_priority_queue;
        static const ydk::Enum::YLeaf unknown_queue_type;

};


}
}

#endif /* _CISCO_IOS_XR_NCS5500_QOS_OPER_ */

