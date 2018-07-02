#ifndef _CISCO_IOS_XR_IPV6_IO_OPER_
#define _CISCO_IOS_XR_IPV6_IO_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_io_oper {

class Ipv6Io : public ydk::Entity
{
    public:
        Ipv6Io();
        ~Ipv6Io();

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

        class Nodes; //type: Ipv6Io::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes> nodes;
        
}; // Ipv6Io


class Ipv6Io::Nodes : public ydk::Entity
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

        class Node; //type: Ipv6Io::Nodes::Node

        ydk::YList node;
        
}; // Ipv6Io::Nodes


class Ipv6Io::Nodes::Node : public ydk::Entity
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
        class Statistics; //type: Ipv6Io::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics> statistics;
        
}; // Ipv6Io::Nodes::Node


class Ipv6Io::Nodes::Node::Statistics : public ydk::Entity
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

        class Traffic; //type: Ipv6Io::Nodes::Node::Statistics::Traffic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic> traffic;
        
}; // Ipv6Io::Nodes::Node::Statistics


class Ipv6Io::Nodes::Node::Statistics::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6; //type: Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6
        class Icmp; //type: Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp
        class Ipv6NodeDiscovery; //type: Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp> icmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_io_oper::Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery> ipv6_node_discovery;
        
}; // Ipv6Io::Nodes::Node::Statistics::Traffic


class Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_packets; //type: uint32
        ydk::YLeaf local_destination_packets; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf truncated_packets; //type: uint32
        ydk::YLeaf hop_count_exceeded_packets; //type: uint32
        ydk::YLeaf bad_source_address_packets; //type: uint32
        ydk::YLeaf bad_header_packets; //type: uint32
        ydk::YLeaf unknown_option_type_packets; //type: uint32
        ydk::YLeaf unknown_protocol_packets; //type: uint32
        ydk::YLeaf fragments; //type: uint32
        ydk::YLeaf reassembled_packets; //type: uint32
        ydk::YLeaf reassembly_timeouts; //type: uint32
        ydk::YLeaf reassembly_failures; //type: uint32
        ydk::YLeaf reassembly_maximum_drops; //type: uint32
        ydk::YLeaf generated_packets; //type: uint32
        ydk::YLeaf forwarded_packets; //type: uint32
        ydk::YLeaf source_routed_packets; //type: uint32
        ydk::YLeaf fragmented_packets; //type: uint32
        ydk::YLeaf fragment_count; //type: uint32
        ydk::YLeaf fragment_failures; //type: uint32
        ydk::YLeaf no_route_packets; //type: uint32
        ydk::YLeaf too_big_packets; //type: uint32
        ydk::YLeaf received_multicast_packets; //type: uint32
        ydk::YLeaf sent_multicast_packets; //type: uint32
        ydk::YLeaf miscellaneous_drops; //type: uint32
        ydk::YLeaf lisp_v4_encap_packets; //type: uint32
        ydk::YLeaf lisp_v4_decap_packets; //type: uint32
        ydk::YLeaf lisp_v6_encap_packets; //type: uint32
        ydk::YLeaf lisp_v6_decap_packets; //type: uint32
        ydk::YLeaf lisp_encap_errors; //type: uint32
        ydk::YLeaf lisp_decap_errors; //type: uint32

}; // Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6


class Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_messages; //type: uint32
        ydk::YLeaf too_short_error_messages; //type: uint32
        ydk::YLeaf checksum_error_messages; //type: uint32
        ydk::YLeaf unknown_error_type_messages; //type: uint32
        ydk::YLeaf output_messages; //type: uint32
        ydk::YLeaf sent_rate_limited_packets; //type: uint32
        ydk::YLeaf sent_unreachable_routing_messages; //type: uint32
        ydk::YLeaf sent_unreachable_admin_messages; //type: uint32
        ydk::YLeaf sent_unreachable_neighbor_messages; //type: uint32
        ydk::YLeaf sent_unreachable_address_messages; //type: uint32
        ydk::YLeaf sent_unreachable_port_messages; //type: uint32
        ydk::YLeaf received_unreachable_routing_messages; //type: uint32
        ydk::YLeaf received_unreachable_admin_messages; //type: uint32
        ydk::YLeaf received_unreachable_neighbor_messages; //type: uint32
        ydk::YLeaf received_unreachable_address_messages; //type: uint32
        ydk::YLeaf received_unreachable_port_messages; //type: uint32
        ydk::YLeaf sent_hop_count_expired_messages; //type: uint32
        ydk::YLeaf sent_reassembly_timeouts; //type: uint32
        ydk::YLeaf received_hop_count_expired_messages; //type: uint32
        ydk::YLeaf received_reassembly_timeouts; //type: uint32
        ydk::YLeaf sent_too_big_messages; //type: uint32
        ydk::YLeaf received_too_big_messages; //type: uint32
        ydk::YLeaf sent_parameter_error_messages; //type: uint32
        ydk::YLeaf sent_parameter_header_messages; //type: uint32
        ydk::YLeaf sent_parameter_option_messages; //type: uint32
        ydk::YLeaf received_parameter_error_messages; //type: uint32
        ydk::YLeaf received_parameter_header_messages; //type: uint32
        ydk::YLeaf received_parameter_option_messages; //type: uint32
        ydk::YLeaf sent_echo_request_messages; //type: uint32
        ydk::YLeaf sent_echo_reply_messages; //type: uint32
        ydk::YLeaf received_echo_request_messages; //type: uint32
        ydk::YLeaf received_echo_reply_messages; //type: uint32
        ydk::YLeaf sent_unknown_timeout_messages; //type: uint32
        ydk::YLeaf received_unknown_timeout_messages; //type: uint32
        ydk::YLeaf sent_parameter_unknown_type_messages; //type: uint32
        ydk::YLeaf received_parameter_unknown_type_messages; //type: uint32
        ydk::YLeaf sent_unreachable_unknown_type_messages; //type: uint32
        ydk::YLeaf received_unreachable_unknown_type_messages; //type: uint32

}; // Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp


class Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery : public ydk::Entity
{
    public:
        Ipv6NodeDiscovery();
        ~Ipv6NodeDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_router_solicitation_messages; //type: uint32
        ydk::YLeaf sent_router_advertisement_messages; //type: uint32
        ydk::YLeaf sent_neighbor_solicitation_messages; //type: uint32
        ydk::YLeaf sent_neighbor_advertisement_messages; //type: uint32
        ydk::YLeaf sent_redirect_messages; //type: uint32
        ydk::YLeaf received_router_solicitation_messages; //type: uint32
        ydk::YLeaf received_router_advertisement_messages; //type: uint32
        ydk::YLeaf received_neighbor_solicitation_messages; //type: uint32
        ydk::YLeaf received_neighbor_advertisement_messages; //type: uint32
        ydk::YLeaf received_redirect_messages; //type: uint32

}; // Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery


}
}

#endif /* _CISCO_IOS_XR_IPV6_IO_OPER_ */

