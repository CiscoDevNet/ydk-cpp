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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes> nodes;
        
}; // PlatformQos


class PlatformQos::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: PlatformQos::Nodes::Node

        ydk::YList node;
        
}; // PlatformQos::Nodes


class PlatformQos::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class BundleInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces
        class Interfaces; //type: PlatformQos::Nodes::Node::Interfaces
        class QosInterfaces; //type: PlatformQos::Nodes::Node::QosInterfaces
        class BundleInterfaceSingles; //type: PlatformQos::Nodes::Node::BundleInterfaceSingles
        class RemoteInterfaces; //type: PlatformQos::Nodes::Node::RemoteInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces> qos_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaceSingles> bundle_interface_singles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces> remote_interfaces;
        
}; // PlatformQos::Nodes::Node


class PlatformQos::Nodes::Node::BundleInterfaces : public ydk::Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleInterface; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface

        ydk::YList bundle_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface : public ydk::Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

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
        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf qos_direction; //type: string
        class PolicyDetails; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails
        class MemberInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces
        class ClassTable; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails> policy_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces> member_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable> class_table;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces : public ydk::Entity
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

        class MemberInterface; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface

        ydk::YList member_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface : public ydk::Entity
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
        class PolicyDetails; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails
        class ClassTable; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails> policy_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable> class_table;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable : public ydk::Entity
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

        class Class; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class : public ydk::Entity
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred : public ydk::Entity
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue : public ydk::Entity
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

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable : public ydk::Entity
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

        class Class; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class : public ydk::Entity
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred : public ydk::Entity
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue : public ydk::Entity
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

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold


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

        ydk::YList interface;
        
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
        class PolicyDetails; //type: PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails
        class Output; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output
        class ClassTable; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails> policy_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output> output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable> class_table;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface


class PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails


class PlatformQos::Nodes::Node::Interfaces::Interface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosClassTable; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable> qos_class_table;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable : public ydk::Entity
{
    public:
        QosClassTable();
        ~QosClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class : public ydk::Entity
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred : public ydk::Entity
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue : public ydk::Entity
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

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable : public ydk::Entity
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

        class Class; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class : public ydk::Entity
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred : public ydk::Entity
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue : public ydk::Entity
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

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::QosInterfaces : public ydk::Entity
{
    public:
        QosInterfaces();
        ~QosInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosInterface; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface

        ydk::YList qos_interface;
        
}; // PlatformQos::Nodes::Node::QosInterfaces


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface : public ydk::Entity
{
    public:
        QosInterface();
        ~QosInterface();

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
        class Input; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input
        class Output; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output> output;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input : public ydk::Entity
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

        class QosClassTable; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable> qos_class_table;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable : public ydk::Entity
{
    public:
        QosClassTable();
        ~QosClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class : public ydk::Entity
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred : public ydk::Entity
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
        class WredMatchValue; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue
        class ConfigMinThreshold; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold
        class ConfigMaxThreshold; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue> wred_match_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold> config_min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold> config_max_threshold;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue : public ydk::Entity
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

        class DnxQoseaShowRedMatchValue; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue

        ydk::YList dnx_qosea_show_red_match_value;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosClassTable; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable> qos_class_table;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable : public ydk::Entity
{
    public:
        QosClassTable();
        ~QosClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class

        ydk::YList class_;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class : public ydk::Entity
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
        class ConfigMaxRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate
        class ConfigMinRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit
        class ConfigPolicerAverageRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate
        class ConfigPolicerPeakRate; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate
        class ConfigPolicerConformBurst; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst
        class ConfigPolicerExcessBurst; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst
        class ConformAction; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction
        class ExceedAction; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction
        class ViolateAction; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction
        class IpMark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark
        class CommonMark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark
        class MplsMark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark
        class Wred; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate> config_max_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate> config_min_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate> config_policer_average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate> config_policer_peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst> config_policer_conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst> config_policer_excess_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction> conform_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction> exceed_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction> violate_action;
        ydk::YList ip_mark;
        ydk::YList common_mark;
        ydk::YList mpls_mark;
        ydk::YList wred;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction : public ydk::Entity
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
        class Mark; //type: PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark

        ydk::YList mark;
        
}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark


class PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark


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

class DnxQoseaShowAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf action_none;
        static const ydk::Enum::YLeaf action_transmit;
        static const ydk::Enum::YLeaf action_drop;
        static const ydk::Enum::YLeaf action_mark;

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
        static const ydk::Enum::YLeaf un_supported11;
        static const ydk::Enum::YLeaf dscp_tunnel;
        static const ydk::Enum::YLeaf precedence_tunnel;
        static const ydk::Enum::YLeaf dei;
        static const ydk::Enum::YLeaf dei_imposition;
        static const ydk::Enum::YLeaf un_supported16;
        static const ydk::Enum::YLeaf un_supported17;
        static const ydk::Enum::YLeaf traffic_class;

};

class DnxQoseaShowPolicyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_error;
        static const ydk::Enum::YLeaf policy_in_reset;

};

class DnxQoseaShowIntfStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_unknown;
        static const ydk::Enum::YLeaf state_down;

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

