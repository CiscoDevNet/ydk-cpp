#ifndef _CISCO_IOS_XR_IPV4_DHCPD_OPER_
#define _CISCO_IOS_XR_IPV4_DHCPD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_dhcpd_oper {

class DhcpClient : public ydk::Entity
{
    public:
        DhcpClient();
        ~DhcpClient();

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

        class Nodes; //type: DhcpClient::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes> nodes;
        
}; // DhcpClient


class DhcpClient::Nodes : public ydk::Entity
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

        class Node; //type: DhcpClient::Nodes::Node

        ydk::YList node;
        
}; // DhcpClient::Nodes


class DhcpClient::Nodes::Node : public ydk::Entity
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
        class ClientStats; //type: DhcpClient::Nodes::Node::ClientStats
        class Clients; //type: DhcpClient::Nodes::Node::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node::ClientStats> client_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::DhcpClient::Nodes::Node::Clients> clients;
        
}; // DhcpClient::Nodes::Node


class DhcpClient::Nodes::Node::ClientStats : public ydk::Entity
{
    public:
        ClientStats();
        ~ClientStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientStat; //type: DhcpClient::Nodes::Node::ClientStats::ClientStat

        ydk::YList client_stat;
        
}; // DhcpClient::Nodes::Node::ClientStats


class DhcpClient::Nodes::Node::ClientStats::ClientStat : public ydk::Entity
{
    public:
        ClientStat();
        ~ClientStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_ifhandle; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf num_events_received; //type: uint32
        ydk::YLeaf num_create_event_received; //type: uint32
        ydk::YLeaf num_delete_event_received; //type: uint32
        ydk::YLeaf num_reboot_event_received; //type: uint32
        ydk::YLeaf num_reinit_event_received; //type: uint32
        ydk::YLeaf num_packet_event_received; //type: uint32
        ydk::YLeaf num_init_timer_eventi; //type: uint32
        ydk::YLeaf num_t1_timer_event; //type: uint32
        ydk::YLeaf num_t2_timer_event; //type: uint32
        ydk::YLeaf num_lease_timer_event; //type: uint32
        ydk::YLeaf num_vbind_timer_event; //type: uint32
        ydk::YLeaf num_discovers_sent_successfully; //type: uint32
        ydk::YLeaf num_requests_sent_successfully; //type: uint32
        ydk::YLeaf num_releases_sent_successfully; //type: uint32
        ydk::YLeaf num_renews_sent_successfully; //type: uint32
        ydk::YLeaf num_rebinds_sent_successfully; //type: uint32
        ydk::YLeaf num_declines_sent_successfully; //type: uint32
        ydk::YLeaf num_request_after_reboot_sent; //type: uint32
        ydk::YLeaf num_valid_offers_received; //type: uint32
        ydk::YLeaf num_valid_acks_received; //type: uint32
        ydk::YLeaf num_valid_nacks_received; //type: uint32
        ydk::YLeaf num_unicast_packet_sent_successfully; //type: uint32
        ydk::YLeaf num_broadcast_packet_sent_success; //type: uint32
        ydk::YLeaf num_init_timer_start; //type: uint32
        ydk::YLeaf num_init_timer_stop; //type: uint32
        ydk::YLeaf num_t1_timer_start; //type: uint32
        ydk::YLeaf num_t1_timer_stop; //type: uint32
        ydk::YLeaf num_t2_timer_start; //type: uint32
        ydk::YLeaf num_t2_timer_stop; //type: uint32
        ydk::YLeaf num_lease_timer_start; //type: uint32
        ydk::YLeaf num_lease_timer_stop; //type: uint32
        ydk::YLeaf num_vbind_timer_start; //type: uint32
        ydk::YLeaf num_vbind_timer_stop; //type: uint32
        ydk::YLeaf num_invalid_events; //type: uint32
        ydk::YLeaf num_discovers_failed; //type: uint32
        ydk::YLeaf num_requests_failed; //type: uint32
        ydk::YLeaf num_releases_failed; //type: uint32
        ydk::YLeaf num_renews_failed; //type: uint32
        ydk::YLeaf num_rebinds_failed; //type: uint32
        ydk::YLeaf num_declines_failed; //type: uint32
        ydk::YLeaf num_request_after_reboot_failed; //type: uint32
        ydk::YLeaf num_invalid_offers; //type: uint32
        ydk::YLeaf num_invalid_acks; //type: uint32
        ydk::YLeaf num_invalid_nacks; //type: uint32
        ydk::YLeaf num_invalid_packets; //type: uint32
        ydk::YLeaf num_unicast_failed; //type: uint32
        ydk::YLeaf num_broadcast_failed; //type: uint32
        ydk::YLeaf num_xid_mismatch; //type: uint32
        ydk::YLeaf num_vbind_failed; //type: uint32

}; // DhcpClient::Nodes::Node::ClientStats::ClientStat


class DhcpClient::Nodes::Node::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: DhcpClient::Nodes::Node::Clients::Client

        ydk::YList client;
        
}; // DhcpClient::Nodes::Node::Clients


class DhcpClient::Nodes::Node::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_ifhandle; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf client_mac_address; //type: string
        ydk::YLeaf client_id; //type: string
        ydk::YLeaf ipv4_client_state; //type: DhcpcIpv4State
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_subnet_mask; //type: string
        ydk::YLeaf ipv4_server_address; //type: string
        ydk::YLeaf next_hop_ipv4_address; //type: string
        ydk::YLeaf ipv4_lease_time; //type: uint32
        ydk::YLeaf ipv4_renew_time; //type: uint32
        ydk::YLeaf ipv4_rebind_time; //type: uint32
        ydk::YLeaf ipv4_address_configured; //type: boolean

}; // DhcpClient::Nodes::Node::Clients::Client

class Ipv4Dhcpd : public ydk::Entity
{
    public:
        Ipv4Dhcpd();
        ~Ipv4Dhcpd();

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

        class Snoop; //type: Ipv4Dhcpd::Snoop
        class Nodes; //type: Ipv4Dhcpd::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop> snoop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes> nodes;
        
}; // Ipv4Dhcpd


class Ipv4Dhcpd::Snoop : public ydk::Entity
{
    public:
        Snoop();
        ~Snoop();

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

        class Bindings; //type: Ipv4Dhcpd::Snoop::Bindings
        class BindingStatistics; //type: Ipv4Dhcpd::Snoop::BindingStatistics
        class StatisticsInfo; //type: Ipv4Dhcpd::Snoop::StatisticsInfo
        class Profiles; //type: Ipv4Dhcpd::Snoop::Profiles
        class Statistics; //type: Ipv4Dhcpd::Snoop::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Bindings> bindings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::BindingStatistics> binding_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::StatisticsInfo> statistics_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Snoop::Statistics> statistics;
        
}; // Ipv4Dhcpd::Snoop


class Ipv4Dhcpd::Snoop::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

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

        class Binding; //type: Ipv4Dhcpd::Snoop::Bindings::Binding

        ydk::YList binding;
        
}; // Ipv4Dhcpd::Snoop::Bindings


class Ipv4Dhcpd::Snoop::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

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

        ydk::YLeaf client_uid; //type: string
        ydk::YLeaf snoop_binding_ch_addr; //type: string
        ydk::YLeaf snoop_binding_ch_addr_len; //type: uint8
        ydk::YLeaf snoop_binding_i_addr; //type: string
        ydk::YLeaf snoop_binding_client_id; //type: string
        ydk::YLeaf snoop_binding_client_id_len; //type: uint8
        ydk::YLeaf snoop_binding_state; //type: uint8
        ydk::YLeaf snoop_binding_lease; //type: uint32
        ydk::YLeaf snoop_binding_lease_start_time; //type: uint32
        ydk::YLeaf snoop_binding_profile_name; //type: string
        ydk::YLeaf snoop_bindng_interface_name; //type: string
        ydk::YLeaf snoop_binding_bridge_name; //type: string

}; // Ipv4Dhcpd::Snoop::Bindings::Binding


class Ipv4Dhcpd::Snoop::BindingStatistics : public ydk::Entity
{
    public:
        BindingStatistics();
        ~BindingStatistics();

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

        ydk::YLeaf snoop_binding_total; //type: uint32
        ydk::YLeaf snoop_binding_timestamp; //type: uint32

}; // Ipv4Dhcpd::Snoop::BindingStatistics


class Ipv4Dhcpd::Snoop::StatisticsInfo : public ydk::Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

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

        ydk::YLeaf snoop_stats_timestamp; //type: uint32

}; // Ipv4Dhcpd::Snoop::StatisticsInfo


class Ipv4Dhcpd::Snoop::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

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

        class Profile; //type: Ipv4Dhcpd::Snoop::Profiles::Profile

        ydk::YList profile;
        
}; // Ipv4Dhcpd::Snoop::Profiles


class Ipv4Dhcpd::Snoop::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf snoop_profile_name; //type: string
        ydk::YLeaf snoop_profile_uid; //type: uint32
        ydk::YLeaf snoop_profile_relay_info_option; //type: uint8
        ydk::YLeaf snoop_profile_relay_info_allow_untrusted; //type: uint8
        ydk::YLeaf snoop_profile_relay_info_policy; //type: uint8
        ydk::YLeaf snoop_profile_trusted; //type: uint8

}; // Ipv4Dhcpd::Snoop::Profiles::Profile


class Ipv4Dhcpd::Snoop::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class Statistic; //type: Ipv4Dhcpd::Snoop::Statistics::Statistic

        ydk::YList statistic;
        
}; // Ipv4Dhcpd::Snoop::Statistics


class Ipv4Dhcpd::Snoop::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

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

        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf snoop_statistics_bridge_name; //type: string
        ydk::YLeafList snoop_statistic; //type: list of  uint64

}; // Ipv4Dhcpd::Snoop::Statistics::Statistic


class Ipv4Dhcpd::Nodes : public ydk::Entity
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

        class Node; //type: Ipv4Dhcpd::Nodes::Node

        ydk::YList node;
        
}; // Ipv4Dhcpd::Nodes


class Ipv4Dhcpd::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf nodeid; //type: string
        class Proxy; //type: Ipv4Dhcpd::Nodes::Node::Proxy
        class Interfaces; //type: Ipv4Dhcpd::Nodes::Node::Interfaces
        class Base; //type: Ipv4Dhcpd::Nodes::Node::Base
        class Server; //type: Ipv4Dhcpd::Nodes::Node::Server
        class Relay; //type: Ipv4Dhcpd::Nodes::Node::Relay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy> proxy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server> server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay> relay;
        
}; // Ipv4Dhcpd::Nodes::Node


class Ipv4Dhcpd::Nodes::Node::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsInfo; //type: Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs
        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Statistics
        class Binding; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo> statistics_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding> binding;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy


class Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo : public ydk::Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_stats_timestamp; //type: uint32

}; // Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover> discover;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer> offer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack> ack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak> nak;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive> lease_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest> bootp_request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply> bootp_reply;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer : public ydk::Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak : public ydk::Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned : public ydk::Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown : public ydk::Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive : public ydk::Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest : public ydk::Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply : public ydk::Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile

        ydk::YList profile;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf is_relay_option_enabled; //type: boolean
        ydk::YLeaf relay_policy; //type: RelayInfoPolicy
        ydk::YLeaf relay_authenticate; //type: RelayInfoAuthenticate
        ydk::YLeaf is_relay_allow_untrusted_enabled; //type: boolean
        ydk::YLeaf is_relay_optionvpn_enabled; //type: boolean
        ydk::YLeaf relay_optionvpn_enabled_mode; //type: RelayInfoVpnMode
        ydk::YLeaf is_relay_check; //type: boolean
        ydk::YLeaf is_move_allowed; //type: boolean
        ydk::YLeaf proxy_broadcast_flag_policy; //type: BroadcastFlag
        ydk::YLeaf proxy_profile_client_lease_time; //type: uint32
        ydk::YLeaf proxy_lease_limit_type; //type: ProxyLeaseLimit
        ydk::YLeaf proxy_lease_limit_count; //type: uint32
        ydk::YLeafList profile_helper_address; //type: list of  string
        ydk::YLeafList vrf_name; //type: list of  string
        ydk::YLeafList gi_addr; //type: list of  string
        class VrfReferences; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences
        class InterfaceReferences; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences> vrf_references;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences> interface_references;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences : public ydk::Entity
{
    public:
        VrfReferences();
        ~VrfReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdProxyVrfReference; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference

        ydk::YList ipv4_dhcpd_proxy_vrf_reference;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference : public ydk::Entity
{
    public:
        Ipv4DhcpdProxyVrfReference();
        ~Ipv4DhcpdProxyVrfReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_reference_vrf_name; //type: string

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences : public ydk::Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdProxyInterfaceReference; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference

        ydk::YList ipv4_dhcpd_proxy_interface_reference;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences


class Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference : public ydk::Entity
{
    public:
        Ipv4DhcpdProxyInterfaceReference();
        ~Ipv4DhcpdProxyInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_reference_interface_name; //type: string

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference


class Ipv4Dhcpd::Nodes::Node::Proxy::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdProxyStat; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat

        ydk::YList ipv4_dhcpd_proxy_stat;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Statistics


class Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat : public ydk::Entity
{
    public:
        Ipv4DhcpdProxyStat();
        ~Ipv4DhcpdProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat


class Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clients; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients
        class Summary; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary> summary;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client

        ydk::YList client;
        
}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: string
        ydk::YLeaf client_id_xr; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf server_vrf_name; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf client_gi_addr; //type: string
        ydk::YLeaf to_server_gi_addr; //type: string
        ydk::YLeaf server_ip_address; //type: string
        ydk::YLeaf reply_server_ip_address; //type: string
        ydk::YLeaf lease_time; //type: uint32
        ydk::YLeaf remaining_lease_time; //type: uint32
        ydk::YLeaf state; //type: BagDhcpdProxyState
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf access_vrf_name; //type: string
        ydk::YLeaf proxy_binding_outer_tag; //type: uint32
        ydk::YLeaf proxy_binding_inner_tag; //type: uint32
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf is_nak_next_renew; //type: boolean
        ydk::YLeaf subscriber_label; //type: uint32
        ydk::YLeaf old_subscriber_label; //type: uint32
        ydk::YLeaf subscriber_interface_name; //type: string
        ydk::YLeaf rx_circuit_id; //type: string
        ydk::YLeaf tx_circuit_id; //type: string
        ydk::YLeaf rx_remote_id; //type: string
        ydk::YLeaf tx_remote_id; //type: string
        ydk::YLeaf rx_vsiso; //type: string
        ydk::YLeaf tx_vsiso; //type: string
        ydk::YLeaf is_auth_received; //type: boolean
        ydk::YLeaf is_mbl_subscriber; //type: boolean
        ydk::YLeaf param_request; //type: string
        ydk::YLeaf param_response; //type: string
        ydk::YLeaf session_start_time; //type: uint64
        ydk::YLeaf srg_state; //type: uint32
        ydk::YLeafList event_history; //type: list of  uint32

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client


class Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clients; //type: uint32
        ydk::YLeaf initializing_clients; //type: uint32
        ydk::YLeaf waiting_for_dpm_init; //type: uint32
        ydk::YLeaf waiting_for_dpm_request; //type: uint32
        ydk::YLeaf waiting_for_daps_init; //type: uint32
        ydk::YLeaf selecting_clients; //type: uint32
        ydk::YLeaf offer_sent_for_client; //type: uint32
        ydk::YLeaf requesting_clients; //type: uint32
        ydk::YLeaf request_waiting_for_dpm; //type: uint32
        ydk::YLeaf ack_waiting_for_dpm; //type: uint32
        ydk::YLeaf bound_clients; //type: uint32
        ydk::YLeaf renewing_clients; //type: uint32
        ydk::YLeaf informing_clients; //type: uint32
        ydk::YLeaf reauthorizing_clients; //type: uint32
        ydk::YLeaf waiting_for_dpm_disconnect; //type: uint32
        ydk::YLeaf waiting_for_dpm_addr_change; //type: uint32
        ydk::YLeaf deleting_clients_d; //type: uint32
        ydk::YLeaf disconnected_clients; //type: uint32
        ydk::YLeaf restarting_clients; //type: uint32

}; // Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary


class Ipv4Dhcpd::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: Ipv4Dhcpd::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // Ipv4Dhcpd::Nodes::Node::Interfaces


class Ipv4Dhcpd::Nodes::Node::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf intf_ifhandle; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf intf_mode; //type: uint32
        ydk::YLeaf intf_is_ambiguous; //type: uint32
        ydk::YLeaf intf_profile_name; //type: string
        ydk::YLeaf intf_lease_limit_type; //type: uint32
        ydk::YLeaf intf_lease_limit_count; //type: uint32
        ydk::YLeaf srg_role; //type: BagDhcpdIntfSrgRole
        ydk::YLeaf mac_throttle; //type: boolean

}; // Ipv4Dhcpd::Nodes::Node::Interfaces::Interface


class Ipv4Dhcpd::Nodes::Node::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Base::Statistics
        class IssuStatus; //type: Ipv4Dhcpd::Nodes::Node::Base::IssuStatus
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs
        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles
        class Database; //type: Ipv4Dhcpd::Nodes::Node::Base::Database

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::IssuStatus> issu_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Database> database;
        
}; // Ipv4Dhcpd::Nodes::Node::Base


class Ipv4Dhcpd::Nodes::Node::Base::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdProxyStat; //type: Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat

        ydk::YList ipv4_dhcpd_proxy_stat;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Statistics


class Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat : public ydk::Entity
{
    public:
        Ipv4DhcpdProxyStat();
        ~Ipv4DhcpdProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat


class Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Base::IssuStatus : public ydk::Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf issu_sync_complete_time; //type: uint64
        ydk::YLeaf issu_sync_start_time; //type: uint64
        ydk::YLeaf issu_ready_time; //type: uint64
        ydk::YLeaf big_bang_time; //type: uint64
        ydk::YLeaf primary_role_time; //type: uint64
        ydk::YLeaf role; //type: DhcpIssuRole
        ydk::YLeaf phase; //type: DhcpIssuPhase
        ydk::YLeaf version; //type: DhcpIssuVersion
        ydk::YLeaf issu_ready_issu_mgr_connection; //type: boolean
        ydk::YLeaf issu_ready_entries_replicate; //type: boolean

}; // Ipv4Dhcpd::Nodes::Node::Base::IssuStatus


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover> discover;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer> offer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack> ack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak> nak;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive> lease_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest> bootp_request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply> bootp_reply;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer : public ydk::Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak : public ydk::Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned : public ydk::Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown : public ydk::Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive : public ydk::Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest : public ydk::Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply : public ydk::Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply


class Ipv4Dhcpd::Nodes::Node::Base::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile

        ydk::YList profile;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf base_default_profile_name; //type: string
        ydk::YLeaf default_profile_mode; //type: uint8
        ydk::YLeaf relay_authenticate; //type: RelayInfoAuthenticate
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf child_profile_count; //type: uint8
        ydk::YLeaf intf_ref_count; //type: uint8
        class InterfaceReferences; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences
        class ChildProfileInfo; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences> interface_references;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo> child_profile_info;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences : public ydk::Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdBaseInterfaceReference; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference

        ydk::YList ipv4_dhcpd_base_interface_reference;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference : public ydk::Entity
{
    public:
        Ipv4DhcpdBaseInterfaceReference();
        ~Ipv4DhcpdBaseInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf base_reference_interface_name; //type: string

}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo : public ydk::Entity
{
    public:
        ChildProfileInfo();
        ~ChildProfileInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdBaseChildProfileInfo; //type: Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo

        ydk::YList ipv4_dhcpd_base_child_profile_info;
        
}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo


class Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo : public ydk::Entity
{
    public:
        Ipv4DhcpdBaseChildProfileInfo();
        ~Ipv4DhcpdBaseChildProfileInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf base_child_profile_name; //type: string
        ydk::YLeaf mode; //type: uint8
        ydk::YLeaf matched_option_code; //type: uint8
        ydk::YLeaf matched_option_len; //type: uint8
        ydk::YLeaf option_data; //type: string

}; // Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo


class Ipv4Dhcpd::Nodes::Node::Base::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf full_file_write_interval; //type: uint32
        ydk::YLeaf last_full_write_file_name; //type: string
        ydk::YLeaf last_full_write_time; //type: uint32
        ydk::YLeaf full_file_write_count; //type: uint32
        ydk::YLeaf failed_full_file_write_count; //type: uint32
        ydk::YLeaf full_file_record_count; //type: uint32
        ydk::YLeaf last_full_file_write_error_timestamp; //type: uint32
        ydk::YLeaf incremental_file_write_interval; //type: uint32
        ydk::YLeaf last_incremental_write_file_name; //type: string
        ydk::YLeaf last_incremental_write_time; //type: uint32
        ydk::YLeaf incremental_file_write_count; //type: uint32
        ydk::YLeaf failed_incremental_file_write_count; //type: uint32
        ydk::YLeaf incremental_file_record_count; //type: uint32
        ydk::YLeaf last_incremental_file_write_error_timestamp; //type: uint32

}; // Ipv4Dhcpd::Nodes::Node::Base::Database


class Ipv4Dhcpd::Nodes::Node::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Server::Profiles
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Server::Statistics
        class Binding; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding
        class StatisticsInfo; //type: Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding> binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo> statistics_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Nodes::Node::Server


class Ipv4Dhcpd::Nodes::Node::Server::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile

        ydk::YList profile;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Profiles


class Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_profile_name; //type: string
        ydk::YLeaf server_profile_name_xr; //type: string
        ydk::YLeaf secure_arp; //type: boolean
        ydk::YLeaf requested_address_check; //type: boolean
        ydk::YLeaf server_id_check; //type: boolean
        ydk::YLeaf duplicate_mac_address_check; //type: boolean
        ydk::YLeaf duplicate_ip_address_check; //type: boolean
        ydk::YLeaf is_move_allowed; //type: boolean
        ydk::YLeaf bcast_policy; //type: uint8
        ydk::YLeaf giaddr_policy; //type: uint8
        ydk::YLeaf subnet_mask; //type: string
        ydk::YLeaf server_pool_name; //type: string
        ydk::YLeaf server_profile_lease; //type: uint32
        ydk::YLeaf server_profile_netbios_node_type; //type: uint8
        ydk::YLeaf server_bootfile_name; //type: string
        ydk::YLeaf server_domain_name; //type: string
        ydk::YLeaf server_profileiedge_check; //type: uint8
        ydk::YLeaf server_profile_server_dns_count; //type: uint8
        ydk::YLeaf server_profiledefault_router_count; //type: uint8
        ydk::YLeaf server_profile_netbios_name_svr_count; //type: uint8
        ydk::YLeaf server_profile_time_svr_count; //type: uint8
        ydk::YLeaf lease_limit_type; //type: uint8
        ydk::YLeaf lease_limit_count; //type: uint32
        ydk::YLeafList server_profile_dns; //type: list of  string
        ydk::YLeafList server_profile_default_router; //type: list of  string
        ydk::YLeafList server_profile_netbious_name_server; //type: list of  string
        ydk::YLeafList server_profile_time_server; //type: list of  string

}; // Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Server::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdProxyStat; //type: Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat

        ydk::YList ipv4_dhcpd_proxy_stat;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Statistics


class Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat : public ydk::Entity
{
    public:
        Ipv4DhcpdProxyStat();
        ~Ipv4DhcpdProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat


class Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Server::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary
        class Clients; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients> clients;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Binding


class Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clients; //type: uint32
        ydk::YLeaf initializing_clients; //type: uint32
        ydk::YLeaf waiting_for_dpm_init; //type: uint32
        ydk::YLeaf waiting_for_dpm_request; //type: uint32
        ydk::YLeaf waiting_for_daps_init; //type: uint32
        ydk::YLeaf selecting_clients; //type: uint32
        ydk::YLeaf offer_sent_for_client; //type: uint32
        ydk::YLeaf requesting_clients; //type: uint32
        ydk::YLeaf request_waiting_for_dpm; //type: uint32
        ydk::YLeaf ack_waiting_for_dpm; //type: uint32
        ydk::YLeaf bound_clients; //type: uint32
        ydk::YLeaf renewing_clients; //type: uint32
        ydk::YLeaf informing_clients; //type: uint32
        ydk::YLeaf reauthorizing_clients; //type: uint32
        ydk::YLeaf waiting_for_dpm_disconnect; //type: uint32
        ydk::YLeaf waiting_for_dpm_addr_change; //type: uint32
        ydk::YLeaf deleting_clients_d; //type: uint32
        ydk::YLeaf disconnected_clients; //type: uint32
        ydk::YLeaf restarting_clients; //type: uint32

}; // Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary


class Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client

        ydk::YList client;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients


class Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: string
        ydk::YLeaf client_id_xr; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf server_vrf_name; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf client_gi_addr; //type: string
        ydk::YLeaf to_server_gi_addr; //type: string
        ydk::YLeaf server_ip_address; //type: string
        ydk::YLeaf reply_server_ip_address; //type: string
        ydk::YLeaf lease_time; //type: uint32
        ydk::YLeaf remaining_lease_time; //type: uint32
        ydk::YLeaf state; //type: BagDhcpdProxyState
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf access_vrf_name; //type: string
        ydk::YLeaf proxy_binding_outer_tag; //type: uint32
        ydk::YLeaf proxy_binding_inner_tag; //type: uint32
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf is_nak_next_renew; //type: boolean
        ydk::YLeaf subscriber_label; //type: uint32
        ydk::YLeaf old_subscriber_label; //type: uint32
        ydk::YLeaf subscriber_interface_name; //type: string
        ydk::YLeaf rx_circuit_id; //type: string
        ydk::YLeaf tx_circuit_id; //type: string
        ydk::YLeaf rx_remote_id; //type: string
        ydk::YLeaf tx_remote_id; //type: string
        ydk::YLeaf rx_vsiso; //type: string
        ydk::YLeaf tx_vsiso; //type: string
        ydk::YLeaf is_auth_received; //type: boolean
        ydk::YLeaf is_mbl_subscriber; //type: boolean
        ydk::YLeaf param_request; //type: string
        ydk::YLeaf param_response; //type: string
        ydk::YLeaf session_start_time; //type: uint64
        ydk::YLeaf srg_state; //type: uint32
        ydk::YLeafList event_history; //type: list of  uint32

}; // Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client


class Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo : public ydk::Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_stats_timestamp; //type: uint32

}; // Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover> discover;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer> offer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack> ack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak> nak;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive> lease_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest> bootp_request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply> bootp_reply;
        
}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer : public ydk::Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak : public ydk::Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned : public ydk::Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown : public ydk::Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive : public ydk::Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest : public ydk::Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply : public ydk::Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply


class Ipv4Dhcpd::Nodes::Node::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profiles; //type: Ipv4Dhcpd::Nodes::Node::Relay::Profiles
        class StatisticsInfo; //type: Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo
        class Statistics; //type: Ipv4Dhcpd::Nodes::Node::Relay::Statistics
        class Vrfs; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo> statistics_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay


class Ipv4Dhcpd::Nodes::Node::Relay::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile

        ydk::YList profile;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay::Profiles


class Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf relay_profile_name; //type: string
        ydk::YLeaf relay_profile_uid; //type: uint32
        ydk::YLeaf relay_profile_helper_count; //type: uint8
        ydk::YLeaf relay_profile_relay_info_option; //type: uint8
        ydk::YLeaf relay_profile_relay_info_policy; //type: uint8
        ydk::YLeaf relay_profile_relay_info_allow_untrusted; //type: uint8
        ydk::YLeaf relay_profile_relay_info_optionvpn; //type: uint8
        ydk::YLeaf relay_profile_relay_info_optionvpn_mode; //type: RelayInfoVpnMode
        ydk::YLeaf relay_profile_relay_info_check; //type: uint8
        ydk::YLeaf relay_profile_gi_addr_policy; //type: uint8
        ydk::YLeaf relay_profile_broadcast_flag_policy; //type: uint8
        ydk::YLeaf relay_profile_mac_mismatch_action; //type: uint8
        ydk::YLeafList relay_profile_helper_address; //type: list of  string
        ydk::YLeafList relay_profile_helper_vrf; //type: list of  string
        ydk::YLeafList relay_profile_gi_addr; //type: list of  string

}; // Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile


class Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo : public ydk::Entity
{
    public:
        StatisticsInfo();
        ~StatisticsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relay_stats_timestamp; //type: uint32

}; // Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo


class Ipv4Dhcpd::Nodes::Node::Relay::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4DhcpdRelayStat; //type: Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat

        ydk::YList ipv4_dhcpd_relay_stat;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay::Statistics


class Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat : public ydk::Entity
{
    public:
        Ipv4DhcpdRelayStat();
        ~Ipv4DhcpdRelayStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relay_statistics_vrf_name; //type: string
        class Statistics_; //type: Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_> statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat


class Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class VrfStatistics; //type: Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics> vrf_statistics;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics : public ydk::Entity
{
    public:
        VrfStatistics();
        ~VrfStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover> discover;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer> offer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack> ack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak> nak;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned> lease_not_assigned;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown> lease_unknown;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive> lease_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest> bootp_request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_dhcpd_oper::Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply> bootp_reply;
        
}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer : public ydk::Entity
{
    public:
        Offer();
        ~Offer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak : public ydk::Entity
{
    public:
        Nak();
        ~Nak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned : public ydk::Entity
{
    public:
        LeaseNotAssigned();
        ~LeaseNotAssigned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown : public ydk::Entity
{
    public:
        LeaseUnknown();
        ~LeaseUnknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive : public ydk::Entity
{
    public:
        LeaseActive();
        ~LeaseActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest : public ydk::Entity
{
    public:
        BootpRequest();
        ~BootpRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest


class Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply : public ydk::Entity
{
    public:
        BootpReply();
        ~BootpReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply

class DhcpIssuVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;
        static const ydk::Enum::YLeaf version2;

};

class DhcpIssuRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf role_primary;
        static const ydk::Enum::YLeaf role_secondary;

};

class ProxyLeaseLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf circuit_id;
        static const ydk::Enum::YLeaf remote_id;
        static const ydk::Enum::YLeaf remote_id_circuit_id;

};

class DhcpIssuPhase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf phase_not_started;
        static const ydk::Enum::YLeaf phase_load;
        static const ydk::Enum::YLeaf phase_run;
        static const ydk::Enum::YLeaf phase_completed;
        static const ydk::Enum::YLeaf phase_aborted;

};

class RelayInfoPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;

};

class BagDhcpdIntfSrgRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class DhcpcIpv4State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf init_reboot;
        static const ydk::Enum::YLeaf rebooting;
        static const ydk::Enum::YLeaf selecting;
        static const ydk::Enum::YLeaf requesting;
        static const ydk::Enum::YLeaf bound;
        static const ydk::Enum::YLeaf renewing;
        static const ydk::Enum::YLeaf rebinding;
        static const ydk::Enum::YLeaf invalid;

};

class BagDhcpdProxyState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf selecting;
        static const ydk::Enum::YLeaf requesting;
        static const ydk::Enum::YLeaf bound;
        static const ydk::Enum::YLeaf renewing;
        static const ydk::Enum::YLeaf informing;
        static const ydk::Enum::YLeaf deleting;
        static const ydk::Enum::YLeaf create_dpm;
        static const ydk::Enum::YLeaf offer_sent;
        static const ydk::Enum::YLeaf update_dpm;
        static const ydk::Enum::YLeaf route_install;
        static const ydk::Enum::YLeaf disc_dpm;
        static const ydk::Enum::YLeaf renew_new_intf;
        static const ydk::Enum::YLeaf other_intf_dpm;
        static const ydk::Enum::YLeaf request_dpm;
        static const ydk::Enum::YLeaf change_addr_dpm;
        static const ydk::Enum::YLeaf max;

};

class RelayInfoVpnMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc;
        static const ydk::Enum::YLeaf cisco;

};

class RelayInfoAuthenticate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf inserted;

};

class BroadcastFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore;
        static const ydk::Enum::YLeaf check;
        static const ydk::Enum::YLeaf unicast_always;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DHCPD_OPER_ */

