#ifndef _CISCO_IOS_XR_IPV6_IO_OPER_
#define _CISCO_IOS_XR_IPV6_IO_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: Ipv6Io::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes> nodes;


}; // Ipv6Io


class Ipv6Io::Nodes : public Entity
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



        class Node; //type: Ipv6Io::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node> > node;


}; // Ipv6Io::Nodes


class Ipv6Io::Nodes::Node : public Entity
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

        class Statistics; //type: Ipv6Io::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics> statistics;


}; // Ipv6Io::Nodes::Node


class Ipv6Io::Nodes::Node::Statistics : public Entity
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



        class Traffic; //type: Ipv6Io::Nodes::Node::Statistics::Traffic

        std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic> traffic;


}; // Ipv6Io::Nodes::Node::Statistics


class Ipv6Io::Nodes::Node::Statistics::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6; //type: Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6
        class Icmp; //type: Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp
        class Ipv6NodeDiscovery; //type: Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery

        std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery> ipv6_node_discovery;


}; // Ipv6Io::Nodes::Node::Statistics::Traffic


class Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_packets; //type: uint32
        YLeaf local_destination_packets; //type: uint32
        YLeaf format_errors; //type: uint32
        YLeaf truncated_packets; //type: uint32
        YLeaf hop_count_exceeded_packets; //type: uint32
        YLeaf bad_source_address_packets; //type: uint32
        YLeaf bad_header_packets; //type: uint32
        YLeaf unknown_option_type_packets; //type: uint32
        YLeaf unknown_protocol_packets; //type: uint32
        YLeaf fragments; //type: uint32
        YLeaf reassembled_packets; //type: uint32
        YLeaf reassembly_timeouts; //type: uint32
        YLeaf reassembly_failures; //type: uint32
        YLeaf reassembly_maximum_drops; //type: uint32
        YLeaf generated_packets; //type: uint32
        YLeaf forwarded_packets; //type: uint32
        YLeaf source_routed_packets; //type: uint32
        YLeaf fragmented_packets; //type: uint32
        YLeaf fragment_count; //type: uint32
        YLeaf fragment_failures; //type: uint32
        YLeaf no_route_packets; //type: uint32
        YLeaf too_big_packets; //type: uint32
        YLeaf received_multicast_packets; //type: uint32
        YLeaf sent_multicast_packets; //type: uint32
        YLeaf miscellaneous_drops; //type: uint32
        YLeaf lisp_v4_encap_packets; //type: uint32
        YLeaf lisp_v4_decap_packets; //type: uint32
        YLeaf lisp_v6_encap_packets; //type: uint32
        YLeaf lisp_v6_decap_packets; //type: uint32
        YLeaf lisp_encap_errors; //type: uint32
        YLeaf lisp_decap_errors; //type: uint32



}; // Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6


class Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_messages; //type: uint32
        YLeaf too_short_error_messages; //type: uint32
        YLeaf checksum_error_messages; //type: uint32
        YLeaf unknown_error_type_messages; //type: uint32
        YLeaf output_messages; //type: uint32
        YLeaf sent_rate_limited_packets; //type: uint32
        YLeaf sent_unreachable_routing_messages; //type: uint32
        YLeaf sent_unreachable_admin_messages; //type: uint32
        YLeaf sent_unreachable_neighbor_messages; //type: uint32
        YLeaf sent_unreachable_address_messages; //type: uint32
        YLeaf sent_unreachable_port_messages; //type: uint32
        YLeaf received_unreachable_routing_messages; //type: uint32
        YLeaf received_unreachable_admin_messages; //type: uint32
        YLeaf received_unreachable_neighbor_messages; //type: uint32
        YLeaf received_unreachable_address_messages; //type: uint32
        YLeaf received_unreachable_port_messages; //type: uint32
        YLeaf sent_hop_count_expired_messages; //type: uint32
        YLeaf sent_reassembly_timeouts; //type: uint32
        YLeaf received_hop_count_expired_messages; //type: uint32
        YLeaf received_reassembly_timeouts; //type: uint32
        YLeaf sent_too_big_messages; //type: uint32
        YLeaf received_too_big_messages; //type: uint32
        YLeaf sent_parameter_error_messages; //type: uint32
        YLeaf sent_parameter_header_messages; //type: uint32
        YLeaf sent_parameter_option_messages; //type: uint32
        YLeaf received_parameter_error_messages; //type: uint32
        YLeaf received_parameter_header_messages; //type: uint32
        YLeaf received_parameter_option_messages; //type: uint32
        YLeaf sent_echo_request_messages; //type: uint32
        YLeaf sent_echo_reply_messages; //type: uint32
        YLeaf received_echo_request_messages; //type: uint32
        YLeaf received_echo_reply_messages; //type: uint32
        YLeaf sent_unknown_timeout_messages; //type: uint32
        YLeaf received_unknown_timeout_messages; //type: uint32
        YLeaf sent_parameter_unknown_type_messages; //type: uint32
        YLeaf received_parameter_unknown_type_messages; //type: uint32
        YLeaf sent_unreachable_unknown_type_messages; //type: uint32
        YLeaf received_unreachable_unknown_type_messages; //type: uint32



}; // Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp


class Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery : public Entity
{
    public:
        Ipv6NodeDiscovery();
        ~Ipv6NodeDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_router_solicitation_messages; //type: uint32
        YLeaf sent_router_advertisement_messages; //type: uint32
        YLeaf sent_neighbor_solicitation_messages; //type: uint32
        YLeaf sent_neighbor_advertisement_messages; //type: uint32
        YLeaf sent_redirect_messages; //type: uint32
        YLeaf received_router_solicitation_messages; //type: uint32
        YLeaf received_router_advertisement_messages; //type: uint32
        YLeaf received_neighbor_solicitation_messages; //type: uint32
        YLeaf received_neighbor_advertisement_messages; //type: uint32
        YLeaf received_redirect_messages; //type: uint32



}; // Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery


}
}

#endif /* _CISCO_IOS_XR_IPV6_IO_OPER_ */

