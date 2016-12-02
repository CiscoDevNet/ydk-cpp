#ifndef _CISCO_IOS_XR_IP_UDP_OPER_
#define _CISCO_IOS_XR_IP_UDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_udp_oper {

class Udp : public Entity
{
    public:
        Udp();
        ~Udp();

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
                        Value udp_input_packets; //type: uint32
                        Value udp_checksum_error_packets; //type: uint32
                        Value udp_no_port_packets; //type: uint32
                        Value udp_bad_length_packets; //type: uint32
                        Value udp_output_packets; //type: uint32
                        Value udp_dropped_packets; //type: uint32




                }; // Udp::Nodes::Node::Statistics::Ipv4Traffic


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
                        Value udp_input_packets; //type: uint32
                        Value udp_checksum_error_packets; //type: uint32
                        Value udp_no_port_packets; //type: uint32
                        Value udp_bad_length_packets; //type: uint32
                        Value udp_output_packets; //type: uint32
                        Value udp_dropped_packets; //type: uint32




                }; // Udp::Nodes::Node::Statistics::Ipv6Traffic


                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics::Ipv4Traffic> ipv4_traffic;
                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics::Ipv6Traffic> ipv6_traffic;


            }; // Udp::Nodes::Node::Statistics


                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node::Statistics> statistics;


        }; // Udp::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes::Node> > node;


    }; // Udp::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::Udp::Nodes> nodes;


}; // Udp

class UdpConnection : public Entity
{
    public:
        UdpConnection();
        ~UdpConnection();

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




                    }; // UdpConnection::Nodes::Node::Statistics::Clients::Client


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Clients::Client> > client;


                }; // UdpConnection::Nodes::Node::Statistics::Clients


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
                        Value received_total_packets; //type: uint32
                        Value received_no_port_packets; //type: uint32
                        Value received_bad_checksum_packets; //type: uint32
                        Value received_too_short_packets; //type: uint32
                        Value received_drop_packets; //type: uint32
                        Value sent_total_packets; //type: uint32
                        Value sent_error_packets; //type: uint32
                        Value forward_broadcast_packets; //type: uint32
                        Value cloned_packets; //type: uint32
                        Value failed_clone_packets; //type: uint32




                }; // UdpConnection::Nodes::Node::Statistics::Summary


                class PcbStatistics : public Entity
                {
                    public:
                        PcbStatistics();
                        ~PcbStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PcbStatistic : public Entity
                    {
                        public:
                            PcbStatistic();
                            ~PcbStatistic();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value pcb_address; //type: int32
                            Value vrf_id; //type: uint32
                            Value is_paw_socket; //type: boolean


                        class Send : public Entity
                        {
                            public:
                                Send();
                                ~Send();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value received_application_bytes; //type: uint64
                                Value received_xipc_pulses; //type: uint64
                                Value sent_network_packets; //type: uint64
                                Value sent_net_io_packets; //type: uint64
                                Value failed_queued_network_packets; //type: uint32
                                Value failed_queued_net_io_packets; //type: uint32




                        }; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send


                        class Receive : public Entity
                        {
                            public:
                                Receive();
                                ~Receive();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value received_network_packets; //type: uint64
                                Value failed_queued_application_packets; //type: uint32
                                Value queued_application_packets; //type: uint64
                                Value failed_queued_application_socket_packets; //type: uint32
                                Value queued_application_socket_packets; //type: uint64




                        }; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive


                            std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive> receive;
                            std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send> send;


                    }; // UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic> > pcb_statistic;


                }; // UdpConnection::Nodes::Node::Statistics::PcbStatistics


                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Clients> clients;
                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::PcbStatistics> pcb_statistics;
                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics::Summary> summary;


            }; // UdpConnection::Nodes::Node::Statistics


            class Lpts : public Entity
            {
                public:
                    Lpts();
                    ~Lpts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Queries : public Entity
                {
                    public:
                        Queries();
                        ~Queries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Query : public Entity
                    {
                        public:
                            Query();
                            ~Query();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value query_name; //type: LptsPcbQueryEnum


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
                                    Value pcb_address; //type: int32
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


                                }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress


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


                                }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress


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




                                        }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options


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




                                        }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags


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




                                        }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask


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


                                            }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType


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


                                            }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress


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


                                            }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress


                                                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress> local_address;
                                                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType> packet_type;
                                                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress> remote_address;


                                        }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter


                                            std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask> accept_mask;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter> > filter;
                                            std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags> lpts_flags;
                                            std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options> options;


                                    }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb


                                        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb> lpts_pcb;
                                        class AddrFamilyEnum;


                                }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common


                                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common> common;
                                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress> foreign_address;
                                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress> local_address;


                            }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb> > pcb;


                        }; // UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs


                            std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs> pcbs;
                            class LptsPcbQueryEnum;


                    }; // UdpConnection::Nodes::Node::Lpts::Queries::Query


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries::Query> > query;


                }; // UdpConnection::Nodes::Node::Lpts::Queries


                    std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts::Queries> queries;


            }; // UdpConnection::Nodes::Node::Lpts


            class PcbDetails : public Entity
            {
                public:
                    PcbDetails();
                    ~PcbDetails();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class PcbDetail : public Entity
                {
                    public:
                        PcbDetail();
                        ~PcbDetail();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pcb_address; //type: int32
                        Value af_name; //type: UdpAddressFamilyEnum
                        Value local_process_id; //type: uint32
                        Value local_port; //type: uint16
                        Value foreign_port; //type: uint16
                        Value receive_queue; //type: uint32
                        Value send_queue; //type: uint32
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
                            Value af_name; //type: UdpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class UdpAddressFamilyEnum;


                    }; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress


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
                            Value af_name; //type: UdpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class UdpAddressFamilyEnum;


                    }; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress


                        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress> foreign_address;
                        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress> local_address;
                        class UdpAddressFamilyEnum;


                }; // UdpConnection::Nodes::Node::PcbDetails::PcbDetail


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails::PcbDetail> > pcb_detail;


            }; // UdpConnection::Nodes::Node::PcbDetails


            class PcbBriefs : public Entity
            {
                public:
                    PcbBriefs();
                    ~PcbBriefs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class PcbBrief : public Entity
                {
                    public:
                        PcbBrief();
                        ~PcbBrief();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pcb_address; //type: int32
                        Value af_name; //type: UdpAddressFamilyEnum
                        Value local_port; //type: uint16
                        Value foreign_port; //type: uint16
                        Value receive_queue; //type: uint32
                        Value send_queue; //type: uint32
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
                            Value af_name; //type: UdpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class UdpAddressFamilyEnum;


                    }; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress


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
                            Value af_name; //type: UdpAddressFamilyEnum
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string


                            class UdpAddressFamilyEnum;


                    }; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress


                        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress> foreign_address;
                        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress> local_address;
                        class UdpAddressFamilyEnum;


                }; // UdpConnection::Nodes::Node::PcbBriefs::PcbBrief


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs::PcbBrief> > pcb_brief;


            }; // UdpConnection::Nodes::Node::PcbBriefs


                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Lpts> lpts;
                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbBriefs> pcb_briefs;
                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::PcbDetails> pcb_details;
                std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node::Statistics> statistics;


        }; // UdpConnection::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes::Node> > node;


    }; // UdpConnection::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_udp_oper::UdpConnection::Nodes> nodes;


}; // UdpConnection


class LptsPcbQueryEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value static_policy;
        static const Enum::Value interface;
        static const Enum::Value packet;

};

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
        static const Enum::Value unspecified;
        static const Enum::Value local;
        static const Enum::Value inet;
        static const Enum::Value implink;
        static const Enum::Value pup;
        static const Enum::Value chaos;
        static const Enum::Value ns;
        static const Enum::Value iso;
        static const Enum::Value ecma;
        static const Enum::Value data_kit;
        static const Enum::Value ccitt;
        static const Enum::Value sna;
        static const Enum::Value de_cnet;
        static const Enum::Value dli;
        static const Enum::Value lat;
        static const Enum::Value hylink;
        static const Enum::Value appletalk;
        static const Enum::Value route;
        static const Enum::Value link;
        static const Enum::Value pseudo_xtp;
        static const Enum::Value coip;
        static const Enum::Value cnt;
        static const Enum::Value pseudo_rtip;
        static const Enum::Value ipx;
        static const Enum::Value sip;
        static const Enum::Value pseudo_pip;
        static const Enum::Value inet6;
        static const Enum::Value snap;
        static const Enum::Value clnl;
        static const Enum::Value chdlc;
        static const Enum::Value ppp;
        static const Enum::Value host_cas;
        static const Enum::Value dsp;
        static const Enum::Value sap;
        static const Enum::Value atm;
        static const Enum::Value fr;
        static const Enum::Value mso;
        static const Enum::Value dchan;
        static const Enum::Value cas;
        static const Enum::Value nat;
        static const Enum::Value ether;
        static const Enum::Value srp;

};

class UdpAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_UDP_OPER_ */

