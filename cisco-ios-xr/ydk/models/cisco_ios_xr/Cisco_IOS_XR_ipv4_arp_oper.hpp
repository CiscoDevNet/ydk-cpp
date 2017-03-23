#ifndef _CISCO_IOS_XR_IPV4_ARP_OPER_
#define _CISCO_IOS_XR_IPV4_ARP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_arp_oper {

class ArpGmp : public Entity
{
    public:
        ArpGmp();
        ~ArpGmp();

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



        class VrfInfos; //type: ArpGmp::VrfInfos
        class Vrfs; //type: ArpGmp::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::VrfInfos> vrf_infos;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs> vrfs;


}; // ArpGmp


class ArpGmp::VrfInfos : public Entity
{
    public:
        VrfInfos();
        ~VrfInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfInfo; //type: ArpGmp::VrfInfos::VrfInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::VrfInfos::VrfInfo> > vrf_info;


}; // ArpGmp::VrfInfos


class ArpGmp::VrfInfos::VrfInfo : public Entity
{
    public:
        VrfInfo();
        ~VrfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf vrf_name_xr; //type: string
        YLeaf vrf_id_number; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf rsi_handle; //type: uint32
        YLeaf rsi_handle_high; //type: uint32



}; // ArpGmp::VrfInfos::VrfInfo


class ArpGmp::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: ArpGmp::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf> > vrf;


}; // ArpGmp::Vrfs


class ArpGmp::Vrfs::Vrf : public Entity
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

        class ConfiguredIpAddresses; //type: ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses
        class Routes; //type: ArpGmp::Vrfs::Vrf::Routes
        class InterfaceConfiguredIps; //type: ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses> configured_ip_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps> interface_configured_ips;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::Routes> routes;


}; // ArpGmp::Vrfs::Vrf


class ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses : public Entity
{
    public:
        ConfiguredIpAddresses();
        ~ConfiguredIpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConfiguredIpAddress; //type: ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress> > configured_ip_address;


}; // ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses


class ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress : public Entity
{
    public:
        ConfiguredIpAddress();
        ~ConfiguredIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf ip_address; //type: string
        YLeaf hardware_address; //type: string
        YLeaf encapsulation_type; //type: ArpGmpBagEncapEnum
        YLeaf entry_type; //type: ArpGmpBagEntryEnum



}; // ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress


class ArpGmp::Vrfs::Vrf::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: ArpGmp::Vrfs::Vrf::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::Routes::Route> > route;


}; // ArpGmp::Vrfs::Vrf::Routes


class ArpGmp::Vrfs::Vrf::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf ip_address; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf interface_name_xr; //type: string
        YLeafList interface_name; //type: list of  string



}; // ArpGmp::Vrfs::Vrf::Routes::Route


class ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps : public Entity
{
    public:
        InterfaceConfiguredIps();
        ~InterfaceConfiguredIps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceConfiguredIp; //type: ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp> > interface_configured_ip;


}; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps


class ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp : public Entity
{
    public:
        InterfaceConfiguredIp();
        ~InterfaceConfiguredIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf address; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf reference_count; //type: uint32

        class AssociatedConfigurationEntry; //type: ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry> associated_configuration_entry;


}; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp


class ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry : public Entity
{
    public:
        AssociatedConfigurationEntry();
        ~AssociatedConfigurationEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_address; //type: string
        YLeaf hardware_address; //type: string
        YLeaf encapsulation_type; //type: ArpGmpBagEncapEnum
        YLeaf entry_type; //type: ArpGmpBagEntryEnum



}; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry

class Arp : public Entity
{
    public:
        Arp();
        ~Arp();

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



        class Nodes; //type: Arp::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes> nodes;


}; // Arp


class Arp::Nodes : public Entity
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



        class Node; //type: Arp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node> > node;


}; // Arp::Nodes


class Arp::Nodes::Node : public Entity
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

        class ResolutionHistoryDynamic; //type: Arp::Nodes::Node::ResolutionHistoryDynamic
        class TrafficVrfs; //type: Arp::Nodes::Node::TrafficVrfs
        class TrafficNode; //type: Arp::Nodes::Node::TrafficNode
        class ResolutionHistoryClient; //type: Arp::Nodes::Node::ResolutionHistoryClient
        class Entries; //type: Arp::Nodes::Node::Entries
        class TrafficInterfaces; //type: Arp::Nodes::Node::TrafficInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::Entries> entries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryClient> resolution_history_client;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryDynamic> resolution_history_dynamic;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficInterfaces> traffic_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficNode> traffic_node;
        std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficVrfs> traffic_vrfs;


}; // Arp::Nodes::Node


class Arp::Nodes::Node::ResolutionHistoryDynamic : public Entity
{
    public:
        ResolutionHistoryDynamic();
        ~ResolutionHistoryDynamic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ArpEntry; //type: Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry> > arp_entry;


}; // Arp::Nodes::Node::ResolutionHistoryDynamic


class Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry : public Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsec_timestamp; //type: uint64
        YLeaf idb_interface_name; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf mac_address; //type: string
        YLeaf status; //type: ArpResolutionHistoryStatusEnum
        YLeaf client_id; //type: int32
        YLeaf entry_state; //type: int32
        YLeaf resolution_request_count; //type: uint32



}; // Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry


class Arp::Nodes::Node::TrafficVrfs : public Entity
{
    public:
        TrafficVrfs();
        ~TrafficVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrafficVrf; //type: Arp::Nodes::Node::TrafficVrfs::TrafficVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficVrfs::TrafficVrf> > traffic_vrf;


}; // Arp::Nodes::Node::TrafficVrfs


class Arp::Nodes::Node::TrafficVrfs::TrafficVrf : public Entity
{
    public:
        TrafficVrf();
        ~TrafficVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf requests_received; //type: uint32
        YLeaf replies_received; //type: uint32
        YLeaf requests_sent; //type: uint32
        YLeaf replies_sent; //type: uint32
        YLeaf proxy_replies_sent; //type: uint32
        YLeaf subscr_requests_received; //type: uint32
        YLeaf subscr_replies_sent; //type: uint32
        YLeaf subscr_replies_gratg_sent; //type: uint32
        YLeaf local_proxy_replies_sent; //type: uint32
        YLeaf gratuitous_replies_sent; //type: uint32
        YLeaf resolution_requests_received; //type: uint32
        YLeaf resolution_replies_received; //type: uint32
        YLeaf resolution_requests_dropped; //type: uint32
        YLeaf out_of_memory_errors; //type: uint32
        YLeaf no_buffer_errors; //type: uint32
        YLeaf total_entries; //type: uint32
        YLeaf dynamic_entries; //type: uint32
        YLeaf static_entries; //type: uint32
        YLeaf alias_entries; //type: uint32
        YLeaf interface_entries; //type: uint32
        YLeaf standby_entries; //type: uint32
        YLeaf dhcp_entries; //type: uint32
        YLeaf vxlan_entries; //type: uint32
        YLeaf ip_packets_dropped_node; //type: uint32
        YLeaf arp_packet_node_out_of_subnet; //type: uint32
        YLeaf ip_packets_dropped_interface; //type: uint32
        YLeaf arp_packet_interface_out_of_subnet; //type: uint32
        YLeaf idb_structures; //type: uint32



}; // Arp::Nodes::Node::TrafficVrfs::TrafficVrf


class Arp::Nodes::Node::TrafficNode : public Entity
{
    public:
        TrafficNode();
        ~TrafficNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf requests_received; //type: uint32
        YLeaf replies_received; //type: uint32
        YLeaf requests_sent; //type: uint32
        YLeaf replies_sent; //type: uint32
        YLeaf proxy_replies_sent; //type: uint32
        YLeaf subscr_requests_received; //type: uint32
        YLeaf subscr_replies_sent; //type: uint32
        YLeaf subscr_replies_gratg_sent; //type: uint32
        YLeaf local_proxy_replies_sent; //type: uint32
        YLeaf gratuitous_replies_sent; //type: uint32
        YLeaf resolution_requests_received; //type: uint32
        YLeaf resolution_replies_received; //type: uint32
        YLeaf resolution_requests_dropped; //type: uint32
        YLeaf out_of_memory_errors; //type: uint32
        YLeaf no_buffer_errors; //type: uint32
        YLeaf total_entries; //type: uint32
        YLeaf dynamic_entries; //type: uint32
        YLeaf static_entries; //type: uint32
        YLeaf alias_entries; //type: uint32
        YLeaf interface_entries; //type: uint32
        YLeaf standby_entries; //type: uint32
        YLeaf dhcp_entries; //type: uint32
        YLeaf vxlan_entries; //type: uint32
        YLeaf ip_packets_dropped_node; //type: uint32
        YLeaf arp_packet_node_out_of_subnet; //type: uint32
        YLeaf ip_packets_dropped_interface; //type: uint32
        YLeaf arp_packet_interface_out_of_subnet; //type: uint32
        YLeaf idb_structures; //type: uint32



}; // Arp::Nodes::Node::TrafficNode


class Arp::Nodes::Node::ResolutionHistoryClient : public Entity
{
    public:
        ResolutionHistoryClient();
        ~ResolutionHistoryClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ArpEntry; //type: Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry> > arp_entry;


}; // Arp::Nodes::Node::ResolutionHistoryClient


class Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry : public Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsec_timestamp; //type: uint64
        YLeaf idb_interface_name; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf mac_address; //type: string
        YLeaf status; //type: ArpResolutionHistoryStatusEnum
        YLeaf client_id; //type: int32
        YLeaf entry_state; //type: int32
        YLeaf resolution_request_count; //type: uint32



}; // Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry


class Arp::Nodes::Node::Entries : public Entity
{
    public:
        Entries();
        ~Entries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Entry; //type: Arp::Nodes::Node::Entries::Entry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::Entries::Entry> > entry;


}; // Arp::Nodes::Node::Entries


class Arp::Nodes::Node::Entries::Entry : public Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string
        YLeaf media_type; //type: IpArpBagMediaEnum
        YLeaf state; //type: IpArpBagStateEnum
        YLeaf flag; //type: IpArpBagFlagsEnum
        YLeaf age; //type: uint64
        YLeaf encapsulation_type; //type: IpArpBagEncapEnum
        YLeaf hardware_length; //type: uint8
        YLeaf hardware_address; //type: string



}; // Arp::Nodes::Node::Entries::Entry


class Arp::Nodes::Node::TrafficInterfaces : public Entity
{
    public:
        TrafficInterfaces();
        ~TrafficInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrafficInterface; //type: Arp::Nodes::Node::TrafficInterfaces::TrafficInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficInterfaces::TrafficInterface> > traffic_interface;


}; // Arp::Nodes::Node::TrafficInterfaces


class Arp::Nodes::Node::TrafficInterfaces::TrafficInterface : public Entity
{
    public:
        TrafficInterface();
        ~TrafficInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf requests_received; //type: uint32
        YLeaf replies_received; //type: uint32
        YLeaf requests_sent; //type: uint32
        YLeaf replies_sent; //type: uint32
        YLeaf proxy_replies_sent; //type: uint32
        YLeaf subscr_requests_received; //type: uint32
        YLeaf subscr_replies_sent; //type: uint32
        YLeaf subscr_replies_gratg_sent; //type: uint32
        YLeaf local_proxy_replies_sent; //type: uint32
        YLeaf gratuitous_replies_sent; //type: uint32
        YLeaf resolution_requests_received; //type: uint32
        YLeaf resolution_replies_received; //type: uint32
        YLeaf resolution_requests_dropped; //type: uint32
        YLeaf out_of_memory_errors; //type: uint32
        YLeaf no_buffer_errors; //type: uint32
        YLeaf total_entries; //type: uint32
        YLeaf dynamic_entries; //type: uint32
        YLeaf static_entries; //type: uint32
        YLeaf alias_entries; //type: uint32
        YLeaf interface_entries; //type: uint32
        YLeaf standby_entries; //type: uint32
        YLeaf dhcp_entries; //type: uint32
        YLeaf vxlan_entries; //type: uint32
        YLeaf ip_packets_dropped_node; //type: uint32
        YLeaf arp_packet_node_out_of_subnet; //type: uint32
        YLeaf ip_packets_dropped_interface; //type: uint32
        YLeaf arp_packet_interface_out_of_subnet; //type: uint32
        YLeaf idb_structures; //type: uint32



}; // Arp::Nodes::Node::TrafficInterfaces::TrafficInterface

class IpArpBagFlagsEnum : public Enum
{
    public:
        static const Enum::YLeaf flag_none;
        static const Enum::YLeaf flag_dynamic;
        static const Enum::YLeaf flag_evpn_sync;
        static const Enum::YLeaf flag_max;

};

class ArpResolutionHistoryStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf status_none;
        static const Enum::YLeaf status_resolution_request;
        static const Enum::YLeaf status_resolved_reply;
        static const Enum::YLeaf status_resolved_grat_arp;
        static const Enum::YLeaf status_resolved_request;
        static const Enum::YLeaf status_resolved_lc_sync;
        static const Enum::YLeaf status_resolved_lc_sync_purge_delay;
        static const Enum::YLeaf status_resolved_client;
        static const Enum::YLeaf status_removed_client;
        static const Enum::YLeaf status_already_resolved;
        static const Enum::YLeaf status_failed;
        static const Enum::YLeaf status_dropped_interface_down;
        static const Enum::YLeaf status_dropped_broadcast_disabled;
        static const Enum::YLeaf status_dropped_interface_unavailable;
        static const Enum::YLeaf status_dropped_bad_subnet;
        static const Enum::YLeaf status_dropped_dynamic_learning_disabled;
        static const Enum::YLeaf status_dropped_out_of_subnet_disabled;
        static const Enum::YLeaf status_removed_client_sweep;
        static const Enum::YLeaf status_added_client;
        static const Enum::YLeaf status_added_v1;
        static const Enum::YLeaf status_removed_v1;
        static const Enum::YLeaf status_resolved_peer_sync;

};

class IpArpBagEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf arpa;
        static const Enum::YLeaf snap;
        static const Enum::YLeaf ieee802_1q;
        static const Enum::YLeaf srp;
        static const Enum::YLeaf srpa;
        static const Enum::YLeaf srpb;

};

class ArpGmpBagEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf arpa;
        static const Enum::YLeaf snap;
        static const Enum::YLeaf ieee802_1q;
        static const Enum::YLeaf srp;
        static const Enum::YLeaf srpa;
        static const Enum::YLeaf srpb;

};

class IpArpBagMediaEnum : public Enum
{
    public:
        static const Enum::YLeaf media_arpa;
        static const Enum::YLeaf media_srp;
        static const Enum::YLeaf media_unknown;

};

class ArpGmpBagEntryEnum : public Enum
{
    public:
        static const Enum::YLeaf null;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf alias;

};

class IpArpBagStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_none;
        static const Enum::YLeaf state_interface;
        static const Enum::YLeaf state_standby;
        static const Enum::YLeaf state_static;
        static const Enum::YLeaf state_alias;
        static const Enum::YLeaf state_mobile;
        static const Enum::YLeaf state_incomplete;
        static const Enum::YLeaf state_deleted;
        static const Enum::YLeaf state_dynamic;
        static const Enum::YLeaf state_probe;
        static const Enum::YLeaf state_purge_delayed;
        static const Enum::YLeaf state_dhcp;
        static const Enum::YLeaf state_vxlan;
        static const Enum::YLeaf state_evpn_sync;
        static const Enum::YLeaf state_sat;
        static const Enum::YLeaf state_r_sync;
        static const Enum::YLeaf state_max;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ARP_OPER_ */

