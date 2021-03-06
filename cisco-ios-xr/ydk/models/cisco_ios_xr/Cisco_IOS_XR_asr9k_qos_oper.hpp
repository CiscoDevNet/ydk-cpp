#ifndef _CISCO_IOS_XR_ASR9K_QOS_OPER_
#define _CISCO_IOS_XR_ASR9K_QOS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_qos_oper {

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes> nodes;
        
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
        class Capability; //type: PlatformQos::Nodes::Node::Capability
        class Interfaces; //type: PlatformQos::Nodes::Node::Interfaces
        class BundleInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Capability> capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
        
}; // PlatformQos::Nodes::Node


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters


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

        ydk::YList qos_show_ea_st_v1;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark> mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq


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

        ydk::YList curve;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList qos_show_ea_st_v2;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters : public ydk::Entity
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
        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape : public ydk::Entity
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
        class CirShape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape
        class PirShape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth : public ydk::Entity
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

        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape : public ydk::Entity
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
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters : public ydk::Entity
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

        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq : public ydk::Entity
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
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred : public ydk::Entity
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
        class Curve; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve

        ydk::YList curve;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve : public ydk::Entity
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
        class MinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        
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

        ydk::YList mark_detail;
        
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


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


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

        class Details; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details> details;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details : public ydk::Entity
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

        class Header; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header
        class Policy; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy
        class PolicyTyphoon; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy> policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon> policy_typhoon;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header : public ydk::Entity
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
        class InterfaceParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters
        class ProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters> interface_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth> programmed_bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters : public ydk::Entity
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

        class PortConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth
        class AncpConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth
        class AncpProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth
        class PortShaperRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy : public ydk::Entity
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

        class QosShowEaStV1; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1

        ydk::YList qos_show_ea_st_v1;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1 : public ydk::Entity
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
        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark> mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters : public ydk::Entity
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
        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth : public ydk::Entity
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

        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters : public ydk::Entity
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

        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq : public ydk::Entity
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
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred : public ydk::Entity
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
        class Curve; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve

        ydk::YList curve;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve : public ydk::Entity
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
        class MinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark : public ydk::Entity
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

        class ChildMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon : public ydk::Entity
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

        class QosShowEaStV2; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2

        ydk::YList qos_show_ea_st_v2;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2 : public ydk::Entity
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
        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters : public ydk::Entity
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
        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape : public ydk::Entity
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
        class CirShape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape
        class PirShape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth : public ydk::Entity
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

        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape : public ydk::Entity
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
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters : public ydk::Entity
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

        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq : public ydk::Entity
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
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred : public ydk::Entity
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
        class Curve; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve

        ydk::YList curve;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve : public ydk::Entity
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
        class MinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark : public ydk::Entity
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

        class ChildMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


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
        class BundleOutput; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput
        class BundleInput; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput> bundle_output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput> bundle_input;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput : public ydk::Entity
{
    public:
        BundleOutput();
        ~BundleOutput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces> member_interfaces;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces : public ydk::Entity
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

        class MemberInterface; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface

        ydk::YList member_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface : public ydk::Entity
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
        class Details; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details> details;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details : public ydk::Entity
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

        class Header; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header
        class Policy; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy
        class PolicyTyphoon; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy> policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon> policy_typhoon;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header : public ydk::Entity
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
        class InterfaceParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters
        class ProgrammedBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters> interface_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth> programmed_bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters : public ydk::Entity
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

        class PortConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth
        class AncpConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth
        class AncpProgrammedBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth
        class PortShaperRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy : public ydk::Entity
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

        class QosShowEaStV1; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1

        ydk::YList qos_show_ea_st_v1;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1 : public ydk::Entity
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
        class Queue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape
        class Police; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police
        class Wfq; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark> mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape


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


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs


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


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq


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

        ydk::YList curve;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve


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


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark : public ydk::Entity
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

        class ChildMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


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

        ydk::YList qos_show_ea_st_v2;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq


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

        ydk::YList curve;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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

        ydk::YList mark_detail;
        
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


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput : public ydk::Entity
{
    public:
        BundleInput();
        ~BundleInput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces> member_interfaces;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces : public ydk::Entity
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

        class MemberInterface; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface

        ydk::YList member_interface;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface : public ydk::Entity
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
        class Details; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details> details;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details : public ydk::Entity
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

        class Header; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header
        class Policy; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy
        class PolicyTyphoon; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy> policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon> policy_typhoon;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header : public ydk::Entity
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
        class InterfaceParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters
        class ProgrammedBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters> interface_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth> programmed_bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters : public ydk::Entity
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

        class PortConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth
        class AncpConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth
        class AncpProgrammedBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth
        class PortShaperRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy : public ydk::Entity
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

        class QosShowEaStV1; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1

        ydk::YList qos_show_ea_st_v1;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1 : public ydk::Entity
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
        class Queue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape
        class Police; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police
        class Wfq; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark> mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters : public ydk::Entity
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
        class QueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth : public ydk::Entity
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

        class MinimumRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters : public ydk::Entity
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

        class AverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq : public ydk::Entity
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
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred : public ydk::Entity
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
        class Curve; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve

        ydk::YList curve;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve : public ydk::Entity
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
        class MinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark : public ydk::Entity
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

        class ChildMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon : public ydk::Entity
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

        class QosShowEaStV2; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2

        ydk::YList qos_show_ea_st_v2;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2 : public ydk::Entity
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
        class Queue; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape
        class Police; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police
        class Wfq; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred
        class Mark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters : public ydk::Entity
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
        class QueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape : public ydk::Entity
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
        class CirShape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape
        class PirShape; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth : public ydk::Entity
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

        class MinimumRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape : public ydk::Entity
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
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police : public ydk::Entity
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
        class Cir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters : public ydk::Entity
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

        class AverageRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq : public ydk::Entity
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
        class ParentBandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred : public ydk::Entity
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
        class Curve; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve

        ydk::YList curve;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve : public ydk::Entity
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
        class MinThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark : public ydk::Entity
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

        class ChildMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate : public ydk::Entity
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
        class MarkDetail; //type: PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail

        ydk::YList mark_detail;
        
}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail : public ydk::Entity
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

}; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail

class ActionOpcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf discard_class;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf cos_inner;
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf exp_top;
        static const ydk::Enum::YLeaf exp_imp;
        static const ydk::Enum::YLeaf tunnel_precedence;
        static const ydk::Enum::YLeaf tunnel_dscp;
        static const ydk::Enum::YLeaf itag_dei;
        static const ydk::Enum::YLeaf itag_cos;
        static const ydk::Enum::YLeaf cos_imposition;
        static const ydk::Enum::YLeaf dei_imposition;
        static const ydk::Enum::YLeaf dei;
        static const ydk::Enum::YLeaf no_marking;

        static int get_enum_value(const std::string & name) {
            if (name == "precedence") return 0;
            if (name == "dscp") return 1;
            if (name == "discard-class") return 2;
            if (name == "qos-group") return 3;
            if (name == "cos-inner") return 4;
            if (name == "cos") return 5;
            if (name == "exp-top") return 6;
            if (name == "exp-imp") return 7;
            if (name == "tunnel-precedence") return 8;
            if (name == "tunnel-dscp") return 9;
            if (name == "itag-dei") return 10;
            if (name == "itag-cos") return 11;
            if (name == "cos-imposition") return 12;
            if (name == "dei-imposition") return 13;
            if (name == "dei") return 14;
            if (name == "no-marking") return 15;
            return -1;
        }
};

class Wred : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wred_cos;
        static const ydk::Enum::YLeaf wred_dscp;
        static const ydk::Enum::YLeaf wred_precedence;
        static const ydk::Enum::YLeaf wred_discard_class;
        static const ydk::Enum::YLeaf wred_mpls_exp;
        static const ydk::Enum::YLeaf red_with_user_min_max;
        static const ydk::Enum::YLeaf red_with_default_min_max;
        static const ydk::Enum::YLeaf wred_dei;

        static int get_enum_value(const std::string & name) {
            if (name == "wred-cos") return 0;
            if (name == "wred-dscp") return 1;
            if (name == "wred-precedence") return 2;
            if (name == "wred-discard-class") return 3;
            if (name == "wred-mpls-exp") return 4;
            if (name == "red-with-user-min-max") return 5;
            if (name == "red-with-default-min-max") return 6;
            if (name == "wred-dei") return 7;
            return -1;
        }
};

class TbAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf single;
        static const ydk::Enum::YLeaf single_rate_tcm;
        static const ydk::Enum::YLeaf two_rate_tcm;
        static const ydk::Enum::YLeaf mef_tcm;
        static const ydk::Enum::YLeaf dummy;

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 0;
            if (name == "single") return 1;
            if (name == "single-rate-tcm") return 2;
            if (name == "two-rate-tcm") return 3;
            if (name == "mef-tcm") return 4;
            if (name == "dummy") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "policy-param-unit-invalid") return 0;
            if (name == "policy-param-unit-bytes") return 1;
            if (name == "policy-param-unit-kbytes") return 2;
            if (name == "policy-param-unit-mbytes") return 3;
            if (name == "policy-param-unit-gbytes") return 4;
            if (name == "policy-param-unit-bitsps") return 5;
            if (name == "policy-param-unit-kbitsps") return 6;
            if (name == "policy-param-unit-mbitsps") return 7;
            if (name == "policy-param-unit-gbitsps") return 8;
            if (name == "policy-param-unit-cells-ps") return 9;
            if (name == "policy-param-unit-packets-ps") return 10;
            if (name == "policy-param-unit-us") return 11;
            if (name == "policy-param-unit-ms") return 12;
            if (name == "policy-param-unit-seconds") return 13;
            if (name == "policy-param-unit-packets") return 14;
            if (name == "policy-param-unit-cells") return 15;
            if (name == "policy-param-unit-percent") return 16;
            if (name == "policy-param-unit-per-thousand") return 17;
            if (name == "policy-param-unit-per-million") return 18;
            if (name == "policy-param-unit-hz") return 19;
            if (name == "policy-param-unit-khz") return 20;
            if (name == "policy-param-unit-mhz") return 21;
            if (name == "policy-param-unit-ratio") return 22;
            if (name == "policy-param-unit-max") return 23;
            return -1;
        }
};

class ShapeProfiletypeV2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf scale;
        static const ydk::Enum::YLeaf grid;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "always") return 1;
            if (name == "never") return 2;
            if (name == "explicit") return 3;
            if (name == "scale") return 4;
            if (name == "grid") return 5;
            return -1;
        }
};

class Queue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_default;
        static const ydk::Enum::YLeaf class_default;
        static const ydk::Enum::YLeaf priority1_queue;
        static const ydk::Enum::YLeaf priority2_queue;
        static const ydk::Enum::YLeaf priority3_queue;
        static const ydk::Enum::YLeaf priority4_queue;
        static const ydk::Enum::YLeaf priority5_queue;
        static const ydk::Enum::YLeaf priority6_queue;
        static const ydk::Enum::YLeaf priority7_queue;
        static const ydk::Enum::YLeaf first_p1_class_name;
        static const ydk::Enum::YLeaf first_p2_class_name;
        static const ydk::Enum::YLeaf first_p3_class_name;
        static const ydk::Enum::YLeaf first_p4_class_name;
        static const ydk::Enum::YLeaf first_p5_class_name;
        static const ydk::Enum::YLeaf first_p6_class_name;
        static const ydk::Enum::YLeaf first_p7_class_name;
        static const ydk::Enum::YLeaf port_priority1;
        static const ydk::Enum::YLeaf port_priority2;
        static const ydk::Enum::YLeaf port_priority3;
        static const ydk::Enum::YLeaf port_priority4;
        static const ydk::Enum::YLeaf port_priority5;
        static const ydk::Enum::YLeaf port_priority6;
        static const ydk::Enum::YLeaf port_priority7;
        static const ydk::Enum::YLeaf new_;
        static const ydk::Enum::YLeaf parent_class;
        static const ydk::Enum::YLeaf priority1;
        static const ydk::Enum::YLeaf priority2;
        static const ydk::Enum::YLeaf priority3;
        static const ydk::Enum::YLeaf priority4;
        static const ydk::Enum::YLeaf priority5;
        static const ydk::Enum::YLeaf priority6;
        static const ydk::Enum::YLeaf priority7;
        static const ydk::Enum::YLeaf priority_ignored_normal;
        static const ydk::Enum::YLeaf normal_priority;
        static const ydk::Enum::YLeaf class_unknown;
        static const ydk::Enum::YLeaf unknown_priority;

        static int get_enum_value(const std::string & name) {
            if (name == "port-default") return 0;
            if (name == "class-default") return 1;
            if (name == "priority1-queue") return 2;
            if (name == "priority2-queue") return 3;
            if (name == "priority3-queue") return 4;
            if (name == "priority4-queue") return 5;
            if (name == "priority5-queue") return 6;
            if (name == "priority6-queue") return 7;
            if (name == "priority7-queue") return 8;
            if (name == "first-p1-class-name") return 9;
            if (name == "first-p2-class-name") return 10;
            if (name == "first-p3-class-name") return 11;
            if (name == "first-p4-class-name") return 12;
            if (name == "first-p5-class-name") return 13;
            if (name == "first-p6-class-name") return 14;
            if (name == "first-p7-class-name") return 15;
            if (name == "port-priority1") return 16;
            if (name == "port-priority2") return 17;
            if (name == "port-priority3") return 18;
            if (name == "port-priority4") return 19;
            if (name == "port-priority5") return 20;
            if (name == "port-priority6") return 21;
            if (name == "port-priority7") return 22;
            if (name == "new") return 23;
            if (name == "parent-class") return 24;
            if (name == "priority1") return 25;
            if (name == "priority2") return 26;
            if (name == "priority3") return 27;
            if (name == "priority4") return 28;
            if (name == "priority5") return 29;
            if (name == "priority6") return 30;
            if (name == "priority7") return 31;
            if (name == "priority-ignored-normal") return 32;
            if (name == "normal-priority") return 33;
            if (name == "class-unknown") return 34;
            if (name == "unknown-priority") return 35;
            return -1;
        }
};

class Wred1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wred_cos_cmd;
        static const ydk::Enum::YLeaf wred_dscp_cmd;
        static const ydk::Enum::YLeaf wred_precedence_cmd;
        static const ydk::Enum::YLeaf wred_discard_class_cmd;
        static const ydk::Enum::YLeaf wred_mpls_exp_cmd;
        static const ydk::Enum::YLeaf red_with_user_min_max;
        static const ydk::Enum::YLeaf red_with_default_min_max;
        static const ydk::Enum::YLeaf wred_dei_cmd;
        static const ydk::Enum::YLeaf wred_ecn_cmd;
        static const ydk::Enum::YLeaf wred_invalid_cmd;

        static int get_enum_value(const std::string & name) {
            if (name == "wred-cos-cmd") return 0;
            if (name == "wred-dscp-cmd") return 1;
            if (name == "wred-precedence-cmd") return 2;
            if (name == "wred-discard-class-cmd") return 3;
            if (name == "wred-mpls-exp-cmd") return 4;
            if (name == "red-with-user-min-max") return 5;
            if (name == "red-with-default-min-max") return 6;
            if (name == "wred-dei-cmd") return 7;
            if (name == "wred-ecn-cmd") return 8;
            if (name == "wred-invalid-cmd") return 9;
            return -1;
        }
};

class Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf police_transmit;
        static const ydk::Enum::YLeaf police_set_transmit;
        static const ydk::Enum::YLeaf police_drop;
        static const ydk::Enum::YLeaf police_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "police-transmit") return 0;
            if (name == "police-set-transmit") return 1;
            if (name == "police-drop") return 2;
            if (name == "police-unknown") return 3;
            return -1;
        }
};

class QosUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf kilobytes;
        static const ydk::Enum::YLeaf megabytes;
        static const ydk::Enum::YLeaf gigabytes;
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;
        static const ydk::Enum::YLeaf cells_per_second;
        static const ydk::Enum::YLeaf packets_per_second;
        static const ydk::Enum::YLeaf microsecond;
        static const ydk::Enum::YLeaf millisecond;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf cells;
        static const ydk::Enum::YLeaf percentage;
        static const ydk::Enum::YLeaf ratio;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "bytes") return 1;
            if (name == "kilobytes") return 2;
            if (name == "megabytes") return 3;
            if (name == "gigabytes") return 4;
            if (name == "bps") return 5;
            if (name == "kbps") return 6;
            if (name == "mbps") return 7;
            if (name == "gbps") return 8;
            if (name == "cells-per-second") return 9;
            if (name == "packets-per-second") return 10;
            if (name == "microsecond") return 11;
            if (name == "millisecond") return 12;
            if (name == "packets") return 13;
            if (name == "cells") return 14;
            if (name == "percentage") return 15;
            if (name == "ratio") return 16;
            return -1;
        }
};

class CacState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf admit;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf ubrl;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "admit") return 1;
            if (name == "redirect") return 2;
            if (name == "ubrl") return 3;
            return -1;
        }
};

class PolicyState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf suspended;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "suspended") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_QOS_OPER_ */

