#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_OPER_
#define _CISCO_IOS_XR_L2_ETH_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_oper {

class MacAccounting : public Entity
{
    public:
        MacAccounting();
        ~MacAccounting();

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



        class Interfaces; //type: MacAccounting::Interfaces

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces> interfaces;


}; // MacAccounting


class MacAccounting::Interfaces : public Entity
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



        class Interface; //type: MacAccounting::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface> > interface;


}; // MacAccounting::Interfaces


class MacAccounting::Interfaces::Interface : public Entity
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

        class State; //type: MacAccounting::Interfaces::Interface::State
        class IngressStatistic; //type: MacAccounting::Interfaces::Interface::IngressStatistic
        class EgressStatistic; //type: MacAccounting::Interfaces::Interface::EgressStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::EgressStatistic> > egress_statistic;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::IngressStatistic> > ingress_statistic;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::State> state;


}; // MacAccounting::Interfaces::Interface


class MacAccounting::Interfaces::Interface::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ingress_enabled; //type: boolean
        YLeaf is_egress_enabled; //type: boolean
        YLeaf number_available_ingress; //type: uint32
        YLeaf number_available_egress; //type: uint32
        YLeaf number_available_on_node; //type: uint32



}; // MacAccounting::Interfaces::Interface::State


class MacAccounting::Interfaces::Interface::IngressStatistic : public Entity
{
    public:
        IngressStatistic();
        ~IngressStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string
        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // MacAccounting::Interfaces::Interface::IngressStatistic


class MacAccounting::Interfaces::Interface::EgressStatistic : public Entity
{
    public:
        EgressStatistic();
        ~EgressStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string
        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // MacAccounting::Interfaces::Interface::EgressStatistic

class Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

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



        class Nodes; //type: Vlan::Nodes

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes> nodes;


}; // Vlan


class Vlan::Nodes : public Entity
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



        class Node; //type: Vlan::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node> > node;


}; // Vlan::Nodes


class Vlan::Nodes::Node : public Entity
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


        YLeaf node_id; //type: string

        class Trunks; //type: Vlan::Nodes::Node::Trunks
        class Interfaces; //type: Vlan::Nodes::Node::Interfaces
        class TagAllocations; //type: Vlan::Nodes::Node::TagAllocations

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations> tag_allocations;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks> trunks;


}; // Vlan::Nodes::Node


class Vlan::Nodes::Node::Trunks : public Entity
{
    public:
        Trunks();
        ~Trunks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Trunk; //type: Vlan::Nodes::Node::Trunks::Trunk

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk> > trunk;


}; // Vlan::Nodes::Node::Trunks


class Vlan::Nodes::Node::Trunks::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_xr; //type: string
        YLeaf state; //type: ImStateEnumEnum
        YLeaf mtu; //type: uint16
        YLeaf qinq_outer_ether_type; //type: VlanQinqOuterEtypeEnum
        YLeaf dot1ad_count; //type: uint32
        YLeaf untagged_interface; //type: string
        YLeaf mac_filtering; //type: EthFilteringEnum

        class Layer2SubInterfaces; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces
        class Layer3SubInterfaces; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces> layer2_sub_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces> layer3_sub_interfaces;


}; // Vlan::Nodes::Node::Trunks::Trunk


class Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces : public Entity
{
    public:
        Layer2SubInterfaces();
        ~Layer2SubInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf dot1q_count; //type: uint32
        YLeaf qin_q_count; //type: uint32
        YLeaf qin_any_count; //type: uint32
        YLeaf untagged_count; //type: uint32

        class StateCounters; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters> state_counters;


}; // Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces


class Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters : public Entity
{
    public:
        StateCounters();
        ~StateCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf admin_down; //type: uint32



}; // Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters


class Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces : public Entity
{
    public:
        Layer3SubInterfaces();
        ~Layer3SubInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf dot1q_count; //type: uint32
        YLeaf qin_q_count; //type: uint32
        YLeaf untagged_count; //type: uint32
        YLeaf native_vlan; //type: uint16

        class StateCounters; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters> state_counters;


}; // Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces


class Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters : public Entity
{
    public:
        StateCounters();
        ~StateCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf admin_down; //type: uint32



}; // Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters


class Vlan::Nodes::Node::Interfaces : public Entity
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



        class Interface; //type: Vlan::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface> > interface;


}; // Vlan::Nodes::Node::Interfaces


class Vlan::Nodes::Node::Interfaces::Interface : public Entity
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


        YLeaf interface; //type: string
        YLeaf interface_xr; //type: string
        YLeaf parent_interface; //type: string
        YLeaf service; //type: VlanServiceEnum
        YLeaf state; //type: ImStateEnumEnum
        YLeaf mtu; //type: uint16
        YLeaf switched_mtu; //type: uint16

        class EncapsulationDetails; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails> encapsulation_details;


}; // Vlan::Nodes::Node::Interfaces::Interface


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails : public Entity
{
    public:
        EncapsulationDetails();
        ~EncapsulationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_encapsulation; //type: VlanEncapsEnum
        YLeaf tag; //type: uint16
        YLeaf outer_tag; //type: uint16
        YLeaf native_tag; //type: uint16
        YLeaf dot1ad_tag; //type: uint16
        YLeaf dot1ad_native_tag; //type: uint16
        YLeaf dot1ad_outer_tag; //type: uint16

        class Stack; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack
        class ServiceInstanceDetails; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails
        class Dot1AdDot1QStack; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack> dot1ad_dot1q_stack;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack> stack;


}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag; //type: uint16
        YLeaf second_tag; //type: uint16



}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails : public Entity
{
    public:
        ServiceInstanceDetails();
        ~ServiceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_ethertype; //type: EfpPayloadEtypeEnum
        YLeaf tags_popped; //type: uint16
        YLeaf is_exact_match; //type: boolean
        YLeaf is_native_vlan; //type: boolean
        YLeaf is_native_preserving; //type: boolean
        YLeaf source_mac_match; //type: string
        YLeaf destination_mac_match; //type: string

        class LocalTrafficStack; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack
        class TagsToMatch; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch
        class Pushe; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe> > pushe;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch> > tags_to_match;


}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack : public Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalTrafficTag; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag> > local_traffic_tag;


}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag : public Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ethertype; //type: EfpTagEtypeEnum
        YLeaf vlan_id; //type: uint16



}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch : public Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ethertype; //type: EfpTagEtypeEnum
        YLeaf priority; //type: EfpTagPriorityEnum

        class VlanRange; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange> > vlan_range;


}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_id_low; //type: uint16
        YLeaf vlan_id_high; //type: uint16



}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe : public Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ethertype; //type: EfpTagEtypeEnum
        YLeaf vlan_id; //type: uint16



}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack : public Entity
{
    public:
        Dot1AdDot1QStack();
        ~Dot1AdDot1QStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag; //type: uint16
        YLeaf second_tag; //type: uint16



}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack


class Vlan::Nodes::Node::TagAllocations : public Entity
{
    public:
        TagAllocations();
        ~TagAllocations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TagAllocation; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation> > tag_allocation;


}; // Vlan::Nodes::Node::TagAllocations


class Vlan::Nodes::Node::TagAllocations::TagAllocation : public Entity
{
    public:
        TagAllocation();
        ~TagAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf first_tag; //type: uint32
        YLeaf second_tag; //type: one of uint32, enumeration
        YLeaf interface_xr; //type: string
        YLeaf parent_interface; //type: string
        YLeaf service; //type: VlanServiceEnum
        YLeaf state; //type: ImStateEnumEnum
        YLeaf mtu; //type: uint16
        YLeaf switched_mtu; //type: uint16

        class EncapsulationDetails; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails> encapsulation_details;


}; // Vlan::Nodes::Node::TagAllocations::TagAllocation


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails : public Entity
{
    public:
        EncapsulationDetails();
        ~EncapsulationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_encapsulation; //type: VlanEncapsEnum
        YLeaf tag; //type: uint16
        YLeaf outer_tag; //type: uint16
        YLeaf native_tag; //type: uint16
        YLeaf dot1ad_tag; //type: uint16
        YLeaf dot1ad_native_tag; //type: uint16
        YLeaf dot1ad_outer_tag; //type: uint16

        class Stack; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack
        class ServiceInstanceDetails; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails
        class Dot1AdDot1QStack; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack> dot1ad_dot1q_stack;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack> stack;


}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag; //type: uint16
        YLeaf second_tag; //type: uint16



}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails : public Entity
{
    public:
        ServiceInstanceDetails();
        ~ServiceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_ethertype; //type: EfpPayloadEtypeEnum
        YLeaf tags_popped; //type: uint16
        YLeaf is_exact_match; //type: boolean
        YLeaf is_native_vlan; //type: boolean
        YLeaf is_native_preserving; //type: boolean
        YLeaf source_mac_match; //type: string
        YLeaf destination_mac_match; //type: string

        class LocalTrafficStack; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack
        class TagsToMatch; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch
        class Pushe; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe> > pushe;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch> > tags_to_match;


}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack : public Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalTrafficTag; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag> > local_traffic_tag;


}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag : public Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ethertype; //type: EfpTagEtypeEnum
        YLeaf vlan_id; //type: uint16



}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch : public Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ethertype; //type: EfpTagEtypeEnum
        YLeaf priority; //type: EfpTagPriorityEnum

        class VlanRange; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange> > vlan_range;


}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_id_low; //type: uint16
        YLeaf vlan_id_high; //type: uint16



}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe : public Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ethertype; //type: EfpTagEtypeEnum
        YLeaf vlan_id; //type: uint16



}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack : public Entity
{
    public:
        Dot1AdDot1QStack();
        ~Dot1AdDot1QStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outer_tag; //type: uint16
        YLeaf second_tag; //type: uint16



}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack

class EthernetEncapsulation : public Entity
{
    public:
        EthernetEncapsulation();
        ~EthernetEncapsulation();

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



        class Nodes; //type: EthernetEncapsulation::Nodes

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes> nodes;


}; // EthernetEncapsulation


class EthernetEncapsulation::Nodes : public Entity
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



        class Node; //type: EthernetEncapsulation::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node> > node;


}; // EthernetEncapsulation::Nodes


class EthernetEncapsulation::Nodes::Node : public Entity
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

        class UnicastMacFilters; //type: EthernetEncapsulation::Nodes::Node::UnicastMacFilters

        std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters> unicast_mac_filters;


}; // EthernetEncapsulation::Nodes::Node


class EthernetEncapsulation::Nodes::Node::UnicastMacFilters : public Entity
{
    public:
        UnicastMacFilters();
        ~UnicastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UnicastMacFilter; //type: EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter> > unicast_mac_filter;


}; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters


class EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter : public Entity
{
    public:
        UnicastMacFilter();
        ~UnicastMacFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class UnicastFilter; //type: EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter> > unicast_filter;


}; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter


class EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter : public Entity
{
    public:
        UnicastFilter();
        ~UnicastFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string
        YLeaf mode; //type: EthCapsUcastMacModeEnum



}; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter

class VlanEncapsEnum : public Enum
{
    public:
        static const Enum::YLeaf no_encapsulation;
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf qinq;
        static const Enum::YLeaf qin_any;
        static const Enum::YLeaf dot1q_native;
        static const Enum::YLeaf dot1ad;
        static const Enum::YLeaf dot1ad_native;
        static const Enum::YLeaf service_instance;
        static const Enum::YLeaf dot1ad_dot1q;
        static const Enum::YLeaf dot1ad_any;

};

class EthCapsUcastMacModeEnum : public Enum
{
    public:
        static const Enum::YLeaf reserved;
        static const Enum::YLeaf permit;

};

class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf im_state_not_ready;
        static const Enum::YLeaf im_state_admin_down;
        static const Enum::YLeaf im_state_down;
        static const Enum::YLeaf im_state_up;
        static const Enum::YLeaf im_state_shutdown;
        static const Enum::YLeaf im_state_err_disable;
        static const Enum::YLeaf im_state_down_immediate;
        static const Enum::YLeaf im_state_down_immediate_admin;
        static const Enum::YLeaf im_state_down_graceful;
        static const Enum::YLeaf im_state_begin_shutdown;
        static const Enum::YLeaf im_state_end_shutdown;
        static const Enum::YLeaf im_state_begin_error_disable;
        static const Enum::YLeaf im_state_end_error_disable;
        static const Enum::YLeaf im_state_begin_down_graceful;
        static const Enum::YLeaf im_state_reset;
        static const Enum::YLeaf im_state_operational;
        static const Enum::YLeaf im_state_not_operational;
        static const Enum::YLeaf im_state_unknown;
        static const Enum::YLeaf im_state_last;

};

class EfpTagPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf priority0;
        static const Enum::YLeaf priority1;
        static const Enum::YLeaf priority2;
        static const Enum::YLeaf priority3;
        static const Enum::YLeaf priority4;
        static const Enum::YLeaf priority5;
        static const Enum::YLeaf priority6;
        static const Enum::YLeaf priority7;
        static const Enum::YLeaf priority_any;

};

class EfpTagEtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf untagged;
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf dot1ad;

};

class VlanServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan_service_l2;
        static const Enum::YLeaf vlan_service_l3;

};

class EfpPayloadEtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf payload_ethertype_any;
        static const Enum::YLeaf payload_ethertype_ip;
        static const Enum::YLeaf payload_ethertype_pppoe;

};

class VlanQinqOuterEtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ether_type8100;
        static const Enum::YLeaf ether_type9100;
        static const Enum::YLeaf ether_type9200;

};

class EthFilteringEnum : public Enum
{
    public:
        static const Enum::YLeaf no_filtering;
        static const Enum::YLeaf dot1q_filtering;
        static const Enum::YLeaf dot1ad_filtering;
        static const Enum::YLeaf two_port_mac_relay_filtering;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_OPER_ */
