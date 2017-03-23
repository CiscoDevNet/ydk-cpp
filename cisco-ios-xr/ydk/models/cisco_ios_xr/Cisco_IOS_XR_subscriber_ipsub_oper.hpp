#ifndef _CISCO_IOS_XR_SUBSCRIBER_IPSUB_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_IPSUB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_ipsub_oper {

class IpSubscriber : public Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

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



        class Nodes; //type: IpSubscriber::Nodes

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes> nodes;


}; // IpSubscriber


class IpSubscriber::Nodes : public Entity
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



        class Node; //type: IpSubscriber::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node> > node;


}; // IpSubscriber::Nodes


class IpSubscriber::Nodes::Node : public Entity
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

        class Summary; //type: IpSubscriber::Nodes::Node::Summary
        class Interfaces; //type: IpSubscriber::Nodes::Node::Interfaces
        class AccessInterfaces; //type: IpSubscriber::Nodes::Node::AccessInterfaces

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces> access_interfaces;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary> summary;


}; // IpSubscriber::Nodes::Node


class IpSubscriber::Nodes::Node::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessInterfaceSummary; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary
        class InterfaceCounts; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts
        class Vrf; //type: IpSubscriber::Nodes::Node::Summary::Vrf

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary> access_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts> interface_counts;
        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::Vrf> > vrf;


}; // IpSubscriber::Nodes::Node::Summary


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary : public Entity
{
    public:
        AccessInterfaceSummary();
        ~AccessInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interfaces; //type: uint32

        class Initiators; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators
        class Ipv6Initiators; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators> initiators;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators> ipv6_initiators;


}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators : public Entity
{
    public:
        Initiators();
        ~Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger> packet_trigger;


}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger : public Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators : public Entity
{
    public:
        Ipv6Initiators();
        ~Ipv6Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger> packet_trigger;


}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger : public Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts : public Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiators; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators
        class Ipv6Initiators; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators> initiators;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators> ipv6_initiators;


}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators : public Entity
{
    public:
        Initiators();
        ~Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger> packet_trigger;


}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf invalid; //type: uint32
        YLeaf initialized; //type: uint32
        YLeaf session_creation_started; //type: uint32
        YLeaf control_policy_executing; //type: uint32
        YLeaf control_policy_executed; //type: uint32
        YLeaf session_features_applied; //type: uint32
        YLeaf vrf_configured; //type: uint32
        YLeaf adding_adjacency; //type: uint32
        YLeaf adjacency_added; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf disconnecting; //type: uint32
        YLeaf disconnected; //type: uint32
        YLeaf error; //type: uint32
        YLeaf total_interfaces; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger : public Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf invalid; //type: uint32
        YLeaf initialized; //type: uint32
        YLeaf session_creation_started; //type: uint32
        YLeaf control_policy_executing; //type: uint32
        YLeaf control_policy_executed; //type: uint32
        YLeaf session_features_applied; //type: uint32
        YLeaf vrf_configured; //type: uint32
        YLeaf adding_adjacency; //type: uint32
        YLeaf adjacency_added; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf disconnecting; //type: uint32
        YLeaf disconnected; //type: uint32
        YLeaf error; //type: uint32
        YLeaf total_interfaces; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators : public Entity
{
    public:
        Ipv6Initiators();
        ~Ipv6Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger> packet_trigger;


}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf invalid; //type: uint32
        YLeaf initialized; //type: uint32
        YLeaf session_creation_started; //type: uint32
        YLeaf control_policy_executing; //type: uint32
        YLeaf control_policy_executed; //type: uint32
        YLeaf session_features_applied; //type: uint32
        YLeaf vrf_configured; //type: uint32
        YLeaf adding_adjacency; //type: uint32
        YLeaf adjacency_added; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf disconnecting; //type: uint32
        YLeaf disconnected; //type: uint32
        YLeaf error; //type: uint32
        YLeaf total_interfaces; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger : public Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf invalid; //type: uint32
        YLeaf initialized; //type: uint32
        YLeaf session_creation_started; //type: uint32
        YLeaf control_policy_executing; //type: uint32
        YLeaf control_policy_executed; //type: uint32
        YLeaf session_features_applied; //type: uint32
        YLeaf vrf_configured; //type: uint32
        YLeaf adding_adjacency; //type: uint32
        YLeaf adjacency_added; //type: uint32
        YLeaf up; //type: uint32
        YLeaf down; //type: uint32
        YLeaf disconnecting; //type: uint32
        YLeaf disconnected; //type: uint32
        YLeaf error; //type: uint32
        YLeaf total_interfaces; //type: uint32



}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf ipv6vrf_name; //type: string
        YLeaf interfaces; //type: uint64
        YLeaf ipv6_interfaces; //type: uint64



}; // IpSubscriber::Nodes::Node::Summary::Vrf


class IpSubscriber::Nodes::Node::Interfaces : public Entity
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



        class Interface; //type: IpSubscriber::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces::Interface> > interface;


}; // IpSubscriber::Nodes::Node::Interfaces


class IpSubscriber::Nodes::Node::Interfaces::Interface : public Entity
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
        YLeaf access_interface; //type: string
        YLeaf subscriber_ipv4_address; //type: string
        YLeaf subscriber_ipv6_address; //type: string
        YLeaf subscriber_mac_addres; //type: string
        YLeaf subscriber_label; //type: uint32
        YLeaf interface_creation_time; //type: string
        YLeaf age; //type: string
        YLeaf initiator; //type: IpsubMaIntfInitiatorDataEnum
        YLeaf state; //type: IpsubMaIntfStateDataEnum
        YLeaf old_state; //type: IpsubMaIntfStateDataEnum
        YLeaf last_state_change_time; //type: string
        YLeaf current_change_age; //type: string
        YLeaf ipv6_initiator; //type: IpsubMaIntfInitiatorDataEnum
        YLeaf ipv6_state; //type: IpsubMaIntfStateDataEnum
        YLeaf ipv6_old_state; //type: IpsubMaIntfStateDataEnum
        YLeaf ipv6_last_state_change_time; //type: string
        YLeaf ipv6_current_change_age; //type: string
        YLeaf is_l2_connected; //type: boolean
        YLeaf session_type; //type: string

        class Vrf; //type: IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf
        class Ipv6Vrf; //type: IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf> ipv6vrf;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf> vrf;


}; // IpSubscriber::Nodes::Node::Interfaces::Interface


class IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf table_name; //type: string



}; // IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf


class IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf : public Entity
{
    public:
        Ipv6Vrf();
        ~Ipv6Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf table_name; //type: string



}; // IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf


class IpSubscriber::Nodes::Node::AccessInterfaces : public Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessInterface; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface> > access_interface;


}; // IpSubscriber::Nodes::Node::AccessInterfaces


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface : public Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_creation_time; //type: string
        YLeaf age; //type: string
        YLeaf interface_type; //type: string
        YLeaf state; //type: IpsubMaParentIntfStateDataEnum
        YLeaf ipv6_state; //type: IpsubMaParentIntfStateDataEnum
        YLeaf vlan_type; //type: IpsubMaParentIntfVlanEnum

        class Initiators; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators
        class Ipv6Initiators; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators
        class SessionLimit; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators> initiators;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators> ipv6_initiators;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit> session_limit;


}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators : public Entity
{
    public:
        Initiators();
        ~Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dhcp; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger> packet_trigger;


}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf unique_ip_check; //type: boolean
        YLeaf sessions; //type: uint32
        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32
        YLeaf fsol_dropped_packets; //type: uint32
        YLeaf fsol_dropped_bytes; //type: uint32
        YLeaf fsol_dropped_packets_flow; //type: uint32
        YLeaf fsol_dropped_packets_session_limit; //type: uint32
        YLeaf fsol_dropped_packets_dup_addr; //type: uint32



}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger : public Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf unique_ip_check; //type: boolean
        YLeaf sessions; //type: uint32
        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32
        YLeaf fsol_dropped_packets; //type: uint32
        YLeaf fsol_dropped_bytes; //type: uint32
        YLeaf fsol_dropped_packets_flow; //type: uint32
        YLeaf fsol_dropped_packets_session_limit; //type: uint32
        YLeaf fsol_dropped_packets_dup_addr; //type: uint32



}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators : public Entity
{
    public:
        Ipv6Initiators();
        ~Ipv6Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dhcp; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger> packet_trigger;


}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf unique_ip_check; //type: boolean
        YLeaf sessions; //type: uint32
        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32
        YLeaf fsol_dropped_packets; //type: uint32
        YLeaf fsol_dropped_bytes; //type: uint32
        YLeaf fsol_dropped_packets_flow; //type: uint32
        YLeaf fsol_dropped_packets_session_limit; //type: uint32
        YLeaf fsol_dropped_packets_dup_addr; //type: uint32



}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger : public Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf unique_ip_check; //type: boolean
        YLeaf sessions; //type: uint32
        YLeaf fsol_packets; //type: uint32
        YLeaf fsol_bytes; //type: uint32
        YLeaf fsol_dropped_packets; //type: uint32
        YLeaf fsol_dropped_bytes; //type: uint32
        YLeaf fsol_dropped_packets_flow; //type: uint32
        YLeaf fsol_dropped_packets_session_limit; //type: uint32
        YLeaf fsol_dropped_packets_dup_addr; //type: uint32



}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit : public Entity
{
    public:
        SessionLimit();
        ~SessionLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UnclassifiedSource; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource
        class Total; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total

        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total> total;
        std::shared_ptr<Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource> unclassified_source;


}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource : public Entity
{
    public:
        UnclassifiedSource();
        ~UnclassifiedSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf per_vlan; //type: uint32



}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf per_vlan; //type: uint32



}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total

class IpsubMaIntfStateDataEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf initialized;
        static const Enum::YLeaf session_creation_started;
        static const Enum::YLeaf control_policy_executing;
        static const Enum::YLeaf control_policy_executed;
        static const Enum::YLeaf session_features_applied;
        static const Enum::YLeaf vrf_configured;
        static const Enum::YLeaf adding_adjacency;
        static const Enum::YLeaf adjacency_added;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf address_family_down;
        static const Enum::YLeaf address_family_down_complete;
        static const Enum::YLeaf disconnecting;
        static const Enum::YLeaf disconnected;
        static const Enum::YLeaf error;

};

class IpsubMaParentIntfVlanEnum : public Enum
{
    public:
        static const Enum::YLeaf plain;
        static const Enum::YLeaf ambiguous;

};

class IpsubMaParentIntfStateDataEnum : public Enum
{
    public:
        static const Enum::YLeaf deleted;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class IpsubMaIntfInitiatorDataEnum : public Enum
{
    public:
        static const Enum::YLeaf dhcp;
        static const Enum::YLeaf packet_trigger;
        static const Enum::YLeaf invalid_trigger;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_IPSUB_OPER_ */

