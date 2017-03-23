#ifndef _CISCO_IOS_XR_SKP_QOS_OPER_1_
#define _CISCO_IOS_XR_SKP_QOS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_skp_qos_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_skp_qos_oper {


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_config; //type: string

        class Police; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police
        class Shape; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape
        class Wfq; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police : public Entity
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


        YLeaf color_aware; //type: boolean
        YLeaf policer_type; //type: TbAlgorithmEnum

        class Cir; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir
        class Cbs; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir : public Entity
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



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs : public Entity
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



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape : public Entity
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



        class Pir; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir
        class Pbs; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir : public Entity
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



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs : public Entity
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



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq : public Entity
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


        YLeaf excess_ratio; //type: uint16

        class Bandwidth; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth
        class SumOfBandwidth; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth : public Entity
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



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth : public Entity
{
    public:
        SumOfBandwidth();
        ~SumOfBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result : public Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stats_id; //type: uint32

        class Queue; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue
        class Police; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue : public Entity
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
        YLeaf commit_tx; //type: uint32
        YLeaf excess_tx; //type: uint32
        YLeaf drop; //type: uint32



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police : public Entity
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


        YLeaf token_bucket_id; //type: uint32
        YLeaf conform; //type: uint32
        YLeaf exceed; //type: uint32
        YLeaf violate; //type: uint32



}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


class PlatformQosEa::Nodes::Node::Interfaces : public Entity
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



        class Interface; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface> > interface;


}; // PlatformQosEa::Nodes::Node::Interfaces


class PlatformQosEa::Nodes::Node::Interfaces::Interface : public Entity
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

        class Output; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output
        class Input; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input> input;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output> output;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output : public Entity
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



        class Details; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details> details;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details : public Entity
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



        class Header; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header
        class InterfaceParameters; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters
        class SkywarpQosPolicyClass; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header> header;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters> interface_parameters;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header : public Entity
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


        YLeaf interface_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf direction; //type: string
        YLeaf classes; //type: uint16



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters : public Entity
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


        YLeaf policy_name; //type: string
        YLeaf hierarchical_depth; //type: uint8
        YLeaf interface_type; //type: string
        YLeaf interface_rate; //type: uint32
        YLeaf port_shaper_rate; //type: uint32
        YLeaf interface_handle; //type: string
        YLeaf under_line_interface_handle; //type: string
        YLeaf bundle_id; //type: uint16
        YLeaf uidb_index; //type: uint16
        YLeaf qos_interface_handle; //type: uint64
        YLeaf port; //type: uint32
        YLeaf policy_map_id; //type: uint16



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass : public Entity
{
    public:
        SkywarpQosPolicyClass();
        ~SkywarpQosPolicyClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class QosShowEaPclassSt; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt : public Entity
{
    public:
        QosShowEaPclassSt();
        ~QosShowEaPclassSt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint16
        YLeaf class_level; //type: uint8
        YLeaf class_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf node_flags; //type: string
        YLeaf stats_flags; //type: string

        class Config; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config
        class Result; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_config; //type: string

        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police
        class Shape; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape
        class Wfq; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police : public Entity
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


        YLeaf color_aware; //type: boolean
        YLeaf policer_type; //type: TbAlgorithmEnum

        class Cir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir
        class Cbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape : public Entity
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



        class Pir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir
        class Pbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq : public Entity
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


        YLeaf excess_ratio; //type: uint16

        class Bandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth
        class SumOfBandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth : public Entity
{
    public:
        SumOfBandwidth();
        ~SumOfBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result : public Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stats_id; //type: uint32

        class Queue; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue
        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue : public Entity
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
        YLeaf commit_tx; //type: uint32
        YLeaf excess_tx; //type: uint32
        YLeaf drop; //type: uint32



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police : public Entity
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


        YLeaf token_bucket_id; //type: uint32
        YLeaf conform; //type: uint32
        YLeaf exceed; //type: uint32
        YLeaf violate; //type: uint32



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input : public Entity
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



        class Details; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details> details;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details : public Entity
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



        class Header; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header
        class InterfaceParameters; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters
        class SkywarpQosPolicyClass; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header> header;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters> interface_parameters;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header : public Entity
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


        YLeaf interface_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf direction; //type: string
        YLeaf classes; //type: uint16



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters : public Entity
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


        YLeaf policy_name; //type: string
        YLeaf hierarchical_depth; //type: uint8
        YLeaf interface_type; //type: string
        YLeaf interface_rate; //type: uint32
        YLeaf port_shaper_rate; //type: uint32
        YLeaf interface_handle; //type: string
        YLeaf under_line_interface_handle; //type: string
        YLeaf bundle_id; //type: uint16
        YLeaf uidb_index; //type: uint16
        YLeaf qos_interface_handle; //type: uint64
        YLeaf port; //type: uint32
        YLeaf policy_map_id; //type: uint16



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass : public Entity
{
    public:
        SkywarpQosPolicyClass();
        ~SkywarpQosPolicyClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class QosShowEaPclassSt; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt : public Entity
{
    public:
        QosShowEaPclassSt();
        ~QosShowEaPclassSt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint16
        YLeaf class_level; //type: uint8
        YLeaf class_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf node_flags; //type: string
        YLeaf stats_flags; //type: string

        class Config; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config
        class Result; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_config; //type: string

        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police
        class Shape; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape
        class Wfq; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police : public Entity
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


        YLeaf color_aware; //type: boolean
        YLeaf policer_type; //type: TbAlgorithmEnum

        class Cir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir
        class Cbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape : public Entity
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



        class Pir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir
        class Pbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq : public Entity
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


        YLeaf excess_ratio; //type: uint16

        class Bandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth
        class SumOfBandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth : public Entity
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



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth : public Entity
{
    public:
        SumOfBandwidth();
        ~SumOfBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: QosUnitEnum



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result : public Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stats_id; //type: uint32

        class Queue; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue
        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police

        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
        std::shared_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue : public Entity
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
        YLeaf commit_tx; //type: uint32
        YLeaf excess_tx; //type: uint32
        YLeaf drop; //type: uint32



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police : public Entity
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


        YLeaf token_bucket_id; //type: uint32
        YLeaf conform; //type: uint32
        YLeaf exceed; //type: uint32
        YLeaf violate; //type: uint32



}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


}
}

#endif /* _CISCO_IOS_XR_SKP_QOS_OPER_1_ */

