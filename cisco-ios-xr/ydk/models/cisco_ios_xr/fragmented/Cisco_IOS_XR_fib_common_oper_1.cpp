
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fib_common_oper {

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{
    yang_name = "ldi-information"; yang_parent_name = "forwarding-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_data() const
{
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(ldi_hardware_information.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdiInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.operation)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::MulticastInformation()
    :
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_platform_data{YType::str, "multicast-platform-data"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"}
{
    yang_name = "multicast-information"; yang_parent_name = "forwarding-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_data() const
{
    return multicast_encap_id.is_set
	|| multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_platform_data.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_rpf_id.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_tunnel_next_hop_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_encap_id.operation)
	|| is_set(multicast_mol_base_flags.operation)
	|| is_set(multicast_mol_flags.operation)
	|| is_set(multicast_mol_referance_count.operation)
	|| is_set(multicast_mpls_local_output_paths.operation)
	|| is_set(multicast_mpls_output_paths.operation)
	|| is_set(multicast_mpls_protocol_output_paths.operation)
	|| is_set(multicast_platform_data.operation)
	|| is_set(multicast_platform_data_length.operation)
	|| is_set(multicast_rpf_id.operation)
	|| is_set(multicast_tunnel_id.operation)
	|| is_set(multicast_tunnel_interface_handler.operation)
	|| is_set(multicast_tunnel_lspvif.operation)
	|| is_set(multicast_tunnel_next_hop_information.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.operation)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.operation)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.operation)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.operation)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.operation)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.operation)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.operation)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.operation)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.operation)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.operation)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.operation)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformation()
    :
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"},
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_interface_string{YType::str, "outgoing-interface-string"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail>())
{
    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "forwarding-detail";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_data() const
{
    return label_information_next_hop_protocol.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_path_index.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| label_information_type.is_set
	|| local_label.is_set
	|| mpls_adjacency_flags.is_set
	|| outgoing_interface.is_set
	|| outgoing_interface_string.is_set
	|| outgoing_label.is_set
	|| outgoing_label_string.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(label_information_next_hop_protocol.operation)
	|| is_set(label_information_next_hop_string.operation)
	|| is_set(label_information_next_hop_type.operation)
	|| is_set(label_information_path_index.operation)
	|| is_set(label_information_route_version.operation)
	|| is_set(label_information_time_in_milli_seconds.operation)
	|| is_set(label_information_type.operation)
	|| is_set(local_label.operation)
	|| is_set(mpls_adjacency_flags.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_interface_string.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_string.operation)
	|| is_set(outgoing_physical_interface.operation)
	|| is_set(prefix_or_id.operation)
	|| is_set(tunnel_id_present.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(tx_bytes.operation)
	|| is_set(tx_packets.operation)
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.operation)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.operation)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.operation)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.operation)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.operation)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.operation)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.operation)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.operation)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.operation)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.operation)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.operation)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.operation)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.operation)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.operation)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.operation)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    label_stack{YType::uint32, "label-stack"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "label-information-detail"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return l3_mtu.is_set
	|| mac_size.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set
	|| status.is_set
	|| total_encapsulation_size.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(l3_mtu.operation)
	|| is_set(label_stack.operation)
	|| is_set(mac_size.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_protocol.operation)
	|| is_set(next_hop_string.operation)
	|| is_set(status.operation)
	|| is_set(total_encapsulation_size.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformationDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.operation)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.operation)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.operation)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.operation)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.operation)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());

    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
    }
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Informations()
{
    yang_name = "informations"; yang_parent_name = "label-fib";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::~Informations()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_data() const
{
    for (std::size_t index=0; index<information.size(); index++)
    {
        if(information[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_operation() const
{
    for (std::size_t index=0; index<information.size(); index++)
    {
        if(information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informations";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Informations' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        for(auto const & c : information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information>();
        c->parent = this;
        information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::Information()
    :
    afi_table_id{YType::uint32, "afi-table-id"},
    eos{YType::enumeration, "eos"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    label_value{YType::uint32, "label-value"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_type{YType::uint32, "ldi-type"},
    leaf_flags{YType::uint32, "leaf-flags"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    lspa_flags{YType::uint32, "lspa-flags"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    multicast_label{YType::boolean, "multicast-label"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"}
    	,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation>())
	,multicast_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation>())
{
    ldi_information->parent = this;

    multicast_information->parent = this;

    yang_name = "information"; yang_parent_name = "informations";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::~Information()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_data() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return afi_table_id.is_set
	|| eos.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| label_value.is_set
	|| ldi_flags.is_set
	|| ldi_pointer.is_set
	|| ldi_referance_count.is_set
	|| ldi_type.is_set
	|| leaf_flags.is_set
	|| leaf_local_label.is_set
	|| leaf_referance_count.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| lspa_flags.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_ldi_type.is_set
	|| lw_shared_ldi_pointer.is_set
	|| multicast_label.is_set
	|| path_list_flags.is_set
	|| path_list_referance_count.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_operation() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(afi_table_id.operation)
	|| is_set(eos.operation)
	|| is_set(eos_bit.operation)
	|| is_set(hardware_information.operation)
	|| is_set(label_value.operation)
	|| is_set(ldi_flags.operation)
	|| is_set(ldi_pointer.operation)
	|| is_set(ldi_referance_count.operation)
	|| is_set(ldi_type.operation)
	|| is_set(leaf_flags.operation)
	|| is_set(leaf_local_label.operation)
	|| is_set(leaf_referance_count.operation)
	|| is_set(leaf_time_in_milli_seconds.operation)
	|| is_set(lspa_flags.operation)
	|| is_set(lw_ldi_pointer.operation)
	|| is_set(lw_ldi_refernace_count.operation)
	|| is_set(lw_ldi_type.operation)
	|| is_set(lw_shared_ldi_pointer.operation)
	|| is_set(multicast_label.operation)
	|| is_set(path_list_flags.operation)
	|| is_set(path_list_referance_count.operation)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.operation)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos.is_set || is_set(eos.operation)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.operation)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.operation)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.operation)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.operation)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.operation)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.operation)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.operation)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.operation)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.operation)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.operation)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.operation)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.operation)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.operation)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.operation)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.operation)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.operation)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.operation)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.operation)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information")
    {
        for(auto const & c : label_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation>();
        c->parent = this;
        label_information.push_back(c);
        return c;
    }

    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation>();
        }
        return multicast_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldi_information != nullptr)
    {
        children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        children["multicast-information"] = multicast_information;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
    }
    if(value_path == "eos")
    {
        eos = value;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "label-value")
    {
        label_value = value;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{
    yang_name = "ldi-information"; yang_parent_name = "information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_data() const
{
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(ldi_hardware_information.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdiInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.operation)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::MulticastInformation()
    :
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_platform_data{YType::str, "multicast-platform-data"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"}
{
    yang_name = "multicast-information"; yang_parent_name = "information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_data() const
{
    return multicast_encap_id.is_set
	|| multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_platform_data.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_rpf_id.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_tunnel_next_hop_information.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_encap_id.operation)
	|| is_set(multicast_mol_base_flags.operation)
	|| is_set(multicast_mol_flags.operation)
	|| is_set(multicast_mol_referance_count.operation)
	|| is_set(multicast_mpls_local_output_paths.operation)
	|| is_set(multicast_mpls_output_paths.operation)
	|| is_set(multicast_mpls_protocol_output_paths.operation)
	|| is_set(multicast_platform_data.operation)
	|| is_set(multicast_platform_data_length.operation)
	|| is_set(multicast_rpf_id.operation)
	|| is_set(multicast_tunnel_id.operation)
	|| is_set(multicast_tunnel_interface_handler.operation)
	|| is_set(multicast_tunnel_lspvif.operation)
	|| is_set(multicast_tunnel_next_hop_information.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.operation)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.operation)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.operation)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.operation)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.operation)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.operation)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.operation)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.operation)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.operation)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.operation)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.operation)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformation()
    :
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"},
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_interface_string{YType::str, "outgoing-interface-string"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>())
{
    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_data() const
{
    return label_information_next_hop_protocol.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_path_index.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| label_information_type.is_set
	|| local_label.is_set
	|| mpls_adjacency_flags.is_set
	|| outgoing_interface.is_set
	|| outgoing_interface_string.is_set
	|| outgoing_label.is_set
	|| outgoing_label_string.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(label_information_next_hop_protocol.operation)
	|| is_set(label_information_next_hop_string.operation)
	|| is_set(label_information_next_hop_type.operation)
	|| is_set(label_information_path_index.operation)
	|| is_set(label_information_route_version.operation)
	|| is_set(label_information_time_in_milli_seconds.operation)
	|| is_set(label_information_type.operation)
	|| is_set(local_label.operation)
	|| is_set(mpls_adjacency_flags.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_interface_string.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_string.operation)
	|| is_set(outgoing_physical_interface.operation)
	|| is_set(prefix_or_id.operation)
	|| is_set(tunnel_id_present.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(tx_bytes.operation)
	|| is_set(tx_packets.operation)
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.operation)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.operation)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.operation)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.operation)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.operation)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.operation)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.operation)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.operation)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.operation)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.operation)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.operation)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.operation)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.operation)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.operation)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.operation)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    label_stack{YType::uint32, "label-stack"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "label-information-detail"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return l3_mtu.is_set
	|| mac_size.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set
	|| status.is_set
	|| total_encapsulation_size.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(l3_mtu.operation)
	|| is_set(label_stack.operation)
	|| is_set(mac_size.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_protocol.operation)
	|| is_set(next_hop_string.operation)
	|| is_set(status.operation)
	|| is_set(total_encapsulation_size.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformationDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.operation)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.operation)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.operation)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.operation)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.operation)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());

    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
    }
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::LabelSecurity()
    :
    interfaces(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>())
	,summary(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>())
{
    interfaces->parent = this;

    summary->parent = this;

    yang_name = "label-security"; yang_parent_name = "label-fib";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::~LabelSecurity()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelSecurity' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "label-security";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::~Interfaces()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    mld_enabled{YType::boolean, "mld-enabled"},
    mld_supported{YType::boolean, "mld-supported"},
    multi_label_drops{YType::uint64, "multi-label-drops"},
    rpf_drops{YType::uint64, "rpf-drops"},
    rpf_enabled{YType::boolean, "rpf-enabled"},
    rpf_supported{YType::boolean, "rpf-supported"},
    rpfifh{YType::str, "rpfifh"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::~Interface()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| mld_enabled.is_set
	|| mld_supported.is_set
	|| multi_label_drops.is_set
	|| rpf_drops.is_set
	|| rpf_enabled.is_set
	|| rpf_supported.is_set
	|| rpfifh.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(mld_enabled.operation)
	|| is_set(mld_supported.operation)
	|| is_set(multi_label_drops.operation)
	|| is_set(rpf_drops.operation)
	|| is_set(rpf_enabled.operation)
	|| is_set(rpf_supported.operation)
	|| is_set(rpfifh.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mld_enabled.is_set || is_set(mld_enabled.operation)) leaf_name_data.push_back(mld_enabled.get_name_leafdata());
    if (mld_supported.is_set || is_set(mld_supported.operation)) leaf_name_data.push_back(mld_supported.get_name_leafdata());
    if (multi_label_drops.is_set || is_set(multi_label_drops.operation)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.operation)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());
    if (rpf_enabled.is_set || is_set(rpf_enabled.operation)) leaf_name_data.push_back(rpf_enabled.get_name_leafdata());
    if (rpf_supported.is_set || is_set(rpf_supported.operation)) leaf_name_data.push_back(rpf_supported.get_name_leafdata());
    if (rpfifh.is_set || is_set(rpfifh.operation)) leaf_name_data.push_back(rpfifh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled = value;
    }
    if(value_path == "mld-supported")
    {
        mld_supported = value;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled = value;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported = value;
    }
    if(value_path == "rpfifh")
    {
        rpfifh = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::Summary()
    :
    multi_label_drops{YType::uint64, "multi-label-drops"},
    rpf_drops{YType::uint64, "rpf-drops"}
{
    yang_name = "summary"; yang_parent_name = "label-security";
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::~Summary()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_data() const
{
    return multi_label_drops.is_set
	|| rpf_drops.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(multi_label_drops.operation)
	|| is_set(rpf_drops.operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_label_drops.is_set || is_set(multi_label_drops.operation)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.operation)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::Tunnel()
    :
    forwarding_tunnels(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>())
{
    forwarding_tunnels->parent = this;

    yang_name = "tunnel"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::Tunnel::~Tunnel()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::has_data() const
{
    return (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::has_operation() const
{
    return is_set(operation)
	|| (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-tunnels")
    {
        if(forwarding_tunnels == nullptr)
        {
            forwarding_tunnels = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>();
        }
        return forwarding_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_tunnels != nullptr)
    {
        children["forwarding-tunnels"] = forwarding_tunnels;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnels()
{
    yang_name = "forwarding-tunnels"; yang_parent_name = "tunnel";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::~ForwardingTunnels()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_data() const
{
    for (std::size_t index=0; index<forwarding_tunnel.size(); index++)
    {
        if(forwarding_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_operation() const
{
    for (std::size_t index=0; index<forwarding_tunnel.size(); index++)
    {
        if(forwarding_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnels";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingTunnels' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-tunnel")
    {
        for(auto const & c : forwarding_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel>();
        c->parent = this;
        forwarding_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::ForwardingTunnel()
    :
    interface_name{YType::str, "interface-name"}
    	,
    fwdg(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg>())
	,tunnel_info(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo>())
{
    fwdg->parent = this;

    tunnel_info->parent = this;

    yang_name = "forwarding-tunnel"; yang_parent_name = "forwarding-tunnels";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::~ForwardingTunnel()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_data() const
{
    return interface_name.is_set
	|| (fwdg !=  nullptr && fwdg->has_data())
	|| (tunnel_info !=  nullptr && tunnel_info->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (fwdg !=  nullptr && fwdg->has_operation())
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnel" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingTunnel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwdg")
    {
        if(fwdg == nullptr)
        {
            fwdg = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg>();
        }
        return fwdg;
    }

    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info == nullptr)
        {
            tunnel_info = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo>();
        }
        return tunnel_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fwdg != nullptr)
    {
        children["fwdg"] = fwdg;
    }

    if(tunnel_info != nullptr)
    {
        children["tunnel-info"] = tunnel_info;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::TunnelInfo()
    :
    tli_flags{YType::uint32, "tli-flags"},
    tli_flags_extended{YType::uint32, "tli-flags-extended"},
    tli_pointer{YType::uint32, "tli-pointer"},
    tli_reference_count{YType::uint32, "tli-reference-count"},
    tli_type{YType::uint32, "tli-type"},
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    tunnel_is_programmed_to_drop{YType::boolean, "tunnel-is-programmed-to-drop"},
    tunnel_is_srte{YType::boolean, "tunnel-is-srte"},
    tunnel_load_metric{YType::uint8, "tunnel-load-metric"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_resolution_incomplete{YType::boolean, "tunnel-resolution-incomplete"},
    tunnel_resolution_inconsistent{YType::boolean, "tunnel-resolution-inconsistent"}
{
    yang_name = "tunnel-info"; yang_parent_name = "forwarding-tunnel";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::~TunnelInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_data() const
{
    return tli_flags.is_set
	|| tli_flags_extended.is_set
	|| tli_pointer.is_set
	|| tli_reference_count.is_set
	|| tli_type.is_set
	|| tunnel_fwd_class.is_set
	|| tunnel_interface_name.is_set
	|| tunnel_is_programmed_to_drop.is_set
	|| tunnel_is_srte.is_set
	|| tunnel_load_metric.is_set
	|| tunnel_local_label.is_set
	|| tunnel_resolution_incomplete.is_set
	|| tunnel_resolution_inconsistent.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tli_flags.operation)
	|| is_set(tli_flags_extended.operation)
	|| is_set(tli_pointer.operation)
	|| is_set(tli_reference_count.operation)
	|| is_set(tli_type.operation)
	|| is_set(tunnel_fwd_class.operation)
	|| is_set(tunnel_interface_name.operation)
	|| is_set(tunnel_is_programmed_to_drop.operation)
	|| is_set(tunnel_is_srte.operation)
	|| is_set(tunnel_load_metric.operation)
	|| is_set(tunnel_local_label.operation)
	|| is_set(tunnel_resolution_incomplete.operation)
	|| is_set(tunnel_resolution_inconsistent.operation);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tli_flags.is_set || is_set(tli_flags.operation)) leaf_name_data.push_back(tli_flags.get_name_leafdata());
    if (tli_flags_extended.is_set || is_set(tli_flags_extended.operation)) leaf_name_data.push_back(tli_flags_extended.get_name_leafdata());
    if (tli_pointer.is_set || is_set(tli_pointer.operation)) leaf_name_data.push_back(tli_pointer.get_name_leafdata());
    if (tli_reference_count.is_set || is_set(tli_reference_count.operation)) leaf_name_data.push_back(tli_reference_count.get_name_leafdata());
    if (tli_type.is_set || is_set(tli_type.operation)) leaf_name_data.push_back(tli_type.get_name_leafdata());
    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.operation)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (tunnel_is_programmed_to_drop.is_set || is_set(tunnel_is_programmed_to_drop.operation)) leaf_name_data.push_back(tunnel_is_programmed_to_drop.get_name_leafdata());
    if (tunnel_is_srte.is_set || is_set(tunnel_is_srte.operation)) leaf_name_data.push_back(tunnel_is_srte.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.operation)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.operation)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_resolution_incomplete.is_set || is_set(tunnel_resolution_incomplete.operation)) leaf_name_data.push_back(tunnel_resolution_incomplete.get_name_leafdata());
    if (tunnel_resolution_inconsistent.is_set || is_set(tunnel_resolution_inconsistent.operation)) leaf_name_data.push_back(tunnel_resolution_inconsistent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tli-flags")
    {
        tli_flags = value;
    }
    if(value_path == "tli-flags-extended")
    {
        tli_flags_extended = value;
    }
    if(value_path == "tli-pointer")
    {
        tli_pointer = value;
    }
    if(value_path == "tli-reference-count")
    {
        tli_reference_count = value;
    }
    if(value_path == "tli-type")
    {
        tli_type = value;
    }
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop = value;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte = value;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete = value;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Fwdg()
    :
    afi_table_id{YType::uint32, "afi-table-id"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_type{YType::uint32, "ldi-type"},
    leaf_flags{YType::uint32, "leaf-flags"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    lspa_flags{YType::uint32, "lspa-flags"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    multicast_label{YType::boolean, "multicast-label"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"}
    	,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation>())
	,multicast_information(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation>())
{
    ldi_information->parent = this;

    multicast_information->parent = this;

    yang_name = "fwdg"; yang_parent_name = "forwarding-tunnel";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::~Fwdg()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_data() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return afi_table_id.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| ldi_flags.is_set
	|| ldi_pointer.is_set
	|| ldi_referance_count.is_set
	|| ldi_type.is_set
	|| leaf_flags.is_set
	|| leaf_local_label.is_set
	|| leaf_referance_count.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| lspa_flags.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_ldi_type.is_set
	|| lw_shared_ldi_pointer.is_set
	|| multicast_label.is_set
	|| path_list_flags.is_set
	|| path_list_referance_count.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_operation() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(afi_table_id.operation)
	|| is_set(eos_bit.operation)
	|| is_set(hardware_information.operation)
	|| is_set(ldi_flags.operation)
	|| is_set(ldi_pointer.operation)
	|| is_set(ldi_referance_count.operation)
	|| is_set(ldi_type.operation)
	|| is_set(leaf_flags.operation)
	|| is_set(leaf_local_label.operation)
	|| is_set(leaf_referance_count.operation)
	|| is_set(leaf_time_in_milli_seconds.operation)
	|| is_set(lspa_flags.operation)
	|| is_set(lw_ldi_pointer.operation)
	|| is_set(lw_ldi_refernace_count.operation)
	|| is_set(lw_ldi_type.operation)
	|| is_set(lw_shared_ldi_pointer.operation)
	|| is_set(multicast_label.operation)
	|| is_set(path_list_flags.operation)
	|| is_set(path_list_referance_count.operation)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdg";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fwdg' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.operation)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.operation)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.operation)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.operation)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.operation)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.operation)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.operation)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.operation)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.operation)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.operation)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.operation)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.operation)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.operation)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.operation)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.operation)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.operation)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.operation)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.operation)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information")
    {
        for(auto const & c : label_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation>();
        c->parent = this;
        label_information.push_back(c);
        return c;
    }

    if(child_yang_name == "ldi-information")
    {
        if(ldi_information == nullptr)
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation>();
        }
        return ldi_information;
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information == nullptr)
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation>();
        }
        return multicast_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldi_information != nullptr)
    {
        children["ldi-information"] = ldi_information;
    }

    if(multicast_information != nullptr)
    {
        children["multicast-information"] = multicast_information;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{
    yang_name = "ldi-information"; yang_parent_name = "fwdg";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::~LdiInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_data() const
{
    return ldi_hardware_information.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(ldi_hardware_information.operation);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdiInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.operation)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::MulticastInformation()
    :
    multicast_encap_id{YType::uint32, "multicast-encap-id"},
    multicast_mol_base_flags{YType::uint32, "multicast-mol-base-flags"},
    multicast_mol_flags{YType::uint16, "multicast-mol-flags"},
    multicast_mol_referance_count{YType::uint16, "multicast-mol-referance-count"},
    multicast_mpls_local_output_paths{YType::uint16, "multicast-mpls-local-output-paths"},
    multicast_mpls_output_paths{YType::uint16, "multicast-mpls-output-paths"},
    multicast_mpls_protocol_output_paths{YType::uint16, "multicast-mpls-protocol-output-paths"},
    multicast_platform_data{YType::str, "multicast-platform-data"},
    multicast_platform_data_length{YType::uint8, "multicast-platform-data-length"},
    multicast_rpf_id{YType::uint32, "multicast-rpf-id"},
    multicast_tunnel_id{YType::uint32, "multicast-tunnel-id"},
    multicast_tunnel_interface_handler{YType::str, "multicast-tunnel-interface-handler"},
    multicast_tunnel_lspvif{YType::uint32, "multicast-tunnel-lspvif"},
    multicast_tunnel_next_hop_information{YType::uint32, "multicast-tunnel-next-hop-information"}
{
    yang_name = "multicast-information"; yang_parent_name = "fwdg";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::~MulticastInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_data() const
{
    return multicast_encap_id.is_set
	|| multicast_mol_base_flags.is_set
	|| multicast_mol_flags.is_set
	|| multicast_mol_referance_count.is_set
	|| multicast_mpls_local_output_paths.is_set
	|| multicast_mpls_output_paths.is_set
	|| multicast_mpls_protocol_output_paths.is_set
	|| multicast_platform_data.is_set
	|| multicast_platform_data_length.is_set
	|| multicast_rpf_id.is_set
	|| multicast_tunnel_id.is_set
	|| multicast_tunnel_interface_handler.is_set
	|| multicast_tunnel_lspvif.is_set
	|| multicast_tunnel_next_hop_information.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_encap_id.operation)
	|| is_set(multicast_mol_base_flags.operation)
	|| is_set(multicast_mol_flags.operation)
	|| is_set(multicast_mol_referance_count.operation)
	|| is_set(multicast_mpls_local_output_paths.operation)
	|| is_set(multicast_mpls_output_paths.operation)
	|| is_set(multicast_mpls_protocol_output_paths.operation)
	|| is_set(multicast_platform_data.operation)
	|| is_set(multicast_platform_data_length.operation)
	|| is_set(multicast_rpf_id.operation)
	|| is_set(multicast_tunnel_id.operation)
	|| is_set(multicast_tunnel_interface_handler.operation)
	|| is_set(multicast_tunnel_lspvif.operation)
	|| is_set(multicast_tunnel_next_hop_information.operation);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.operation)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.operation)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.operation)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.operation)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.operation)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.operation)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.operation)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.operation)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.operation)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.operation)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.operation)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.operation)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformation()
    :
    label_information_next_hop_protocol{YType::enumeration, "label-information-next-hop-protocol"},
    label_information_next_hop_string{YType::str, "label-information-next-hop-string"},
    label_information_next_hop_type{YType::enumeration, "label-information-next-hop-type"},
    label_information_path_index{YType::uint32, "label-information-path-index"},
    label_information_route_version{YType::uint64, "label-information-route-version"},
    label_information_time_in_milli_seconds{YType::uint64, "label-information-time-in-milli-seconds"},
    label_information_type{YType::uint32, "label-information-type"},
    local_label{YType::uint32, "local-label"},
    mpls_adjacency_flags{YType::uint32, "mpls-adjacency-flags"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_interface_string{YType::str, "outgoing-interface-string"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_label_string{YType::str, "outgoing-label-string"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>())
{
    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "fwdg";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::~LabelInformation()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_data() const
{
    return label_information_next_hop_protocol.is_set
	|| label_information_next_hop_string.is_set
	|| label_information_next_hop_type.is_set
	|| label_information_path_index.is_set
	|| label_information_route_version.is_set
	|| label_information_time_in_milli_seconds.is_set
	|| label_information_type.is_set
	|| local_label.is_set
	|| mpls_adjacency_flags.is_set
	|| outgoing_interface.is_set
	|| outgoing_interface_string.is_set
	|| outgoing_label.is_set
	|| outgoing_label_string.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(label_information_next_hop_protocol.operation)
	|| is_set(label_information_next_hop_string.operation)
	|| is_set(label_information_next_hop_type.operation)
	|| is_set(label_information_path_index.operation)
	|| is_set(label_information_route_version.operation)
	|| is_set(label_information_time_in_milli_seconds.operation)
	|| is_set(label_information_type.operation)
	|| is_set(local_label.operation)
	|| is_set(mpls_adjacency_flags.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_interface_string.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_label_string.operation)
	|| is_set(outgoing_physical_interface.operation)
	|| is_set(prefix_or_id.operation)
	|| is_set(tunnel_id_present.operation)
	|| is_set(tunnel_interface.operation)
	|| is_set(tx_bytes.operation)
	|| is_set(tx_packets.operation)
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.operation)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.operation)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.operation)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.operation)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.operation)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.operation)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.operation)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.operation)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.operation)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.operation)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.operation)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.operation)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.operation)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.operation)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.operation)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.operation)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-information-detail")
    {
        if(label_information_detail == nullptr)
        {
            label_information_detail = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>();
        }
        return label_information_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
    }
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    label_stack{YType::uint32, "label-stack"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "label-information-detail"; yang_parent_name = "label-information";
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return l3_mtu.is_set
	|| mac_size.is_set
	|| next_hop_interface.is_set
	|| next_hop_protocol.is_set
	|| next_hop_string.is_set
	|| status.is_set
	|| total_encapsulation_size.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(l3_mtu.operation)
	|| is_set(label_stack.operation)
	|| is_set(mac_size.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_protocol.operation)
	|| is_set(next_hop_string.operation)
	|| is_set(status.operation)
	|| is_set(total_encapsulation_size.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelInformationDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.operation)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.operation)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.operation)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.operation)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.operation)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());

    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
    }
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrDatabase()
    :
    frrdb_backup_interface_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>())
	,frrdb_protected_interface_table_summaries(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>())
	,frrdb_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>())
	,frrdb_tunnel_head_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>())
	,frrdb_tunnel_heads(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>())
	,frrdb_tunnel_midpoint_summary(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>())
	,frrdb_tunnel_midpoints(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>())
{
    frrdb_backup_interface_summaries->parent = this;

    frrdb_protected_interface_table_summaries->parent = this;

    frrdb_summary->parent = this;

    frrdb_tunnel_head_summary->parent = this;

    frrdb_tunnel_heads->parent = this;

    frrdb_tunnel_midpoint_summary->parent = this;

    frrdb_tunnel_midpoints->parent = this;

    yang_name = "frr-database"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::FrrDatabase::~FrrDatabase()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_data() const
{
    return (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_data())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_data())
	|| (frrdb_summary !=  nullptr && frrdb_summary->has_data())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_data())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_data())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_data())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::has_operation() const
{
    return is_set(operation)
	|| (frrdb_backup_interface_summaries !=  nullptr && frrdb_backup_interface_summaries->has_operation())
	|| (frrdb_protected_interface_table_summaries !=  nullptr && frrdb_protected_interface_table_summaries->has_operation())
	|| (frrdb_summary !=  nullptr && frrdb_summary->has_operation())
	|| (frrdb_tunnel_head_summary !=  nullptr && frrdb_tunnel_head_summary->has_operation())
	|| (frrdb_tunnel_heads !=  nullptr && frrdb_tunnel_heads->has_operation())
	|| (frrdb_tunnel_midpoint_summary !=  nullptr && frrdb_tunnel_midpoint_summary->has_operation())
	|| (frrdb_tunnel_midpoints !=  nullptr && frrdb_tunnel_midpoints->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-database";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrDatabase' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-backup-interface-summaries")
    {
        if(frrdb_backup_interface_summaries == nullptr)
        {
            frrdb_backup_interface_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries>();
        }
        return frrdb_backup_interface_summaries;
    }

    if(child_yang_name == "frrdb-protected-interface-table-summaries")
    {
        if(frrdb_protected_interface_table_summaries == nullptr)
        {
            frrdb_protected_interface_table_summaries = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries>();
        }
        return frrdb_protected_interface_table_summaries;
    }

    if(child_yang_name == "frrdb-summary")
    {
        if(frrdb_summary == nullptr)
        {
            frrdb_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary>();
        }
        return frrdb_summary;
    }

    if(child_yang_name == "frrdb-tunnel-head-summary")
    {
        if(frrdb_tunnel_head_summary == nullptr)
        {
            frrdb_tunnel_head_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary>();
        }
        return frrdb_tunnel_head_summary;
    }

    if(child_yang_name == "frrdb-tunnel-heads")
    {
        if(frrdb_tunnel_heads == nullptr)
        {
            frrdb_tunnel_heads = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads>();
        }
        return frrdb_tunnel_heads;
    }

    if(child_yang_name == "frrdb-tunnel-midpoint-summary")
    {
        if(frrdb_tunnel_midpoint_summary == nullptr)
        {
            frrdb_tunnel_midpoint_summary = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary>();
        }
        return frrdb_tunnel_midpoint_summary;
    }

    if(child_yang_name == "frrdb-tunnel-midpoints")
    {
        if(frrdb_tunnel_midpoints == nullptr)
        {
            frrdb_tunnel_midpoints = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints>();
        }
        return frrdb_tunnel_midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frrdb_backup_interface_summaries != nullptr)
    {
        children["frrdb-backup-interface-summaries"] = frrdb_backup_interface_summaries;
    }

    if(frrdb_protected_interface_table_summaries != nullptr)
    {
        children["frrdb-protected-interface-table-summaries"] = frrdb_protected_interface_table_summaries;
    }

    if(frrdb_summary != nullptr)
    {
        children["frrdb-summary"] = frrdb_summary;
    }

    if(frrdb_tunnel_head_summary != nullptr)
    {
        children["frrdb-tunnel-head-summary"] = frrdb_tunnel_head_summary;
    }

    if(frrdb_tunnel_heads != nullptr)
    {
        children["frrdb-tunnel-heads"] = frrdb_tunnel_heads;
    }

    if(frrdb_tunnel_midpoint_summary != nullptr)
    {
        children["frrdb-tunnel-midpoint-summary"] = frrdb_tunnel_midpoint_summary;
    }

    if(frrdb_tunnel_midpoints != nullptr)
    {
        children["frrdb-tunnel-midpoints"] = frrdb_tunnel_midpoints;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::FrrdbSummary()
    :
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-summary"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::~FrrdbSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_data() const
{
    return active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(other.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.operation)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "other")
    {
        other = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummaries()
{
    yang_name = "frrdb-protected-interface-table-summaries"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::~FrrdbProtectedInterfaceTableSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_data() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.size(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_protected_interface_table_summary.size(); index++)
    {
        if(frrdb_protected_interface_table_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summaries";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbProtectedInterfaceTableSummaries' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-protected-interface-table-summary")
    {
        for(auto const & c : frrdb_protected_interface_table_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary>();
        c->parent = this;
        frrdb_protected_interface_table_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_protected_interface_table_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::FrrdbProtectedInterfaceTableSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-protected-interface-table-summary"; yang_parent_name = "frrdb-protected-interface-table-summaries";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::~FrrdbProtectedInterfaceTableSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(active.operation)
	|| is_set(other.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-protected-interface-table-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbProtectedInterfaceTableSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.operation)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "other")
    {
        other = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::FrrdbTunnelMidpointSummary()
    :
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-tunnel-midpoint-summary"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::~FrrdbTunnelMidpointSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_data() const
{
    return active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(other.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelMidpointSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.operation)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "other")
    {
        other = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoints()
{
    yang_name = "frrdb-tunnel-midpoints"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::~FrrdbTunnelMidpoints()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_data() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.size(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_midpoint.size(); index++)
    {
        if(frrdb_tunnel_midpoint[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoints";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelMidpoints' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-midpoint")
    {
        for(auto const & c : frrdb_tunnel_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint>();
        c->parent = this;
        frrdb_tunnel_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_tunnel_midpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrdbTunnelMidpoint()
    :
    local_label{YType::uint32, "local-label"},
    frr_lable_string{YType::str, "frr-lable-string"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"}
    	,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-midpoint"; yang_parent_name = "frrdb-tunnel-midpoints";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::~FrrdbTunnelMidpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_data() const
{
    return local_label.is_set
	|| frr_lable_string.is_set
	|| outgoing_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label.operation)
	|| is_set(frr_lable_string.operation)
	|| is_set(outgoing_lable_string.operation)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-midpoint" <<"[local-label='" <<local_label <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelMidpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.operation)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.operation)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_db != nullptr)
    {
        children["frr-db"] = frr_db;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrDb()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-midpoint";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_data() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(entry_frr_state.operation)
	|| is_set(frr_interface_name.operation)
	|| is_set(frr_label.operation)
	|| is_set(frr_next_hop_ipv4_address.operation)
	|| is_set(input_label.operation)
	|| is_set(is_mldp_lsp.operation)
	|| is_set(is_multicast_tunnel.operation)
	|| is_set(multicast_tunnel_legs.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(tunnel_interface_name.operation)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrDb' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.operation)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.operation)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.operation)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.operation)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.operation)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.operation)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.operation)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        for(auto const & c : multicast_leg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg>();
        c->parent = this;
        multicast_leg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    for (auto const & c : multicast_leg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_prefix_length.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.operation)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(lspid.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::MulticastLeg()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_data() const
{
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_frr_state.operation)
	|| is_set(frr_interface_name.operation)
	|| is_set(frr_label.operation)
	|| is_set(frr_next_hop_ipv4_address.operation)
	|| is_set(input_label.operation)
	|| is_set(is_mldp_lsp.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(tunnel_interface_name.operation)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastLeg' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.operation)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.operation)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.operation)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.operation)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.operation)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_prefix_length.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.operation)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(lspid.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHeads()
{
    yang_name = "frrdb-tunnel-heads"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::~FrrdbTunnelHeads()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_data() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.size(); index++)
    {
        if(frrdb_tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<frrdb_tunnel_head.size(); index++)
    {
        if(frrdb_tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-heads";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelHeads' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-tunnel-head")
    {
        for(auto const & c : frrdb_tunnel_head)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead>();
        c->parent = this;
        frrdb_tunnel_head.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_tunnel_head)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrdbTunnelHead()
    :
    interface_name{YType::str, "interface-name"},
    frr_lable_string{YType::str, "frr-lable-string"},
    outgoing_lable_string{YType::str, "outgoing-lable-string"}
    	,
    frr_db(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>())
{
    frr_db->parent = this;

    yang_name = "frrdb-tunnel-head"; yang_parent_name = "frrdb-tunnel-heads";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::~FrrdbTunnelHead()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_data() const
{
    return interface_name.is_set
	|| frr_lable_string.is_set
	|| outgoing_lable_string.is_set
	|| (frr_db !=  nullptr && frr_db->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(frr_lable_string.operation)
	|| is_set(outgoing_lable_string.operation)
	|| (frr_db !=  nullptr && frr_db->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelHead' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_lable_string.is_set || is_set(frr_lable_string.operation)) leaf_name_data.push_back(frr_lable_string.get_name_leafdata());
    if (outgoing_lable_string.is_set || is_set(outgoing_lable_string.operation)) leaf_name_data.push_back(outgoing_lable_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-db")
    {
        if(frr_db == nullptr)
        {
            frr_db = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb>();
        }
        return frr_db;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_db != nullptr)
    {
        children["frr-db"] = frr_db;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "frr-lable-string")
    {
        frr_lable_string = value;
    }
    if(value_path == "outgoing-lable-string")
    {
        outgoing_lable_string = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrDb()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    is_multicast_tunnel{YType::boolean, "is-multicast-tunnel"},
    multicast_tunnel_legs{YType::uint32, "multicast-tunnel-legs"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "frr-db"; yang_parent_name = "frrdb-tunnel-head";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::~FrrDb()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_data() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_data())
            return true;
    }
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| is_multicast_tunnel.is_set
	|| multicast_tunnel_legs.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::has_operation() const
{
    for (std::size_t index=0; index<multicast_leg.size(); index++)
    {
        if(multicast_leg[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(entry_frr_state.operation)
	|| is_set(frr_interface_name.operation)
	|| is_set(frr_label.operation)
	|| is_set(frr_next_hop_ipv4_address.operation)
	|| is_set(input_label.operation)
	|| is_set(is_mldp_lsp.operation)
	|| is_set(is_multicast_tunnel.operation)
	|| is_set(multicast_tunnel_legs.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(tunnel_interface_name.operation)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-db";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrDb' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.operation)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.operation)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.operation)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.operation)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.operation)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (is_multicast_tunnel.is_set || is_set(is_multicast_tunnel.operation)) leaf_name_data.push_back(is_multicast_tunnel.get_name_leafdata());
    if (multicast_tunnel_legs.is_set || is_set(multicast_tunnel_legs.operation)) leaf_name_data.push_back(multicast_tunnel_legs.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId>();
        }
        return frr_entry_id;
    }

    if(child_yang_name == "multicast-leg")
    {
        for(auto const & c : multicast_leg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg>();
        c->parent = this;
        multicast_leg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    for (auto const & c : multicast_leg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
    }
    if(value_path == "is-multicast-tunnel")
    {
        is_multicast_tunnel = value;
    }
    if(value_path == "multicast-tunnel-legs")
    {
        multicast_tunnel_legs = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_prefix_length.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.operation)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(lspid.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::MulticastLeg()
    :
    entry_frr_state{YType::enumeration, "entry-frr-state"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_label{YType::uint32, "frr-label"},
    frr_next_hop_ipv4_address{YType::str, "frr-next-hop-ipv4-address"},
    input_label{YType::uint32, "input-label"},
    is_mldp_lsp{YType::boolean, "is-mldp-lsp"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
    	,
    frr_entry_id(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>())
{
    frr_entry_id->parent = this;

    yang_name = "multicast-leg"; yang_parent_name = "frr-db";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::~MulticastLeg()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_data() const
{
    return entry_frr_state.is_set
	|| frr_interface_name.is_set
	|| frr_label.is_set
	|| frr_next_hop_ipv4_address.is_set
	|| input_label.is_set
	|| is_mldp_lsp.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| tunnel_interface_name.is_set
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_frr_state.operation)
	|| is_set(frr_interface_name.operation)
	|| is_set(frr_label.operation)
	|| is_set(frr_next_hop_ipv4_address.operation)
	|| is_set(input_label.operation)
	|| is_set(is_mldp_lsp.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(tunnel_interface_name.operation)
	|| (frr_entry_id !=  nullptr && frr_entry_id->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-leg";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastLeg' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_frr_state.is_set || is_set(entry_frr_state.operation)) leaf_name_data.push_back(entry_frr_state.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.operation)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_label.is_set || is_set(frr_label.operation)) leaf_name_data.push_back(frr_label.get_name_leafdata());
    if (frr_next_hop_ipv4_address.is_set || is_set(frr_next_hop_ipv4_address.operation)) leaf_name_data.push_back(frr_next_hop_ipv4_address.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.operation)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_mldp_lsp.is_set || is_set(is_mldp_lsp.operation)) leaf_name_data.push_back(is_mldp_lsp.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-entry-id")
    {
        if(frr_entry_id == nullptr)
        {
            frr_entry_id = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId>();
        }
        return frr_entry_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_entry_id != nullptr)
    {
        children["frr-entry-id"] = frr_entry_id;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-frr-state")
    {
        entry_frr_state = value;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
    }
    if(value_path == "frr-label")
    {
        frr_label = value;
    }
    if(value_path == "frr-next-hop-ipv4-address")
    {
        frr_next_hop_ipv4_address = value;
    }
    if(value_path == "input-label")
    {
        input_label = value;
    }
    if(value_path == "is-mldp-lsp")
    {
        is_mldp_lsp = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::FrrEntryId()
    :
    role{YType::enumeration, "role"}
    	,
    head(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>())
	,midpoint(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>())
{
    head->parent = this;

    midpoint->parent = this;

    yang_name = "frr-entry-id"; yang_parent_name = "multicast-leg";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::~FrrEntryId()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_data() const
{
    return role.is_set
	|| (head !=  nullptr && head->has_data())
	|| (midpoint !=  nullptr && midpoint->has_data());
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (head !=  nullptr && head->has_operation())
	|| (midpoint !=  nullptr && midpoint->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-entry-id";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrEntryId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head>();
        }
        return head;
    }

    if(child_yang_name == "midpoint")
    {
        if(midpoint == nullptr)
        {
            midpoint = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint>();
        }
        return midpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(midpoint != nullptr)
    {
        children["midpoint"] = midpoint;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::Head()
    :
    destination_prefix{YType::str, "destination-prefix"},
    destination_prefix_length{YType::uint32, "destination-prefix-length"}
{
    yang_name = "head"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::~Head()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_data() const
{
    return destination_prefix.is_set
	|| destination_prefix_length.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_prefix_length.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Head' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_prefix_length.is_set || is_set(destination_prefix_length.operation)) leaf_name_data.push_back(destination_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-prefix-length")
    {
        destination_prefix_length = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::Midpoint()
    :
    lspid{YType::uint32, "lspid"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "midpoint"; yang_parent_name = "frr-entry-id";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::~Midpoint()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_data() const
{
    return lspid.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(lspid.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Midpoint' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::FrrdbTunnelHeadSummary()
    :
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-tunnel-head-summary"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::~FrrdbTunnelHeadSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_data() const
{
    return active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(other.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-tunnel-head-summary";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbTunnelHeadSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.operation)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "other")
    {
        other = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummaries()
{
    yang_name = "frrdb-backup-interface-summaries"; yang_parent_name = "frr-database";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::~FrrdbBackupInterfaceSummaries()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.size(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<frrdb_backup_interface_summary.size(); index++)
    {
        if(frrdb_backup_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summaries";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbBackupInterfaceSummaries' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrdb-backup-interface-summary")
    {
        for(auto const & c : frrdb_backup_interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary>();
        c->parent = this;
        frrdb_backup_interface_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrdb_backup_interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::FrrdbBackupInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    active{YType::uint32, "active"},
    other{YType::uint32, "other"},
    partial{YType::uint32, "partial"},
    ready{YType::uint32, "ready"}
{
    yang_name = "frrdb-backup-interface-summary"; yang_parent_name = "frrdb-backup-interface-summaries";
}

MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::~FrrdbBackupInterfaceSummary()
{
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| active.is_set
	|| other.is_set
	|| partial.is_set
	|| ready.is_set;
}

bool MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(active.operation)
	|| is_set(other.operation)
	|| is_set(partial.operation)
	|| is_set(ready.operation);
}

std::string MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrdb-backup-interface-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrdbBackupInterfaceSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (other.is_set || is_set(other.operation)) leaf_name_data.push_back(other.get_name_leafdata());
    if (partial.is_set || is_set(partial.operation)) leaf_name_data.push_back(partial.get_name_leafdata());
    if (ready.is_set || is_set(ready.operation)) leaf_name_data.push_back(ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "other")
    {
        other = value;
    }
    if(value_path == "partial")
    {
        partial = value;
    }
    if(value_path == "ready")
    {
        ready = value;
    }
}


}
}

