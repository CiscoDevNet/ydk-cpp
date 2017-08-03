#ifndef _CISCO_IOS_XR_IP_UDP_OPER_
#define _CISCO_IOS_XR_IP_UDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_udp_oper {

class Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Nodes; //type: Udp::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes> nodes;
        
}; // Udp


class Udp::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Udp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node> > node;
        
}; // Udp::Nodes


class Udp::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class Statistics; //type: Udp::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics> statistics;
        
}; // Udp::Nodes::Node


class Udp::Nodes::Node::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Traffic; //type: Udp::Nodes::Node::Statistics::Ipv4Traffic
        class Ipv6Traffic; //type: Udp::Nodes::Node::Statistics::Ipv6Traffic

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics::Ipv4Traffic> ipv4_traffic;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics::Ipv6Traffic> ipv6_traffic;
        
}; // Udp::Nodes::Node::Statistics


class Udp::Nodes::Node::Statistics::Ipv4Traffic : public ydk::Entity
{
    public:
        Ipv4Traffic();
        ~Ipv4Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_input_packets; //type: uint32
        ydk::YLeaf udp_checksum_error_packets; //type: uint32
        ydk::YLeaf udp_no_port_packets; //type: uint32
        ydk::YLeaf udp_bad_length_packets; //type: uint32
        ydk::YLeaf udp_output_packets; //type: uint32
        ydk::YLeaf udp_dropped_packets; //type: uint32

}; // Udp::Nodes::Node::Statistics::Ipv4Traffic


class Udp::Nodes::Node::Statistics::Ipv6Traffic : public ydk::Entity
{
    public:
        Ipv6Traffic();
        ~Ipv6Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_input_packets; //type: uint32
        ydk::YLeaf udp_checksum_error_packets; //type: uint32
        ydk::YLeaf udp_no_port_packets; //type: uint32
        ydk::YLeaf udp_bad_length_packets; //type: uint32
        ydk::YLeaf udp_output_packets; //type: uint32
        ydk::YLeaf udp_dropped_packets; //type: uint32

}; // Udp::Nodes::Node::Statistics::Ipv6Traffic

class UdpConnection : public ydk::Entity
{
    public:
        UdpConnection();
        ~UdpConnection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Nodes; //type: UdpConnection::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes> nodes;
        
}; // UdpConnection


class UdpConnection::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: UdpConnection::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node> > node;
        
}; // UdpConnection::Nodes


class UdpConnection::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class Statistics; //type: UdpConnection::Nodes::Node::Statistics
        class Lpts; //type: UdpConnection::Nodes::Node::Lpts
        class PcbDetails; //type: UdpConnection::Nodes::Node::PcbDetails
        class PcbBriefs; //type: UdpConnection::Nodes::Node::PcbBriefs

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts> lpts;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs> pcb_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails> pcb_details;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics> statistics;
        
}; // UdpConnection::Nodes::Node


class UdpConnection::Nodes::Node::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clients; //type: UdpConnection::Nodes::Node::Statistics::Clients
        class Summary; //type: UdpConnection::Nodes::Node::Statistics::Summary
        class PcbStatistics; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics> pcb_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Summary> summary;
        
}; // UdpConnection::Nodes::Node::Statistics


class UdpConnection::Nodes::Node::Statistics::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: UdpConnection::Nodes::Node::Statistics::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Clients::Client> > client;
        
}; // UdpConnection::Nodes::Node::Statistics::Clients


class UdpConnection::Nodes::Node::Statistics::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf client_jid; //type: int32
        ydk::YLeaf client_name; //type: string
        ydk::YLeaf ipv4_received_packets; //type: uint32
        ydk::YLeaf ipv4_sent_packets; //type: uint32
        ydk::YLeaf ipv6_received_packets; //type: uint32
        ydk::YLeaf ipv6_sent_packets; //type: uint32

}; // UdpConnection::Nodes::Node::Statistics::Clients::Client


class UdpConnection::Nodes::Node::Statistics::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_total_packets; //type: uint32
        ydk::YLeaf received_no_port_packets; //type: uint32
        ydk::YLeaf received_bad_checksum_packets; //type: uint32
        ydk::YLeaf received_too_short_packets; //type: uint32
        ydk::YLeaf received_drop_packets; //type: uint32
        ydk::YLeaf sent_total_packets; //type: uint32
        ydk::YLeaf sent_error_packets; //type: uint32
        ydk::YLeaf forward_broadcast_packets; //type: uint32
        ydk::YLeaf cloned_packets; //type: uint32
        ydk::YLeaf failed_clone_packets; //type: uint32

}; // UdpConnection::Nodes::Node::Statistics::Summary


class UdpConnection::Nodes::Node::Statistics::PcbStatistics : public ydk::Entity
{
    public:
        PcbStatistics();
        ~PcbStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PcbStatistic; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic> > pcb_statistic;
        
}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics


class UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic : public ydk::Entity
{
    public:
        PcbStatistic();
        ~PcbStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_address; //type: int32
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf is_paw_socket; //type: boolean
        class Send; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send
        class Receive; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive> receive;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send> send;
        
}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic


class UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_application_bytes; //type: uint64
        ydk::YLeaf received_xipc_pulses; //type: uint64
        ydk::YLeaf sent_network_packets; //type: uint64
        ydk::YLeaf sent_net_io_packets; //type: uint64
        ydk::YLeaf failed_queued_network_packets; //type: uint32
        ydk::YLeaf failed_queued_net_io_packets; //type: uint32

}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send


class UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_network_packets; //type: uint64
        ydk::YLeaf failed_queued_application_packets; //type: uint32
        ydk::YLeaf queued_application_packets; //type: uint64
        ydk::YLeaf failed_queued_application_socket_packets; //type: uint32
        ydk::YLeaf queued_application_socket_packets; //type: uint64

}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive


class UdpConnection::Nodes::Node::Lpts : public ydk::Entity
{
    public:
        Lpts();
        ~Lpts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Queries; //type: UdpConnection::Nodes::Node::Lpts::Queries

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries> queries;
        
}; // UdpConnection::Nodes::Node::Lpts


class UdpConnection::Nodes::Node::Lpts::Queries : public ydk::Entity
{
    public:
        Queries();
        ~Queries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Query; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query> > query;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries


class UdpConnection::Nodes::Node::Lpts::Queries::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_name; //type: LptsPcbQuery
        class Pcbs; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs> pcbs;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs : public ydk::Entity
{
    public:
        Pcbs();
        ~Pcbs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pcb; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb> > pcb;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb : public ydk::Entity
{
    public:
        Pcb();
        ~Pcb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_address; //type: int32
        ydk::YLeaf l4_protocol; //type: uint32
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        class LocalAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress
        class ForeignAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress
        class Common; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress> local_address;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        class LptsPcb; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb> lpts_pcb;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb : public ydk::Entity
{
    public:
        LptsPcb();
        ~LptsPcb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf flow_types_info; //type: uint32
        class Options; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options
        class LptsFlags; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags
        class AcceptMask; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask
        class Filter; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask> accept_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter> > filter;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags> lpts_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options> options;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_receive_filter; //type: boolean
        ydk::YLeaf is_ip_sla; //type: boolean

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags : public ydk::Entity
{
    public:
        LptsFlags();
        ~LptsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_pcb_bound; //type: boolean
        ydk::YLeaf is_local_address_ignore; //type: boolean
        ydk::YLeaf is_ignore_vrf_filter; //type: boolean

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask : public ydk::Entity
{
    public:
        AcceptMask();
        ~AcceptMask();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf is_packet_type; //type: boolean
        ydk::YLeaf is_remote_address; //type: boolean
        ydk::YLeaf is_remote_port; //type: boolean
        ydk::YLeaf is_local_address; //type: boolean
        ydk::YLeaf is_local_port; //type: boolean

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf remote_length; //type: uint16
        ydk::YLeaf local_length; //type: uint16
        ydk::YLeaf receive_remote_port; //type: uint16
        ydk::YLeaf receive_local_port; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf flow_types_info; //type: uint32
        class PacketType; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType
        class RemoteAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress
        class LocalAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType> packet_type;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress> remote_address;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType : public ydk::Entity
{
    public:
        PacketType();
        ~PacketType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Packet
        ydk::YLeaf icmp_message_type; //type: MessageTypeIcmp
        ydk::YLeaf icm_pv6_message_type; //type: MessageTypeIcmpv6
        ydk::YLeaf igmp_message_type; //type: MessageTypeIgmp
        ydk::YLeaf message_id; //type: uint32

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress : public ydk::Entity
{
    public:
        RemoteAddress();
        ~RemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: AddrFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress


class UdpConnection::Nodes::Node::PcbDetails : public ydk::Entity
{
    public:
        PcbDetails();
        ~PcbDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PcbDetail; //type: UdpConnection::Nodes::Node::PcbDetails::PcbDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail> > pcb_detail;
        
}; // UdpConnection::Nodes::Node::PcbDetails


class UdpConnection::Nodes::Node::PcbDetails::PcbDetail : public ydk::Entity
{
    public:
        PcbDetail();
        ~PcbDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_address; //type: int32
        ydk::YLeaf af_name; //type: UdpAddressFamily
        ydk::YLeaf local_process_id; //type: uint32
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf receive_queue; //type: uint32
        ydk::YLeaf send_queue; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        class LocalAddress; //type: UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress
        class ForeignAddress; //type: UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress> local_address;
        
}; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail


class UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: UdpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress


class UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: UdpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress


class UdpConnection::Nodes::Node::PcbBriefs : public ydk::Entity
{
    public:
        PcbBriefs();
        ~PcbBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PcbBrief; //type: UdpConnection::Nodes::Node::PcbBriefs::PcbBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief> > pcb_brief;
        
}; // UdpConnection::Nodes::Node::PcbBriefs


class UdpConnection::Nodes::Node::PcbBriefs::PcbBrief : public ydk::Entity
{
    public:
        PcbBrief();
        ~PcbBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcb_address; //type: int32
        ydk::YLeaf af_name; //type: UdpAddressFamily
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf receive_queue; //type: uint32
        ydk::YLeaf send_queue; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        class LocalAddress; //type: UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress
        class ForeignAddress; //type: UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress> local_address;
        
}; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief


class UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: UdpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress


class UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress : public ydk::Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: UdpAddressFamily
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress

class Packet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf icm_pv6;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf unknown;

};

class MessageTypeIcmp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf alternate_host_address;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_selection;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf time_stamp;
        static const ydk::Enum::YLeaf time_stamp_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf address_mask_request;
        static const ydk::Enum::YLeaf address_mask_reply;
        static const ydk::Enum::YLeaf trace_route;
        static const ydk::Enum::YLeaf datagram_conversion_error;
        static const ydk::Enum::YLeaf mobile_host_redirect;
        static const ydk::Enum::YLeaf where_are_you;
        static const ydk::Enum::YLeaf iam_here;
        static const ydk::Enum::YLeaf mobile_registration_request;
        static const ydk::Enum::YLeaf mobile_registration_reply;
        static const ydk::Enum::YLeaf domain_name_request;

};

class MessageTypeIgmp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf membership_query;
        static const ydk::Enum::YLeaf v1_membership_report;
        static const ydk::Enum::YLeaf dvmrp;
        static const ydk::Enum::YLeaf pi_mv1;
        static const ydk::Enum::YLeaf cisco_trace_messages;
        static const ydk::Enum::YLeaf v2_membership_report;
        static const ydk::Enum::YLeaf v2_leave_group;
        static const ydk::Enum::YLeaf multicast_traceroute_response;
        static const ydk::Enum::YLeaf multicast_traceroute;
        static const ydk::Enum::YLeaf v3_membership_report;
        static const ydk::Enum::YLeaf multicast_router_advertisement;
        static const ydk::Enum::YLeaf multicast_router_solicitation;
        static const ydk::Enum::YLeaf multicast_router_termination;

};

class AddrFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf inet;
        static const ydk::Enum::YLeaf implink;
        static const ydk::Enum::YLeaf pup;
        static const ydk::Enum::YLeaf chaos;
        static const ydk::Enum::YLeaf ns;
        static const ydk::Enum::YLeaf iso;
        static const ydk::Enum::YLeaf ecma;
        static const ydk::Enum::YLeaf data_kit;
        static const ydk::Enum::YLeaf ccitt;
        static const ydk::Enum::YLeaf sna;
        static const ydk::Enum::YLeaf de_cnet;
        static const ydk::Enum::YLeaf dli;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf hylink;
        static const ydk::Enum::YLeaf appletalk;
        static const ydk::Enum::YLeaf route;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf pseudo_xtp;
        static const ydk::Enum::YLeaf coip;
        static const ydk::Enum::YLeaf cnt;
        static const ydk::Enum::YLeaf pseudo_rtip;
        static const ydk::Enum::YLeaf ipx;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf pseudo_pip;
        static const ydk::Enum::YLeaf inet6;
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf clnl;
        static const ydk::Enum::YLeaf chdlc;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf host_cas;
        static const ydk::Enum::YLeaf dsp;
        static const ydk::Enum::YLeaf sap;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf fr;
        static const ydk::Enum::YLeaf mso;
        static const ydk::Enum::YLeaf dchan;
        static const ydk::Enum::YLeaf cas;
        static const ydk::Enum::YLeaf nat;
        static const ydk::Enum::YLeaf ether;
        static const ydk::Enum::YLeaf srp;

};

class UdpAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class LptsPcbQuery : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf static_policy;
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf packet;

};

class MessageTypeIcmpv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf multicast_listener_query;
        static const ydk::Enum::YLeaf multicast_listener_report;
        static const ydk::Enum::YLeaf multicast_listener_done;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf neighbor_solicitation;
        static const ydk::Enum::YLeaf neighbor_advertisement;
        static const ydk::Enum::YLeaf redirect_message;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf node_information_query;
        static const ydk::Enum::YLeaf node_information_reply;
        static const ydk::Enum::YLeaf inverse_neighbor_discovery_solicitaion;
        static const ydk::Enum::YLeaf inverse_neighbor_discover_advertisement;
        static const ydk::Enum::YLeaf v2_multicast_listener_report;
        static const ydk::Enum::YLeaf home_agent_address_discovery_request;
        static const ydk::Enum::YLeaf home_agent_address_discovery_reply;
        static const ydk::Enum::YLeaf mobile_prefix_solicitation;
        static const ydk::Enum::YLeaf mobile_prefix_advertisement;
        static const ydk::Enum::YLeaf certification_path_solicitation_message;
        static const ydk::Enum::YLeaf certification_path_advertisement_message;
        static const ydk::Enum::YLeaf experimental_mobility_protocols;
        static const ydk::Enum::YLeaf multicast_router_advertisement;
        static const ydk::Enum::YLeaf multicast_router_solicitation;
        static const ydk::Enum::YLeaf multicast_router_termination;
        static const ydk::Enum::YLeaf fmipv6_messages;

};


}
}

#endif /* _CISCO_IOS_XR_IP_UDP_OPER_ */

