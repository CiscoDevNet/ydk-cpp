#ifndef _CISCO_IOS_XR_IPV4_ARP_OPER_
#define _CISCO_IOS_XR_IPV4_ARP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_arp_oper {

class Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

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

        class Nodes; //type: Arp::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes> nodes;
        
}; // Arp


class Arp::Nodes : public ydk::Entity
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

        class Node; //type: Arp::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node> > node;
        
}; // Arp::Nodes


class Arp::Nodes::Node : public ydk::Entity
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
        class ResolutionHistoryDynamic; //type: Arp::Nodes::Node::ResolutionHistoryDynamic
        class TrafficVrfs; //type: Arp::Nodes::Node::TrafficVrfs
        class TrafficNode; //type: Arp::Nodes::Node::TrafficNode
        class ResolutionHistoryClient; //type: Arp::Nodes::Node::ResolutionHistoryClient
        class Entries; //type: Arp::Nodes::Node::Entries
        class TrafficInterfaces; //type: Arp::Nodes::Node::TrafficInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::Entries> entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryClient> resolution_history_client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryDynamic> resolution_history_dynamic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficInterfaces> traffic_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficNode> traffic_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficVrfs> traffic_vrfs;
        
}; // Arp::Nodes::Node


class Arp::Nodes::Node::Entries : public ydk::Entity
{
    public:
        Entries();
        ~Entries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Entry; //type: Arp::Nodes::Node::Entries::Entry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::Entries::Entry> > entry;
        
}; // Arp::Nodes::Node::Entries


class Arp::Nodes::Node::Entries::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf media_type; //type: IpArpBagMedia
        ydk::YLeaf state; //type: IpArpBagState
        ydk::YLeaf flag; //type: IpArpBagFlags
        ydk::YLeaf age; //type: uint64
        ydk::YLeaf encapsulation_type; //type: IpArpBagEncap
        ydk::YLeaf hardware_length; //type: uint8
        ydk::YLeaf hardware_address; //type: string

}; // Arp::Nodes::Node::Entries::Entry


class Arp::Nodes::Node::ResolutionHistoryClient : public ydk::Entity
{
    public:
        ResolutionHistoryClient();
        ~ResolutionHistoryClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArpEntry; //type: Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry> > arp_entry;
        
}; // Arp::Nodes::Node::ResolutionHistoryClient


class Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsec_timestamp; //type: uint64
        ydk::YLeaf idb_interface_name; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf status; //type: ArpResolutionHistoryStatus
        ydk::YLeaf client_id; //type: int32
        ydk::YLeaf entry_state; //type: int32
        ydk::YLeaf resolution_request_count; //type: uint32

}; // Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry


class Arp::Nodes::Node::ResolutionHistoryDynamic : public ydk::Entity
{
    public:
        ResolutionHistoryDynamic();
        ~ResolutionHistoryDynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArpEntry; //type: Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry> > arp_entry;
        
}; // Arp::Nodes::Node::ResolutionHistoryDynamic


class Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry : public ydk::Entity
{
    public:
        ArpEntry();
        ~ArpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsec_timestamp; //type: uint64
        ydk::YLeaf idb_interface_name; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf status; //type: ArpResolutionHistoryStatus
        ydk::YLeaf client_id; //type: int32
        ydk::YLeaf entry_state; //type: int32
        ydk::YLeaf resolution_request_count; //type: uint32

}; // Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry


class Arp::Nodes::Node::TrafficInterfaces : public ydk::Entity
{
    public:
        TrafficInterfaces();
        ~TrafficInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrafficInterface; //type: Arp::Nodes::Node::TrafficInterfaces::TrafficInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficInterfaces::TrafficInterface> > traffic_interface;
        
}; // Arp::Nodes::Node::TrafficInterfaces


class Arp::Nodes::Node::TrafficInterfaces::TrafficInterface : public ydk::Entity
{
    public:
        TrafficInterface();
        ~TrafficInterface();

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
        ydk::YLeaf requests_received; //type: uint32
        ydk::YLeaf replies_received; //type: uint32
        ydk::YLeaf requests_sent; //type: uint32
        ydk::YLeaf replies_sent; //type: uint32
        ydk::YLeaf proxy_replies_sent; //type: uint32
        ydk::YLeaf subscr_requests_received; //type: uint32
        ydk::YLeaf subscr_replies_sent; //type: uint32
        ydk::YLeaf subscr_replies_gratg_sent; //type: uint32
        ydk::YLeaf local_proxy_replies_sent; //type: uint32
        ydk::YLeaf gratuitous_replies_sent; //type: uint32
        ydk::YLeaf resolution_requests_received; //type: uint32
        ydk::YLeaf resolution_replies_received; //type: uint32
        ydk::YLeaf resolution_requests_dropped; //type: uint32
        ydk::YLeaf out_of_memory_errors; //type: uint32
        ydk::YLeaf no_buffer_errors; //type: uint32
        ydk::YLeaf total_entries; //type: uint32
        ydk::YLeaf dynamic_entries; //type: uint32
        ydk::YLeaf static_entries; //type: uint32
        ydk::YLeaf alias_entries; //type: uint32
        ydk::YLeaf interface_entries; //type: uint32
        ydk::YLeaf standby_entries; //type: uint32
        ydk::YLeaf dhcp_entries; //type: uint32
        ydk::YLeaf vxlan_entries; //type: uint32
        ydk::YLeaf ip_packets_dropped_node; //type: uint32
        ydk::YLeaf arp_packet_node_out_of_subnet; //type: uint32
        ydk::YLeaf ip_packets_dropped_interface; //type: uint32
        ydk::YLeaf arp_packet_interface_out_of_subnet; //type: uint32
        ydk::YLeaf arp_packet_unsolicited_packet; //type: uint32
        ydk::YLeaf idb_structures; //type: uint32

}; // Arp::Nodes::Node::TrafficInterfaces::TrafficInterface


class Arp::Nodes::Node::TrafficNode : public ydk::Entity
{
    public:
        TrafficNode();
        ~TrafficNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf requests_received; //type: uint32
        ydk::YLeaf replies_received; //type: uint32
        ydk::YLeaf requests_sent; //type: uint32
        ydk::YLeaf replies_sent; //type: uint32
        ydk::YLeaf proxy_replies_sent; //type: uint32
        ydk::YLeaf subscr_requests_received; //type: uint32
        ydk::YLeaf subscr_replies_sent; //type: uint32
        ydk::YLeaf subscr_replies_gratg_sent; //type: uint32
        ydk::YLeaf local_proxy_replies_sent; //type: uint32
        ydk::YLeaf gratuitous_replies_sent; //type: uint32
        ydk::YLeaf resolution_requests_received; //type: uint32
        ydk::YLeaf resolution_replies_received; //type: uint32
        ydk::YLeaf resolution_requests_dropped; //type: uint32
        ydk::YLeaf out_of_memory_errors; //type: uint32
        ydk::YLeaf no_buffer_errors; //type: uint32
        ydk::YLeaf total_entries; //type: uint32
        ydk::YLeaf dynamic_entries; //type: uint32
        ydk::YLeaf static_entries; //type: uint32
        ydk::YLeaf alias_entries; //type: uint32
        ydk::YLeaf interface_entries; //type: uint32
        ydk::YLeaf standby_entries; //type: uint32
        ydk::YLeaf dhcp_entries; //type: uint32
        ydk::YLeaf vxlan_entries; //type: uint32
        ydk::YLeaf ip_packets_dropped_node; //type: uint32
        ydk::YLeaf arp_packet_node_out_of_subnet; //type: uint32
        ydk::YLeaf ip_packets_dropped_interface; //type: uint32
        ydk::YLeaf arp_packet_interface_out_of_subnet; //type: uint32
        ydk::YLeaf arp_packet_unsolicited_packet; //type: uint32
        ydk::YLeaf idb_structures; //type: uint32

}; // Arp::Nodes::Node::TrafficNode


class Arp::Nodes::Node::TrafficVrfs : public ydk::Entity
{
    public:
        TrafficVrfs();
        ~TrafficVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrafficVrf; //type: Arp::Nodes::Node::TrafficVrfs::TrafficVrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::Arp::Nodes::Node::TrafficVrfs::TrafficVrf> > traffic_vrf;
        
}; // Arp::Nodes::Node::TrafficVrfs


class Arp::Nodes::Node::TrafficVrfs::TrafficVrf : public ydk::Entity
{
    public:
        TrafficVrf();
        ~TrafficVrf();

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
        ydk::YLeaf requests_received; //type: uint32
        ydk::YLeaf replies_received; //type: uint32
        ydk::YLeaf requests_sent; //type: uint32
        ydk::YLeaf replies_sent; //type: uint32
        ydk::YLeaf proxy_replies_sent; //type: uint32
        ydk::YLeaf subscr_requests_received; //type: uint32
        ydk::YLeaf subscr_replies_sent; //type: uint32
        ydk::YLeaf subscr_replies_gratg_sent; //type: uint32
        ydk::YLeaf local_proxy_replies_sent; //type: uint32
        ydk::YLeaf gratuitous_replies_sent; //type: uint32
        ydk::YLeaf resolution_requests_received; //type: uint32
        ydk::YLeaf resolution_replies_received; //type: uint32
        ydk::YLeaf resolution_requests_dropped; //type: uint32
        ydk::YLeaf out_of_memory_errors; //type: uint32
        ydk::YLeaf no_buffer_errors; //type: uint32
        ydk::YLeaf total_entries; //type: uint32
        ydk::YLeaf dynamic_entries; //type: uint32
        ydk::YLeaf static_entries; //type: uint32
        ydk::YLeaf alias_entries; //type: uint32
        ydk::YLeaf interface_entries; //type: uint32
        ydk::YLeaf standby_entries; //type: uint32
        ydk::YLeaf dhcp_entries; //type: uint32
        ydk::YLeaf vxlan_entries; //type: uint32
        ydk::YLeaf ip_packets_dropped_node; //type: uint32
        ydk::YLeaf arp_packet_node_out_of_subnet; //type: uint32
        ydk::YLeaf ip_packets_dropped_interface; //type: uint32
        ydk::YLeaf arp_packet_interface_out_of_subnet; //type: uint32
        ydk::YLeaf arp_packet_unsolicited_packet; //type: uint32
        ydk::YLeaf idb_structures; //type: uint32

}; // Arp::Nodes::Node::TrafficVrfs::TrafficVrf

class ArpGmp : public ydk::Entity
{
    public:
        ArpGmp();
        ~ArpGmp();

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

        class VrfInfos; //type: ArpGmp::VrfInfos
        class Vrfs; //type: ArpGmp::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::VrfInfos> vrf_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs> vrfs;
        
}; // ArpGmp


class ArpGmp::VrfInfos : public ydk::Entity
{
    public:
        VrfInfos();
        ~VrfInfos();

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

        class VrfInfo; //type: ArpGmp::VrfInfos::VrfInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::VrfInfos::VrfInfo> > vrf_info;
        
}; // ArpGmp::VrfInfos


class ArpGmp::VrfInfos::VrfInfo : public ydk::Entity
{
    public:
        VrfInfo();
        ~VrfInfo();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf vrf_id_number; //type: uint32
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf rsi_handle; //type: uint32
        ydk::YLeaf rsi_handle_high; //type: uint32

}; // ArpGmp::VrfInfos::VrfInfo


class ArpGmp::Vrfs : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Vrf; //type: ArpGmp::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf> > vrf;
        
}; // ArpGmp::Vrfs


class ArpGmp::Vrfs::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class ConfiguredIpAddresses; //type: ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses
        class Routes; //type: ArpGmp::Vrfs::Vrf::Routes
        class InterfaceConfiguredIps; //type: ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses> configured_ip_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps> interface_configured_ips;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::Routes> routes;
        
}; // ArpGmp::Vrfs::Vrf


class ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses : public ydk::Entity
{
    public:
        ConfiguredIpAddresses();
        ~ConfiguredIpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfiguredIpAddress; //type: ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress> > configured_ip_address;
        
}; // ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses


class ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress : public ydk::Entity
{
    public:
        ConfiguredIpAddress();
        ~ConfiguredIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf hardware_address; //type: string
        ydk::YLeaf encapsulation_type; //type: ArpGmpBagEncap
        ydk::YLeaf entry_type; //type: ArpGmpBagEntry

}; // ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress


class ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps : public ydk::Entity
{
    public:
        InterfaceConfiguredIps();
        ~InterfaceConfiguredIps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceConfiguredIp; //type: ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp> > interface_configured_ip;
        
}; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps


class ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp : public ydk::Entity
{
    public:
        InterfaceConfiguredIp();
        ~InterfaceConfiguredIp();

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
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf reference_count; //type: uint32
        class AssociatedConfigurationEntry; //type: ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry> associated_configuration_entry;
        
}; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp


class ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry : public ydk::Entity
{
    public:
        AssociatedConfigurationEntry();
        ~AssociatedConfigurationEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf hardware_address; //type: string
        ydk::YLeaf encapsulation_type; //type: ArpGmpBagEncap
        ydk::YLeaf entry_type; //type: ArpGmpBagEntry

}; // ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry


class ArpGmp::Vrfs::Vrf::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: ArpGmp::Vrfs::Vrf::Routes::Route

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_arp_oper::ArpGmp::Vrfs::Vrf::Routes::Route> > route;
        
}; // ArpGmp::Vrfs::Vrf::Routes


class ArpGmp::Vrfs::Vrf::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeafList interface_name; //type: list of  string

}; // ArpGmp::Vrfs::Vrf::Routes::Route

class ArpGmpBagEntry : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf alias;

};

class IpArpBagMedia : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media_arpa;
        static const ydk::Enum::YLeaf media_srp;
        static const ydk::Enum::YLeaf media_unknown;

};

class ArpGmpBagEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf arpa;
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf ieee802_1q;
        static const ydk::Enum::YLeaf srp;
        static const ydk::Enum::YLeaf srpa;
        static const ydk::Enum::YLeaf srpb;

};

class ArpResolutionHistoryStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf status_none;
        static const ydk::Enum::YLeaf status_resolution_request;
        static const ydk::Enum::YLeaf status_resolved_reply;
        static const ydk::Enum::YLeaf status_resolved_grat_arp;
        static const ydk::Enum::YLeaf status_resolved_request;
        static const ydk::Enum::YLeaf status_resolved_lc_sync;
        static const ydk::Enum::YLeaf status_resolved_lc_sync_purge_delay;
        static const ydk::Enum::YLeaf status_resolved_client;
        static const ydk::Enum::YLeaf status_removed_client;
        static const ydk::Enum::YLeaf status_already_resolved;
        static const ydk::Enum::YLeaf status_failed;
        static const ydk::Enum::YLeaf status_dropped_interface_down;
        static const ydk::Enum::YLeaf status_dropped_broadcast_disabled;
        static const ydk::Enum::YLeaf status_dropped_interface_unavailable;
        static const ydk::Enum::YLeaf status_dropped_bad_subnet;
        static const ydk::Enum::YLeaf status_dropped_dynamic_learning_disabled;
        static const ydk::Enum::YLeaf status_dropped_out_of_subnet_disabled;
        static const ydk::Enum::YLeaf status_removed_client_sweep;
        static const ydk::Enum::YLeaf status_added_client;
        static const ydk::Enum::YLeaf status_added_v1;
        static const ydk::Enum::YLeaf status_removed_v1;
        static const ydk::Enum::YLeaf status_resolved_peer_sync;
        static const ydk::Enum::YLeaf status_dropped_unsolicited_pak;

};

class IpArpBagEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf arpa;
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf ieee802_1q;
        static const ydk::Enum::YLeaf srp;
        static const ydk::Enum::YLeaf srpa;
        static const ydk::Enum::YLeaf srpb;

};

class IpArpBagState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_none;
        static const ydk::Enum::YLeaf state_interface;
        static const ydk::Enum::YLeaf state_standby;
        static const ydk::Enum::YLeaf state_static;
        static const ydk::Enum::YLeaf state_alias;
        static const ydk::Enum::YLeaf state_mobile;
        static const ydk::Enum::YLeaf state_incomplete;
        static const ydk::Enum::YLeaf state_deleted;
        static const ydk::Enum::YLeaf state_dynamic;
        static const ydk::Enum::YLeaf state_probe;
        static const ydk::Enum::YLeaf state_purge_delayed;
        static const ydk::Enum::YLeaf state_dhcp;
        static const ydk::Enum::YLeaf state_vxlan;
        static const ydk::Enum::YLeaf state_evpn_sync;
        static const ydk::Enum::YLeaf state_sat;
        static const ydk::Enum::YLeaf state_r_sync;
        static const ydk::Enum::YLeaf state_max;

};

class IpArpBagFlags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flag_none;
        static const ydk::Enum::YLeaf flag_dynamic;
        static const ydk::Enum::YLeaf flag_evpn_sync;
        static const ydk::Enum::YLeaf flag_max;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ARP_OPER_ */

