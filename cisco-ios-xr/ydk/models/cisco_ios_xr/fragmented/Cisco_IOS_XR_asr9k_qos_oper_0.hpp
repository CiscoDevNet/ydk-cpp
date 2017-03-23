#ifndef _CISCO_IOS_XR_ASR9K_QOS_OPER_0_
#define _CISCO_IOS_XR_ASR9K_QOS_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_qos_oper {

class PlatformQos : public Entity
{
    public:
        PlatformQos();
        ~PlatformQos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: PlatformQos::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes> nodes;


}; // PlatformQos


class PlatformQos::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: PlatformQos::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node> > node;


}; // PlatformQos::Nodes


class PlatformQos::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class Capability; //type: PlatformQos::Nodes::Node::Capability
        class Interfaces; //type: PlatformQos::Nodes::Node::Interfaces
        class BundleInterfaces; //type: PlatformQos::Nodes::Node::BundleInterfaces

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Capability> capability;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;


}; // PlatformQos::Nodes::Node


class PlatformQos::Nodes::Node::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_policy_maps; //type: uint32
        YLeaf max_policy_hierarchy; //type: uint32
        YLeaf max_policy_name_length; //type: uint32
        YLeaf max_classes_per_child_policy; //type: uint32
        YLeaf max_classes_per_policy; //type: uint32
        YLeaf max_classes_per_grand_parent_policy; //type: uint32
        YLeaf max_police_actions_per_class; //type: uint32
        YLeaf max_marking_actions_per_class; //type: uint32
        YLeaf max_matches_per_class; //type: uint32
        YLeaf max_classmap_name_length; //type: uint32
        YLeaf max_bundle_members; //type: uint32
        YLeaf max_instance_name_length; //type: uint32



}; // PlatformQos::Nodes::Node::Capability


class PlatformQos::Nodes::Node::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: PlatformQos::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface> > interface;


}; // PlatformQos::Nodes::Node::Interfaces


class PlatformQos::Nodes::Node::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Input; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input
        class Output; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output> output;


}; // PlatformQos::Nodes::Node::Interfaces::Interface


class PlatformQos::Nodes::Node::Interfaces::Interface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Details; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details> details;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Header; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header
        class Policy; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy
        class PolicyTyphoon; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header> header;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy> policy;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon> policy_typhoon;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf classes; //type: uint16
        YLeaf policy_name; //type: string

        class InterfaceParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters
        class ProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters> interface_parameters;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth> programmed_bandwidth;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters : public Entity
{
    public:
        InterfaceParameters();
        ~InterfaceParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth
        class AncpConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth
        class AncpProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth
        class PortShaperRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth : public Entity
{
    public:
        PortConfigBandwidth();
        ~PortConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth : public Entity
{
    public:
        AncpConfigBandwidth();
        ~AncpConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth : public Entity
{
    public:
        AncpProgrammedBandwidth();
        ~AncpProgrammedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate : public Entity
{
    public:
        PortShaperRate();
        ~PortShaperRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth : public Entity
{
    public:
        ProgrammedBandwidth();
        ~ProgrammedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class QosShowEaStV1; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1 : public Entity
{
    public:
        QosShowEaStV1();
        ~QosShowEaStV1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_level; //type: uint8
        YLeaf class_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf parent_policy_name; //type: string
        YLeaf parent_class_name; //type: string

        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark> mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred> wred;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf queue_type; //type: QueueEnum
        YLeaf class_name; //type: string



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters : public Entity
{
    public:
        QueueLimitParameters();
        ~QueueLimitParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint32
        YLeaf scaling_profile_id; //type: uint32

        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit : public Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit : public Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint16

        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir> pir;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir : public Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth : public Entity
{
    public:
        ConfigBandwidth();
        ~ConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate : public Entity
{
    public:
        MinimumRate();
        ~MinimumRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs : public Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir : public Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs : public Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policer_type; //type: TbAlgorithmEnum
        YLeaf profile_id; //type: uint32

        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir : public Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs : public Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir : public Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs : public Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters : public Entity
{
    public:
        PoliceConfigParameters();
        ~PoliceConfigParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate : public Entity
{
    public:
        AverageRate();
        ~AverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate : public Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst : public Entity
{
    public:
        ConformBurst();
        ~ConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst : public Entity
{
    public:
        ExceedBurst();
        ~ExceedBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq : public Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint32
        YLeaf committed_weight; //type: uint32
        YLeaf excess_weight; //type: uint16
        YLeaf excess_ratio; //type: uint16
        YLeaf chunk_id; //type: uint32
        YLeaf level; //type: uint8

        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth : public Entity
{
    public:
        ParentBandwidth();
        ~ParentBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred : public Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: WredEnum
        YLeaf curve_xr; //type: uint16
        YLeaf table_id; //type: uint8
        YLeaf profile_id; //type: uint32
        YLeaf scaling_profile_id; //type: uint32

        class Curve; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve : public Entity
{
    public:
        Curve();
        ~Curve();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf match; //type: string

        class MinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold : public Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig : public Entity
{
    public:
        MinThresholdUserConfig();
        ~MinThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold : public Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig : public Entity
{
    public:
        MaxThresholdUserConfig();
        ~MaxThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ChildMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark : public Entity
{
    public:
        ChildMark();
        ~ChildMark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform : public Entity
{
    public:
        PoliceConform();
        ~PoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed : public Entity
{
    public:
        PoliceExceed();
        ~PoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate : public Entity
{
    public:
        PoliceViolate();
        ~PoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark : public Entity
{
    public:
        ParentMark();
        ~ParentMark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform : public Entity
{
    public:
        ParentPoliceConform();
        ~ParentPoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed : public Entity
{
    public:
        ParentPoliceExceed();
        ~ParentPoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate : public Entity
{
    public:
        ParentPoliceViolate();
        ~ParentPoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon : public Entity
{
    public:
        PolicyTyphoon();
        ~PolicyTyphoon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class QosShowEaStV2; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2 : public Entity
{
    public:
        QosShowEaStV2();
        ~QosShowEaStV2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_level; //type: uint8
        YLeaf class_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf parent_policy_name; //type: string
        YLeaf parent_class_name; //type: string

        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf queue_type; //type: QueueEnum
        YLeaf class_name; //type: string



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters : public Entity
{
    public:
        QueueLimitParameters();
        ~QueueLimitParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf absolute_index; //type: uint16
        YLeaf template_id; //type: uint16
        YLeaf curve_id; //type: uint16

        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit : public Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit : public Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cir_shape_type; //type: ShapeProfiletypeV2Enum
        YLeaf pir_shape_type; //type: ShapeProfiletypeV2Enum

        class CirShape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape
        class PirShape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape : public Entity
{
    public:
        CirShape();
        ~CirShape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf chunk_id; //type: uint32
        YLeaf profile_id; //type: uint16
        YLeaf scale_factor; //type: uint16

        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir : public Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth : public Entity
{
    public:
        ConfigBandwidth();
        ~ConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate : public Entity
{
    public:
        MinimumRate();
        ~MinimumRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs : public Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape : public Entity
{
    public:
        PirShape();
        ~PirShape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf chunk_id; //type: uint32
        YLeaf profile_id; //type: uint16
        YLeaf scale_factor; //type: uint16

        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir : public Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs : public Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policer_type; //type: TbAlgorithmEnum
        YLeaf profile_id; //type: uint32

        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir : public Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs : public Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir : public Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs : public Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters : public Entity
{
    public:
        PoliceConfigParameters();
        ~PoliceConfigParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate : public Entity
{
    public:
        AverageRate();
        ~AverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate : public Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst : public Entity
{
    public:
        ConformBurst();
        ~ConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst : public Entity
{
    public:
        ExceedBurst();
        ~ExceedBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq : public Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint32
        YLeaf committed_weight; //type: uint32
        YLeaf excess_weight; //type: uint16
        YLeaf excess_ratio; //type: uint16
        YLeaf chunk_id; //type: uint32
        YLeaf level; //type: uint8

        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth : public Entity
{
    public:
        ParentBandwidth();
        ~ParentBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred : public Entity
{
    public:
        Wred();
        ~Wred();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: WredEnum
        YLeaf curve_xr; //type: uint16

        class Curve; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve> > curve;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve : public Entity
{
    public:
        Curve();
        ~Curve();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf absolute_index; //type: uint16
        YLeaf template_id; //type: uint16
        YLeaf curve_id; //type: uint16
        YLeaf match; //type: string
        YLeaf exp_match; //type: string

        class MinThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold
        class MinThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig
        class MaxThreshold; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold
        class MaxThresholdUserConfig; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold : public Entity
{
    public:
        MinThreshold();
        ~MinThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig : public Entity
{
    public:
        MinThresholdUserConfig();
        ~MinThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold : public Entity
{
    public:
        MaxThreshold();
        ~MaxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig : public Entity
{
    public:
        MaxThresholdUserConfig();
        ~MaxThresholdUserConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark : public Entity
{
    public:
        Mark();
        ~Mark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ChildMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark
        class PoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform
        class PoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed
        class PoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate
        class ParentMark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark
        class ParentPoliceConform; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform
        class ParentPoliceExceed; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed
        class ParentPoliceViolate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark : public Entity
{
    public:
        ChildMark();
        ~ChildMark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform : public Entity
{
    public:
        PoliceConform();
        ~PoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed : public Entity
{
    public:
        PoliceExceed();
        ~PoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate : public Entity
{
    public:
        PoliceViolate();
        ~PoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark : public Entity
{
    public:
        ParentMark();
        ~ParentMark();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform : public Entity
{
    public:
        ParentPoliceConform();
        ~ParentPoliceConform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed : public Entity
{
    public:
        ParentPoliceExceed();
        ~ParentPoliceExceed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate : public Entity
{
    public:
        ParentPoliceViolate();
        ~ParentPoliceViolate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_type; //type: ActionEnum

        class MarkDetail; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


class PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail : public Entity
{
    public:
        MarkDetail();
        ~MarkDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_value; //type: uint8
        YLeaf action_opcode; //type: ActionOpcodeEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


class PlatformQos::Nodes::Node::Interfaces::Interface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Details; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details> details;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Header; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header
        class Policy; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy
        class PolicyTyphoon; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header> header;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy> policy;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon> policy_typhoon;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf classes; //type: uint16
        YLeaf policy_name; //type: string

        class InterfaceParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters
        class ProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters> interface_parameters;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth> programmed_bandwidth;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters : public Entity
{
    public:
        InterfaceParameters();
        ~InterfaceParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PortConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth
        class AncpConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth
        class AncpProgrammedBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth
        class PortShaperRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth : public Entity
{
    public:
        PortConfigBandwidth();
        ~PortConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth : public Entity
{
    public:
        AncpConfigBandwidth();
        ~AncpConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth : public Entity
{
    public:
        AncpProgrammedBandwidth();
        ~AncpProgrammedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate : public Entity
{
    public:
        PortShaperRate();
        ~PortShaperRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth : public Entity
{
    public:
        ProgrammedBandwidth();
        ~ProgrammedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class QosShowEaStV1; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1 : public Entity
{
    public:
        QosShowEaStV1();
        ~QosShowEaStV1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_level; //type: uint8
        YLeaf class_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf parent_policy_name; //type: string
        YLeaf parent_class_name; //type: string

        class Queue; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue
        class QueueLimitParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters
        class Shape; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape
        class Police; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police
        class Wfq; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq
        class Wred; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred
        class Mark; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark> mark;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police> police;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue> queue;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq> wfq;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred> wred;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_id; //type: uint32
        YLeaf queue_type; //type: QueueEnum
        YLeaf class_name; //type: string



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters : public Entity
{
    public:
        QueueLimitParameters();
        ~QueueLimitParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint32
        YLeaf scaling_profile_id; //type: uint32

        class QueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit
        class ConfigQueueLimit; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit : public Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit : public Entity
{
    public:
        ConfigQueueLimit();
        ~ConfigQueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint16

        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir
        class ConfigBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir> pir;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir : public Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth : public Entity
{
    public:
        ConfigBandwidth();
        ~ConfigBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MinimumRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate : public Entity
{
    public:
        MinimumRate();
        ~MinimumRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs : public Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir : public Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs : public Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policer_type; //type: TbAlgorithmEnum
        YLeaf profile_id; //type: uint32

        class Cir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir
        class Cbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs
        class Pir; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir
        class Pbs; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs
        class PoliceConfigParameters; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir> cir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir> pir;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir : public Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs : public Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir : public Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs : public Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters : public Entity
{
    public:
        PoliceConfigParameters();
        ~PoliceConfigParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AverageRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate
        class PeakRate; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate
        class ConformBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst
        class ExceedBurst; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate : public Entity
{
    public:
        AverageRate();
        ~AverageRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate : public Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst : public Entity
{
    public:
        ConformBurst();
        ~ConformBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst : public Entity
{
    public:
        ExceedBurst();
        ~ExceedBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq : public Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: uint32
        YLeaf committed_weight; //type: uint32
        YLeaf excess_weight; //type: uint16
        YLeaf excess_ratio; //type: uint16
        YLeaf chunk_id; //type: uint32
        YLeaf level; //type: uint8

        class ParentBandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth
        class Bandwidth; //type: PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;


}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth : public Entity
{
    public:
        ParentBandwidth();
        ~ParentBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


class PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth

class ActionOpcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf discard_class;
        static const Enum::YLeaf qos_group;
        static const Enum::YLeaf cos_inner;
        static const Enum::YLeaf cos;
        static const Enum::YLeaf exp_top;
        static const Enum::YLeaf exp_imp;
        static const Enum::YLeaf tunnel_precedence;
        static const Enum::YLeaf tunnel_dscp;
        static const Enum::YLeaf itag_dei;
        static const Enum::YLeaf itag_cos;
        static const Enum::YLeaf cos_imposition;
        static const Enum::YLeaf dei_imposition;
        static const Enum::YLeaf dei;
        static const Enum::YLeaf no_marking;

};

class WredEnum : public Enum
{
    public:
        static const Enum::YLeaf wred_cos;
        static const Enum::YLeaf wred_dscp;
        static const Enum::YLeaf wred_precedence;
        static const Enum::YLeaf wred_discard_class;
        static const Enum::YLeaf wred_mpls_exp;
        static const Enum::YLeaf red_with_user_min_max;
        static const Enum::YLeaf red_with_default_min_max;
        static const Enum::YLeaf wred_dei;

};

class TbAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf single;
        static const Enum::YLeaf single_rate_tcm;
        static const Enum::YLeaf two_rate_tcm;
        static const Enum::YLeaf mef_tcm;
        static const Enum::YLeaf dummy;

};

class PolicyParamUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf policy_param_unit_invalid;
        static const Enum::YLeaf policy_param_unit_bytes;
        static const Enum::YLeaf policy_param_unit_kbytes;
        static const Enum::YLeaf policy_param_unit_mbytes;
        static const Enum::YLeaf policy_param_unit_gbytes;
        static const Enum::YLeaf policy_param_unit_bitsps;
        static const Enum::YLeaf policy_param_unit_kbitsps;
        static const Enum::YLeaf policy_param_unit_mbitsps;
        static const Enum::YLeaf policy_param_unit_gbitsps;
        static const Enum::YLeaf policy_param_unit_cells_ps;
        static const Enum::YLeaf policy_param_unit_packets_ps;
        static const Enum::YLeaf policy_param_unit_us;
        static const Enum::YLeaf policy_param_unit_ms;
        static const Enum::YLeaf policy_param_unit_seconds;
        static const Enum::YLeaf policy_param_unit_packets;
        static const Enum::YLeaf policy_param_unit_cells;
        static const Enum::YLeaf policy_param_unit_percent;
        static const Enum::YLeaf policy_param_unit_per_thousand;
        static const Enum::YLeaf policy_param_unit_per_million;
        static const Enum::YLeaf policy_param_unit_hz;
        static const Enum::YLeaf policy_param_unit_khz;
        static const Enum::YLeaf policy_param_unit_mhz;
        static const Enum::YLeaf policy_param_unit_ratio;
        static const Enum::YLeaf policy_param_unit_max;

};

class ShapeProfiletypeV2Enum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf always;
        static const Enum::YLeaf never;
        static const Enum::YLeaf explicit_;
        static const Enum::YLeaf scale;
        static const Enum::YLeaf grid;

};

class QueueEnum : public Enum
{
    public:
        static const Enum::YLeaf port_default;
        static const Enum::YLeaf class_default;
        static const Enum::YLeaf priority1_queue;
        static const Enum::YLeaf priority2_queue;
        static const Enum::YLeaf priority3_queue;
        static const Enum::YLeaf priority4_queue;
        static const Enum::YLeaf priority5_queue;
        static const Enum::YLeaf priority6_queue;
        static const Enum::YLeaf priority7_queue;
        static const Enum::YLeaf first_p1_class_name;
        static const Enum::YLeaf first_p2_class_name;
        static const Enum::YLeaf first_p3_class_name;
        static const Enum::YLeaf first_p4_class_name;
        static const Enum::YLeaf first_p5_class_name;
        static const Enum::YLeaf first_p6_class_name;
        static const Enum::YLeaf first_p7_class_name;
        static const Enum::YLeaf port_priority1;
        static const Enum::YLeaf port_priority2;
        static const Enum::YLeaf port_priority3;
        static const Enum::YLeaf port_priority4;
        static const Enum::YLeaf port_priority5;
        static const Enum::YLeaf port_priority6;
        static const Enum::YLeaf port_priority7;
        static const Enum::YLeaf new_;
        static const Enum::YLeaf parent_class;
        static const Enum::YLeaf priority1;
        static const Enum::YLeaf priority2;
        static const Enum::YLeaf priority3;
        static const Enum::YLeaf priority4;
        static const Enum::YLeaf priority5;
        static const Enum::YLeaf priority6;
        static const Enum::YLeaf priority7;
        static const Enum::YLeaf priority_ignored_normal;
        static const Enum::YLeaf normal_priority;
        static const Enum::YLeaf class_unknown;
        static const Enum::YLeaf unknown_priority;

};

class Wred1Enum : public Enum
{
    public:
        static const Enum::YLeaf wred_cos_cmd;
        static const Enum::YLeaf wred_dscp_cmd;
        static const Enum::YLeaf wred_precedence_cmd;
        static const Enum::YLeaf wred_discard_class_cmd;
        static const Enum::YLeaf wred_mpls_exp_cmd;
        static const Enum::YLeaf red_with_user_min_max;
        static const Enum::YLeaf red_with_default_min_max;
        static const Enum::YLeaf wred_dei_cmd;
        static const Enum::YLeaf wred_ecn_cmd;
        static const Enum::YLeaf wred_invalid_cmd;

};

class ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf police_transmit;
        static const Enum::YLeaf police_set_transmit;
        static const Enum::YLeaf police_drop;
        static const Enum::YLeaf police_unknown;

};

class QosUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf bytes;
        static const Enum::YLeaf kilobytes;
        static const Enum::YLeaf megabytes;
        static const Enum::YLeaf gigabytes;
        static const Enum::YLeaf bps;
        static const Enum::YLeaf kbps;
        static const Enum::YLeaf mbps;
        static const Enum::YLeaf gbps;
        static const Enum::YLeaf cells_per_second;
        static const Enum::YLeaf packets_per_second;
        static const Enum::YLeaf microsecond;
        static const Enum::YLeaf millisecond;
        static const Enum::YLeaf packets;
        static const Enum::YLeaf cells;
        static const Enum::YLeaf percentage;
        static const Enum::YLeaf ratio;

};

class CacStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf admit;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf ubrl;

};

class PolicyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf suspended;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_QOS_OPER_0_ */

