#ifndef _CISCO_IOS_XR_IP_TCP_OPER_
#define _CISCO_IOS_XR_IP_TCP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_tcp_oper {

class TcpConnection : public Entity
{
    public:
        TcpConnection();
        ~TcpConnection();

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



        class Nodes; //type: TcpConnection::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes> nodes;


}; // TcpConnection


class TcpConnection::Nodes : public Entity
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



        class Node; //type: TcpConnection::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node> > node;


}; // TcpConnection::Nodes


class TcpConnection::Nodes::Node : public Entity
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


        YLeaf id; //type: string

        class Statistics; //type: TcpConnection::Nodes::Node::Statistics
        class ExtendedInformation; //type: TcpConnection::Nodes::Node::ExtendedInformation
        class DetailInformations; //type: TcpConnection::Nodes::Node::DetailInformations
        class BriefInformations; //type: TcpConnection::Nodes::Node::BriefInformations

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations> brief_informations;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations> detail_informations;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation> extended_information;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics> statistics;


}; // TcpConnection::Nodes::Node


class TcpConnection::Nodes::Node::Statistics : public Entity
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



        class Clients; //type: TcpConnection::Nodes::Node::Statistics::Clients
        class Pcbs; //type: TcpConnection::Nodes::Node::Statistics::Pcbs
        class Summary; //type: TcpConnection::Nodes::Node::Statistics::Summary

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs> pcbs;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Summary> summary;


}; // TcpConnection::Nodes::Node::Statistics


class TcpConnection::Nodes::Node::Statistics::Clients : public Entity
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



        class Client; //type: TcpConnection::Nodes::Node::Statistics::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Clients::Client> > client;


}; // TcpConnection::Nodes::Node::Statistics::Clients


class TcpConnection::Nodes::Node::Statistics::Clients::Client : public Entity
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


        YLeaf client_id; //type: uint32
        YLeaf client_jid; //type: int32
        YLeaf client_name; //type: string
        YLeaf ipv4_received_packets; //type: uint32
        YLeaf ipv4_sent_packets; //type: uint32
        YLeaf ipv6_received_packets; //type: uint32
        YLeaf ipv6_sent_packets; //type: uint32



}; // TcpConnection::Nodes::Node::Statistics::Clients::Client


class TcpConnection::Nodes::Node::Statistics::Pcbs : public Entity
{
    public:
        Pcbs();
        ~Pcbs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pcb; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb> > pcb;


}; // TcpConnection::Nodes::Node::Statistics::Pcbs


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb : public Entity
{
    public:
        Pcb();
        ~Pcb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: uint32
        YLeaf pcb; //type: uint64
        YLeaf vrf_id; //type: uint32
        YLeaf packets_sent; //type: uint64
        YLeaf xipc_pulse_received; //type: uint64
        YLeaf segment_instruction_received; //type: uint32
        YLeaf send_packets_queued; //type: uint64
        YLeaf send_packets_queued_net_io; //type: uint64
        YLeaf send_queue_failed; //type: uint32
        YLeaf send_queue_net_io_failed; //type: uint32
        YLeaf packets_received; //type: uint64
        YLeaf receive_queue_failed; //type: uint32
        YLeaf received_packets_queued; //type: uint64
        YLeaf send_window_shrink_ignored; //type: uint32
        YLeaf is_paw_socket; //type: boolean
        YLeaf read_io_time; //type: uint32
        YLeaf write_io_time; //type: uint32

        class ReadIoCounts; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts
        class WriteIoCounts; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts
        class AsyncSessionStats; //type: TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats> async_session_stats;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts> read_io_counts;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts> write_io_counts;


}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts : public Entity
{
    public:
        ReadIoCounts();
        ~ReadIoCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf io_count; //type: uint32
        YLeaf arm_count; //type: uint32
        YLeaf unarm_count; //type: uint32
        YLeaf autoarm_count; //type: uint32



}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts : public Entity
{
    public:
        WriteIoCounts();
        ~WriteIoCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf io_count; //type: uint32
        YLeaf arm_count; //type: uint32
        YLeaf unarm_count; //type: uint32
        YLeaf autoarm_count; //type: uint32



}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts


class TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats : public Entity
{
    public:
        AsyncSessionStats();
        ~AsyncSessionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf async_session; //type: boolean
        YLeafList data_write_success_num; //type: list of  uint32
        YLeafList data_read_success_num; //type: list of  uint32
        YLeafList data_write_error_num; //type: list of  uint32
        YLeafList data_read_error_num; //type: list of  uint32
        YLeafList control_write_success_num; //type: list of  uint32
        YLeafList control_read_success_num; //type: list of  uint32
        YLeafList control_write_error_num; //type: list of  uint32
        YLeafList control_read_error_num; //type: list of  uint32
        YLeafList data_write_byte; //type: list of  uint64
        YLeafList data_read_byte; //type: list of  uint64



}; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats


class TcpConnection::Nodes::Node::Statistics::Summary : public Entity
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


        YLeaf syn_cache_count; //type: uint32
        YLeaf num_open_sockets; //type: uint32
        YLeaf total_pakets_sent; //type: uint32
        YLeaf send_packets_dropped; //type: uint32
        YLeaf send_auth_packets_dropped; //type: uint32
        YLeaf data_pakets_sent; //type: uint32
        YLeaf data_bytes_sent; //type: uint32
        YLeaf packets_retransmitted; //type: uint32
        YLeaf bytes_retransmitted; //type: uint32
        YLeaf ack_only_packets_sent; //type: uint32
        YLeaf delay_ack_packets_sent; //type: uint32
        YLeaf urgent_only_packets_sent; //type: uint32
        YLeaf window_probe_packets_sent; //type: uint32
        YLeaf window_update_packets_sent; //type: uint32
        YLeaf control_packets_sent; //type: uint32
        YLeaf rst_packets_sent; //type: uint32
        YLeaf total_packets_received; //type: uint32
        YLeaf received_packets_dropped; //type: uint32
        YLeaf synacl_match_pkts_dropped; //type: uint32
        YLeaf received_packets_dropped_stale_c_hdr; //type: uint32
        YLeaf received_auth_packets_dropped; //type: uint32
        YLeaf ack_packets_received; //type: uint32
        YLeaf ackbytes_received; //type: uint32
        YLeaf duplicated_ack_packets_received; //type: uint32
        YLeaf ack_packets_for_unsent_received; //type: uint32
        YLeaf data_packets_received_in_sequence; //type: uint32
        YLeaf data_bytes_received_in_sequence; //type: uint32
        YLeaf duplicate_packets_received; //type: uint32
        YLeaf duplicate_bytes_received; //type: uint32
        YLeaf partial_duplicate_ack_received; //type: uint32
        YLeaf partial_duplicate_bytes_received; //type: uint32
        YLeaf out_of_order_packets_received; //type: uint32
        YLeaf out_of_order_bytes_received; //type: uint32
        YLeaf after_window_packets_received; //type: uint32
        YLeaf after_window_bytes_received; //type: uint32
        YLeaf window_probe_packets_received; //type: uint32
        YLeaf window_update_packets_received; //type: uint32
        YLeaf packets_received_after_close_packet; //type: uint32
        YLeaf bad_checksum_packets_received; //type: uint32
        YLeaf too_short_packets_received; //type: uint32
        YLeaf malformed_packets_received; //type: uint32
        YLeaf no_port_packets_received; //type: uint32
        YLeaf connections_requested; //type: uint32
        YLeaf connections_accepted; //type: uint32
        YLeaf connections_established; //type: uint32
        YLeaf connections_forcibly_closed; //type: uint32
        YLeaf connections_closed; //type: uint32
        YLeaf connections_dropped; //type: uint32
        YLeaf embryonic_connection_dropped; //type: uint32
        YLeaf connections_failed; //type: uint32
        YLeaf established_connections_reset; //type: uint32
        YLeaf retransmit_timeouts; //type: uint32
        YLeaf retransmit_dropped; //type: uint32
        YLeaf keep_alive_timeouts; //type: uint32
        YLeaf keep_alive_dropped; //type: uint32
        YLeaf keep_alive_probes; //type: uint32
        YLeaf paws_dropped; //type: uint32
        YLeaf persist_dropped; //type: uint32
        YLeaf try_lock_dropped; //type: uint32
        YLeaf connection_rate_limited; //type: uint32
        YLeaf syn_cache_added; //type: uint32
        YLeaf syn_cache_completed; //type: uint32
        YLeaf syn_cache_timed_out; //type: uint32
        YLeaf syn_cache_overflow; //type: uint32
        YLeaf syn_cache_reset; //type: uint32
        YLeaf syn_cache_unreach; //type: uint32
        YLeaf syn_cache_bucket_oflow; //type: uint32
        YLeaf syn_cache_aborted; //type: uint32
        YLeaf syn_cache_duplicate_sy_ns; //type: uint32
        YLeaf syn_cache_dropped; //type: uint32
        YLeaf pulse_errors; //type: uint32
        YLeaf socket_layer_packets; //type: uint32
        YLeaf reassembly_packets; //type: uint32
        YLeaf recovered_packets; //type: uint32
        YLeaf packet_failures; //type: uint32
        YLeaf mss_up; //type: uint32
        YLeaf mss_down; //type: uint32
        YLeaf truncated_write_iov; //type: uint32
        YLeaf no_throttle; //type: uint32
        YLeaf low_water_mark_throttle; //type: uint32
        YLeaf high_water_mark_throttle; //type: uint32
        YLeaf stalled_timer_tickle_count; //type: uint32
        YLeaf stalled_timer_tickle_time; //type: uint32
        YLeaf iq_sock_writes; //type: uint32
        YLeaf iq_sock_retries; //type: uint32
        YLeaf iq_sock_aborts; //type: uint32



}; // TcpConnection::Nodes::Node::Statistics::Summary


class TcpConnection::Nodes::Node::ExtendedInformation : public Entity
{
    public:
        ExtendedInformation();
        ~ExtendedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DisplayTypes; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes> display_types;


}; // TcpConnection::Nodes::Node::ExtendedInformation


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes : public Entity
{
    public:
        DisplayTypes();
        ~DisplayTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DisplayType; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType> > display_type;


}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType : public Entity
{
    public:
        DisplayType();
        ~DisplayType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disp_type; //type: ShowEnum

        class ConnectionId; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId> > connection_id;


}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId : public Entity
{
    public:
        ConnectionId();
        ~ConnectionId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcb_id; //type: uint32
        YLeaf l4_protocol; //type: uint32
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16

        class LocalAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress
        class ForeignAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress
        class Common; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress> local_address;


}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress : public Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: AddrFamilyEnum

        class LptsPcb; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb> lpts_pcb;


}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb : public Entity
{
    public:
        LptsPcb();
        ~LptsPcb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ttl; //type: uint8
        YLeaf flow_types_info; //type: uint32

        class Options; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options
        class LptsFlags; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags
        class AcceptMask; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask
        class Filter; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask> accept_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter> > filter;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags> lpts_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options> options;


}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options : public Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_receive_filter; //type: boolean
        YLeaf is_ip_sla; //type: boolean



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags : public Entity
{
    public:
        LptsFlags();
        ~LptsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_pcb_bound; //type: boolean
        YLeaf is_local_address_ignore; //type: boolean
        YLeaf is_ignore_vrf_filter; //type: boolean



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask : public Entity
{
    public:
        AcceptMask();
        ~AcceptMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_interface; //type: boolean
        YLeaf is_packet_type; //type: boolean
        YLeaf is_remote_address; //type: boolean
        YLeaf is_remote_port; //type: boolean
        YLeaf is_local_address; //type: boolean
        YLeaf is_local_port; //type: boolean



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf remote_length; //type: uint16
        YLeaf local_length; //type: uint16
        YLeaf receive_remote_port; //type: uint16
        YLeaf receive_local_port; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf flow_types_info; //type: uint32

        class PacketType; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType
        class RemoteAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress
        class LocalAddress; //type: TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType> packet_type;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress> remote_address;


}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType : public Entity
{
    public:
        PacketType();
        ~PacketType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PacketEnum
        YLeaf icmp_message_type; //type: MessageTypeIcmpEnum
        YLeaf icm_pv6_message_type; //type: MessageTypeIcmpv6Enum
        YLeaf igmp_message_type; //type: MessageTypeIgmpEnum
        YLeaf message_id; //type: uint32



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress : public Entity
{
    public:
        RemoteAddress();
        ~RemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress


class TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: AddrFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress


class TcpConnection::Nodes::Node::DetailInformations : public Entity
{
    public:
        DetailInformations();
        ~DetailInformations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DetailInformation; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation> > detail_information;


}; // TcpConnection::Nodes::Node::DetailInformations


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation : public Entity
{
    public:
        DetailInformation();
        ~DetailInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcb_id; //type: uint32
        YLeaf address_family; //type: TcpAddressFamilyEnum
        YLeaf pcb; //type: uint64
        YLeaf so; //type: uint64
        YLeaf tcpcb; //type: uint64
        YLeaf vrf_id; //type: uint32
        YLeaf connection_state; //type: TcpConnStateEnum
        YLeaf established_time; //type: uint32
        YLeaf local_pid; //type: uint32
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        YLeaf packet_priority; //type: PakPrioEnum
        YLeaf packet_tos; //type: uint16
        YLeaf packet_ttl; //type: uint16
        YLeaf hash_index; //type: uint32
        YLeaf current_receive_queue_size; //type: uint32
        YLeaf max_receive_queue_size; //type: uint32
        YLeaf current_send_queue_size; //type: uint32
        YLeaf max_send_queue_size; //type: uint32
        YLeaf current_receive_queue_packet_size; //type: uint32
        YLeaf max_receive_queue_packet_size; //type: uint32
        YLeaf save_queue_size; //type: uint32
        YLeaf send_initial_sequence_num; //type: uint32
        YLeaf send_unack_sequence_num; //type: uint32
        YLeaf send_next_sequence_num; //type: uint32
        YLeaf send_max_sequence_num; //type: uint32
        YLeaf send_window_size; //type: uint32
        YLeaf send_congestion_window_size; //type: uint32
        YLeaf receive_initial_sequence_num; //type: uint32
        YLeaf receive_next_sequence_num; //type: uint32
        YLeaf receive_adv_window_size; //type: uint32
        YLeaf receive_window_size; //type: uint32
        YLeaf mss; //type: uint32
        YLeaf peer_mss; //type: uint32
        YLeaf srtt; //type: uint32
        YLeaf rtto; //type: uint32
        YLeaf krtt; //type: uint32
        YLeaf srtv; //type: uint32
        YLeaf min_rtt; //type: uint32
        YLeaf max_rtt; //type: uint32
        YLeaf retries; //type: uint32
        YLeaf ack_hold_time; //type: uint32
        YLeaf giveup_time; //type: uint32
        YLeaf keep_alive_time; //type: uint32
        YLeaf syn_wait_time; //type: uint32
        YLeaf rxsy_naclname; //type: string
        YLeaf soft_error; //type: int32
        YLeaf sock_error; //type: int32
        YLeaf is_retrans_forever; //type: boolean
        YLeaf min_mss; //type: uint32
        YLeaf max_mss; //type: uint32
        YLeaf connect_retries; //type: uint16
        YLeaf connect_retry_interval; //type: uint16
        YLeaf receive_window_scale; //type: uint32
        YLeaf send_window_scale; //type: uint32
        YLeaf request_receive_window_scale; //type: uint32
        YLeaf rqst_send_wnd_scale; //type: uint32
        YLeaf time_stamp_recent; //type: uint32
        YLeaf time_stamp_recent_age; //type: uint32
        YLeaf last_ack_sent; //type: uint32
        YLeaf sendbuf_lowwat; //type: uint32
        YLeaf recvbuf_lowwat; //type: uint32
        YLeaf sendbuf_hiwat; //type: uint32
        YLeaf recvbuf_hiwat; //type: uint32
        YLeaf sendbuf_notify_thresh; //type: uint32
        YLeaf send_pdu_count; //type: uint32
        YLeaf output_ifhandle; //type: uint32
        YLeaf fib_pd_ctx_size; //type: uint32
        YLeaf num_labels; //type: uint32
        YLeaf local_app_instance; //type: uint32
        YLeafList fib_pd_ctx; //type: list of  uint32
        YLeafList fib_label_output; //type: list of  uint32

        class LocalAddress; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress
        class ForeignAddress; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress
        class SocketOptionFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags
        class SocketStateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags
        class FeatureFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags
        class StateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags
        class RequestFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags
        class ReceiveBufStateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags
        class SendBufStateFlags; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags
        class Timer; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer
        class SackBlk; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk
        class SendSackHole; //type: TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags> feature_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags> receive_buf_state_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags> request_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk> > sack_blk;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags> send_buf_state_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole> > send_sack_hole;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags> socket_option_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags> socket_state_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags> state_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer> > timer;


}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: TcpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress : public Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: TcpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags : public Entity
{
    public:
        SocketOptionFlags();
        ~SocketOptionFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf debug; //type: boolean
        YLeaf accept_connection; //type: boolean
        YLeaf reuse_address; //type: boolean
        YLeaf keep_alive; //type: boolean
        YLeaf dont_route; //type: boolean
        YLeaf broadcast; //type: boolean
        YLeaf use_loopback; //type: boolean
        YLeaf linger; //type: boolean
        YLeaf out_of_band_inline; //type: boolean
        YLeaf reuse_port; //type: boolean
        YLeaf nonblocking_io; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags : public Entity
{
    public:
        SocketStateFlags();
        ~SocketStateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_file_descriptor_reference; //type: boolean
        YLeaf is_connected; //type: boolean
        YLeaf is_connecting; //type: boolean
        YLeaf is_disconnecting; //type: boolean
        YLeaf cant_send_more; //type: boolean
        YLeaf cant_receive_more; //type: boolean
        YLeaf received_at_mark; //type: boolean
        YLeaf privileged; //type: boolean
        YLeaf block_close; //type: boolean
        YLeaf async_io_notify; //type: boolean
        YLeaf is_confirming; //type: boolean
        YLeaf is_solock; //type: boolean
        YLeaf is_detached; //type: boolean
        YLeaf block_receive; //type: boolean
        YLeaf block_send; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags : public Entity
{
    public:
        FeatureFlags();
        ~FeatureFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf selective_ack; //type: boolean
        YLeaf md5; //type: boolean
        YLeaf timestamps; //type: boolean
        YLeaf window_scaling; //type: boolean
        YLeaf nagle; //type: boolean
        YLeaf giveup_timer; //type: boolean
        YLeaf connection_keep_alive_timer; //type: boolean
        YLeaf path_mtu_discovery; //type: boolean
        YLeaf mss_cisco; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags : public Entity
{
    public:
        StateFlags();
        ~StateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nagle_wait; //type: boolean
        YLeaf ack_needed; //type: boolean
        YLeaf fin_sent; //type: boolean
        YLeaf probing; //type: boolean
        YLeaf need_push; //type: boolean
        YLeaf pushed; //type: boolean
        YLeaf in_syn_cache; //type: boolean
        YLeaf path_mtu_ager; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags : public Entity
{
    public:
        RequestFlags();
        ~RequestFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf selective_ack; //type: boolean
        YLeaf md5; //type: boolean
        YLeaf timestamps; //type: boolean
        YLeaf window_scaling; //type: boolean
        YLeaf nagle; //type: boolean
        YLeaf giveup_timer; //type: boolean
        YLeaf connection_keep_alive_timer; //type: boolean
        YLeaf path_mtu_discovery; //type: boolean
        YLeaf mss_cisco; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags : public Entity
{
    public:
        ReceiveBufStateFlags();
        ~ReceiveBufStateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf locked; //type: boolean
        YLeaf waiting_for_lock; //type: boolean
        YLeaf waiting_for_data; //type: boolean
        YLeaf input_select; //type: boolean
        YLeaf async_io; //type: boolean
        YLeaf not_interruptible; //type: boolean
        YLeaf io_timer_set; //type: boolean
        YLeaf delayed_wakeup; //type: boolean
        YLeaf wakeup; //type: boolean
        YLeaf connect_wakeup; //type: boolean
        YLeaf output_select; //type: boolean
        YLeaf out_of_band_select; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags : public Entity
{
    public:
        SendBufStateFlags();
        ~SendBufStateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf locked; //type: boolean
        YLeaf waiting_for_lock; //type: boolean
        YLeaf waiting_for_data; //type: boolean
        YLeaf input_select; //type: boolean
        YLeaf async_io; //type: boolean
        YLeaf not_interruptible; //type: boolean
        YLeaf io_timer_set; //type: boolean
        YLeaf delayed_wakeup; //type: boolean
        YLeaf wakeup; //type: boolean
        YLeaf connect_wakeup; //type: boolean
        YLeaf output_select; //type: boolean
        YLeaf out_of_band_select; //type: boolean



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_type; //type: TcpTimerEnum
        YLeaf timer_activations; //type: uint32
        YLeaf timer_expirations; //type: uint32
        YLeaf timer_next_activation; //type: uint32



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk : public Entity
{
    public:
        SackBlk();
        ~SackBlk();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf end; //type: uint32



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk


class TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole : public Entity
{
    public:
        SendSackHole();
        ~SendSackHole();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf end; //type: uint32
        YLeaf duplicated_ack; //type: uint32
        YLeaf retransmitted; //type: uint32



}; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole


class TcpConnection::Nodes::Node::BriefInformations : public Entity
{
    public:
        BriefInformations();
        ~BriefInformations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BriefInformation; //type: TcpConnection::Nodes::Node::BriefInformations::BriefInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation> > brief_information;


}; // TcpConnection::Nodes::Node::BriefInformations


class TcpConnection::Nodes::Node::BriefInformations::BriefInformation : public Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcb_id; //type: uint32
        YLeaf af_name; //type: TcpAddressFamilyEnum
        YLeaf pcb; //type: uint64
        YLeaf connection_state; //type: TcpConnStateEnum
        YLeaf local_pid; //type: uint32
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        YLeaf current_receive_queue_size; //type: uint32
        YLeaf current_send_queue_size; //type: uint32
        YLeaf vrf_id; //type: uint32

        class LocalAddress; //type: TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress
        class ForeignAddress; //type: TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress> foreign_address;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress> local_address;


}; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation


class TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: TcpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress


class TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress : public Entity
{
    public:
        ForeignAddress();
        ~ForeignAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: TcpAddressFamilyEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress

class Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

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



        class Nodes; //type: Tcp::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes> nodes;


}; // Tcp


class Tcp::Nodes : public Entity
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



        class Node; //type: Tcp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node> > node;


}; // Tcp::Nodes


class Tcp::Nodes::Node : public Entity
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

        class Statistics; //type: Tcp::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics> statistics;


}; // Tcp::Nodes::Node


class Tcp::Nodes::Node::Statistics : public Entity
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



        class Ipv4Traffic; //type: Tcp::Nodes::Node::Statistics::Ipv4Traffic
        class Ipv6Traffic; //type: Tcp::Nodes::Node::Statistics::Ipv6Traffic

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics::Ipv4Traffic> ipv4_traffic;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics::Ipv6Traffic> ipv6_traffic;


}; // Tcp::Nodes::Node::Statistics


class Tcp::Nodes::Node::Statistics::Ipv4Traffic : public Entity
{
    public:
        Ipv4Traffic();
        ~Ipv4Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcp_input_packets; //type: uint32
        YLeaf tcp_checksum_error_packets; //type: uint32
        YLeaf tcp_dropped_packets; //type: uint32
        YLeaf tcp_output_packets; //type: uint32
        YLeaf tcp_retransmitted_packets; //type: uint32



}; // Tcp::Nodes::Node::Statistics::Ipv4Traffic


class Tcp::Nodes::Node::Statistics::Ipv6Traffic : public Entity
{
    public:
        Ipv6Traffic();
        ~Ipv6Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcp_input_packets; //type: uint32
        YLeaf tcp_checksum_error_packets; //type: uint32
        YLeaf tcp_dropped_packets; //type: uint32
        YLeaf tcp_output_packets; //type: uint32
        YLeaf tcp_retransmitted_packets; //type: uint32



}; // Tcp::Nodes::Node::Statistics::Ipv6Traffic

class TcpNsr : public Entity
{
    public:
        TcpNsr();
        ~TcpNsr();

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



        class Nodes; //type: TcpNsr::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes> nodes;


}; // TcpNsr


class TcpNsr::Nodes : public Entity
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



        class Node; //type: TcpNsr::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node> > node;


}; // TcpNsr::Nodes


class TcpNsr::Nodes::Node : public Entity
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


        YLeaf id; //type: string

        class Session; //type: TcpNsr::Nodes::Node::Session
        class Client; //type: TcpNsr::Nodes::Node::Client
        class SessionSet; //type: TcpNsr::Nodes::Node::SessionSet
        class Statistics; //type: TcpNsr::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client> client;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet> session_set;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics> statistics;


}; // TcpNsr::Nodes::Node


class TcpNsr::Nodes::Node::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BriefSessions; //type: TcpNsr::Nodes::Node::Session::BriefSessions
        class DetailSessions; //type: TcpNsr::Nodes::Node::Session::DetailSessions

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::BriefSessions> brief_sessions;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions> detail_sessions;


}; // TcpNsr::Nodes::Node::Session


class TcpNsr::Nodes::Node::Session::BriefSessions : public Entity
{
    public:
        BriefSessions();
        ~BriefSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BriefSession; //type: TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession> > brief_session;


}; // TcpNsr::Nodes::Node::Session::BriefSessions


class TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession : public Entity
{
    public:
        BriefSession();
        ~BriefSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf address_family; //type: AddrFamilyEnum
        YLeaf pcb; //type: uint64
        YLeaf sscb; //type: uint64
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        YLeaf vrf_id; //type: uint32
        YLeaf is_admin_configured_up; //type: boolean
        YLeaf is_us_operational_up; //type: NsrStatusEnum
        YLeaf is_ds_operational_up; //type: NsrStatusEnum
        YLeaf is_only_receive_path_replication; //type: boolean
        YLeafList local_address; //type: list of  string
        YLeafList foreign_address; //type: list of  string



}; // TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession


class TcpNsr::Nodes::Node::Session::DetailSessions : public Entity
{
    public:
        DetailSessions();
        ~DetailSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DetailSession; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession> > detail_session;


}; // TcpNsr::Nodes::Node::Session::DetailSessions


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession : public Entity
{
    public:
        DetailSession();
        ~DetailSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf address_family; //type: AddrFamilyEnum
        YLeaf pcb; //type: uint64
        YLeaf sscb; //type: uint64
        YLeaf local_port; //type: uint16
        YLeaf foreign_port; //type: uint16
        YLeaf vrf_id; //type: uint32
        YLeaf is_admin_configured_up; //type: boolean
        YLeaf is_us_operational_up; //type: NsrStatusEnum
        YLeaf is_ds_operational_up; //type: NsrStatusEnum
        YLeaf is_only_receive_path_replication; //type: boolean
        YLeaf cookie; //type: uint64
        YLeaf is_session_replicated; //type: boolean
        YLeaf is_session_synced; //type: boolean
        YLeaf fist_standby_sequence_number; //type: uint32
        YLeaf fssn_offset; //type: uint32
        YLeaf nsr_down_reason; //type: NsrDownReasonEnum
        YLeaf nsr_down_time; //type: uint32
        YLeaf sequence_number_of_init_sync; //type: uint32
        YLeaf is_init_sync_in_progress; //type: boolean
        YLeaf is_init_sync_second_phase; //type: boolean
        YLeaf init_sync_error; //type: string
        YLeaf is_init_sync_error_local; //type: boolean
        YLeaf init_sync_start_time; //type: uint32
        YLeaf init_sync_end_time; //type: uint32
        YLeaf init_sync_flags; //type: uint32
        YLeaf sequence_number_of_init_sync_up_stream; //type: uint32
        YLeaf peer_endp_hdl_up_stream; //type: uint64
        YLeaf init_sync_start_time_up_stream; //type: uint32
        YLeaf init_sync_end_time_up_stream; //type: uint32
        YLeaf fist_standby_sequence_number_up_stream; //type: uint32
        YLeaf nsr_down_reason_up_stream; //type: NsrDownReasonEnum
        YLeaf nsr_down_time_up_stream; //type: uint32
        YLeaf sequence_number_of_init_sync_down_stream; //type: uint32
        YLeaf peer_endp_hdl_down_stream; //type: uint64
        YLeaf init_sync_start_time_down_stream; //type: uint32
        YLeaf init_sync_end_time_down_stream; //type: uint32
        YLeaf fist_standby_sequence_number_down_stream; //type: uint32
        YLeaf nsr_down_reason_down_stream; //type: NsrDownReasonEnum
        YLeaf nsr_down_time_down_stream; //type: uint32
        YLeaf max_number_of_held_packet; //type: int32
        YLeaf max_number_of_held_packet_reach_time; //type: uint32
        YLeaf max_number_of_held_internal_ack; //type: int32
        YLeaf max_number_of_held_internal_ack_reach_time; //type: uint32
        YLeafList local_address; //type: list of  string
        YLeafList foreign_address; //type: list of  string

        class SetInformation; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation
        class PacketHoldQueue; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue
        class InternalAckHoldQueue; //type: TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue> > internal_ack_hold_queue;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue> > packet_hold_queue;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation> set_information;


}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation : public Entity
{
    public:
        SetInformation();
        ~SetInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sscb; //type: uint64
        YLeaf pid; //type: uint32
        YLeaf client_name; //type: string
        YLeaf client_instance; //type: uint32
        YLeaf set_id; //type: uint32
        YLeaf sso_role; //type: uint32
        YLeaf mode; //type: uint32
        YLeaf address_family; //type: AddrFamilyEnum
        YLeaf well_known_port; //type: uint16
        YLeaf local_node; //type: string
        YLeaf local_instance; //type: uint32
        YLeaf protect_node; //type: string
        YLeaf protect_instance; //type: uint32
        YLeaf number_of_sessions; //type: uint32
        YLeaf number_of_synced_sessions_up_stream; //type: uint32
        YLeaf number_of_synced_sessions_down_stream; //type: uint32
        YLeaf is_init_sync_in_progress; //type: boolean
        YLeaf is_sscb_init_sync_ready; //type: boolean



}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue : public Entity
{
    public:
        PacketHoldQueue();
        ~PacketHoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number; //type: uint32
        YLeaf data_length; //type: uint32
        YLeaf acknoledgement_number; //type: uint32



}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue


class TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue : public Entity
{
    public:
        InternalAckHoldQueue();
        ~InternalAckHoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number; //type: uint32
        YLeaf data_length; //type: uint32
        YLeaf acknoledgement_number; //type: uint32



}; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue


class TcpNsr::Nodes::Node::Client : public Entity
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



        class DetailClients; //type: TcpNsr::Nodes::Node::Client::DetailClients
        class BriefClients; //type: TcpNsr::Nodes::Node::Client::BriefClients

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::BriefClients> brief_clients;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::DetailClients> detail_clients;


}; // TcpNsr::Nodes::Node::Client


class TcpNsr::Nodes::Node::Client::DetailClients : public Entity
{
    public:
        DetailClients();
        ~DetailClients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DetailClient; //type: TcpNsr::Nodes::Node::Client::DetailClients::DetailClient

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::DetailClients::DetailClient> > detail_client;


}; // TcpNsr::Nodes::Node::Client::DetailClients


class TcpNsr::Nodes::Node::Client::DetailClients::DetailClient : public Entity
{
    public:
        DetailClient();
        ~DetailClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf ccb; //type: uint64
        YLeaf pid; //type: uint32
        YLeaf process_name; //type: string
        YLeaf job_id; //type: int32
        YLeaf instance; //type: uint32
        YLeaf numberof_sets; //type: uint32
        YLeaf number_of_sessions; //type: uint32
        YLeaf number_of_up_sessions; //type: uint32
        YLeaf connected_at; //type: uint32
        YLeaf is_notification_registered; //type: boolean



}; // TcpNsr::Nodes::Node::Client::DetailClients::DetailClient


class TcpNsr::Nodes::Node::Client::BriefClients : public Entity
{
    public:
        BriefClients();
        ~BriefClients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BriefClient; //type: TcpNsr::Nodes::Node::Client::BriefClients::BriefClient

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::BriefClients::BriefClient> > brief_client;


}; // TcpNsr::Nodes::Node::Client::BriefClients


class TcpNsr::Nodes::Node::Client::BriefClients::BriefClient : public Entity
{
    public:
        BriefClient();
        ~BriefClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf ccb; //type: uint64
        YLeaf pid; //type: uint32
        YLeaf process_name; //type: string
        YLeaf job_id; //type: int32
        YLeaf instance; //type: uint32
        YLeaf numberof_sets; //type: uint32
        YLeaf number_of_sessions; //type: uint32
        YLeaf number_of_up_sessions; //type: uint32



}; // TcpNsr::Nodes::Node::Client::BriefClients::BriefClient


class TcpNsr::Nodes::Node::SessionSet : public Entity
{
    public:
        SessionSet();
        ~SessionSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DetailSets; //type: TcpNsr::Nodes::Node::SessionSet::DetailSets
        class BriefSets; //type: TcpNsr::Nodes::Node::SessionSet::BriefSets

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::BriefSets> brief_sets;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::DetailSets> detail_sets;


}; // TcpNsr::Nodes::Node::SessionSet


class TcpNsr::Nodes::Node::SessionSet::DetailSets : public Entity
{
    public:
        DetailSets();
        ~DetailSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DetailSet; //type: TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet> > detail_set;


}; // TcpNsr::Nodes::Node::SessionSet::DetailSets


class TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet : public Entity
{
    public:
        DetailSet();
        ~DetailSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf sscb; //type: uint64
        YLeaf pid; //type: uint32
        YLeaf set_id; //type: uint32
        YLeaf sso_role; //type: uint32
        YLeaf mode; //type: uint32
        YLeaf address_family; //type: AddrFamilyEnum
        YLeaf well_known_port; //type: uint16
        YLeaf local_node; //type: string
        YLeaf local_instance; //type: uint32
        YLeaf protect_node; //type: string
        YLeaf protect_instance; //type: uint32
        YLeaf number_of_sessions; //type: uint32
        YLeaf number_of_synced_sessions_up_stream; //type: uint32
        YLeaf number_of_synced_sessions_down_stream; //type: uint32
        YLeaf is_init_sync_in_progress; //type: boolean
        YLeaf is_init_sync_second_phase; //type: boolean
        YLeaf sequence_number_of_init_sync; //type: uint32
        YLeaf init_sync_timer; //type: uint32
        YLeaf total_number_of_init_sync_sessions; //type: uint32
        YLeaf number_of_init_synced_sessions; //type: uint32
        YLeaf number_of_sessions_init_sync_failed; //type: uint32
        YLeaf init_sync_error; //type: string
        YLeaf is_init_sync_error_local; //type: boolean
        YLeaf init_sync_start_time; //type: uint32
        YLeaf init_sync_end_time; //type: uint32
        YLeaf is_sscb_init_sync_ready; //type: boolean
        YLeaf init_sync_ready_start_time; //type: uint32
        YLeaf init_sync_ready_end_time; //type: uint32
        YLeaf nsr_reset_time; //type: uint32
        YLeaf is_audit_in_progress; //type: boolean
        YLeaf audit_seq_number; //type: uint32
        YLeaf audit_start_time; //type: uint32
        YLeaf audit_end_time; //type: uint32



}; // TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet


class TcpNsr::Nodes::Node::SessionSet::BriefSets : public Entity
{
    public:
        BriefSets();
        ~BriefSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BriefSet; //type: TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet> > brief_set;


}; // TcpNsr::Nodes::Node::SessionSet::BriefSets


class TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet : public Entity
{
    public:
        BriefSet();
        ~BriefSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf sscb; //type: uint64
        YLeaf pid; //type: uint32
        YLeaf client_name; //type: string
        YLeaf client_instance; //type: uint32
        YLeaf set_id; //type: uint32
        YLeaf sso_role; //type: uint32
        YLeaf mode; //type: uint32
        YLeaf address_family; //type: AddrFamilyEnum
        YLeaf well_known_port; //type: uint16
        YLeaf local_node; //type: string
        YLeaf local_instance; //type: uint32
        YLeaf protect_node; //type: string
        YLeaf protect_instance; //type: uint32
        YLeaf number_of_sessions; //type: uint32
        YLeaf number_of_synced_sessions_up_stream; //type: uint32
        YLeaf number_of_synced_sessions_down_stream; //type: uint32
        YLeaf is_init_sync_in_progress; //type: boolean
        YLeaf is_sscb_init_sync_ready; //type: boolean



}; // TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet


class TcpNsr::Nodes::Node::Statistics : public Entity
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



        class Summary; //type: TcpNsr::Nodes::Node::Statistics::Summary
        class StatisticClients; //type: TcpNsr::Nodes::Node::Statistics::StatisticClients
        class StatisticSets; //type: TcpNsr::Nodes::Node::Statistics::StatisticSets
        class StatisticSessions; //type: TcpNsr::Nodes::Node::Statistics::StatisticSessions

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients> statistic_clients;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions> statistic_sessions;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSets> statistic_sets;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary> summary;


}; // TcpNsr::Nodes::Node::Statistics


class TcpNsr::Nodes::Node::Statistics::Summary : public Entity
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


        YLeaf last_cleared_time; //type: uint32
        YLeaf number_of_connected_clients; //type: uint32
        YLeaf number_of_disconnected_clients; //type: uint32
        YLeaf number_of_current_clients; //type: uint32
        YLeaf number_of_created_session_sets; //type: uint32
        YLeaf number_of_destroyed_session_sets; //type: uint32
        YLeaf number_of_current_session_sets; //type: uint32
        YLeaf number_of_added_sessions; //type: uint32
        YLeaf number_of_deleted_sessions; //type: uint32
        YLeaf number_of_current_sessions; //type: uint32
        YLeaf number_of_partner_node; //type: uint32
        YLeaf number_of_attempted_init_sync; //type: uint32
        YLeaf number_of_succeeded_init_sync; //type: uint32
        YLeaf number_of_failed_init_sync; //type: uint32
        YLeaf number_of_held_packets; //type: uint32
        YLeaf number_of_held_but_dropped_packets; //type: uint32
        YLeaf number_of_held_internal_acks; //type: uint32
        YLeaf number_of_held_but_dropped_internal_acks; //type: uint32
        YLeaf number_of_sent_internal_acks; //type: uint32
        YLeaf number_of_received_internal_acks; //type: uint32
        YLeaf number_of_qad_receive_messages_drops; //type: uint32
        YLeaf number_of_qad_receive_messages_unknowns; //type: uint32
        YLeaf number_of_qad_receive_messages_accepts; //type: uint32
        YLeaf number_of_qad_stale_receive_messages_drops; //type: uint32
        YLeaf number_of_qad_transfer_message_sent; //type: uint32
        YLeaf number_of_qad_transfer_message_drops; //type: uint32
        YLeaf number_of_internal_ack_drops_no_pcb; //type: uint32
        YLeaf number_of_internal_ack_drops_no_scbdp; //type: uint32
        YLeaf internal_ack_drops_not_replicated; //type: uint32
        YLeaf internal_ack_drops_initsync_first_phase; //type: uint32
        YLeaf internal_ack_drops_stale; //type: uint32
        YLeaf internal_ack_drops_immediate_match; //type: uint32
        YLeaf held_packet_drops; //type: uint32

        class SndCounters; //type: TcpNsr::Nodes::Node::Statistics::Summary::SndCounters
        class AuditCounters; //type: TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters
        class NotificationStatistic; //type: TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters> audit_counters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic> > notification_statistic;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters> snd_counters;


}; // TcpNsr::Nodes::Node::Statistics::Summary


class TcpNsr::Nodes::Node::Statistics::Summary::SndCounters : public Entity
{
    public:
        SndCounters();
        ~SndCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Common; //type: TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common
        class AggrOnly; //type: TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly> aggr_only;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common> common;


}; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters


class TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_xfer_send; //type: uint32
        YLeaf data_xfer_send_total; //type: uint64
        YLeaf data_xfer_send_drop; //type: uint32
        YLeaf data_xfer_send_iov_alloc; //type: uint32
        YLeaf data_xfer_rcv; //type: uint32
        YLeaf data_xfer_rcv_success; //type: uint32
        YLeaf data_xfer_rcv_fail_buffer_trim; //type: uint32
        YLeaf data_xfer_rcv_fail_snd_una_out_of_sync; //type: uint32
        YLeaf seg_instr_send; //type: uint32
        YLeaf seg_instr_send_units; //type: uint32
        YLeaf seg_instr_send_drop; //type: uint32
        YLeaf seg_instr_rcv; //type: uint32
        YLeaf seg_instr_rcv_success; //type: uint32
        YLeaf seg_instr_rcv_fail_buffer_trim; //type: uint32
        YLeaf seg_instr_rcv_fail_tcp_process; //type: uint32
        YLeaf nack_send; //type: uint32
        YLeaf nack_send_drop; //type: uint32
        YLeaf nack_rcv; //type: uint32
        YLeaf nack_rcv_success; //type: uint32
        YLeaf nack_rcv_fail_data_send; //type: uint32
        YLeaf cleanup_send; //type: uint32
        YLeaf cleanup_send_drop; //type: uint32
        YLeaf cleanup_rcv; //type: uint32
        YLeaf cleanup_rcv_success; //type: uint32
        YLeaf cleanup_rcv_fail_buffer_trim; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common


class TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly : public Entity
{
    public:
        AggrOnly();
        ~AggrOnly();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_xfer_rcv_drop_no_pcb; //type: uint32
        YLeaf data_xfer_rcv_drop_no_scb_dp; //type: uint32
        YLeaf seg_instr_rcv_drop_no_pcb; //type: uint32
        YLeaf seg_instr_rcv_drop_no_scb_dp; //type: uint32
        YLeaf nack_rcv_drop_no_pcb; //type: uint32
        YLeaf nack_rcv_drop_no_scb_dp; //type: uint32
        YLeaf cleanup_rcv_drop_no_pcb; //type: uint32
        YLeaf cleanup_rcv_drop_no_scb_dp; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly


class TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters : public Entity
{
    public:
        AuditCounters();
        ~AuditCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Common; //type: TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common
        class AggrOnly; //type: TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly> aggr_only;
        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common> common;


}; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters


class TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_session_set_send; //type: uint32
        YLeaf mark_session_set_send_drop; //type: uint32
        YLeaf mark_session_set_rcv; //type: uint32
        YLeaf mark_session_set_rcv_drop; //type: uint32
        YLeaf session_send; //type: uint32
        YLeaf session_send_drop; //type: uint32
        YLeaf session_rcv; //type: uint32
        YLeaf session_rcv_drop; //type: uint32
        YLeaf sweep_session_set_send; //type: uint32
        YLeaf sweep_session_set_send_drop; //type: uint32
        YLeaf sweep_session_set_rcv; //type: uint32
        YLeaf sweep_session_set_rcv_drop; //type: uint32
        YLeaf session_set_response_send; //type: uint32
        YLeaf session_set_response_send_drop; //type: uint32
        YLeaf session_set_response_rcv; //type: uint32
        YLeaf session_set_response_rcv_drop; //type: uint32
        YLeaf mark_session_set_ack_send; //type: uint32
        YLeaf mark_session_set_ack_send_drop; //type: uint32
        YLeaf mark_session_set_ack_rcv; //type: uint32
        YLeaf mark_session_set_ack_rcv_drop; //type: uint32
        YLeaf mark_session_set_nack_send; //type: uint32
        YLeaf mark_session_set_nack_send_drop; //type: uint32
        YLeaf mark_session_set_nack_rcv; //type: uint32
        YLeaf mark_session_set_nack_rcv_drop; //type: uint32
        YLeaf abort; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common


class TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly : public Entity
{
    public:
        AggrOnly();
        ~AggrOnly();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mark_session_set_rcv_drop_aggr; //type: uint32
        YLeaf session_rcv_drop_aggr; //type: uint32
        YLeaf sweep_session_set_rcv_drop_aggr; //type: uint32
        YLeaf session_set_response_rcv_drop_aggr; //type: uint32
        YLeaf mark_session_set_ack_rcv_drop_aggr; //type: uint32
        YLeaf mark_session_set_nack_rcv_drop_aggr; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly


class TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic : public Entity
{
    public:
        NotificationStatistic();
        ~NotificationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queued_count; //type: uint32
        YLeaf failed_count; //type: uint32
        YLeaf delivered_count; //type: uint32
        YLeaf dropped_count; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic


class TcpNsr::Nodes::Node::Statistics::StatisticClients : public Entity
{
    public:
        StatisticClients();
        ~StatisticClients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticClient; //type: TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient> > statistic_client;


}; // TcpNsr::Nodes::Node::Statistics::StatisticClients


class TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient : public Entity
{
    public:
        StatisticClient();
        ~StatisticClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf ccb; //type: uint64
        YLeaf pid; //type: uint32
        YLeaf process_name; //type: string
        YLeaf job_id; //type: int32
        YLeaf instance; //type: uint32
        YLeaf connected_at; //type: uint32
        YLeaf number_of_created_sscb; //type: uint32
        YLeaf number_of_deleted_sscb; //type: uint32
        YLeaf last_cleared_time; //type: uint32

        class NotificationStatistic; //type: TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic> > notification_statistic;


}; // TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient


class TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic : public Entity
{
    public:
        NotificationStatistic();
        ~NotificationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queued_count; //type: uint32
        YLeaf failed_count; //type: uint32
        YLeaf delivered_count; //type: uint32
        YLeaf dropped_count; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic


class TcpNsr::Nodes::Node::Statistics::StatisticSets : public Entity
{
    public:
        StatisticSets();
        ~StatisticSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticSet; //type: TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet> > statistic_set;


}; // TcpNsr::Nodes::Node::Statistics::StatisticSets


class TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet : public Entity
{
    public:
        StatisticSet();
        ~StatisticSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf sscb; //type: uint64
        YLeaf set_id; //type: uint32
        YLeaf number_of_attempted_init_sync; //type: uint32
        YLeaf number_of_succeeded_init_sync; //type: uint32
        YLeaf number_of_failed_init_sync; //type: uint32
        YLeaf number_of_failover; //type: uint32
        YLeaf number_of_nsr_resets; //type: uint32
        YLeaf last_cleared_time; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet


class TcpNsr::Nodes::Node::Statistics::StatisticSessions : public Entity
{
    public:
        StatisticSessions();
        ~StatisticSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatisticSession; //type: TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession> > statistic_session;


}; // TcpNsr::Nodes::Node::Statistics::StatisticSessions


class TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession : public Entity
{
    public:
        StatisticSession();
        ~StatisticSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf pcb; //type: uint64
        YLeaf number_of_times_nsr_up; //type: uint32
        YLeaf number_of_timers_nsr_down; //type: uint32
        YLeaf number_of_times_nsr_disabled; //type: uint32
        YLeaf number_of_times_nsr_fail_over; //type: uint32
        YLeaf internal_ack_drops_not_replicated; //type: uint64
        YLeaf internal_ack_drops_initsync_first_phase; //type: uint64
        YLeaf internal_ack_drops_stale; //type: uint64
        YLeaf internal_ack_drops_immediate_match; //type: uint64
        YLeaf last_cleared_time; //type: uint32

        class SndCounters; //type: TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters

        std::shared_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters> snd_counters;


}; // TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession


class TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters : public Entity
{
    public:
        SndCounters();
        ~SndCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_xfer_send; //type: uint32
        YLeaf data_xfer_send_total; //type: uint64
        YLeaf data_xfer_send_drop; //type: uint32
        YLeaf data_xfer_send_iov_alloc; //type: uint32
        YLeaf data_xfer_rcv; //type: uint32
        YLeaf data_xfer_rcv_success; //type: uint32
        YLeaf data_xfer_rcv_fail_buffer_trim; //type: uint32
        YLeaf data_xfer_rcv_fail_snd_una_out_of_sync; //type: uint32
        YLeaf seg_instr_send; //type: uint32
        YLeaf seg_instr_send_units; //type: uint32
        YLeaf seg_instr_send_drop; //type: uint32
        YLeaf seg_instr_rcv; //type: uint32
        YLeaf seg_instr_rcv_success; //type: uint32
        YLeaf seg_instr_rcv_fail_buffer_trim; //type: uint32
        YLeaf seg_instr_rcv_fail_tcp_process; //type: uint32
        YLeaf nack_send; //type: uint32
        YLeaf nack_send_drop; //type: uint32
        YLeaf nack_rcv; //type: uint32
        YLeaf nack_rcv_success; //type: uint32
        YLeaf nack_rcv_fail_data_send; //type: uint32
        YLeaf cleanup_send; //type: uint32
        YLeaf cleanup_send_drop; //type: uint32
        YLeaf cleanup_rcv; //type: uint32
        YLeaf cleanup_rcv_success; //type: uint32
        YLeaf cleanup_rcv_fail_buffer_trim; //type: uint32



}; // TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters

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

class ShowEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf static_policy;
        static const Enum::YLeaf interface_filter;
        static const Enum::YLeaf packet_filter;

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

class TcpConnStateEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf syn_sent;
        static const Enum::YLeaf syn_received;
        static const Enum::YLeaf established;
        static const Enum::YLeaf close_wait;
        static const Enum::YLeaf fin_wait1;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf last_ack;
        static const Enum::YLeaf fin_wait2;
        static const Enum::YLeaf time_wait;

};

class PakPrioEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified_packet;
        static const Enum::YLeaf normal_packet;
        static const Enum::YLeaf medium_packet;
        static const Enum::YLeaf high_packet;
        static const Enum::YLeaf crucial_packet;

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
        static const Enum::YLeaf internetwork;
        static const Enum::YLeaf ip_version6;

};

class NsrStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf na;

};

class TcpAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class NsrDownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf init_sync_aborted;
        static const Enum::YLeaf client_disabled;
        static const Enum::YLeaf client_disconnect;
        static const Enum::YLeaf tcp_disconnect;
        static const Enum::YLeaf failover;
        static const Enum::YLeaf nsr_clear;
        static const Enum::YLeaf internal_error;
        static const Enum::YLeaf retransmit_threshold_exceed;
        static const Enum::YLeaf init_sync_failure_thresh_exceeded;
        static const Enum::YLeaf audit_timeout;
        static const Enum::YLeaf audit_failed;
        static const Enum::YLeaf standby_sscb_deleted;
        static const Enum::YLeaf standby_session_close;
        static const Enum::YLeaf standby_rxpath_frozen;
        static const Enum::YLeaf partner_deleted;

};

class TcpTimerEnum : public Enum
{
    public:
        static const Enum::YLeaf retransmission_timer;
        static const Enum::YLeaf window_probe_timer;
        static const Enum::YLeaf timewait_state_timer;
        static const Enum::YLeaf ack_hold_timer;
        static const Enum::YLeaf keep_alive_timer;
        static const Enum::YLeaf pmtu_ager_timer;
        static const Enum::YLeaf retransmission_giveup_timer;
        static const Enum::YLeaf throttle_timer;

};


}
}

#endif /* _CISCO_IOS_XR_IP_TCP_OPER_ */

