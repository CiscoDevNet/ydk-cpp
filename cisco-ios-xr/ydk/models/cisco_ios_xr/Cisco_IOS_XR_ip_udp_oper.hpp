#ifndef _CISCO_IOS_XR_IP_UDP_OPER_
#define _CISCO_IOS_XR_IP_UDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_udp_oper {

class Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: Udp::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes> nodes;
        
}; // Udp


class Udp::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Udp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node> > node;
        
}; // Udp::Nodes


class Udp::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Statistics; //type: Udp::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics> statistics;
        
}; // Udp::Nodes::Node


class Udp::Nodes::Node::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Traffic; //type: Udp::Nodes::Node::Statistics::Ipv4Traffic
        class Ipv6Traffic; //type: Udp::Nodes::Node::Statistics::Ipv6Traffic

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics::Ipv4Traffic> ipv4_traffic;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics::Ipv6Traffic> ipv6_traffic;
        
}; // Udp::Nodes::Node::Statistics


class Udp::Nodes::Node::Statistics::Ipv4Traffic : public Entity
{
    public:
        Ipv4Traffic();
        ~Ipv4Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udp_input_packets; //type: uint32
        YLeaf udp_checksum_error_packets; //type: uint32
        YLeaf udp_no_port_packets; //type: uint32
        YLeaf udp_bad_length_packets; //type: uint32
        YLeaf udp_output_packets; //type: uint32
        YLeaf udp_dropped_packets; //type: uint32

}; // Udp::Nodes::Node::Statistics::Ipv4Traffic


class Udp::Nodes::Node::Statistics::Ipv6Traffic : public Entity
{
    public:
        Ipv6Traffic();
        ~Ipv6Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udp_input_packets; //type: uint32
        YLeaf udp_checksum_error_packets; //type: uint32
        YLeaf udp_no_port_packets; //type: uint32
        YLeaf udp_bad_length_packets; //type: uint32
        YLeaf udp_output_packets; //type: uint32
        YLeaf udp_dropped_packets; //type: uint32

}; // Udp::Nodes::Node::Statistics::Ipv6Traffic

class UdpConnection : public Entity
{
    public:
        UdpConnection();
        ~UdpConnection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: UdpConnection::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes> nodes;
        
}; // UdpConnection


class UdpConnection::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: UdpConnection::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node> > node;
        
}; // UdpConnection::Nodes


class UdpConnection::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Statistics; //type: UdpConnection::Nodes::Node::Statistics
        class Lpts; //type: UdpConnection::Nodes::Node::Lpts
        class PcbDetails; //type: UdpConnection::Nodes::Node::PcbDetails
        class PcbBriefs; //type: UdpConnection::Nodes::Node::PcbBriefs

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts> lpts;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs> pcb_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails> pcb_details;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics> statistics;
        
}; // UdpConnection::Nodes::Node


class UdpConnection::Nodes::Node::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Clients; //type: UdpConnection::Nodes::Node::Statistics::Clients
        class Summary; //type: UdpConnection::Nodes::Node::Statistics::Summary
        class PcbStatistics; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics> pcb_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Summary> summary;
        
}; // UdpConnection::Nodes::Node::Statistics


class UdpConnection::Nodes::Node::Statistics::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: UdpConnection::Nodes::Node::Statistics::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Clients::Client> > client;
        
}; // UdpConnection::Nodes::Node::Statistics::Clients


class UdpConnection::Nodes::Node::Statistics::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_id; //type: uint32
        YLeaf client_jid; //type: int32
        YLeaf client_name; //type: string
        YLeaf ipv4_received_packets; //type: uint32
        YLeaf ipv4_sent_packets; //type: uint32
        YLeaf ipv6_received_packets; //type: uint32
        YLeaf ipv6_sent_packets; //type: uint32

}; // UdpConnection::Nodes::Node::Statistics::Clients::Client


class UdpConnection::Nodes::Node::Statistics::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_total_packets; //type: uint32
        YLeaf received_no_port_packets; //type: uint32
        YLeaf received_bad_checksum_packets; //type: uint32
        YLeaf received_too_short_packets; //type: uint32
        YLeaf received_drop_packets; //type: uint32
        YLeaf sent_total_packets; //type: uint32
        YLeaf sent_error_packets; //type: uint32
        YLeaf forward_broadcast_packets; //type: uint32
        YLeaf cloned_packets; //type: uint32
        YLeaf failed_clone_packets; //type: uint32

}; // UdpConnection::Nodes::Node::Statistics::Summary


class UdpConnection::Nodes::Node::Statistics::PcbStatistics : public Entity
{
    public:
        PcbStatistics();
        ~PcbStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PcbStatistic; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic> > pcb_statistic;
        
}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics


class UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic : public Entity
{
    public:
        PcbStatistic();
        ~PcbStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcb_address; //type: int32
        YLeaf vrf_id; //type: uint32
        YLeaf is_paw_socket; //type: boolean
        class Send; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send
        class Receive; //type: UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive> receive;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send> send;
        
}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic


class UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_application_bytes; //type: uint64
        YLeaf received_xipc_pulses; //type: uint64
        YLeaf sent_network_packets; //type: uint64
        YLeaf sent_net_io_packets; //type: uint64
        YLeaf failed_queued_network_packets; //type: uint32
        YLeaf failed_queued_net_io_packets; //type: uint32

}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send


class UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_network_packets; //type: uint64
        YLeaf failed_queued_application_packets; //type: uint32
        YLeaf queued_application_packets; //type: uint64
        YLeaf failed_queued_application_socket_packets; //type: uint32
        YLeaf queued_application_socket_packets; //type: uint64

}; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive


class UdpConnection::Nodes::Node::Lpts : public Entity
{
    public:
        Lpts();
        ~Lpts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Queries; //type: UdpConnection::Nodes::Node::Lpts::Queries

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries> queries;
        
}; // UdpConnection::Nodes::Node::Lpts


class UdpConnection::Nodes::Node::Lpts::Queries : public Entity
{
    public:
        Queries();
        ~Queries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Query; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query> > query;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries


class UdpConnection::Nodes::Node::Lpts::Queries::Query : public Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf query_name; //type: LptsPcbQueryEnum
        class Pcbs; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs> pcbs;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs : public Entity
{
    public:
        Pcbs();
        ~Pcbs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pcb; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb> > pcb;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb : public Entity
{
    public:
        Pcb();
        ~Pcb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcb_address; //type: int32
        YLeaf l4_protocol; //type: uint32
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        class LocalAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress
        class ForeignAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress
        class Common; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress> local_address;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress : public Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AddrFamilyEnum
        class LptsPcb; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb> lpts_pcb;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb : public Entity
{
    public:
        LptsPcb();
        ~LptsPcb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ttl; //type: uint8
        YLeaf flow_types_info; //type: uint32
        class Options; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options
        class LptsFlags; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags
        class AcceptMask; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask
        class Filter; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask> accept_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter> > filter;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags> lpts_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options> options;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options : public Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_receive_filter; //type: boolean
        YLeaf is_ip_sla; //type: boolean

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags : public Entity
{
    public:
        LptsFlags();
        ~LptsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_pcb_bound; //type: boolean
        YLeaf is_local_address_ignore; //type: boolean
        YLeaf is_ignore_vrf_filter; //type: boolean

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask : public Entity
{
    public:
        AcceptMask();
        ~AcceptMask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_interface; //type: boolean
        YLeaf is_packet_type; //type: boolean
        YLeaf is_remote_address; //type: boolean
        YLeaf is_remote_port; //type: boolean
        YLeaf is_local_address; //type: boolean
        YLeaf is_local_port; //type: boolean

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf remote_length; //type: uint16
        YLeaf local_length; //type: uint16
        YLeaf receive_remote_port; //type: uint16
        YLeaf receive_local_port; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf flow_types_info; //type: uint32
        class PacketType; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType
        class RemoteAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress
        class LocalAddress; //type: UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType> packet_type;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress> remote_address;
        
}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType : public Entity
{
    public:
        PacketType();
        ~PacketType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: PacketEnum
        YLeaf icmp_message_type; //type: MessageTypeIcmpEnum
        YLeaf icm_pv6_message_type; //type: MessageTypeIcmpv6Enum
        YLeaf igmp_message_type; //type: MessageTypeIgmpEnum
        YLeaf message_id; //type: uint32

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress : public Entity
{
    public:
        RemoteAddress();
        ~RemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress


class UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress


class UdpConnection::Nodes::Node::PcbDetails : public Entity
{
    public:
        PcbDetails();
        ~PcbDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PcbDetail; //type: UdpConnection::Nodes::Node::PcbDetails::PcbDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail> > pcb_detail;
        
}; // UdpConnection::Nodes::Node::PcbDetails


class UdpConnection::Nodes::Node::PcbDetails::PcbDetail : public Entity
{
    public:
        PcbDetail();
        ~PcbDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcb_address; //type: int32
        YLeaf af_name; //type: UdpAddressFamilyEnum
        YLeaf local_process_id; //type: uint32
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        YLeaf receive_queue; //type: uint32
        YLeaf send_queue; //type: uint32
        YLeaf vrf_id; //type: uint32
        class LocalAddress; //type: UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress
        class ForeignAddress; //type: UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress> local_address;
        
}; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail


class UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: UdpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress


class UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress : public Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: UdpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress


class UdpConnection::Nodes::Node::PcbBriefs : public Entity
{
    public:
        PcbBriefs();
        ~PcbBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PcbBrief; //type: UdpConnection::Nodes::Node::PcbBriefs::PcbBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief> > pcb_brief;
        
}; // UdpConnection::Nodes::Node::PcbBriefs


class UdpConnection::Nodes::Node::PcbBriefs::PcbBrief : public Entity
{
    public:
        PcbBrief();
        ~PcbBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcb_address; //type: int32
        YLeaf af_name; //type: UdpAddressFamilyEnum
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        YLeaf receive_queue; //type: uint32
        YLeaf send_queue; //type: uint32
        YLeaf vrf_id; //type: uint32
        class LocalAddress; //type: UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress
        class ForeignAddress; //type: UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress

        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress> local_address;
        
}; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief


class UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: UdpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress


class UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress : public Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: UdpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress

class LptsPcbQueryEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf static_policy;
        static const Enum::YLeaf interface;
        static const Enum::YLeaf packet;

};

class MessageTypeIcmpv6Enum : public Enum
{
    public:
        static const Enum::YLeaf destination_unreachable;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf echo_request;
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf multicast_listener_query;
        static const Enum::YLeaf multicast_listener_report;
        static const Enum::YLeaf multicast_listener_done;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf neighbor_solicitation;
        static const Enum::YLeaf neighbor_advertisement;
        static const Enum::YLeaf redirect_message;
        static const Enum::YLeaf router_renumbering;
        static const Enum::YLeaf node_information_query;
        static const Enum::YLeaf node_information_reply;
        static const Enum::YLeaf inverse_neighbor_discovery_solicitaion;
        static const Enum::YLeaf inverse_neighbor_discover_advertisement;
        static const Enum::YLeaf v2_multicast_listener_report;
        static const Enum::YLeaf home_agent_address_discovery_request;
        static const Enum::YLeaf home_agent_address_discovery_reply;
        static const Enum::YLeaf mobile_prefix_solicitation;
        static const Enum::YLeaf mobile_prefix_advertisement;
        static const Enum::YLeaf certification_path_solicitation_message;
        static const Enum::YLeaf certification_path_advertisement_message;
        static const Enum::YLeaf experimental_mobility_protocols;
        static const Enum::YLeaf multicast_router_advertisement;
        static const Enum::YLeaf multicast_router_solicitation;
        static const Enum::YLeaf multicast_router_termination;
        static const Enum::YLeaf fmipv6_messages;

};

class MessageTypeIcmpEnum : public Enum
{
    public:
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf destination_unreachable;
        static const Enum::YLeaf source_quench;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf alternate_host_address;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_selection;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf time_stamp;
        static const Enum::YLeaf time_stamp_reply;
        static const Enum::YLeaf information_request;
        static const Enum::YLeaf information_reply;
        static const Enum::YLeaf address_mask_request;
        static const Enum::YLeaf address_mask_reply;
        static const Enum::YLeaf trace_route;
        static const Enum::YLeaf datagram_conversion_error;
        static const Enum::YLeaf mobile_host_redirect;
        static const Enum::YLeaf where_are_you;
        static const Enum::YLeaf iam_here;
        static const Enum::YLeaf mobile_registration_request;
        static const Enum::YLeaf mobile_registration_reply;
        static const Enum::YLeaf domain_name_request;

};

class MessageTypeIgmpEnum : public Enum
{
    public:
        static const Enum::YLeaf membership_query;
        static const Enum::YLeaf v1_membership_report;
        static const Enum::YLeaf dvmrp;
        static const Enum::YLeaf pi_mv1;
        static const Enum::YLeaf cisco_trace_messages;
        static const Enum::YLeaf v2_membership_report;
        static const Enum::YLeaf v2_leave_group;
        static const Enum::YLeaf multicast_traceroute_response;
        static const Enum::YLeaf multicast_traceroute;
        static const Enum::YLeaf v3_membership_report;
        static const Enum::YLeaf multicast_router_advertisement;
        static const Enum::YLeaf multicast_router_solicitation;
        static const Enum::YLeaf multicast_router_termination;

};

class PacketEnum : public Enum
{
    public:
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf icm_pv6;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf unknown;

};

class AddrFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified;
        static const Enum::YLeaf local;
        static const Enum::YLeaf inet;
        static const Enum::YLeaf implink;
        static const Enum::YLeaf pup;
        static const Enum::YLeaf chaos;
        static const Enum::YLeaf ns;
        static const Enum::YLeaf iso;
        static const Enum::YLeaf ecma;
        static const Enum::YLeaf data_kit;
        static const Enum::YLeaf ccitt;
        static const Enum::YLeaf sna;
        static const Enum::YLeaf de_cnet;
        static const Enum::YLeaf dli;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf hylink;
        static const Enum::YLeaf appletalk;
        static const Enum::YLeaf route;
        static const Enum::YLeaf link;
        static const Enum::YLeaf pseudo_xtp;
        static const Enum::YLeaf coip;
        static const Enum::YLeaf cnt;
        static const Enum::YLeaf pseudo_rtip;
        static const Enum::YLeaf ipx;
        static const Enum::YLeaf sip;
        static const Enum::YLeaf pseudo_pip;
        static const Enum::YLeaf inet6;
        static const Enum::YLeaf snap;
        static const Enum::YLeaf clnl;
        static const Enum::YLeaf chdlc;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf host_cas;
        static const Enum::YLeaf dsp;
        static const Enum::YLeaf sap;
        static const Enum::YLeaf atm;
        static const Enum::YLeaf fr;
        static const Enum::YLeaf mso;
        static const Enum::YLeaf dchan;
        static const Enum::YLeaf cas;
        static const Enum::YLeaf nat;
        static const Enum::YLeaf ether;
        static const Enum::YLeaf srp;

};

class UdpAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_UDP_OPER_ */

