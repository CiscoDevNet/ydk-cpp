
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_io_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_io_oper {

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::Ipv6()
    :
    	bad_header_packets{YType::uint32, "bad-header-packets"},
	 bad_source_address_packets{YType::uint32, "bad-source-address-packets"},
	 format_errors{YType::uint32, "format-errors"},
	 forwarded_packets{YType::uint32, "forwarded-packets"},
	 fragment_count{YType::uint32, "fragment-count"},
	 fragment_failures{YType::uint32, "fragment-failures"},
	 fragmented_packets{YType::uint32, "fragmented-packets"},
	 fragments{YType::uint32, "fragments"},
	 generated_packets{YType::uint32, "generated-packets"},
	 hop_count_exceeded_packets{YType::uint32, "hop-count-exceeded-packets"},
	 lisp_decap_errors{YType::uint32, "lisp-decap-errors"},
	 lisp_encap_errors{YType::uint32, "lisp-encap-errors"},
	 lisp_v4_decap_packets{YType::uint32, "lisp-v4-decap-packets"},
	 lisp_v4_encap_packets{YType::uint32, "lisp-v4-encap-packets"},
	 lisp_v6_decap_packets{YType::uint32, "lisp-v6-decap-packets"},
	 lisp_v6_encap_packets{YType::uint32, "lisp-v6-encap-packets"},
	 local_destination_packets{YType::uint32, "local-destination-packets"},
	 miscellaneous_drops{YType::uint32, "miscellaneous-drops"},
	 no_route_packets{YType::uint32, "no-route-packets"},
	 reassembled_packets{YType::uint32, "reassembled-packets"},
	 reassembly_failures{YType::uint32, "reassembly-failures"},
	 reassembly_maximum_drops{YType::uint32, "reassembly-maximum-drops"},
	 reassembly_timeouts{YType::uint32, "reassembly-timeouts"},
	 received_multicast_packets{YType::uint32, "received-multicast-packets"},
	 sent_multicast_packets{YType::uint32, "sent-multicast-packets"},
	 source_routed_packets{YType::uint32, "source-routed-packets"},
	 too_big_packets{YType::uint32, "too-big-packets"},
	 total_packets{YType::uint32, "total-packets"},
	 truncated_packets{YType::uint32, "truncated-packets"},
	 unknown_option_type_packets{YType::uint32, "unknown-option-type-packets"},
	 unknown_protocol_packets{YType::uint32, "unknown-protocol-packets"}
{
    yang_name = "ipv6"; yang_parent_name = "traffic";
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::~Ipv6()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::has_data() const
{
    return bad_header_packets.is_set
	|| bad_source_address_packets.is_set
	|| format_errors.is_set
	|| forwarded_packets.is_set
	|| fragment_count.is_set
	|| fragment_failures.is_set
	|| fragmented_packets.is_set
	|| fragments.is_set
	|| generated_packets.is_set
	|| hop_count_exceeded_packets.is_set
	|| lisp_decap_errors.is_set
	|| lisp_encap_errors.is_set
	|| lisp_v4_decap_packets.is_set
	|| lisp_v4_encap_packets.is_set
	|| lisp_v6_decap_packets.is_set
	|| lisp_v6_encap_packets.is_set
	|| local_destination_packets.is_set
	|| miscellaneous_drops.is_set
	|| no_route_packets.is_set
	|| reassembled_packets.is_set
	|| reassembly_failures.is_set
	|| reassembly_maximum_drops.is_set
	|| reassembly_timeouts.is_set
	|| received_multicast_packets.is_set
	|| sent_multicast_packets.is_set
	|| source_routed_packets.is_set
	|| too_big_packets.is_set
	|| total_packets.is_set
	|| truncated_packets.is_set
	|| unknown_option_type_packets.is_set
	|| unknown_protocol_packets.is_set;
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_header_packets.operation)
	|| is_set(bad_source_address_packets.operation)
	|| is_set(format_errors.operation)
	|| is_set(forwarded_packets.operation)
	|| is_set(fragment_count.operation)
	|| is_set(fragment_failures.operation)
	|| is_set(fragmented_packets.operation)
	|| is_set(fragments.operation)
	|| is_set(generated_packets.operation)
	|| is_set(hop_count_exceeded_packets.operation)
	|| is_set(lisp_decap_errors.operation)
	|| is_set(lisp_encap_errors.operation)
	|| is_set(lisp_v4_decap_packets.operation)
	|| is_set(lisp_v4_encap_packets.operation)
	|| is_set(lisp_v6_decap_packets.operation)
	|| is_set(lisp_v6_encap_packets.operation)
	|| is_set(local_destination_packets.operation)
	|| is_set(miscellaneous_drops.operation)
	|| is_set(no_route_packets.operation)
	|| is_set(reassembled_packets.operation)
	|| is_set(reassembly_failures.operation)
	|| is_set(reassembly_maximum_drops.operation)
	|| is_set(reassembly_timeouts.operation)
	|| is_set(received_multicast_packets.operation)
	|| is_set(sent_multicast_packets.operation)
	|| is_set(source_routed_packets.operation)
	|| is_set(too_big_packets.operation)
	|| is_set(total_packets.operation)
	|| is_set(truncated_packets.operation)
	|| is_set(unknown_option_type_packets.operation)
	|| is_set(unknown_protocol_packets.operation);
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_header_packets.is_set || is_set(bad_header_packets.operation)) leaf_name_data.push_back(bad_header_packets.get_name_leafdata());
    if (bad_source_address_packets.is_set || is_set(bad_source_address_packets.operation)) leaf_name_data.push_back(bad_source_address_packets.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (forwarded_packets.is_set || is_set(forwarded_packets.operation)) leaf_name_data.push_back(forwarded_packets.get_name_leafdata());
    if (fragment_count.is_set || is_set(fragment_count.operation)) leaf_name_data.push_back(fragment_count.get_name_leafdata());
    if (fragment_failures.is_set || is_set(fragment_failures.operation)) leaf_name_data.push_back(fragment_failures.get_name_leafdata());
    if (fragmented_packets.is_set || is_set(fragmented_packets.operation)) leaf_name_data.push_back(fragmented_packets.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (generated_packets.is_set || is_set(generated_packets.operation)) leaf_name_data.push_back(generated_packets.get_name_leafdata());
    if (hop_count_exceeded_packets.is_set || is_set(hop_count_exceeded_packets.operation)) leaf_name_data.push_back(hop_count_exceeded_packets.get_name_leafdata());
    if (lisp_decap_errors.is_set || is_set(lisp_decap_errors.operation)) leaf_name_data.push_back(lisp_decap_errors.get_name_leafdata());
    if (lisp_encap_errors.is_set || is_set(lisp_encap_errors.operation)) leaf_name_data.push_back(lisp_encap_errors.get_name_leafdata());
    if (lisp_v4_decap_packets.is_set || is_set(lisp_v4_decap_packets.operation)) leaf_name_data.push_back(lisp_v4_decap_packets.get_name_leafdata());
    if (lisp_v4_encap_packets.is_set || is_set(lisp_v4_encap_packets.operation)) leaf_name_data.push_back(lisp_v4_encap_packets.get_name_leafdata());
    if (lisp_v6_decap_packets.is_set || is_set(lisp_v6_decap_packets.operation)) leaf_name_data.push_back(lisp_v6_decap_packets.get_name_leafdata());
    if (lisp_v6_encap_packets.is_set || is_set(lisp_v6_encap_packets.operation)) leaf_name_data.push_back(lisp_v6_encap_packets.get_name_leafdata());
    if (local_destination_packets.is_set || is_set(local_destination_packets.operation)) leaf_name_data.push_back(local_destination_packets.get_name_leafdata());
    if (miscellaneous_drops.is_set || is_set(miscellaneous_drops.operation)) leaf_name_data.push_back(miscellaneous_drops.get_name_leafdata());
    if (no_route_packets.is_set || is_set(no_route_packets.operation)) leaf_name_data.push_back(no_route_packets.get_name_leafdata());
    if (reassembled_packets.is_set || is_set(reassembled_packets.operation)) leaf_name_data.push_back(reassembled_packets.get_name_leafdata());
    if (reassembly_failures.is_set || is_set(reassembly_failures.operation)) leaf_name_data.push_back(reassembly_failures.get_name_leafdata());
    if (reassembly_maximum_drops.is_set || is_set(reassembly_maximum_drops.operation)) leaf_name_data.push_back(reassembly_maximum_drops.get_name_leafdata());
    if (reassembly_timeouts.is_set || is_set(reassembly_timeouts.operation)) leaf_name_data.push_back(reassembly_timeouts.get_name_leafdata());
    if (received_multicast_packets.is_set || is_set(received_multicast_packets.operation)) leaf_name_data.push_back(received_multicast_packets.get_name_leafdata());
    if (sent_multicast_packets.is_set || is_set(sent_multicast_packets.operation)) leaf_name_data.push_back(sent_multicast_packets.get_name_leafdata());
    if (source_routed_packets.is_set || is_set(source_routed_packets.operation)) leaf_name_data.push_back(source_routed_packets.get_name_leafdata());
    if (too_big_packets.is_set || is_set(too_big_packets.operation)) leaf_name_data.push_back(too_big_packets.get_name_leafdata());
    if (total_packets.is_set || is_set(total_packets.operation)) leaf_name_data.push_back(total_packets.get_name_leafdata());
    if (truncated_packets.is_set || is_set(truncated_packets.operation)) leaf_name_data.push_back(truncated_packets.get_name_leafdata());
    if (unknown_option_type_packets.is_set || is_set(unknown_option_type_packets.operation)) leaf_name_data.push_back(unknown_option_type_packets.get_name_leafdata());
    if (unknown_protocol_packets.is_set || is_set(unknown_protocol_packets.operation)) leaf_name_data.push_back(unknown_protocol_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_children()
{
    return children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-header-packets")
    {
        bad_header_packets = value;
    }
    if(value_path == "bad-source-address-packets")
    {
        bad_source_address_packets = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "forwarded-packets")
    {
        forwarded_packets = value;
    }
    if(value_path == "fragment-count")
    {
        fragment_count = value;
    }
    if(value_path == "fragment-failures")
    {
        fragment_failures = value;
    }
    if(value_path == "fragmented-packets")
    {
        fragmented_packets = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "generated-packets")
    {
        generated_packets = value;
    }
    if(value_path == "hop-count-exceeded-packets")
    {
        hop_count_exceeded_packets = value;
    }
    if(value_path == "lisp-decap-errors")
    {
        lisp_decap_errors = value;
    }
    if(value_path == "lisp-encap-errors")
    {
        lisp_encap_errors = value;
    }
    if(value_path == "lisp-v4-decap-packets")
    {
        lisp_v4_decap_packets = value;
    }
    if(value_path == "lisp-v4-encap-packets")
    {
        lisp_v4_encap_packets = value;
    }
    if(value_path == "lisp-v6-decap-packets")
    {
        lisp_v6_decap_packets = value;
    }
    if(value_path == "lisp-v6-encap-packets")
    {
        lisp_v6_encap_packets = value;
    }
    if(value_path == "local-destination-packets")
    {
        local_destination_packets = value;
    }
    if(value_path == "miscellaneous-drops")
    {
        miscellaneous_drops = value;
    }
    if(value_path == "no-route-packets")
    {
        no_route_packets = value;
    }
    if(value_path == "reassembled-packets")
    {
        reassembled_packets = value;
    }
    if(value_path == "reassembly-failures")
    {
        reassembly_failures = value;
    }
    if(value_path == "reassembly-maximum-drops")
    {
        reassembly_maximum_drops = value;
    }
    if(value_path == "reassembly-timeouts")
    {
        reassembly_timeouts = value;
    }
    if(value_path == "received-multicast-packets")
    {
        received_multicast_packets = value;
    }
    if(value_path == "sent-multicast-packets")
    {
        sent_multicast_packets = value;
    }
    if(value_path == "source-routed-packets")
    {
        source_routed_packets = value;
    }
    if(value_path == "too-big-packets")
    {
        too_big_packets = value;
    }
    if(value_path == "total-packets")
    {
        total_packets = value;
    }
    if(value_path == "truncated-packets")
    {
        truncated_packets = value;
    }
    if(value_path == "unknown-option-type-packets")
    {
        unknown_option_type_packets = value;
    }
    if(value_path == "unknown-protocol-packets")
    {
        unknown_protocol_packets = value;
    }
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::Icmp()
    :
    	checksum_error_messages{YType::uint32, "checksum-error-messages"},
	 output_messages{YType::uint32, "output-messages"},
	 received_echo_reply_messages{YType::uint32, "received-echo-reply-messages"},
	 received_echo_request_messages{YType::uint32, "received-echo-request-messages"},
	 received_hop_count_expired_messages{YType::uint32, "received-hop-count-expired-messages"},
	 received_parameter_error_messages{YType::uint32, "received-parameter-error-messages"},
	 received_parameter_header_messages{YType::uint32, "received-parameter-header-messages"},
	 received_parameter_option_messages{YType::uint32, "received-parameter-option-messages"},
	 received_parameter_unknown_type_messages{YType::uint32, "received-parameter-unknown-type-messages"},
	 received_reassembly_timeouts{YType::uint32, "received-reassembly-timeouts"},
	 received_too_big_messages{YType::uint32, "received-too-big-messages"},
	 received_unknown_timeout_messages{YType::uint32, "received-unknown-timeout-messages"},
	 received_unreachable_address_messages{YType::uint32, "received-unreachable-address-messages"},
	 received_unreachable_admin_messages{YType::uint32, "received-unreachable-admin-messages"},
	 received_unreachable_neighbor_messages{YType::uint32, "received-unreachable-neighbor-messages"},
	 received_unreachable_port_messages{YType::uint32, "received-unreachable-port-messages"},
	 received_unreachable_routing_messages{YType::uint32, "received-unreachable-routing-messages"},
	 received_unreachable_unknown_type_messages{YType::uint32, "received-unreachable-unknown-type-messages"},
	 sent_echo_reply_messages{YType::uint32, "sent-echo-reply-messages"},
	 sent_echo_request_messages{YType::uint32, "sent-echo-request-messages"},
	 sent_hop_count_expired_messages{YType::uint32, "sent-hop-count-expired-messages"},
	 sent_parameter_error_messages{YType::uint32, "sent-parameter-error-messages"},
	 sent_parameter_header_messages{YType::uint32, "sent-parameter-header-messages"},
	 sent_parameter_option_messages{YType::uint32, "sent-parameter-option-messages"},
	 sent_parameter_unknown_type_messages{YType::uint32, "sent-parameter-unknown-type-messages"},
	 sent_rate_limited_packets{YType::uint32, "sent-rate-limited-packets"},
	 sent_reassembly_timeouts{YType::uint32, "sent-reassembly-timeouts"},
	 sent_too_big_messages{YType::uint32, "sent-too-big-messages"},
	 sent_unknown_timeout_messages{YType::uint32, "sent-unknown-timeout-messages"},
	 sent_unreachable_address_messages{YType::uint32, "sent-unreachable-address-messages"},
	 sent_unreachable_admin_messages{YType::uint32, "sent-unreachable-admin-messages"},
	 sent_unreachable_neighbor_messages{YType::uint32, "sent-unreachable-neighbor-messages"},
	 sent_unreachable_port_messages{YType::uint32, "sent-unreachable-port-messages"},
	 sent_unreachable_routing_messages{YType::uint32, "sent-unreachable-routing-messages"},
	 sent_unreachable_unknown_type_messages{YType::uint32, "sent-unreachable-unknown-type-messages"},
	 too_short_error_messages{YType::uint32, "too-short-error-messages"},
	 total_messages{YType::uint32, "total-messages"},
	 unknown_error_type_messages{YType::uint32, "unknown-error-type-messages"}
{
    yang_name = "icmp"; yang_parent_name = "traffic";
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::~Icmp()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::has_data() const
{
    return checksum_error_messages.is_set
	|| output_messages.is_set
	|| received_echo_reply_messages.is_set
	|| received_echo_request_messages.is_set
	|| received_hop_count_expired_messages.is_set
	|| received_parameter_error_messages.is_set
	|| received_parameter_header_messages.is_set
	|| received_parameter_option_messages.is_set
	|| received_parameter_unknown_type_messages.is_set
	|| received_reassembly_timeouts.is_set
	|| received_too_big_messages.is_set
	|| received_unknown_timeout_messages.is_set
	|| received_unreachable_address_messages.is_set
	|| received_unreachable_admin_messages.is_set
	|| received_unreachable_neighbor_messages.is_set
	|| received_unreachable_port_messages.is_set
	|| received_unreachable_routing_messages.is_set
	|| received_unreachable_unknown_type_messages.is_set
	|| sent_echo_reply_messages.is_set
	|| sent_echo_request_messages.is_set
	|| sent_hop_count_expired_messages.is_set
	|| sent_parameter_error_messages.is_set
	|| sent_parameter_header_messages.is_set
	|| sent_parameter_option_messages.is_set
	|| sent_parameter_unknown_type_messages.is_set
	|| sent_rate_limited_packets.is_set
	|| sent_reassembly_timeouts.is_set
	|| sent_too_big_messages.is_set
	|| sent_unknown_timeout_messages.is_set
	|| sent_unreachable_address_messages.is_set
	|| sent_unreachable_admin_messages.is_set
	|| sent_unreachable_neighbor_messages.is_set
	|| sent_unreachable_port_messages.is_set
	|| sent_unreachable_routing_messages.is_set
	|| sent_unreachable_unknown_type_messages.is_set
	|| too_short_error_messages.is_set
	|| total_messages.is_set
	|| unknown_error_type_messages.is_set;
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::has_operation() const
{
    return is_set(operation)
	|| is_set(checksum_error_messages.operation)
	|| is_set(output_messages.operation)
	|| is_set(received_echo_reply_messages.operation)
	|| is_set(received_echo_request_messages.operation)
	|| is_set(received_hop_count_expired_messages.operation)
	|| is_set(received_parameter_error_messages.operation)
	|| is_set(received_parameter_header_messages.operation)
	|| is_set(received_parameter_option_messages.operation)
	|| is_set(received_parameter_unknown_type_messages.operation)
	|| is_set(received_reassembly_timeouts.operation)
	|| is_set(received_too_big_messages.operation)
	|| is_set(received_unknown_timeout_messages.operation)
	|| is_set(received_unreachable_address_messages.operation)
	|| is_set(received_unreachable_admin_messages.operation)
	|| is_set(received_unreachable_neighbor_messages.operation)
	|| is_set(received_unreachable_port_messages.operation)
	|| is_set(received_unreachable_routing_messages.operation)
	|| is_set(received_unreachable_unknown_type_messages.operation)
	|| is_set(sent_echo_reply_messages.operation)
	|| is_set(sent_echo_request_messages.operation)
	|| is_set(sent_hop_count_expired_messages.operation)
	|| is_set(sent_parameter_error_messages.operation)
	|| is_set(sent_parameter_header_messages.operation)
	|| is_set(sent_parameter_option_messages.operation)
	|| is_set(sent_parameter_unknown_type_messages.operation)
	|| is_set(sent_rate_limited_packets.operation)
	|| is_set(sent_reassembly_timeouts.operation)
	|| is_set(sent_too_big_messages.operation)
	|| is_set(sent_unknown_timeout_messages.operation)
	|| is_set(sent_unreachable_address_messages.operation)
	|| is_set(sent_unreachable_admin_messages.operation)
	|| is_set(sent_unreachable_neighbor_messages.operation)
	|| is_set(sent_unreachable_port_messages.operation)
	|| is_set(sent_unreachable_routing_messages.operation)
	|| is_set(sent_unreachable_unknown_type_messages.operation)
	|| is_set(too_short_error_messages.operation)
	|| is_set(total_messages.operation)
	|| is_set(unknown_error_type_messages.operation);
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksum_error_messages.is_set || is_set(checksum_error_messages.operation)) leaf_name_data.push_back(checksum_error_messages.get_name_leafdata());
    if (output_messages.is_set || is_set(output_messages.operation)) leaf_name_data.push_back(output_messages.get_name_leafdata());
    if (received_echo_reply_messages.is_set || is_set(received_echo_reply_messages.operation)) leaf_name_data.push_back(received_echo_reply_messages.get_name_leafdata());
    if (received_echo_request_messages.is_set || is_set(received_echo_request_messages.operation)) leaf_name_data.push_back(received_echo_request_messages.get_name_leafdata());
    if (received_hop_count_expired_messages.is_set || is_set(received_hop_count_expired_messages.operation)) leaf_name_data.push_back(received_hop_count_expired_messages.get_name_leafdata());
    if (received_parameter_error_messages.is_set || is_set(received_parameter_error_messages.operation)) leaf_name_data.push_back(received_parameter_error_messages.get_name_leafdata());
    if (received_parameter_header_messages.is_set || is_set(received_parameter_header_messages.operation)) leaf_name_data.push_back(received_parameter_header_messages.get_name_leafdata());
    if (received_parameter_option_messages.is_set || is_set(received_parameter_option_messages.operation)) leaf_name_data.push_back(received_parameter_option_messages.get_name_leafdata());
    if (received_parameter_unknown_type_messages.is_set || is_set(received_parameter_unknown_type_messages.operation)) leaf_name_data.push_back(received_parameter_unknown_type_messages.get_name_leafdata());
    if (received_reassembly_timeouts.is_set || is_set(received_reassembly_timeouts.operation)) leaf_name_data.push_back(received_reassembly_timeouts.get_name_leafdata());
    if (received_too_big_messages.is_set || is_set(received_too_big_messages.operation)) leaf_name_data.push_back(received_too_big_messages.get_name_leafdata());
    if (received_unknown_timeout_messages.is_set || is_set(received_unknown_timeout_messages.operation)) leaf_name_data.push_back(received_unknown_timeout_messages.get_name_leafdata());
    if (received_unreachable_address_messages.is_set || is_set(received_unreachable_address_messages.operation)) leaf_name_data.push_back(received_unreachable_address_messages.get_name_leafdata());
    if (received_unreachable_admin_messages.is_set || is_set(received_unreachable_admin_messages.operation)) leaf_name_data.push_back(received_unreachable_admin_messages.get_name_leafdata());
    if (received_unreachable_neighbor_messages.is_set || is_set(received_unreachable_neighbor_messages.operation)) leaf_name_data.push_back(received_unreachable_neighbor_messages.get_name_leafdata());
    if (received_unreachable_port_messages.is_set || is_set(received_unreachable_port_messages.operation)) leaf_name_data.push_back(received_unreachable_port_messages.get_name_leafdata());
    if (received_unreachable_routing_messages.is_set || is_set(received_unreachable_routing_messages.operation)) leaf_name_data.push_back(received_unreachable_routing_messages.get_name_leafdata());
    if (received_unreachable_unknown_type_messages.is_set || is_set(received_unreachable_unknown_type_messages.operation)) leaf_name_data.push_back(received_unreachable_unknown_type_messages.get_name_leafdata());
    if (sent_echo_reply_messages.is_set || is_set(sent_echo_reply_messages.operation)) leaf_name_data.push_back(sent_echo_reply_messages.get_name_leafdata());
    if (sent_echo_request_messages.is_set || is_set(sent_echo_request_messages.operation)) leaf_name_data.push_back(sent_echo_request_messages.get_name_leafdata());
    if (sent_hop_count_expired_messages.is_set || is_set(sent_hop_count_expired_messages.operation)) leaf_name_data.push_back(sent_hop_count_expired_messages.get_name_leafdata());
    if (sent_parameter_error_messages.is_set || is_set(sent_parameter_error_messages.operation)) leaf_name_data.push_back(sent_parameter_error_messages.get_name_leafdata());
    if (sent_parameter_header_messages.is_set || is_set(sent_parameter_header_messages.operation)) leaf_name_data.push_back(sent_parameter_header_messages.get_name_leafdata());
    if (sent_parameter_option_messages.is_set || is_set(sent_parameter_option_messages.operation)) leaf_name_data.push_back(sent_parameter_option_messages.get_name_leafdata());
    if (sent_parameter_unknown_type_messages.is_set || is_set(sent_parameter_unknown_type_messages.operation)) leaf_name_data.push_back(sent_parameter_unknown_type_messages.get_name_leafdata());
    if (sent_rate_limited_packets.is_set || is_set(sent_rate_limited_packets.operation)) leaf_name_data.push_back(sent_rate_limited_packets.get_name_leafdata());
    if (sent_reassembly_timeouts.is_set || is_set(sent_reassembly_timeouts.operation)) leaf_name_data.push_back(sent_reassembly_timeouts.get_name_leafdata());
    if (sent_too_big_messages.is_set || is_set(sent_too_big_messages.operation)) leaf_name_data.push_back(sent_too_big_messages.get_name_leafdata());
    if (sent_unknown_timeout_messages.is_set || is_set(sent_unknown_timeout_messages.operation)) leaf_name_data.push_back(sent_unknown_timeout_messages.get_name_leafdata());
    if (sent_unreachable_address_messages.is_set || is_set(sent_unreachable_address_messages.operation)) leaf_name_data.push_back(sent_unreachable_address_messages.get_name_leafdata());
    if (sent_unreachable_admin_messages.is_set || is_set(sent_unreachable_admin_messages.operation)) leaf_name_data.push_back(sent_unreachable_admin_messages.get_name_leafdata());
    if (sent_unreachable_neighbor_messages.is_set || is_set(sent_unreachable_neighbor_messages.operation)) leaf_name_data.push_back(sent_unreachable_neighbor_messages.get_name_leafdata());
    if (sent_unreachable_port_messages.is_set || is_set(sent_unreachable_port_messages.operation)) leaf_name_data.push_back(sent_unreachable_port_messages.get_name_leafdata());
    if (sent_unreachable_routing_messages.is_set || is_set(sent_unreachable_routing_messages.operation)) leaf_name_data.push_back(sent_unreachable_routing_messages.get_name_leafdata());
    if (sent_unreachable_unknown_type_messages.is_set || is_set(sent_unreachable_unknown_type_messages.operation)) leaf_name_data.push_back(sent_unreachable_unknown_type_messages.get_name_leafdata());
    if (too_short_error_messages.is_set || is_set(too_short_error_messages.operation)) leaf_name_data.push_back(too_short_error_messages.get_name_leafdata());
    if (total_messages.is_set || is_set(total_messages.operation)) leaf_name_data.push_back(total_messages.get_name_leafdata());
    if (unknown_error_type_messages.is_set || is_set(unknown_error_type_messages.operation)) leaf_name_data.push_back(unknown_error_type_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_children()
{
    return children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checksum-error-messages")
    {
        checksum_error_messages = value;
    }
    if(value_path == "output-messages")
    {
        output_messages = value;
    }
    if(value_path == "received-echo-reply-messages")
    {
        received_echo_reply_messages = value;
    }
    if(value_path == "received-echo-request-messages")
    {
        received_echo_request_messages = value;
    }
    if(value_path == "received-hop-count-expired-messages")
    {
        received_hop_count_expired_messages = value;
    }
    if(value_path == "received-parameter-error-messages")
    {
        received_parameter_error_messages = value;
    }
    if(value_path == "received-parameter-header-messages")
    {
        received_parameter_header_messages = value;
    }
    if(value_path == "received-parameter-option-messages")
    {
        received_parameter_option_messages = value;
    }
    if(value_path == "received-parameter-unknown-type-messages")
    {
        received_parameter_unknown_type_messages = value;
    }
    if(value_path == "received-reassembly-timeouts")
    {
        received_reassembly_timeouts = value;
    }
    if(value_path == "received-too-big-messages")
    {
        received_too_big_messages = value;
    }
    if(value_path == "received-unknown-timeout-messages")
    {
        received_unknown_timeout_messages = value;
    }
    if(value_path == "received-unreachable-address-messages")
    {
        received_unreachable_address_messages = value;
    }
    if(value_path == "received-unreachable-admin-messages")
    {
        received_unreachable_admin_messages = value;
    }
    if(value_path == "received-unreachable-neighbor-messages")
    {
        received_unreachable_neighbor_messages = value;
    }
    if(value_path == "received-unreachable-port-messages")
    {
        received_unreachable_port_messages = value;
    }
    if(value_path == "received-unreachable-routing-messages")
    {
        received_unreachable_routing_messages = value;
    }
    if(value_path == "received-unreachable-unknown-type-messages")
    {
        received_unreachable_unknown_type_messages = value;
    }
    if(value_path == "sent-echo-reply-messages")
    {
        sent_echo_reply_messages = value;
    }
    if(value_path == "sent-echo-request-messages")
    {
        sent_echo_request_messages = value;
    }
    if(value_path == "sent-hop-count-expired-messages")
    {
        sent_hop_count_expired_messages = value;
    }
    if(value_path == "sent-parameter-error-messages")
    {
        sent_parameter_error_messages = value;
    }
    if(value_path == "sent-parameter-header-messages")
    {
        sent_parameter_header_messages = value;
    }
    if(value_path == "sent-parameter-option-messages")
    {
        sent_parameter_option_messages = value;
    }
    if(value_path == "sent-parameter-unknown-type-messages")
    {
        sent_parameter_unknown_type_messages = value;
    }
    if(value_path == "sent-rate-limited-packets")
    {
        sent_rate_limited_packets = value;
    }
    if(value_path == "sent-reassembly-timeouts")
    {
        sent_reassembly_timeouts = value;
    }
    if(value_path == "sent-too-big-messages")
    {
        sent_too_big_messages = value;
    }
    if(value_path == "sent-unknown-timeout-messages")
    {
        sent_unknown_timeout_messages = value;
    }
    if(value_path == "sent-unreachable-address-messages")
    {
        sent_unreachable_address_messages = value;
    }
    if(value_path == "sent-unreachable-admin-messages")
    {
        sent_unreachable_admin_messages = value;
    }
    if(value_path == "sent-unreachable-neighbor-messages")
    {
        sent_unreachable_neighbor_messages = value;
    }
    if(value_path == "sent-unreachable-port-messages")
    {
        sent_unreachable_port_messages = value;
    }
    if(value_path == "sent-unreachable-routing-messages")
    {
        sent_unreachable_routing_messages = value;
    }
    if(value_path == "sent-unreachable-unknown-type-messages")
    {
        sent_unreachable_unknown_type_messages = value;
    }
    if(value_path == "too-short-error-messages")
    {
        too_short_error_messages = value;
    }
    if(value_path == "total-messages")
    {
        total_messages = value;
    }
    if(value_path == "unknown-error-type-messages")
    {
        unknown_error_type_messages = value;
    }
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::Ipv6NodeDiscovery()
    :
    	received_neighbor_advertisement_messages{YType::uint32, "received-neighbor-advertisement-messages"},
	 received_neighbor_solicitation_messages{YType::uint32, "received-neighbor-solicitation-messages"},
	 received_redirect_messages{YType::uint32, "received-redirect-messages"},
	 received_router_advertisement_messages{YType::uint32, "received-router-advertisement-messages"},
	 received_router_solicitation_messages{YType::uint32, "received-router-solicitation-messages"},
	 sent_neighbor_advertisement_messages{YType::uint32, "sent-neighbor-advertisement-messages"},
	 sent_neighbor_solicitation_messages{YType::uint32, "sent-neighbor-solicitation-messages"},
	 sent_redirect_messages{YType::uint32, "sent-redirect-messages"},
	 sent_router_advertisement_messages{YType::uint32, "sent-router-advertisement-messages"},
	 sent_router_solicitation_messages{YType::uint32, "sent-router-solicitation-messages"}
{
    yang_name = "ipv6-node-discovery"; yang_parent_name = "traffic";
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::~Ipv6NodeDiscovery()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::has_data() const
{
    return received_neighbor_advertisement_messages.is_set
	|| received_neighbor_solicitation_messages.is_set
	|| received_redirect_messages.is_set
	|| received_router_advertisement_messages.is_set
	|| received_router_solicitation_messages.is_set
	|| sent_neighbor_advertisement_messages.is_set
	|| sent_neighbor_solicitation_messages.is_set
	|| sent_redirect_messages.is_set
	|| sent_router_advertisement_messages.is_set
	|| sent_router_solicitation_messages.is_set;
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(received_neighbor_advertisement_messages.operation)
	|| is_set(received_neighbor_solicitation_messages.operation)
	|| is_set(received_redirect_messages.operation)
	|| is_set(received_router_advertisement_messages.operation)
	|| is_set(received_router_solicitation_messages.operation)
	|| is_set(sent_neighbor_advertisement_messages.operation)
	|| is_set(sent_neighbor_solicitation_messages.operation)
	|| is_set(sent_redirect_messages.operation)
	|| is_set(sent_router_advertisement_messages.operation)
	|| is_set(sent_router_solicitation_messages.operation);
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-node-discovery";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_neighbor_advertisement_messages.is_set || is_set(received_neighbor_advertisement_messages.operation)) leaf_name_data.push_back(received_neighbor_advertisement_messages.get_name_leafdata());
    if (received_neighbor_solicitation_messages.is_set || is_set(received_neighbor_solicitation_messages.operation)) leaf_name_data.push_back(received_neighbor_solicitation_messages.get_name_leafdata());
    if (received_redirect_messages.is_set || is_set(received_redirect_messages.operation)) leaf_name_data.push_back(received_redirect_messages.get_name_leafdata());
    if (received_router_advertisement_messages.is_set || is_set(received_router_advertisement_messages.operation)) leaf_name_data.push_back(received_router_advertisement_messages.get_name_leafdata());
    if (received_router_solicitation_messages.is_set || is_set(received_router_solicitation_messages.operation)) leaf_name_data.push_back(received_router_solicitation_messages.get_name_leafdata());
    if (sent_neighbor_advertisement_messages.is_set || is_set(sent_neighbor_advertisement_messages.operation)) leaf_name_data.push_back(sent_neighbor_advertisement_messages.get_name_leafdata());
    if (sent_neighbor_solicitation_messages.is_set || is_set(sent_neighbor_solicitation_messages.operation)) leaf_name_data.push_back(sent_neighbor_solicitation_messages.get_name_leafdata());
    if (sent_redirect_messages.is_set || is_set(sent_redirect_messages.operation)) leaf_name_data.push_back(sent_redirect_messages.get_name_leafdata());
    if (sent_router_advertisement_messages.is_set || is_set(sent_router_advertisement_messages.operation)) leaf_name_data.push_back(sent_router_advertisement_messages.get_name_leafdata());
    if (sent_router_solicitation_messages.is_set || is_set(sent_router_solicitation_messages.operation)) leaf_name_data.push_back(sent_router_solicitation_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_children()
{
    return children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-neighbor-advertisement-messages")
    {
        received_neighbor_advertisement_messages = value;
    }
    if(value_path == "received-neighbor-solicitation-messages")
    {
        received_neighbor_solicitation_messages = value;
    }
    if(value_path == "received-redirect-messages")
    {
        received_redirect_messages = value;
    }
    if(value_path == "received-router-advertisement-messages")
    {
        received_router_advertisement_messages = value;
    }
    if(value_path == "received-router-solicitation-messages")
    {
        received_router_solicitation_messages = value;
    }
    if(value_path == "sent-neighbor-advertisement-messages")
    {
        sent_neighbor_advertisement_messages = value;
    }
    if(value_path == "sent-neighbor-solicitation-messages")
    {
        sent_neighbor_solicitation_messages = value;
    }
    if(value_path == "sent-redirect-messages")
    {
        sent_redirect_messages = value;
    }
    if(value_path == "sent-router-advertisement-messages")
    {
        sent_router_advertisement_messages = value;
    }
    if(value_path == "sent-router-solicitation-messages")
    {
        sent_router_solicitation_messages = value;
    }
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Traffic()
    :
    icmp(std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp>())
	,ipv6(std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6>())
	,ipv6_node_discovery(std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery>())
{
    icmp->parent = this;
    children["icmp"] = icmp.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    ipv6_node_discovery->parent = this;
    children["ipv6-node-discovery"] = ipv6_node_discovery.get();

    yang_name = "traffic"; yang_parent_name = "statistics";
}

Ipv6Io::Nodes::Node::Statistics::Traffic::~Traffic()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::has_data() const
{
    return (icmp !=  nullptr && icmp->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv6_node_discovery !=  nullptr && ipv6_node_discovery->has_data());
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::has_operation() const
{
    return is_set(operation)
	|| (icmp !=  nullptr && is_set(icmp->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation))
	|| (ipv6_node_discovery !=  nullptr && is_set(ipv6_node_discovery->operation));
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::Node::Statistics::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::Node::Statistics::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "icmp")
    {
        if(icmp != nullptr)
        {
            children["icmp"] = icmp.get();
        }
        else
        {
            icmp = std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp>();
            icmp->parent = this;
            children["icmp"] = icmp.get();
        }
        return children.at("icmp");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
        else
        {
            ipv6 = std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "ipv6-node-discovery")
    {
        if(ipv6_node_discovery != nullptr)
        {
            children["ipv6-node-discovery"] = ipv6_node_discovery.get();
        }
        else
        {
            ipv6_node_discovery = std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery>();
            ipv6_node_discovery->parent = this;
            children["ipv6-node-discovery"] = ipv6_node_discovery.get();
        }
        return children.at("ipv6-node-discovery");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::Node::Statistics::Traffic::get_children()
{
    if(children.find("icmp") == children.end())
    {
        if(icmp != nullptr)
        {
            children["icmp"] = icmp.get();
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
    }

    if(children.find("ipv6-node-discovery") == children.end())
    {
        if(ipv6_node_discovery != nullptr)
        {
            children["ipv6-node-discovery"] = ipv6_node_discovery.get();
        }
    }

    return children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Io::Nodes::Node::Statistics::Statistics()
    :
    traffic(std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic>())
{
    traffic->parent = this;
    children["traffic"] = traffic.get();

    yang_name = "statistics"; yang_parent_name = "node";
}

Ipv6Io::Nodes::Node::Statistics::~Statistics()
{
}

bool Ipv6Io::Nodes::Node::Statistics::has_data() const
{
    return (traffic !=  nullptr && traffic->has_data());
}

bool Ipv6Io::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (traffic !=  nullptr && is_set(traffic->operation));
}

std::string Ipv6Io::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
        else
        {
            traffic = std::make_unique<Ipv6Io::Nodes::Node::Statistics::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic.get();
        }
        return children.at("traffic");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::Node::Statistics::get_children()
{
    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
    }

    return children;
}

void Ipv6Io::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Io::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    statistics(std::make_unique<Ipv6Io::Nodes::Node::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Ipv6Io::Nodes::Node::~Node()
{
}

bool Ipv6Io::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv6Io::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (statistics !=  nullptr && is_set(statistics->operation));
}

std::string Ipv6Io::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-io-oper:ipv6-io/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Ipv6Io::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::Node::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void Ipv6Io::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Ipv6Io::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ipv6-io";
}

Ipv6Io::Nodes::~Nodes()
{
}

bool Ipv6Io::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Io::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Io::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Ipv6Io::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-io-oper:ipv6-io/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Io::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Io::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Io::Ipv6Io()
    :
    nodes(std::make_unique<Ipv6Io::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "ipv6-io"; yang_parent_name = "Cisco-IOS-XR-ipv6-io-oper";
}

Ipv6Io::~Ipv6Io()
{
}

bool Ipv6Io::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ipv6Io::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Ipv6Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-oper:ipv6-io";

    return path_buffer.str();

}

EntityPath Ipv6Io::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Ipv6Io::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Io::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Ipv6Io::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ipv6Io::clone_ptr()
{
    return std::make_unique<Ipv6Io>();
}


}
}

