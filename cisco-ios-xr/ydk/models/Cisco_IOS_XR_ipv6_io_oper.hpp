#ifndef _CISCO_IOS_XR_IPV6_IO_OPER_
#define _CISCO_IOS_XR_IPV6_IO_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_io_oper {

class Ipv6Io : public Entity
{
    public:
        Ipv6Io();
        ~Ipv6Io();

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


                class Traffic : public Entity
                {
                    public:
                        Traffic();
                        ~Traffic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Ipv6 : public Entity
                    {
                        public:
                            Ipv6();
                            ~Ipv6();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value total_packets; //type: uint32
                            Value local_destination_packets; //type: uint32
                            Value format_errors; //type: uint32
                            Value truncated_packets; //type: uint32
                            Value hop_count_exceeded_packets; //type: uint32
                            Value bad_source_address_packets; //type: uint32
                            Value bad_header_packets; //type: uint32
                            Value unknown_option_type_packets; //type: uint32
                            Value unknown_protocol_packets; //type: uint32
                            Value fragments; //type: uint32
                            Value reassembled_packets; //type: uint32
                            Value reassembly_timeouts; //type: uint32
                            Value reassembly_failures; //type: uint32
                            Value reassembly_maximum_drops; //type: uint32
                            Value generated_packets; //type: uint32
                            Value forwarded_packets; //type: uint32
                            Value source_routed_packets; //type: uint32
                            Value fragmented_packets; //type: uint32
                            Value fragment_count; //type: uint32
                            Value fragment_failures; //type: uint32
                            Value no_route_packets; //type: uint32
                            Value too_big_packets; //type: uint32
                            Value received_multicast_packets; //type: uint32
                            Value sent_multicast_packets; //type: uint32
                            Value miscellaneous_drops; //type: uint32
                            Value lisp_v4_encap_packets; //type: uint32
                            Value lisp_v4_decap_packets; //type: uint32
                            Value lisp_v6_encap_packets; //type: uint32
                            Value lisp_v6_decap_packets; //type: uint32
                            Value lisp_encap_errors; //type: uint32
                            Value lisp_decap_errors; //type: uint32




                    }; // Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6


                    class Icmp : public Entity
                    {
                        public:
                            Icmp();
                            ~Icmp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value total_messages; //type: uint32
                            Value too_short_error_messages; //type: uint32
                            Value checksum_error_messages; //type: uint32
                            Value unknown_error_type_messages; //type: uint32
                            Value output_messages; //type: uint32
                            Value sent_rate_limited_packets; //type: uint32
                            Value sent_unreachable_routing_messages; //type: uint32
                            Value sent_unreachable_admin_messages; //type: uint32
                            Value sent_unreachable_neighbor_messages; //type: uint32
                            Value sent_unreachable_address_messages; //type: uint32
                            Value sent_unreachable_port_messages; //type: uint32
                            Value received_unreachable_routing_messages; //type: uint32
                            Value received_unreachable_admin_messages; //type: uint32
                            Value received_unreachable_neighbor_messages; //type: uint32
                            Value received_unreachable_address_messages; //type: uint32
                            Value received_unreachable_port_messages; //type: uint32
                            Value sent_hop_count_expired_messages; //type: uint32
                            Value sent_reassembly_timeouts; //type: uint32
                            Value received_hop_count_expired_messages; //type: uint32
                            Value received_reassembly_timeouts; //type: uint32
                            Value sent_too_big_messages; //type: uint32
                            Value received_too_big_messages; //type: uint32
                            Value sent_parameter_error_messages; //type: uint32
                            Value sent_parameter_header_messages; //type: uint32
                            Value sent_parameter_option_messages; //type: uint32
                            Value received_parameter_error_messages; //type: uint32
                            Value received_parameter_header_messages; //type: uint32
                            Value received_parameter_option_messages; //type: uint32
                            Value sent_echo_request_messages; //type: uint32
                            Value sent_echo_reply_messages; //type: uint32
                            Value received_echo_request_messages; //type: uint32
                            Value received_echo_reply_messages; //type: uint32
                            Value sent_unknown_timeout_messages; //type: uint32
                            Value received_unknown_timeout_messages; //type: uint32
                            Value sent_parameter_unknown_type_messages; //type: uint32
                            Value received_parameter_unknown_type_messages; //type: uint32
                            Value sent_unreachable_unknown_type_messages; //type: uint32
                            Value received_unreachable_unknown_type_messages; //type: uint32




                    }; // Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp


                    class Ipv6NodeDiscovery : public Entity
                    {
                        public:
                            Ipv6NodeDiscovery();
                            ~Ipv6NodeDiscovery();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sent_router_solicitation_messages; //type: uint32
                            Value sent_router_advertisement_messages; //type: uint32
                            Value sent_neighbor_solicitation_messages; //type: uint32
                            Value sent_neighbor_advertisement_messages; //type: uint32
                            Value sent_redirect_messages; //type: uint32
                            Value received_router_solicitation_messages; //type: uint32
                            Value received_router_advertisement_messages; //type: uint32
                            Value received_neighbor_solicitation_messages; //type: uint32
                            Value received_neighbor_advertisement_messages; //type: uint32
                            Value received_redirect_messages; //type: uint32




                    }; // Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery


                        std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp> icmp;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6> ipv6;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery> ipv6_node_discovery;


                }; // Ipv6Io::Nodes::Node::Statistics::Traffic


                    std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic> traffic;


            }; // Ipv6Io::Nodes::Node::Statistics


                std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics> statistics;


        }; // Ipv6Io::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node> > node;


    }; // Ipv6Io::Nodes


        std::unique_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes> nodes;


}; // Ipv6Io



}
}

#endif /* _CISCO_IOS_XR_IPV6_IO_OPER_ */

