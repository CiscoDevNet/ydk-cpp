#ifndef _CISCO_IOS_XR_IPV4_DHCPD_OPER_
#define _CISCO_IOS_XR_IPV4_DHCPD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_dhcpd_oper {

class DhcpClient : public Entity
{
    public:
        DhcpClient();
        ~DhcpClient();

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



        class Nodes; //type: DhcpClient::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes> nodes;


}; // DhcpClient


class DhcpClient::Nodes : public Entity
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



        class Node; //type: DhcpClient::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node> > node;


}; // DhcpClient::Nodes


class DhcpClient::Nodes::Node : public Entity
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

        class ClientStats; //type: DhcpClient::Nodes::Node::ClientStats
        class Clients; //type: DhcpClient::Nodes::Node::Clients

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node::ClientStats> client_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node::Clients> clients;


}; // DhcpClient::Nodes::Node


class DhcpClient::Nodes::Node::ClientStats : public Entity
{
    public:
        ClientStats();
        ~ClientStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClientStat; //type: DhcpClient::Nodes::Node::ClientStats::ClientStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node::ClientStats::ClientStat> > client_stat;


}; // DhcpClient::Nodes::Node::ClientStats


class DhcpClient::Nodes::Node::ClientStats::ClientStat : public Entity
{
    public:
        ClientStat();
        ~ClientStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_ifhandle; //type: string
        YLeaf interface_name; //type: string
        YLeaf num_events_received; //type: uint32
        YLeaf num_create_event_received; //type: uint32
        YLeaf num_delete_event_received; //type: uint32
        YLeaf num_reboot_event_received; //type: uint32
        YLeaf num_reinit_event_received; //type: uint32
        YLeaf num_packet_event_received; //type: uint32
        YLeaf num_init_timer_eventi; //type: uint32
        YLeaf num_t1_timer_event; //type: uint32
        YLeaf num_t2_timer_event; //type: uint32
        YLeaf num_lease_timer_event; //type: uint32
        YLeaf num_discovers_sent_successfully; //type: uint32
        YLeaf num_requests_sent_successfully; //type: uint32
        YLeaf num_releases_sent_successfully; //type: uint32
        YLeaf num_renews_sent_successfully; //type: uint32
        YLeaf num_rebinds_sent_successfully; //type: uint32
        YLeaf num_declines_sent_successfully; //type: uint32
        YLeaf num_request_after_reboot_sent; //type: uint32
        YLeaf num_valid_offers_received; //type: uint32
        YLeaf num_valid_acks_received; //type: uint32
        YLeaf num_valid_nacks_received; //type: uint32
        YLeaf num_unicast_packet_sent_successfully; //type: uint32
        YLeaf num_broadcast_packet_sent_success; //type: uint32
        YLeaf num_init_timer_start; //type: uint32
        YLeaf num_init_timer_stop; //type: uint32
        YLeaf num_t1_timer_start; //type: uint32
        YLeaf num_t1_timer_stop; //type: uint32
        YLeaf num_t2_timer_start; //type: uint32
        YLeaf num_t2_timer_stop; //type: uint32
        YLeaf num_lease_timer_start; //type: uint32
        YLeaf num_lease_timer_stop; //type: uint32
        YLeaf num_invalid_events; //type: uint32
        YLeaf num_discovers_failed; //type: uint32
        YLeaf num_requests_failed; //type: uint32
        YLeaf num_releases_failed; //type: uint32
        YLeaf num_renews_failed; //type: uint32
        YLeaf num_rebinds_failed; //type: uint32
        YLeaf num_declines_failed; //type: uint32
        YLeaf num_request_after_reboot_failed; //type: uint32
        YLeaf num_invalid_offers; //type: uint32
        YLeaf num_invalid_acks; //type: uint32
        YLeaf num_invalid_nacks; //type: uint32
        YLeaf num_invalid_packets; //type: uint32
        YLeaf num_unicast_failed; //type: uint32
        YLeaf num_broadcast_failed; //type: uint32
        YLeaf num_xid_mismatch; //type: uint32



}; // DhcpClient::Nodes::Node::ClientStats::ClientStat


class DhcpClient::Nodes::Node::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Client; //type: DhcpClient::Nodes::Node::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node::Clients::Client> > client;


}; // DhcpClient::Nodes::Node::Clients


class DhcpClient::Nodes::Node::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_ifhandle; //type: string
        YLeaf interface_name; //type: string
        YLeaf client_mac_address; //type: string
        YLeaf client_id; //type: string
        YLeaf ipv4_client_state; //type: DhcpcIpv4StateEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_subnet_mask; //type: string
        YLeaf ipv4_server_address; //type: string
        YLeaf next_hop_ipv4_address; //type: string
        YLeaf ipv4_lease_time; //type: uint32
        YLeaf ipv4_renew_time; //type: uint32
        YLeaf ipv4_rebind_time; //type: uint32
        YLeaf ipv4_address_configured; //type: boolean



}; // DhcpClient::Nodes::Node::Clients::Client

class Ipv4Dhcpd : public Entity
{
    public:
        Ipv4Dhcpd();
        ~Ipv4Dhcpd();

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



        class Snoop; //type: Ipv4Dhcpd::Snoop
        class Nodes; //type: Ipv4Dhcpd::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop> snoop;


}; // Ipv4Dhcpd


class Ipv4Dhcpd::Snoop : public Entity
{
    public:
        Snoop();
        ~Snoop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bindings; //type: Ipv4Dhcpd::Snoop::Bindings
        class BindingStatistics; //type: Ipv4Dhcpd::Snoop::BindingStatistics
        class StatisticsInfo; //type: Ipv4Dhcpd::Snoop::StatisticsInfo
        class Profiles; //type: Ipv4Dhcpd::Snoop::Profiles
        class Statistics; //type: Ipv4Dhcpd::Snoop::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::BindingStatistics> binding_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Bindings> bindings;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::StatisticsInfo> statistics_info;


}; // Ipv4Dhcpd::Snoop


class Ipv4Dhcpd::Snoop::Bindings : public Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: Ipv4Dhcpd::Snoop::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Bindings::Binding> > binding;


}; // Ipv4Dhcpd::Snoop::Bindings


class Ipv4Dhcpd::Snoop::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_uid; //type: string
        YLeaf snoop_binding_ch_addr; //type: string
        YLeaf snoop_binding_ch_addr_len; //type: uint8
        YLeaf snoop_binding_i_addr; //type: string
        YLeaf snoop_binding_client_id; //type: string
        YLeaf snoop_binding_client_id_len; //type: uint8
        YLeaf snoop_binding_state; //type: uint8
        YLeaf snoop_binding_lease; //type: uint32
        YLeaf snoop_binding_lease_start_time; //type: uint32
        YLeaf snoop_binding_profile_name; //type: string
        YLeaf snoop_bindng_interface_name; //type: string
        YLeaf snoop_binding_bridge_name; //type: string



}; // Ipv4Dhcpd::Snoop::Bindings::Binding


class Ipv4Dhcpd::Snoop::BindingStatistics : public Entity
{
    public:
        BindingStatistics();
        ~BindingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf snoop_binding_total; //type: uint32
        YLeaf snoop_binding_timestamp; //type: uint32



}; // Ipv4Dhcpd::Snoop::BindingStatistics


class Ipv4Dhcpd::Snoop::StatisticsInfo : public Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf snoop_stats_timestamp; //type: uint32



}; // Ipv4Dhcpd::Snoop::StatisticsInfo


class Ipv4Dhcpd::Snoop::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profile; //type: Ipv4Dhcpd::Snoop::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Profiles::Profile> > profile;


}; // Ipv4Dhcpd::Snoop::Profiles


class Ipv4Dhcpd::Snoop::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf snoop_profile_name; //type: string
        YLeaf snoop_profile_uid; //type: uint32
        YLeaf snoop_profile_relay_info_option; //type: uint8
        YLeaf snoop_profile_relay_info_allow_untrusted; //type: uint8
        YLeaf snoop_profile_relay_info_policy; //type: uint8
        YLeaf snoop_profile_trusted; //type: uint8



}; // Ipv4Dhcpd::Snoop::Profiles::Profile


class Ipv4Dhcpd::Snoop::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistic; //type: Ipv4Dhcpd::Snoop::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Statistics::Statistic> > statistic;


}; // Ipv4Dhcpd::Snoop::Statistics


class Ipv4Dhcpd::Snoop::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bridge_name; //type: string
        YLeaf snoop_statistics_bridge_name; //type: string
        YLeafList snoop_statistic; //type: list of  uint64



}; // Ipv4Dhcpd::Snoop::Statistics::Statistic


class Ipv4Dhcpd::Nodes : public Entity
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



        class Node; //type: Ipv4Dhcpd::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node> > node;


}; // Ipv4Dhcpd::Nodes


class Ipv4Dhcpd::Nodes::Node : public Entity
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


        YLeaf nodeid; //type: string

        class Proxy; //type: Ipv4Dhcpd::Nodes::Node::Proxy
        class Interfaces; //type: Ipv4Dhcpd::Nodes::Node::Interfaces
        class Base; //type: Ipv4Dhcpd::Nodes::Node::Base
        class Server; //type: Ipv4Dhcpd::Nodes::Node::Server
        class Relay; //type: Ipv4Dhcpd::Nodes::Node::Relay

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base> base;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy> proxy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay> relay;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server> server;


}; // Ipv4Dhcpd::Nodes::Node


class Ipv4Dhcpd::Nodes::Node::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticsInfo; //type: Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs
        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Statistics
        class Binding; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding> binding;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo> statistics_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs> vrfs;


}; // Ipv4Dhcpd::Nodes::Node::Proxy


class Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo : public Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proxy_stats_timestamp; //type: uint32



}; // Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs : public Entity
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



        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf> > vrf;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf : public Entity
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

        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Discover; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover
        class Offer; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer
        class Request; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request
        class Decline; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline
        class Ack; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack
        class Nak; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak
        class Release; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release
        class Inform; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform
        class LeaseQuery; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery
        class LeaseNotAssigned; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned
        class LeaseUnknown; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown
        class LeaseActive; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive
        class BootpRequest; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest
        class BootpReply; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack> ack;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply> bootp_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest> bootp_request;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover> discover;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive> lease_active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak> nak;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer> offer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request> request;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer : public Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack : public Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak : public Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned : public Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown : public Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive : public Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest : public Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply : public Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile> > profile;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf is_relay_option_enabled; //type: boolean
        YLeaf relay_policy; //type: RelayInfoPolicyEnum
        YLeaf relay_authenticate; //type: RelayInfoAuthenticateEnum
        YLeaf is_relay_allow_untrusted_enabled; //type: boolean
        YLeaf is_relay_optionvpn_enabled; //type: boolean
        YLeaf relay_optionvpn_enabled_mode; //type: RelayInfoVpnModeEnum
        YLeaf is_relay_check; //type: boolean
        YLeaf is_move_allowed; //type: boolean
        YLeaf proxy_broadcast_flag_policy; //type: BroadcastFlagEnum
        YLeaf proxy_profile_client_lease_time; //type: uint32
        YLeaf proxy_lease_limit_type; //type: ProxyLeaseLimitEnum
        YLeaf proxy_lease_limit_count; //type: uint32
        YLeafList profile_helper_address; //type: list of  string
        YLeafList vrf_name; //type: list of  string
        YLeafList gi_addr; //type: list of  string

        class VrfReferences; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences
        class InterfaceReferences; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences> interface_references;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences> vrf_references;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences : public Entity
{
    public:
        VrfReferences();
        ~VrfReferences();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdProxyVrfReference; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference> > ipv4_dhcpd_proxy_vrf_reference;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference : public Entity
{
    public:
        Ipv4DhcpdProxyVrfReference();
        ~Ipv4DhcpdProxyVrfReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proxy_reference_vrf_name; //type: string



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences : public Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdProxyInterfaceReference; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference> > ipv4_dhcpd_proxy_interface_reference;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference : public Entity
{
    public:
        Ipv4DhcpdProxyInterfaceReference();
        ~Ipv4DhcpdProxyInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proxy_reference_interface_name; //type: string



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference


class Ipv4Dhcpd::Nodes::Node::Proxy::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdProxyStat; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat> > ipv4_dhcpd_proxy_stat;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Statistics


class Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat : public Entity
{
    public:
        Ipv4DhcpdProxyStat();
        ~Ipv4DhcpdProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat


class Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Clients; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients
        class Summary; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary> summary;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Client; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client> > client;


}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_id; //type: string
        YLeaf client_id_xr; //type: string
        YLeaf mac_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf server_vrf_name; //type: string
        YLeaf ip_address; //type: string
        YLeaf client_gi_addr; //type: string
        YLeaf to_server_gi_addr; //type: string
        YLeaf server_ip_address; //type: string
        YLeaf reply_server_ip_address; //type: string
        YLeaf lease_time; //type: uint32
        YLeaf remaining_lease_time; //type: uint32
        YLeaf state; //type: BagDhcpdProxyStateEnum
        YLeaf interface_name; //type: string
        YLeaf access_vrf_name; //type: string
        YLeaf proxy_binding_outer_tag; //type: uint32
        YLeaf proxy_binding_inner_tag; //type: uint32
        YLeaf profile_name; //type: string
        YLeaf is_nak_next_renew; //type: boolean
        YLeaf subscriber_label; //type: uint32
        YLeaf old_subscriber_label; //type: uint32
        YLeaf subscriber_interface_name; //type: string
        YLeaf rx_circuit_id; //type: string
        YLeaf tx_circuit_id; //type: string
        YLeaf rx_remote_id; //type: string
        YLeaf tx_remote_id; //type: string
        YLeaf rx_vsiso; //type: string
        YLeaf tx_vsiso; //type: string
        YLeaf is_auth_received; //type: boolean
        YLeaf is_mbl_subscriber; //type: boolean
        YLeaf param_request; //type: string
        YLeaf param_response; //type: string
        YLeaf session_start_time; //type: uint64
        YLeaf srg_state; //type: uint32
        YLeafList event_history; //type: list of  uint32



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary : public Entity
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


        YLeaf clients; //type: uint32
        YLeaf initializing_clients; //type: uint32
        YLeaf waiting_for_dpm_init; //type: uint32
        YLeaf waiting_for_daps_init; //type: uint32
        YLeaf selecting_clients; //type: uint32
        YLeaf offer_sent_for_client; //type: uint32
        YLeaf requesting_clients; //type: uint32
        YLeaf request_waiting_for_dpm; //type: uint32
        YLeaf ack_waiting_for_dpm; //type: uint32
        YLeaf bound_clients; //type: uint32
        YLeaf renewing_clients; //type: uint32
        YLeaf informing_clients; //type: uint32
        YLeaf reauthorizing_clients; //type: uint32
        YLeaf waiting_for_dpm_disconnect; //type: uint32
        YLeaf waiting_for_dpm_addr_change; //type: uint32
        YLeaf deleting_clients_d; //type: uint32
        YLeaf disconnected_clients; //type: uint32
        YLeaf restarting_clients; //type: uint32



}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary


class Ipv4Dhcpd::Nodes::Node::Interfaces : public Entity
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



        class Interface; //type: Ipv4Dhcpd::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Interfaces::Interface> > interface;


}; // Ipv4Dhcpd::Nodes::Node::Interfaces


class Ipv4Dhcpd::Nodes::Node::Interfaces::Interface : public Entity
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
        YLeaf intf_ifhandle; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf intf_mode; //type: uint32
        YLeaf intf_is_ambiguous; //type: uint32
        YLeaf intf_profile_name; //type: string
        YLeaf intf_lease_limit_type; //type: uint32
        YLeaf intf_lease_limit_count; //type: uint32
        YLeaf srg_role; //type: BagDhcpdIntfSrgRoleEnum
        YLeaf mac_throttle; //type: boolean



}; // Ipv4Dhcpd::Nodes::Node::Interfaces::Interface


class Ipv4Dhcpd::Nodes::Node::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Base::Statistics
        class IssuStatus; //type: Ipv4Dhcpd::Nodes::Node::Base::IssuStatus
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs
        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles
        class Database; //type: Ipv4Dhcpd::Nodes::Node::Base::Database

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Database> database;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs> vrfs;


}; // Ipv4Dhcpd::Nodes::Node::Base


class Ipv4Dhcpd::Nodes::Node::Base::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdProxyStat; //type: Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat> > ipv4_dhcpd_proxy_stat;


}; // Ipv4Dhcpd::Nodes::Node::Base::Statistics


class Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat : public Entity
{
    public:
        Ipv4DhcpdProxyStat();
        ~Ipv4DhcpdProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat


class Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Base::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf issu_sync_complete_time; //type: uint64
        YLeaf issu_sync_start_time; //type: uint64
        YLeaf issu_ready_time; //type: uint64
        YLeaf big_bang_time; //type: uint64
        YLeaf primary_role_time; //type: uint64
        YLeaf role; //type: DhcpIssuRoleEnum
        YLeaf phase; //type: DhcpIssuPhaseEnum
        YLeaf version; //type: DhcpIssuVersionEnum
        YLeaf issu_ready_issu_mgr_connection; //type: boolean
        YLeaf issu_ready_entries_replicate; //type: boolean



}; // Ipv4Dhcpd::Nodes::Node::Base::IssuStatus


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs : public Entity
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



        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf> > vrf;


}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf : public Entity
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

        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Discover; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover
        class Offer; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer
        class Request; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request
        class Decline; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline
        class Ack; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack
        class Nak; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak
        class Release; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release
        class Inform; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform
        class LeaseQuery; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery
        class LeaseNotAssigned; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned
        class LeaseUnknown; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown
        class LeaseActive; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive
        class BootpRequest; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest
        class BootpReply; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack> ack;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply> bootp_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest> bootp_request;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover> discover;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive> lease_active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak> nak;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer> offer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request> request;


}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer : public Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack : public Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak : public Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned : public Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown : public Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive : public Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest : public Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply : public Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply


class Ipv4Dhcpd::Nodes::Node::Base::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile> > profile;


}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf base_default_profile_name; //type: string
        YLeaf default_profile_mode; //type: uint8
        YLeaf relay_authenticate; //type: RelayInfoAuthenticateEnum
        YLeaf remote_id; //type: string
        YLeaf child_profile_count; //type: uint8
        YLeaf intf_ref_count; //type: uint8

        class InterfaceReferences; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences
        class ChildProfileInfo; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo> child_profile_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences> interface_references;


}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences : public Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdBaseInterfaceReference; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference> > ipv4_dhcpd_base_interface_reference;


}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference : public Entity
{
    public:
        Ipv4DhcpdBaseInterfaceReference();
        ~Ipv4DhcpdBaseInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf base_reference_interface_name; //type: string



}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo : public Entity
{
    public:
        ChildProfileInfo();
        ~ChildProfileInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdBaseChildProfileInfo; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo> > ipv4_dhcpd_base_child_profile_info;


}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo : public Entity
{
    public:
        Ipv4DhcpdBaseChildProfileInfo();
        ~Ipv4DhcpdBaseChildProfileInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf base_child_profile_name; //type: string
        YLeaf mode; //type: uint8
        YLeaf matched_option_code; //type: uint8
        YLeaf matched_option_len; //type: uint8
        YLeaf option_data; //type: string



}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo


class Ipv4Dhcpd::Nodes::Node::Base::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured; //type: boolean
        YLeaf version; //type: uint32
        YLeaf full_file_write_interval; //type: uint32
        YLeaf last_full_write_file_name; //type: string
        YLeaf last_full_write_time; //type: uint32
        YLeaf full_file_write_count; //type: uint32
        YLeaf failed_full_file_write_count; //type: uint32
        YLeaf full_file_record_count; //type: uint32
        YLeaf last_full_file_write_error_timestamp; //type: uint32
        YLeaf incremental_file_write_interval; //type: uint32
        YLeaf last_incremental_write_file_name; //type: string
        YLeaf last_incremental_write_time; //type: uint32
        YLeaf incremental_file_write_count; //type: uint32
        YLeaf failed_incremental_file_write_count; //type: uint32
        YLeaf incremental_file_record_count; //type: uint32
        YLeaf last_incremental_file_write_error_timestamp; //type: uint32



}; // Ipv4Dhcpd::Nodes::Node::Base::Database


class Ipv4Dhcpd::Nodes::Node::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Server::Profiles
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Server::Statistics
        class Binding; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding
        class StatisticsInfo; //type: Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding> binding;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo> statistics_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs> vrfs;


}; // Ipv4Dhcpd::Nodes::Node::Server


class Ipv4Dhcpd::Nodes::Node::Server::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile> > profile;


}; // Ipv4Dhcpd::Nodes::Node::Server::Profiles


class Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf server_profile_name; //type: string
        YLeaf server_profile_name_xr; //type: string
        YLeaf secure_arp; //type: boolean
        YLeaf requested_address_check; //type: boolean
        YLeaf server_id_check; //type: boolean
        YLeaf duplicate_mac_address_check; //type: boolean
        YLeaf duplicate_ip_address_check; //type: boolean
        YLeaf is_move_allowed; //type: boolean
        YLeaf bcast_policy; //type: uint8
        YLeaf giaddr_policy; //type: uint8
        YLeaf subnet_mask; //type: string
        YLeaf server_pool_name; //type: string
        YLeaf server_profile_lease; //type: uint32
        YLeaf server_profile_netbios_node_type; //type: uint8
        YLeaf server_bootfile_name; //type: string
        YLeaf server_domain_name; //type: string
        YLeaf server_profileiedge_check; //type: uint8
        YLeaf server_profile_server_dns_count; //type: uint8
        YLeaf server_profiledefault_router_count; //type: uint8
        YLeaf server_profile_netbios_name_svr_count; //type: uint8
        YLeaf server_profile_time_svr_count; //type: uint8
        YLeaf lease_limit_type; //type: uint8
        YLeaf lease_limit_count; //type: uint32
        YLeafList server_profile_dns; //type: list of  string
        YLeafList server_profile_default_router; //type: list of  string
        YLeafList server_profile_netbious_name_server; //type: list of  string
        YLeafList server_profile_time_server; //type: list of  string



}; // Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Server::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdProxyStat; //type: Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat> > ipv4_dhcpd_proxy_stat;


}; // Ipv4Dhcpd::Nodes::Node::Server::Statistics


class Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat : public Entity
{
    public:
        Ipv4DhcpdProxyStat();
        ~Ipv4DhcpdProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat


class Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Server::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary
        class Clients; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary> summary;


}; // Ipv4Dhcpd::Nodes::Node::Server::Binding


class Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary : public Entity
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


        YLeaf clients; //type: uint32
        YLeaf initializing_clients; //type: uint32
        YLeaf waiting_for_dpm_init; //type: uint32
        YLeaf waiting_for_daps_init; //type: uint32
        YLeaf selecting_clients; //type: uint32
        YLeaf offer_sent_for_client; //type: uint32
        YLeaf requesting_clients; //type: uint32
        YLeaf request_waiting_for_dpm; //type: uint32
        YLeaf ack_waiting_for_dpm; //type: uint32
        YLeaf bound_clients; //type: uint32
        YLeaf renewing_clients; //type: uint32
        YLeaf informing_clients; //type: uint32
        YLeaf reauthorizing_clients; //type: uint32
        YLeaf waiting_for_dpm_disconnect; //type: uint32
        YLeaf waiting_for_dpm_addr_change; //type: uint32
        YLeaf deleting_clients_d; //type: uint32
        YLeaf disconnected_clients; //type: uint32
        YLeaf restarting_clients; //type: uint32



}; // Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary


class Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Client; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client> > client;


}; // Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients


class Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_id; //type: string
        YLeaf client_id_xr; //type: string
        YLeaf mac_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf server_vrf_name; //type: string
        YLeaf ip_address; //type: string
        YLeaf client_gi_addr; //type: string
        YLeaf to_server_gi_addr; //type: string
        YLeaf server_ip_address; //type: string
        YLeaf reply_server_ip_address; //type: string
        YLeaf lease_time; //type: uint32
        YLeaf remaining_lease_time; //type: uint32
        YLeaf state; //type: BagDhcpdProxyStateEnum
        YLeaf interface_name; //type: string
        YLeaf access_vrf_name; //type: string
        YLeaf proxy_binding_outer_tag; //type: uint32
        YLeaf proxy_binding_inner_tag; //type: uint32
        YLeaf profile_name; //type: string
        YLeaf is_nak_next_renew; //type: boolean
        YLeaf subscriber_label; //type: uint32
        YLeaf old_subscriber_label; //type: uint32
        YLeaf subscriber_interface_name; //type: string
        YLeaf rx_circuit_id; //type: string
        YLeaf tx_circuit_id; //type: string
        YLeaf rx_remote_id; //type: string
        YLeaf tx_remote_id; //type: string
        YLeaf rx_vsiso; //type: string
        YLeaf tx_vsiso; //type: string
        YLeaf is_auth_received; //type: boolean
        YLeaf is_mbl_subscriber; //type: boolean
        YLeaf param_request; //type: string
        YLeaf param_response; //type: string
        YLeaf session_start_time; //type: uint64
        YLeaf srg_state; //type: uint32
        YLeafList event_history; //type: list of  uint32



}; // Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client


class Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo : public Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proxy_stats_timestamp; //type: uint32



}; // Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs : public Entity
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



        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf> > vrf;


}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf : public Entity
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

        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Discover; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover
        class Offer; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer
        class Request; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request
        class Decline; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline
        class Ack; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack
        class Nak; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak
        class Release; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release
        class Inform; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform
        class LeaseQuery; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery
        class LeaseNotAssigned; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned
        class LeaseUnknown; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown
        class LeaseActive; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive
        class BootpRequest; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest
        class BootpReply; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack> ack;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply> bootp_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest> bootp_request;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover> discover;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive> lease_active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak> nak;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer> offer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request> request;


}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer : public Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack : public Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak : public Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned : public Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown : public Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive : public Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest : public Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply : public Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply


class Ipv4Dhcpd::Nodes::Node::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Relay::Profiles
        class StatisticsInfo; //type: Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Relay::Statistics
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo> statistics_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs> vrfs;


}; // Ipv4Dhcpd::Nodes::Node::Relay


class Ipv4Dhcpd::Nodes::Node::Relay::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile> > profile;


}; // Ipv4Dhcpd::Nodes::Node::Relay::Profiles


class Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string
        YLeaf relay_profile_name; //type: string
        YLeaf relay_profile_uid; //type: uint32
        YLeaf relay_profile_helper_count; //type: uint8
        YLeaf relay_profile_relay_info_option; //type: uint8
        YLeaf relay_profile_relay_info_policy; //type: uint8
        YLeaf relay_profile_relay_info_allow_untrusted; //type: uint8
        YLeaf relay_profile_relay_info_optionvpn; //type: uint8
        YLeaf relay_profile_relay_info_optionvpn_mode; //type: RelayInfoVpnModeEnum
        YLeaf relay_profile_relay_info_check; //type: uint8
        YLeaf relay_profile_gi_addr_policy; //type: uint8
        YLeaf relay_profile_broadcast_flag_policy; //type: uint8
        YLeafList relay_profile_helper_address; //type: list of  string
        YLeafList relay_profile_helper_vrf; //type: list of  string
        YLeafList relay_profile_gi_addr; //type: list of  string



}; // Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo : public Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf relay_stats_timestamp; //type: uint32



}; // Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo


class Ipv4Dhcpd::Nodes::Node::Relay::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4DhcpdRelayStat; //type: Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat> > ipv4_dhcpd_relay_stat;


}; // Ipv4Dhcpd::Nodes::Node::Relay::Statistics


class Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat : public Entity
{
    public:
        Ipv4DhcpdRelayStat();
        ~Ipv4DhcpdRelayStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf relay_statistics_vrf_name; //type: string

        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_> statistics;


}; // Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat


class Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs : public Entity
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



        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf> > vrf;


}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf : public Entity
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

        class VrfStatistics; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics> vrf_statistics;


}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics : public Entity
{
    public:
        VrfStatistics();
        ~VrfStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Discover; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover
        class Offer; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer
        class Request; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request
        class Decline; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline
        class Ack; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack
        class Nak; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak
        class Release; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release
        class Inform; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform
        class LeaseQuery; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery
        class LeaseNotAssigned; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned
        class LeaseUnknown; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown
        class LeaseActive; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive
        class BootpRequest; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest
        class BootpReply; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack> ack;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply> bootp_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest> bootp_request;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover> discover;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive> lease_active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak> nak;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer> offer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request> request;


}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer : public Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack : public Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak : public Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned : public Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown : public Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive : public Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest : public Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply : public Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64



}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply

class DhcpIssuVersionEnum : public Enum
{
    public:
        static const Enum::YLeaf version1;
        static const Enum::YLeaf version2;

};

class DhcpIssuRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf role_primary;
        static const Enum::YLeaf role_secondary;

};

class ProxyLeaseLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf interface;
        static const Enum::YLeaf circuit_id;
        static const Enum::YLeaf remote_id;
        static const Enum::YLeaf remote_id_circuit_id;

};

class DhcpIssuPhaseEnum : public Enum
{
    public:
        static const Enum::YLeaf phase_not_started;
        static const Enum::YLeaf phase_load;
        static const Enum::YLeaf phase_run;
        static const Enum::YLeaf phase_completed;
        static const Enum::YLeaf phase_aborted;

};

class RelayInfoPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf replace;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;

};

class BagDhcpdIntfSrgRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class DhcpcIpv4StateEnum : public Enum
{
    public:
        static const Enum::YLeaf init;
        static const Enum::YLeaf init_reboot;
        static const Enum::YLeaf rebooting;
        static const Enum::YLeaf selecting;
        static const Enum::YLeaf requesting;
        static const Enum::YLeaf bound;
        static const Enum::YLeaf renewing;
        static const Enum::YLeaf rebinding;
        static const Enum::YLeaf invalid;

};

class BagDhcpdProxyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf initializing;
        static const Enum::YLeaf selecting;
        static const Enum::YLeaf requesting;
        static const Enum::YLeaf bound;
        static const Enum::YLeaf renewing;
        static const Enum::YLeaf informing;
        static const Enum::YLeaf deleting;
        static const Enum::YLeaf create_dpm;
        static const Enum::YLeaf offer_sent;
        static const Enum::YLeaf update_dpm;
        static const Enum::YLeaf route_install;
        static const Enum::YLeaf disc_dpm;
        static const Enum::YLeaf renew_new_intf;
        static const Enum::YLeaf other_intf_dpm;
        static const Enum::YLeaf request_dpm;
        static const Enum::YLeaf change_addr_dpm;
        static const Enum::YLeaf max;

};

class RelayInfoVpnModeEnum : public Enum
{
    public:
        static const Enum::YLeaf rfc;
        static const Enum::YLeaf cisco;

};

class RelayInfoAuthenticateEnum : public Enum
{
    public:
        static const Enum::YLeaf received;
        static const Enum::YLeaf inserted;

};

class BroadcastFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf ignore;
        static const Enum::YLeaf check;
        static const Enum::YLeaf unicast_always;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DHCPD_OPER_ */

