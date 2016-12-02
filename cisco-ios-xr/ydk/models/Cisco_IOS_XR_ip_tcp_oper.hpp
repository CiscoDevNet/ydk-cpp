#ifndef _CISCO_IOS_XR_IP_TCP_OPER_
#define _CISCO_IOS_XR_IP_TCP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value id; //type: string


            class Statistics : public Entity
            {
                public:
                    Statistics();
                    ~Statistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Clients : public Entity
                {
                    public:
                        Clients();
                        ~Clients();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Client : public Entity
                    {
                        public:
                            Client();
                            ~Client();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value client_id; //type: uint32
                            Value client_jid; //type: int32
                            Value client_name; //type: string
                            Value ipv4_received_packets; //type: uint32
                            Value ipv4_sent_packets; //type: uint32
                            Value ipv6_received_packets; //type: uint32
                            Value ipv6_sent_packets; //type: uint32




                    }; // TcpConnection::Nodes::Node::Statistics::Clients::Client


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Clients::Client> > client;


                }; // TcpConnection::Nodes::Node::Statistics::Clients


                class Pcbs : public Entity
                {
                    public:
                        Pcbs();
                        ~Pcbs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Pcb : public Entity
                    {
                        public:
                            Pcb();
                            ~Pcb();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: uint32
                            Value pcb; //type: uint64
                            Value vrf_id; //type: uint32
                            Value packets_sent; //type: uint64
                            Value xipc_pulse_received; //type: uint64
                            Value segment_instruction_received; //type: uint32
                            Value send_packets_queued; //type: uint64
                            Value send_packets_queued_net_io; //type: uint64
                            Value send_queue_failed; //type: uint32
                            Value send_queue_net_io_failed; //type: uint32
                            Value packets_received; //type: uint64
                            Value receive_queue_failed; //type: uint32
                            Value received_packets_queued; //type: uint64
                            Value send_window_shrink_ignored; //type: uint32
                            Value is_paw_socket; //type: boolean
                            Value read_io_time; //type: uint32
                            Value write_io_time; //type: uint32


                        class ReadIoCounts : public Entity
                        {
                            public:
                                ReadIoCounts();
                                ~ReadIoCounts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value io_count; //type: uint32
                                Value arm_count; //type: uint32
                                Value unarm_count; //type: uint32
                                Value autoarm_count; //type: uint32




                        }; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts


                        class WriteIoCounts : public Entity
                        {
                            public:
                                WriteIoCounts();
                                ~WriteIoCounts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value io_count; //type: uint32
                                Value arm_count; //type: uint32
                                Value unarm_count; //type: uint32
                                Value autoarm_count; //type: uint32




                        }; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts


                        class AsyncSessionStats : public Entity
                        {
                            public:
                                AsyncSessionStats();
                                ~AsyncSessionStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value async_session; //type: boolean
                                ValueList data_write_success_num; //type: list of  uint32
                                ValueList data_read_success_num; //type: list of  uint32
                                ValueList data_write_error_num; //type: list of  uint32
                                ValueList data_read_error_num; //type: list of  uint32
                                ValueList control_write_success_num; //type: list of  uint32
                                ValueList control_read_success_num; //type: list of  uint32
                                ValueList control_write_error_num; //type: list of  uint32
                                ValueList control_read_error_num; //type: list of  uint32
                                ValueList data_write_byte; //type: list of  uint64
                                ValueList data_read_byte; //type: list of  uint64




                        }; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats


                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats> async_session_stats;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts> read_io_counts;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts> write_io_counts;


                    }; // TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb> > pcb;


                }; // TcpConnection::Nodes::Node::Statistics::Pcbs


                class Summary : public Entity
                {
                    public:
                        Summary();
                        ~Summary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value syn_cache_count; //type: uint32
                        Value num_open_sockets; //type: uint32
                        Value total_pakets_sent; //type: uint32
                        Value send_packets_dropped; //type: uint32
                        Value send_auth_packets_dropped; //type: uint32
                        Value data_pakets_sent; //type: uint32
                        Value data_bytes_sent; //type: uint32
                        Value packets_retransmitted; //type: uint32
                        Value bytes_retransmitted; //type: uint32
                        Value ack_only_packets_sent; //type: uint32
                        Value delay_ack_packets_sent; //type: uint32
                        Value urgent_only_packets_sent; //type: uint32
                        Value window_probe_packets_sent; //type: uint32
                        Value window_update_packets_sent; //type: uint32
                        Value control_packets_sent; //type: uint32
                        Value rst_packets_sent; //type: uint32
                        Value total_packets_received; //type: uint32
                        Value received_packets_dropped; //type: uint32
                        Value synacl_match_pkts_dropped; //type: uint32
                        Value received_packets_dropped_stale_c_hdr; //type: uint32
                        Value received_auth_packets_dropped; //type: uint32
                        Value ack_packets_received; //type: uint32
                        Value ackbytes_received; //type: uint32
                        Value duplicated_ack_packets_received; //type: uint32
                        Value ack_packets_for_unsent_received; //type: uint32
                        Value data_packets_received_in_sequence; //type: uint32
                        Value data_bytes_received_in_sequence; //type: uint32
                        Value duplicate_packets_received; //type: uint32
                        Value duplicate_bytes_received; //type: uint32
                        Value partial_duplicate_ack_received; //type: uint32
                        Value partial_duplicate_bytes_received; //type: uint32
                        Value out_of_order_packets_received; //type: uint32
                        Value out_of_order_bytes_received; //type: uint32
                        Value after_window_packets_received; //type: uint32
                        Value after_window_bytes_received; //type: uint32
                        Value window_probe_packets_received; //type: uint32
                        Value window_update_packets_received; //type: uint32
                        Value packets_received_after_close_packet; //type: uint32
                        Value bad_checksum_packets_received; //type: uint32
                        Value too_short_packets_received; //type: uint32
                        Value malformed_packets_received; //type: uint32
                        Value no_port_packets_received; //type: uint32
                        Value connections_requested; //type: uint32
                        Value connections_accepted; //type: uint32
                        Value connections_established; //type: uint32
                        Value connections_forcibly_closed; //type: uint32
                        Value connections_closed; //type: uint32
                        Value connections_dropped; //type: uint32
                        Value embryonic_connection_dropped; //type: uint32
                        Value connections_failed; //type: uint32
                        Value established_connections_reset; //type: uint32
                        Value retransmit_timeouts; //type: uint32
                        Value retransmit_dropped; //type: uint32
                        Value keep_alive_timeouts; //type: uint32
                        Value keep_alive_dropped; //type: uint32
                        Value keep_alive_probes; //type: uint32
                        Value paws_dropped; //type: uint32
                        Value persist_dropped; //type: uint32
                        Value try_lock_dropped; //type: uint32
                        Value connection_rate_limited; //type: uint32
                        Value syn_cache_added; //type: uint32
                        Value syn_cache_completed; //type: uint32
                        Value syn_cache_timed_out; //type: uint32
                        Value syn_cache_overflow; //type: uint32
                        Value syn_cache_reset; //type: uint32
                        Value syn_cache_unreach; //type: uint32
                        Value syn_cache_bucket_oflow; //type: uint32
                        Value syn_cache_aborted; //type: uint32
                        Value syn_cache_duplicate_sy_ns; //type: uint32
                        Value syn_cache_dropped; //type: uint32
                        Value pulse_errors; //type: uint32
                        Value socket_layer_packets; //type: uint32
                        Value reassembly_packets; //type: uint32
                        Value recovered_packets; //type: uint32
                        Value packet_failures; //type: uint32
                        Value mss_up; //type: uint32
                        Value mss_down; //type: uint32
                        Value truncated_write_iov; //type: uint32
                        Value no_throttle; //type: uint32
                        Value low_water_mark_throttle; //type: uint32
                        Value high_water_mark_throttle; //type: uint32
                        Value stalled_timer_tickle_count; //type: uint32
                        Value stalled_timer_tickle_time; //type: uint32
                        Value iq_sock_writes; //type: uint32
                        Value iq_sock_retries; //type: uint32
                        Value iq_sock_aborts; //type: uint32




                }; // TcpConnection::Nodes::Node::Statistics::Summary


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Clients> clients;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Pcbs> pcbs;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics::Summary> summary;


            }; // TcpConnection::Nodes::Node::Statistics


            class ExtendedInformation : public Entity
            {
                public:
                    ExtendedInformation();
                    ~ExtendedInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DisplayTypes : public Entity
                {
                    public:
                        DisplayTypes();
                        ~DisplayTypes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DisplayType : public Entity
                    {
                        public:
                            DisplayType();
                            ~DisplayType();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value disp_type; //type: ShowEnum


                        class ConnectionId : public Entity
                        {
                            public:
                                ConnectionId();
                                ~ConnectionId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value pcb_id; //type: uint32
                                Value l4_protocol; //type: uint32
                                Value local_port; //type: uint16
                                Value foreign_port; //type: uint16


                            class LocalAddress : public Entity
                            {
                                public:
                                    LocalAddress();
                                    ~LocalAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: AddrFamilyEnum
                                    Value ipv4_address; //type: string
                                    Value ipv6_address; //type: string


                                    class AddrFamilyEnum;


                            }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress


                            class ForeignAddress : public Entity
                            {
                                public:
                                    ForeignAddress();
                                    ~ForeignAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: AddrFamilyEnum
                                    Value ipv4_address; //type: string
                                    Value ipv6_address; //type: string


                                    class AddrFamilyEnum;


                            }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress


                            class Common : public Entity
                            {
                                public:
                                    Common();
                                    ~Common();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: AddrFamilyEnum


                                class LptsPcb : public Entity
                                {
                                    public:
                                        LptsPcb();
                                        ~LptsPcb();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value ttl; //type: uint8
                                        Value flow_types_info; //type: uint32


                                    class Options : public Entity
                                    {
                                        public:
                                            Options();
                                            ~Options();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value is_receive_filter; //type: boolean
                                            Value is_ip_sla; //type: boolean




                                    }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options


                                    class LptsFlags : public Entity
                                    {
                                        public:
                                            LptsFlags();
                                            ~LptsFlags();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value is_pcb_bound; //type: boolean
                                            Value is_local_address_ignore; //type: boolean
                                            Value is_ignore_vrf_filter; //type: boolean




                                    }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags


                                    class AcceptMask : public Entity
                                    {
                                        public:
                                            AcceptMask();
                                            ~AcceptMask();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value is_interface; //type: boolean
                                            Value is_packet_type; //type: boolean
                                            Value is_remote_address; //type: boolean
                                            Value is_remote_port; //type: boolean
                                            Value is_local_address; //type: boolean
                                            Value is_local_port; //type: boolean




                                    }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask


                                    class Filter : public Entity
                                    {
                                        public:
                                            Filter();
                                            ~Filter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string
                                            Value remote_length; //type: uint16
                                            Value local_length; //type: uint16
                                            Value receive_remote_port; //type: uint16
                                            Value receive_local_port; //type: uint16
                                            Value priority; //type: uint8
                                            Value ttl; //type: uint8
                                            Value flow_types_info; //type: uint32


                                        class PacketType : public Entity
                                        {
                                            public:
                                                PacketType();
                                                ~PacketType();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: PacketEnum
                                                Value icmp_message_type; //type: MessageTypeIcmpEnum
                                                Value icm_pv6_message_type; //type: MessageTypeIcmpv6Enum
                                                Value igmp_message_type; //type: MessageTypeIgmpEnum
                                                Value message_id; //type: uint32


                                                class MessageTypeIcmpv6Enum;
                                                class MessageTypeIcmpEnum;
                                                class MessageTypeIgmpEnum;
                                                class PacketEnum;


                                        }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType


                                        class RemoteAddress : public Entity
                                        {
                                            public:
                                                RemoteAddress();
                                                ~RemoteAddress();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: AddrFamilyEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class AddrFamilyEnum;


                                        }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress


                                        class LocalAddress : public Entity
                                        {
                                            public:
                                                LocalAddress();
                                                ~LocalAddress();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: AddrFamilyEnum
                                                Value ipv4_address; //type: string
                                                Value ipv6_address; //type: string


                                                class AddrFamilyEnum;


                                        }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress


                                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress> local_address;
                                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType> packet_type;
                                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress> remote_address;


                                    }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter


                                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask> accept_mask;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter> > filter;
                                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags> lpts_flags;
                                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options> options;


                                }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb


                                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb> lpts_pcb;
                                    class AddrFamilyEnum;


                            }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common


                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common> common;
                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress> foreign_address;
                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress> local_address;


                        }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId> > connection_id;
                            class ShowEnum;


                    }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType> > display_type;


                }; // TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes> display_types;


            }; // TcpConnection::Nodes::Node::ExtendedInformation


            class DetailInformations : public Entity
            {
                public:
                    DetailInformations();
                    ~DetailInformations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DetailInformation : public Entity
                {
                    public:
                        DetailInformation();
                        ~DetailInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pcb_id; //type: uint32
                        Value address_family; //type: TcpAddressFamilyEnum
                        Value pcb; //type: uint64
                        Value so; //type: uint64
                        Value tcpcb; //type: uint64
                        Value vrf_id; //type: uint32
                        Value connection_state; //type: TcpConnStateEnum
                        Value established_time; //type: uint32
                        Value local_pid; //type: uint32
                        Value local_port; //type: uint16
                        Value foreign_port; //type: uint16
                        Value packet_priority; //type: PakPrioEnum
                        Value packet_tos; //type: uint16
                        Value packet_ttl; //type: uint16
                        Value hash_index; //type: uint32
                        Value current_receive_queue_size; //type: uint32
                        Value max_receive_queue_size; //type: uint32
                        Value current_send_queue_size; //type: uint32
                        Value max_send_queue_size; //type: uint32
                        Value current_receive_queue_packet_size; //type: uint32
                        Value max_receive_queue_packet_size; //type: uint32
                        Value save_queue_size; //type: uint32
                        Value send_initial_sequence_num; //type: uint32
                        Value send_unack_sequence_num; //type: uint32
                        Value send_next_sequence_num; //type: uint32
                        Value send_max_sequence_num; //type: uint32
                        Value send_window_size; //type: uint32
                        Value send_congestion_window_size; //type: uint32
                        Value receive_initial_sequence_num; //type: uint32
                        Value receive_next_sequence_num; //type: uint32
                        Value receive_adv_window_size; //type: uint32
                        Value receive_window_size; //type: uint32
                        Value mss; //type: uint32
                        Value peer_mss; //type: uint32
                        Value srtt; //type: uint32
                        Value rtto; //type: uint32
                        Value krtt; //type: uint32
                        Value srtv; //type: uint32
                        Value min_rtt; //type: uint32
                        Value max_rtt; //type: uint32
                        Value retries; //type: uint32
                        Value ack_hold_time; //type: uint32
                        Value giveup_time; //type: uint32
                        Value keep_alive_time; //type: uint32
                        Value syn_wait_time; //type: uint32
                        Value rxsy_naclname; //type: string
                        Value soft_error; //type: int32
                        Value sock_error; //type: int32
                        Value is_retrans_forever; //type: boolean
                        Value min_mss; //type: uint32
                        Value max_mss; //type: uint32
                        Value connect_retries; //type: uint16
                        Value connect_retry_interval; //type: uint16
                        Value receive_window_scale; //type: uint32
                        Value send_window_scale; //type: uint32
                        Value request_receive_window_scale; //type: uint32
                        Value rqst_send_wnd_scale; //type: uint32
                        Value time_stamp_recent; //type: uint32
                        Value time_stamp_recent_age; //type: uint32
                        Value last_ack_sent; //type: uint32
                        Value sendbuf_lowwat; //type: uint32
                        Value recvbuf_lowwat; //type: uint32
                        Value sendbuf_hiwat; //type: uint32
                        Value recvbuf_hiwat; //type: uint32
                        Value sendbuf_notify_thresh; //type: uint32
                        Value send_pdu_count; //type: uint32
                        Value output_ifhandle; //type: uint32
                        Value fib_pd_ctx_size; //type: uint32
                        Value num_labels; //type: uint32
                        ValueList fib_pd_ctx; //type: list of  uint32
                        ValueList fib_label_output; //type: list of  uint32


                    class LocalAddress : public Entity
                    {
                        public:
                            LocalAddress();
                            ~LocalAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: TcpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class TcpAddressFamilyEnum;


                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress


                    class ForeignAddress : public Entity
                    {
                        public:
                            ForeignAddress();
                            ~ForeignAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: TcpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class TcpAddressFamilyEnum;


                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress


                    class SocketOptionFlags : public Entity
                    {
                        public:
                            SocketOptionFlags();
                            ~SocketOptionFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value debug; //type: boolean
                            Value accept_connection; //type: boolean
                            Value reuse_address; //type: boolean
                            Value keep_alive; //type: boolean
                            Value dont_route; //type: boolean
                            Value broadcast; //type: boolean
                            Value use_loopback; //type: boolean
                            Value linger; //type: boolean
                            Value out_of_band_inline; //type: boolean
                            Value reuse_port; //type: boolean
                            Value nonblocking_io; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags


                    class SocketStateFlags : public Entity
                    {
                        public:
                            SocketStateFlags();
                            ~SocketStateFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value no_file_descriptor_reference; //type: boolean
                            Value is_connected; //type: boolean
                            Value is_connecting; //type: boolean
                            Value is_disconnecting; //type: boolean
                            Value cant_send_more; //type: boolean
                            Value cant_receive_more; //type: boolean
                            Value received_at_mark; //type: boolean
                            Value privileged; //type: boolean
                            Value block_close; //type: boolean
                            Value async_io_notify; //type: boolean
                            Value is_confirming; //type: boolean
                            Value is_solock; //type: boolean
                            Value is_detached; //type: boolean
                            Value block_receive; //type: boolean
                            Value block_send; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags


                    class FeatureFlags : public Entity
                    {
                        public:
                            FeatureFlags();
                            ~FeatureFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value selective_ack; //type: boolean
                            Value md5; //type: boolean
                            Value timestamps; //type: boolean
                            Value window_scaling; //type: boolean
                            Value nagle; //type: boolean
                            Value giveup_timer; //type: boolean
                            Value connection_keep_alive_timer; //type: boolean
                            Value path_mtu_discovery; //type: boolean
                            Value mss_cisco; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags


                    class StateFlags : public Entity
                    {
                        public:
                            StateFlags();
                            ~StateFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value nagle_wait; //type: boolean
                            Value ack_needed; //type: boolean
                            Value fin_sent; //type: boolean
                            Value probing; //type: boolean
                            Value need_push; //type: boolean
                            Value pushed; //type: boolean
                            Value in_syn_cache; //type: boolean
                            Value path_mtu_ager; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags


                    class RequestFlags : public Entity
                    {
                        public:
                            RequestFlags();
                            ~RequestFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value selective_ack; //type: boolean
                            Value md5; //type: boolean
                            Value timestamps; //type: boolean
                            Value window_scaling; //type: boolean
                            Value nagle; //type: boolean
                            Value giveup_timer; //type: boolean
                            Value connection_keep_alive_timer; //type: boolean
                            Value path_mtu_discovery; //type: boolean
                            Value mss_cisco; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags


                    class ReceiveBufStateFlags : public Entity
                    {
                        public:
                            ReceiveBufStateFlags();
                            ~ReceiveBufStateFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value locked; //type: boolean
                            Value waiting_for_lock; //type: boolean
                            Value waiting_for_data; //type: boolean
                            Value input_select; //type: boolean
                            Value async_io; //type: boolean
                            Value not_interruptible; //type: boolean
                            Value io_timer_set; //type: boolean
                            Value delayed_wakeup; //type: boolean
                            Value wakeup; //type: boolean
                            Value connect_wakeup; //type: boolean
                            Value output_select; //type: boolean
                            Value out_of_band_select; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags


                    class SendBufStateFlags : public Entity
                    {
                        public:
                            SendBufStateFlags();
                            ~SendBufStateFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value locked; //type: boolean
                            Value waiting_for_lock; //type: boolean
                            Value waiting_for_data; //type: boolean
                            Value input_select; //type: boolean
                            Value async_io; //type: boolean
                            Value not_interruptible; //type: boolean
                            Value io_timer_set; //type: boolean
                            Value delayed_wakeup; //type: boolean
                            Value wakeup; //type: boolean
                            Value connect_wakeup; //type: boolean
                            Value output_select; //type: boolean
                            Value out_of_band_select; //type: boolean




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags


                    class Timer : public Entity
                    {
                        public:
                            Timer();
                            ~Timer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value timer_type; //type: TcpTimerEnum
                            Value timer_activations; //type: uint32
                            Value timer_expirations; //type: uint32
                            Value timer_next_activation; //type: uint32


                            class TcpTimerEnum;


                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer


                    class SackBlk : public Entity
                    {
                        public:
                            SackBlk();
                            ~SackBlk();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value start; //type: uint32
                            Value end; //type: uint32




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk


                    class SendSackHole : public Entity
                    {
                        public:
                            SendSackHole();
                            ~SendSackHole();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value start; //type: uint32
                            Value end; //type: uint32
                            Value duplicated_ack; //type: uint32
                            Value retransmitted; //type: uint32




                    }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole


                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags> feature_flags;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress> foreign_address;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress> local_address;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags> receive_buf_state_flags;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags> request_flags;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk> > sack_blk;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags> send_buf_state_flags;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole> > send_sack_hole;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags> socket_option_flags;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags> socket_state_flags;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags> state_flags;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer> > timer;
                        class TcpAddressFamilyEnum;
                        class TcpConnStateEnum;
                        class PakPrioEnum;


                }; // TcpConnection::Nodes::Node::DetailInformations::DetailInformation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations::DetailInformation> > detail_information;


            }; // TcpConnection::Nodes::Node::DetailInformations


            class BriefInformations : public Entity
            {
                public:
                    BriefInformations();
                    ~BriefInformations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BriefInformation : public Entity
                {
                    public:
                        BriefInformation();
                        ~BriefInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pcb_id; //type: uint32
                        Value af_name; //type: TcpAddressFamilyEnum
                        Value pcb; //type: uint64
                        Value connection_state; //type: TcpConnStateEnum
                        Value local_pid; //type: uint32
                        Value local_port; //type: uint16
                        Value foreign_port; //type: uint16
                        Value current_receive_queue_size; //type: uint32
                        Value current_send_queue_size; //type: uint32
                        Value vrf_id; //type: uint32


                    class LocalAddress : public Entity
                    {
                        public:
                            LocalAddress();
                            ~LocalAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: TcpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class TcpAddressFamilyEnum;


                    }; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress


                    class ForeignAddress : public Entity
                    {
                        public:
                            ForeignAddress();
                            ~ForeignAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: TcpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class TcpAddressFamilyEnum;


                    }; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress


                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress> foreign_address;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress> local_address;
                        class TcpAddressFamilyEnum;
                        class TcpConnStateEnum;


                }; // TcpConnection::Nodes::Node::BriefInformations::BriefInformation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations::BriefInformation> > brief_information;


            }; // TcpConnection::Nodes::Node::BriefInformations


                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::BriefInformations> brief_informations;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::DetailInformations> detail_informations;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::ExtendedInformation> extended_information;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node::Statistics> statistics;


        }; // TcpConnection::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes::Node> > node;


    }; // TcpConnection::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpConnection::Nodes> nodes;


}; // TcpConnection

class Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class Statistics : public Entity
            {
                public:
                    Statistics();
                    ~Statistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ipv4Traffic : public Entity
                {
                    public:
                        Ipv4Traffic();
                        ~Ipv4Traffic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value tcp_input_packets; //type: uint32
                        Value tcp_checksum_error_packets; //type: uint32
                        Value tcp_dropped_packets; //type: uint32
                        Value tcp_output_packets; //type: uint32
                        Value tcp_retransmitted_packets; //type: uint32




                }; // Tcp::Nodes::Node::Statistics::Ipv4Traffic


                class Ipv6Traffic : public Entity
                {
                    public:
                        Ipv6Traffic();
                        ~Ipv6Traffic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value tcp_input_packets; //type: uint32
                        Value tcp_checksum_error_packets; //type: uint32
                        Value tcp_dropped_packets; //type: uint32
                        Value tcp_output_packets; //type: uint32
                        Value tcp_retransmitted_packets; //type: uint32




                }; // Tcp::Nodes::Node::Statistics::Ipv6Traffic


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics::Ipv4Traffic> ipv4_traffic;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics::Ipv6Traffic> ipv6_traffic;


            }; // Tcp::Nodes::Node::Statistics


                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node::Statistics> statistics;


        }; // Tcp::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes::Node> > node;


    }; // Tcp::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::Tcp::Nodes> nodes;


}; // Tcp

class TcpNsr : public Entity
{
    public:
        TcpNsr();
        ~TcpNsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value id; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BriefSessions : public Entity
                {
                    public:
                        BriefSessions();
                        ~BriefSessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BriefSession : public Entity
                    {
                        public:
                            BriefSession();
                            ~BriefSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value address_family; //type: AddrFamilyEnum
                            Value pcb; //type: uint64
                            Value sscb; //type: uint64
                            Value local_port; //type: uint16
                            Value foreign_port; //type: uint16
                            Value vrf_id; //type: uint32
                            Value is_admin_configured_up; //type: boolean
                            Value is_us_operational_up; //type: NsrStatusEnum
                            Value is_ds_operational_up; //type: NsrStatusEnum
                            Value is_only_receive_path_replication; //type: boolean
                            ValueList local_address; //type: list of  string
                            ValueList foreign_address; //type: list of  string


                            class AddrFamilyEnum;
                            class NsrStatusEnum;
                            class NsrStatusEnum;


                    }; // TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession> > brief_session;


                }; // TcpNsr::Nodes::Node::Session::BriefSessions


                class DetailSessions : public Entity
                {
                    public:
                        DetailSessions();
                        ~DetailSessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DetailSession : public Entity
                    {
                        public:
                            DetailSession();
                            ~DetailSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value address_family; //type: AddrFamilyEnum
                            Value pcb; //type: uint64
                            Value sscb; //type: uint64
                            Value local_port; //type: uint16
                            Value foreign_port; //type: uint16
                            Value vrf_id; //type: uint32
                            Value is_admin_configured_up; //type: boolean
                            Value is_us_operational_up; //type: NsrStatusEnum
                            Value is_ds_operational_up; //type: NsrStatusEnum
                            Value is_only_receive_path_replication; //type: boolean
                            Value cookie; //type: uint64
                            Value is_session_replicated; //type: boolean
                            Value is_session_synced; //type: boolean
                            Value fist_standby_sequence_number; //type: uint32
                            Value fssn_offset; //type: uint32
                            Value nsr_down_reason; //type: NsrDownReasonEnum
                            Value nsr_down_time; //type: uint32
                            Value sequence_number_of_init_sync; //type: uint32
                            Value is_init_sync_in_progress; //type: boolean
                            Value is_init_sync_second_phase; //type: boolean
                            Value init_sync_error; //type: string
                            Value is_init_sync_error_local; //type: boolean
                            Value init_sync_start_time; //type: uint32
                            Value init_sync_end_time; //type: uint32
                            Value init_sync_flags; //type: uint32
                            Value sequence_number_of_init_sync_up_stream; //type: uint32
                            Value peer_endp_hdl_up_stream; //type: uint64
                            Value init_sync_start_time_up_stream; //type: uint32
                            Value init_sync_end_time_up_stream; //type: uint32
                            Value fist_standby_sequence_number_up_stream; //type: uint32
                            Value nsr_down_reason_up_stream; //type: NsrDownReasonEnum
                            Value nsr_down_time_up_stream; //type: uint32
                            Value sequence_number_of_init_sync_down_stream; //type: uint32
                            Value peer_endp_hdl_down_stream; //type: uint64
                            Value init_sync_start_time_down_stream; //type: uint32
                            Value init_sync_end_time_down_stream; //type: uint32
                            Value fist_standby_sequence_number_down_stream; //type: uint32
                            Value nsr_down_reason_down_stream; //type: NsrDownReasonEnum
                            Value nsr_down_time_down_stream; //type: uint32
                            Value max_number_of_held_packet; //type: int32
                            Value max_number_of_held_packet_reach_time; //type: uint32
                            Value max_number_of_held_internal_ack; //type: int32
                            Value max_number_of_held_internal_ack_reach_time; //type: uint32
                            ValueList local_address; //type: list of  string
                            ValueList foreign_address; //type: list of  string


                        class SetInformation : public Entity
                        {
                            public:
                                SetInformation();
                                ~SetInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sscb; //type: uint64
                                Value pid; //type: uint32
                                Value client_name; //type: string
                                Value client_instance; //type: uint32
                                Value set_id; //type: uint32
                                Value sso_role; //type: uint32
                                Value mode; //type: uint32
                                Value address_family; //type: AddrFamilyEnum
                                Value well_known_port; //type: uint16
                                Value local_node; //type: string
                                Value local_instance; //type: uint32
                                Value protect_node; //type: string
                                Value protect_instance; //type: uint32
                                Value number_of_sessions; //type: uint32
                                Value number_of_synced_sessions_up_stream; //type: uint32
                                Value number_of_synced_sessions_down_stream; //type: uint32
                                Value is_init_sync_in_progress; //type: boolean
                                Value is_sscb_init_sync_ready; //type: boolean


                                class AddrFamilyEnum;


                        }; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation


                        class PacketHoldQueue : public Entity
                        {
                            public:
                                PacketHoldQueue();
                                ~PacketHoldQueue();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sequence_number; //type: uint32
                                Value data_length; //type: uint32
                                Value acknoledgement_number; //type: uint32




                        }; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue


                        class InternalAckHoldQueue : public Entity
                        {
                            public:
                                InternalAckHoldQueue();
                                ~InternalAckHoldQueue();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sequence_number; //type: uint32
                                Value data_length; //type: uint32
                                Value acknoledgement_number; //type: uint32




                        }; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue> > internal_ack_hold_queue;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue> > packet_hold_queue;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation> set_information;
                            class AddrFamilyEnum;
                            class NsrStatusEnum;
                            class NsrStatusEnum;
                            class NsrDownReasonEnum;
                            class NsrDownReasonEnum;
                            class NsrDownReasonEnum;


                    }; // TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession> > detail_session;


                }; // TcpNsr::Nodes::Node::Session::DetailSessions


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::BriefSessions> brief_sessions;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session::DetailSessions> detail_sessions;


            }; // TcpNsr::Nodes::Node::Session


            class Client : public Entity
            {
                public:
                    Client();
                    ~Client();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DetailClients : public Entity
                {
                    public:
                        DetailClients();
                        ~DetailClients();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DetailClient : public Entity
                    {
                        public:
                            DetailClient();
                            ~DetailClient();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value ccb; //type: uint64
                            Value pid; //type: uint32
                            Value process_name; //type: string
                            Value job_id; //type: int32
                            Value instance; //type: uint32
                            Value numberof_sets; //type: uint32
                            Value number_of_sessions; //type: uint32
                            Value number_of_up_sessions; //type: uint32
                            Value connected_at; //type: uint32
                            Value is_notification_registered; //type: boolean




                    }; // TcpNsr::Nodes::Node::Client::DetailClients::DetailClient


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::DetailClients::DetailClient> > detail_client;


                }; // TcpNsr::Nodes::Node::Client::DetailClients


                class BriefClients : public Entity
                {
                    public:
                        BriefClients();
                        ~BriefClients();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BriefClient : public Entity
                    {
                        public:
                            BriefClient();
                            ~BriefClient();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value ccb; //type: uint64
                            Value pid; //type: uint32
                            Value process_name; //type: string
                            Value job_id; //type: int32
                            Value instance; //type: uint32
                            Value numberof_sets; //type: uint32
                            Value number_of_sessions; //type: uint32
                            Value number_of_up_sessions; //type: uint32




                    }; // TcpNsr::Nodes::Node::Client::BriefClients::BriefClient


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::BriefClients::BriefClient> > brief_client;


                }; // TcpNsr::Nodes::Node::Client::BriefClients


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::BriefClients> brief_clients;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client::DetailClients> detail_clients;


            }; // TcpNsr::Nodes::Node::Client


            class SessionSet : public Entity
            {
                public:
                    SessionSet();
                    ~SessionSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DetailSets : public Entity
                {
                    public:
                        DetailSets();
                        ~DetailSets();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DetailSet : public Entity
                    {
                        public:
                            DetailSet();
                            ~DetailSet();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value sscb; //type: uint64
                            Value pid; //type: uint32
                            Value set_id; //type: uint32
                            Value sso_role; //type: uint32
                            Value mode; //type: uint32
                            Value address_family; //type: AddrFamilyEnum
                            Value well_known_port; //type: uint16
                            Value local_node; //type: string
                            Value local_instance; //type: uint32
                            Value protect_node; //type: string
                            Value protect_instance; //type: uint32
                            Value number_of_sessions; //type: uint32
                            Value number_of_synced_sessions_up_stream; //type: uint32
                            Value number_of_synced_sessions_down_stream; //type: uint32
                            Value is_init_sync_in_progress; //type: boolean
                            Value is_init_sync_second_phase; //type: boolean
                            Value sequence_number_of_init_sync; //type: uint32
                            Value init_sync_timer; //type: uint32
                            Value total_number_of_init_sync_sessions; //type: uint32
                            Value number_of_init_synced_sessions; //type: uint32
                            Value number_of_sessions_init_sync_failed; //type: uint32
                            Value init_sync_error; //type: string
                            Value is_init_sync_error_local; //type: boolean
                            Value init_sync_start_time; //type: uint32
                            Value init_sync_end_time; //type: uint32
                            Value is_sscb_init_sync_ready; //type: boolean
                            Value init_sync_ready_start_time; //type: uint32
                            Value init_sync_ready_end_time; //type: uint32
                            Value nsr_reset_time; //type: uint32
                            Value is_audit_in_progress; //type: boolean
                            Value audit_seq_number; //type: uint32
                            Value audit_start_time; //type: uint32
                            Value audit_end_time; //type: uint32


                            class AddrFamilyEnum;


                    }; // TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet> > detail_set;


                }; // TcpNsr::Nodes::Node::SessionSet::DetailSets


                class BriefSets : public Entity
                {
                    public:
                        BriefSets();
                        ~BriefSets();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BriefSet : public Entity
                    {
                        public:
                            BriefSet();
                            ~BriefSet();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value sscb; //type: uint64
                            Value pid; //type: uint32
                            Value client_name; //type: string
                            Value client_instance; //type: uint32
                            Value set_id; //type: uint32
                            Value sso_role; //type: uint32
                            Value mode; //type: uint32
                            Value address_family; //type: AddrFamilyEnum
                            Value well_known_port; //type: uint16
                            Value local_node; //type: string
                            Value local_instance; //type: uint32
                            Value protect_node; //type: string
                            Value protect_instance; //type: uint32
                            Value number_of_sessions; //type: uint32
                            Value number_of_synced_sessions_up_stream; //type: uint32
                            Value number_of_synced_sessions_down_stream; //type: uint32
                            Value is_init_sync_in_progress; //type: boolean
                            Value is_sscb_init_sync_ready; //type: boolean


                            class AddrFamilyEnum;


                    }; // TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet> > brief_set;


                }; // TcpNsr::Nodes::Node::SessionSet::BriefSets


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::BriefSets> brief_sets;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet::DetailSets> detail_sets;


            }; // TcpNsr::Nodes::Node::SessionSet


            class Statistics : public Entity
            {
                public:
                    Statistics();
                    ~Statistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Summary : public Entity
                {
                    public:
                        Summary();
                        ~Summary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value last_cleared_time; //type: uint32
                        Value number_of_connected_clients; //type: uint32
                        Value number_of_disconnected_clients; //type: uint32
                        Value number_of_current_clients; //type: uint32
                        Value number_of_created_session_sets; //type: uint32
                        Value number_of_destroyed_session_sets; //type: uint32
                        Value number_of_current_session_sets; //type: uint32
                        Value number_of_added_sessions; //type: uint32
                        Value number_of_deleted_sessions; //type: uint32
                        Value number_of_current_sessions; //type: uint32
                        Value number_of_partner_node; //type: uint32
                        Value number_of_attempted_init_sync; //type: uint32
                        Value number_of_succeeded_init_sync; //type: uint32
                        Value number_of_failed_init_sync; //type: uint32
                        Value number_of_held_packets; //type: uint32
                        Value number_of_held_but_dropped_packets; //type: uint32
                        Value number_of_held_internal_acks; //type: uint32
                        Value number_of_held_but_dropped_internal_acks; //type: uint32
                        Value number_of_sent_internal_acks; //type: uint32
                        Value number_of_received_internal_acks; //type: uint32
                        Value number_of_qad_receive_messages_drops; //type: uint32
                        Value number_of_qad_receive_messages_unknowns; //type: uint32
                        Value number_of_qad_receive_messages_accepts; //type: uint32
                        Value number_of_qad_stale_receive_messages_drops; //type: uint32
                        Value number_of_qad_transfer_message_sent; //type: uint32
                        Value number_of_qad_transfer_message_drops; //type: uint32
                        Value number_of_internal_ack_drops_no_pcb; //type: uint32
                        Value number_of_internal_ack_drops_no_scbdp; //type: uint32
                        Value internal_ack_drops_not_replicated; //type: uint32
                        Value internal_ack_drops_initsync_first_phase; //type: uint32
                        Value internal_ack_drops_stale; //type: uint32
                        Value internal_ack_drops_immediate_match; //type: uint32
                        Value held_packet_drops; //type: uint32


                    class SndCounters : public Entity
                    {
                        public:
                            SndCounters();
                            ~SndCounters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Common : public Entity
                        {
                            public:
                                Common();
                                ~Common();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value data_xfer_send; //type: uint32
                                Value data_xfer_send_total; //type: uint64
                                Value data_xfer_send_drop; //type: uint32
                                Value data_xfer_send_iov_alloc; //type: uint32
                                Value data_xfer_rcv; //type: uint32
                                Value data_xfer_rcv_success; //type: uint32
                                Value data_xfer_rcv_fail_buffer_trim; //type: uint32
                                Value data_xfer_rcv_fail_snd_una_out_of_sync; //type: uint32
                                Value seg_instr_send; //type: uint32
                                Value seg_instr_send_units; //type: uint32
                                Value seg_instr_send_drop; //type: uint32
                                Value seg_instr_rcv; //type: uint32
                                Value seg_instr_rcv_success; //type: uint32
                                Value seg_instr_rcv_fail_buffer_trim; //type: uint32
                                Value seg_instr_rcv_fail_tcp_process; //type: uint32
                                Value nack_send; //type: uint32
                                Value nack_send_drop; //type: uint32
                                Value nack_rcv; //type: uint32
                                Value nack_rcv_success; //type: uint32
                                Value nack_rcv_fail_data_send; //type: uint32
                                Value cleanup_send; //type: uint32
                                Value cleanup_send_drop; //type: uint32
                                Value cleanup_rcv; //type: uint32
                                Value cleanup_rcv_success; //type: uint32
                                Value cleanup_rcv_fail_buffer_trim; //type: uint32




                        }; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common


                        class AggrOnly : public Entity
                        {
                            public:
                                AggrOnly();
                                ~AggrOnly();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value data_xfer_rcv_drop_no_pcb; //type: uint32
                                Value data_xfer_rcv_drop_no_scb_dp; //type: uint32
                                Value seg_instr_rcv_drop_no_pcb; //type: uint32
                                Value seg_instr_rcv_drop_no_scb_dp; //type: uint32
                                Value nack_rcv_drop_no_pcb; //type: uint32
                                Value nack_rcv_drop_no_scb_dp; //type: uint32
                                Value cleanup_rcv_drop_no_pcb; //type: uint32
                                Value cleanup_rcv_drop_no_scb_dp; //type: uint32




                        }; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly


                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly> aggr_only;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common> common;


                    }; // TcpNsr::Nodes::Node::Statistics::Summary::SndCounters


                    class AuditCounters : public Entity
                    {
                        public:
                            AuditCounters();
                            ~AuditCounters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Common : public Entity
                        {
                            public:
                                Common();
                                ~Common();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mark_session_set_send; //type: uint32
                                Value mark_session_set_send_drop; //type: uint32
                                Value mark_session_set_rcv; //type: uint32
                                Value mark_session_set_rcv_drop; //type: uint32
                                Value session_send; //type: uint32
                                Value session_send_drop; //type: uint32
                                Value session_rcv; //type: uint32
                                Value session_rcv_drop; //type: uint32
                                Value sweep_session_set_send; //type: uint32
                                Value sweep_session_set_send_drop; //type: uint32
                                Value sweep_session_set_rcv; //type: uint32
                                Value sweep_session_set_rcv_drop; //type: uint32
                                Value session_set_response_send; //type: uint32
                                Value session_set_response_send_drop; //type: uint32
                                Value session_set_response_rcv; //type: uint32
                                Value session_set_response_rcv_drop; //type: uint32
                                Value mark_session_set_ack_send; //type: uint32
                                Value mark_session_set_ack_send_drop; //type: uint32
                                Value mark_session_set_ack_rcv; //type: uint32
                                Value mark_session_set_ack_rcv_drop; //type: uint32
                                Value mark_session_set_nack_send; //type: uint32
                                Value mark_session_set_nack_send_drop; //type: uint32
                                Value mark_session_set_nack_rcv; //type: uint32
                                Value mark_session_set_nack_rcv_drop; //type: uint32
                                Value abort; //type: uint32




                        }; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common


                        class AggrOnly : public Entity
                        {
                            public:
                                AggrOnly();
                                ~AggrOnly();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mark_session_set_rcv_drop_aggr; //type: uint32
                                Value session_rcv_drop_aggr; //type: uint32
                                Value sweep_session_set_rcv_drop_aggr; //type: uint32
                                Value session_set_response_rcv_drop_aggr; //type: uint32
                                Value mark_session_set_ack_rcv_drop_aggr; //type: uint32
                                Value mark_session_set_nack_rcv_drop_aggr; //type: uint32




                        }; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly


                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly> aggr_only;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common> common;


                    }; // TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters


                    class NotificationStatistic : public Entity
                    {
                        public:
                            NotificationStatistic();
                            ~NotificationStatistic();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value queued_count; //type: uint32
                            Value failed_count; //type: uint32
                            Value delivered_count; //type: uint32
                            Value dropped_count; //type: uint32




                    }; // TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic


                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters> audit_counters;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic> > notification_statistic;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary::SndCounters> snd_counters;


                }; // TcpNsr::Nodes::Node::Statistics::Summary


                class StatisticClients : public Entity
                {
                    public:
                        StatisticClients();
                        ~StatisticClients();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StatisticClient : public Entity
                    {
                        public:
                            StatisticClient();
                            ~StatisticClient();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value ccb; //type: uint64
                            Value pid; //type: uint32
                            Value process_name; //type: string
                            Value job_id; //type: int32
                            Value instance; //type: uint32
                            Value connected_at; //type: uint32
                            Value number_of_created_sscb; //type: uint32
                            Value number_of_deleted_sscb; //type: uint32
                            Value last_cleared_time; //type: uint32


                        class NotificationStatistic : public Entity
                        {
                            public:
                                NotificationStatistic();
                                ~NotificationStatistic();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value queued_count; //type: uint32
                                Value failed_count; //type: uint32
                                Value delivered_count; //type: uint32
                                Value dropped_count; //type: uint32




                        }; // TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic> > notification_statistic;


                    }; // TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient> > statistic_client;


                }; // TcpNsr::Nodes::Node::Statistics::StatisticClients


                class StatisticSets : public Entity
                {
                    public:
                        StatisticSets();
                        ~StatisticSets();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StatisticSet : public Entity
                    {
                        public:
                            StatisticSet();
                            ~StatisticSet();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value sscb; //type: uint64
                            Value set_id; //type: uint32
                            Value number_of_attempted_init_sync; //type: uint32
                            Value number_of_succeeded_init_sync; //type: uint32
                            Value number_of_failed_init_sync; //type: uint32
                            Value number_of_failover; //type: uint32
                            Value number_of_nsr_resets; //type: uint32
                            Value last_cleared_time; //type: uint32




                    }; // TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet> > statistic_set;


                }; // TcpNsr::Nodes::Node::Statistics::StatisticSets


                class StatisticSessions : public Entity
                {
                    public:
                        StatisticSessions();
                        ~StatisticSessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StatisticSession : public Entity
                    {
                        public:
                            StatisticSession();
                            ~StatisticSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value id; //type: string
                            Value pcb; //type: uint64
                            Value number_of_times_nsr_up; //type: uint32
                            Value number_of_timers_nsr_down; //type: uint32
                            Value number_of_times_nsr_disabled; //type: uint32
                            Value number_of_times_nsr_fail_over; //type: uint32
                            Value internal_ack_drops_not_replicated; //type: uint64
                            Value internal_ack_drops_initsync_first_phase; //type: uint64
                            Value internal_ack_drops_stale; //type: uint64
                            Value internal_ack_drops_immediate_match; //type: uint64
                            Value last_cleared_time; //type: uint32


                        class SndCounters : public Entity
                        {
                            public:
                                SndCounters();
                                ~SndCounters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value data_xfer_send; //type: uint32
                                Value data_xfer_send_total; //type: uint64
                                Value data_xfer_send_drop; //type: uint32
                                Value data_xfer_send_iov_alloc; //type: uint32
                                Value data_xfer_rcv; //type: uint32
                                Value data_xfer_rcv_success; //type: uint32
                                Value data_xfer_rcv_fail_buffer_trim; //type: uint32
                                Value data_xfer_rcv_fail_snd_una_out_of_sync; //type: uint32
                                Value seg_instr_send; //type: uint32
                                Value seg_instr_send_units; //type: uint32
                                Value seg_instr_send_drop; //type: uint32
                                Value seg_instr_rcv; //type: uint32
                                Value seg_instr_rcv_success; //type: uint32
                                Value seg_instr_rcv_fail_buffer_trim; //type: uint32
                                Value seg_instr_rcv_fail_tcp_process; //type: uint32
                                Value nack_send; //type: uint32
                                Value nack_send_drop; //type: uint32
                                Value nack_rcv; //type: uint32
                                Value nack_rcv_success; //type: uint32
                                Value nack_rcv_fail_data_send; //type: uint32
                                Value cleanup_send; //type: uint32
                                Value cleanup_send_drop; //type: uint32
                                Value cleanup_rcv; //type: uint32
                                Value cleanup_rcv_success; //type: uint32
                                Value cleanup_rcv_fail_buffer_trim; //type: uint32




                        }; // TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters


                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters> snd_counters;


                    }; // TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession> > statistic_session;


                }; // TcpNsr::Nodes::Node::Statistics::StatisticSessions


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticClients> statistic_clients;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSessions> statistic_sessions;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::StatisticSets> statistic_sets;
                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics::Summary> summary;


            }; // TcpNsr::Nodes::Node::Statistics


                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Client> client;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::SessionSet> session_set;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node::Statistics> statistics;


        }; // TcpNsr::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes::Node> > node;


    }; // TcpNsr::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_tcp_oper::TcpNsr::Nodes> nodes;


}; // TcpNsr


class MessageTypeIcmpv6Enum : public Enum
{
    public:
        static const Enum::Value destination_unreachable;
        static const Enum::Value packet_too_big;
        static const Enum::Value time_exceeded;
        static const Enum::Value parameter_problem;
        static const Enum::Value echo_request;
        static const Enum::Value echo_reply;
        static const Enum::Value multicast_listener_query;
        static const Enum::Value multicast_listener_report;
        static const Enum::Value multicast_listener_done;
        static const Enum::Value router_solicitation;
        static const Enum::Value router_advertisement;
        static const Enum::Value neighbor_solicitation;
        static const Enum::Value neighbor_advertisement;
        static const Enum::Value redirect_message;
        static const Enum::Value router_renumbering;
        static const Enum::Value node_information_query;
        static const Enum::Value node_information_reply;
        static const Enum::Value inverse_neighbor_discovery_solicitaion;
        static const Enum::Value inverse_neighbor_discover_advertisement;
        static const Enum::Value v2_multicast_listener_report;
        static const Enum::Value home_agent_address_discovery_request;
        static const Enum::Value home_agent_address_discovery_reply;
        static const Enum::Value mobile_prefix_solicitation;
        static const Enum::Value mobile_prefix_advertisement;
        static const Enum::Value certification_path_solicitation_message;
        static const Enum::Value certification_path_advertisement_message;
        static const Enum::Value experimental_mobility_protocols;
        static const Enum::Value multicast_router_advertisement;
        static const Enum::Value multicast_router_solicitation;
        static const Enum::Value multicast_router_termination;
        static const Enum::Value fmipv6_messages;

};

class ShowEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value static_policy;
        static const Enum::Value interface_filter;
        static const Enum::Value packet_filter;

};

class MessageTypeIgmpEnum : public Enum
{
    public:
        static const Enum::Value membership_query;
        static const Enum::Value v1_membership_report;
        static const Enum::Value dvmrp;
        static const Enum::Value pi_mv1;
        static const Enum::Value cisco_trace_messages;
        static const Enum::Value v2_membership_report;
        static const Enum::Value v2_leave_group;
        static const Enum::Value multicast_traceroute_response;
        static const Enum::Value multicast_traceroute;
        static const Enum::Value v3_membership_report;
        static const Enum::Value multicast_router_advertisement;
        static const Enum::Value multicast_router_solicitation;
        static const Enum::Value multicast_router_termination;

};

class TcpConnStateEnum : public Enum
{
    public:
        static const Enum::Value closed;
        static const Enum::Value listen;
        static const Enum::Value syn_sent;
        static const Enum::Value syn_received;
        static const Enum::Value established;
        static const Enum::Value close_wait;
        static const Enum::Value fin_wait1;
        static const Enum::Value closing;
        static const Enum::Value last_ack;
        static const Enum::Value fin_wait2;
        static const Enum::Value time_wait;

};

class PakPrioEnum : public Enum
{
    public:
        static const Enum::Value unspecified_packet;
        static const Enum::Value normal_packet;
        static const Enum::Value medium_packet;
        static const Enum::Value high_packet;
        static const Enum::Value crucial_packet;

};

class MessageTypeIcmpEnum : public Enum
{
    public:
        static const Enum::Value echo_reply;
        static const Enum::Value destination_unreachable;
        static const Enum::Value source_quench;
        static const Enum::Value redirect;
        static const Enum::Value alternate_host_address;
        static const Enum::Value echo;
        static const Enum::Value router_advertisement;
        static const Enum::Value router_selection;
        static const Enum::Value time_exceeded;
        static const Enum::Value parameter_problem;
        static const Enum::Value time_stamp;
        static const Enum::Value time_stamp_reply;
        static const Enum::Value information_request;
        static const Enum::Value information_reply;
        static const Enum::Value address_mask_request;
        static const Enum::Value address_mask_reply;
        static const Enum::Value trace_route;
        static const Enum::Value datagram_conversion_error;
        static const Enum::Value mobile_host_redirect;
        static const Enum::Value where_are_you;
        static const Enum::Value iam_here;
        static const Enum::Value mobile_registration_request;
        static const Enum::Value mobile_registration_reply;
        static const Enum::Value domain_name_request;

};

class PacketEnum : public Enum
{
    public:
        static const Enum::Value icmp;
        static const Enum::Value icm_pv6;
        static const Enum::Value igmp;
        static const Enum::Value unknown;

};

class AddrFamilyEnum : public Enum
{
    public:
        static const Enum::Value internetwork;
        static const Enum::Value ip_version6;

};

class NsrStatusEnum : public Enum
{
    public:
        static const Enum::Value down;
        static const Enum::Value up;
        static const Enum::Value na;

};

class TcpAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class NsrDownReasonEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value init_sync_aborted;
        static const Enum::Value client_disabled;
        static const Enum::Value client_disconnect;
        static const Enum::Value tcp_disconnect;
        static const Enum::Value failover;
        static const Enum::Value nsr_clear;
        static const Enum::Value internal_error;
        static const Enum::Value retransmit_threshold_exceed;
        static const Enum::Value init_sync_failure_thresh_exceeded;
        static const Enum::Value audit_timeout;
        static const Enum::Value audit_failed;
        static const Enum::Value standby_sscb_deleted;
        static const Enum::Value standby_session_close;
        static const Enum::Value standby_rxpath_frozen;
        static const Enum::Value partner_deleted;

};

class TcpTimerEnum : public Enum
{
    public:
        static const Enum::Value retransmission_timer;
        static const Enum::Value window_probe_timer;
        static const Enum::Value timewait_state_timer;
        static const Enum::Value ack_hold_timer;
        static const Enum::Value keep_alive_timer;
        static const Enum::Value pmtu_ager_timer;
        static const Enum::Value retransmission_giveup_timer;
        static const Enum::Value throttle_timer;

};


}
}

#endif /* _CISCO_IOS_XR_IP_TCP_OPER_ */

