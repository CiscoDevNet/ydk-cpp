
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index{YType::uint8, "hash-index"},
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"}
{

    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_data() const
{
    return hash_index.is_set
	|| hash_index_is_valid.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index" || name == "hash-index-is-valid")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{

    yang_name = "label-information-detail"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
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
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "mac-size" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string" || name == "status" || name == "total-encapsulation-size" || name == "transmit-number-of-bytes-switched" || name == "transmit-number-of-packets-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "label-information-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{

    yang_name = "ldi-information"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
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

    yang_name = "multicast-information"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-encap-id" || name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-mpls-local-output-paths" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-platform-data" || name == "multicast-platform-data-length" || name == "multicast-rpf-id" || name == "multicast-tunnel-id" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-lspvif" || name == "multicast-tunnel-next-hop-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Informations()
{

    yang_name = "informations"; yang_parent_name = "label-fib"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
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

    yang_name = "information"; yang_parent_name = "informations"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(eos.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos.is_set || is_set(eos.yfilter)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos")
    {
        eos = value;
        eos.value_namespace = name_space;
        eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "eos")
    {
        eos.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information" || name == "ldi-information" || name == "multicast-information" || name == "afi-table-id" || name == "eos" || name == "eos-bit" || name == "hardware-information" || name == "label-value" || name == "ldi-flags" || name == "ldi-pointer" || name == "ldi-referance-count" || name == "ldi-type" || name == "leaf-flags" || name == "leaf-local-label" || name == "leaf-referance-count" || name == "leaf-time-in-milli-seconds" || name == "lspa-flags" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-ldi-type" || name == "lw-shared-ldi-pointer" || name == "multicast-label" || name == "path-list-flags" || name == "path-list-referance-count")
        return true;
    return false;
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
    outgoing_parent_interface{YType::str, "outgoing-parent-interface"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo>())
	,label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail>())
{
    exact_route_hash_info->parent = this;
    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
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
	|| outgoing_parent_interface.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data())
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_interface_string.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(outgoing_parent_interface.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation())
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.yfilter)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_parent_interface.is_set || is_set(outgoing_parent_interface.yfilter)) leaf_name_data.push_back(outgoing_parent_interface.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

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
    if(exact_route_hash_info != nullptr)
    {
        children["exact-route-hash-info"] = exact_route_hash_info;
    }

    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
        outgoing_interface_string.value_namespace = name_space;
        outgoing_interface_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface = value;
        outgoing_parent_interface.value_namespace = name_space;
        outgoing_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-route-hash-info" || name == "label-information-detail" || name == "label-information-next-hop-protocol" || name == "label-information-next-hop-string" || name == "label-information-next-hop-type" || name == "label-information-path-index" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds" || name == "label-information-type" || name == "local-label" || name == "mpls-adjacency-flags" || name == "outgoing-interface" || name == "outgoing-interface-string" || name == "outgoing-label" || name == "outgoing-label-string" || name == "outgoing-parent-interface" || name == "outgoing-physical-interface" || name == "prefix-or-id" || name == "tunnel-id-present" || name == "tunnel-interface" || name == "tx-bytes" || name == "tx-packets")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index{YType::uint8, "hash-index"},
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"}
{

    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_data() const
{
    return hash_index.is_set
	|| hash_index_is_valid.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index" || name == "hash-index-is-valid")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{

    yang_name = "label-information-detail"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
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
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "mac-size" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string" || name == "status" || name == "total-encapsulation-size" || name == "transmit-number-of-bytes-switched" || name == "transmit-number-of-packets-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "label-information-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{

    yang_name = "ldi-information"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
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

    yang_name = "multicast-information"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-encap-id" || name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-mpls-local-output-paths" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-platform-data" || name == "multicast-platform-data-length" || name == "multicast-rpf-id" || name == "multicast-tunnel-id" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-lspvif" || name == "multicast-tunnel-next-hop-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::LabelSecurity()
    :
    interfaces(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces>())
	,summary(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary>())
{
    interfaces->parent = this;
    summary->parent = this;

    yang_name = "label-security"; yang_parent_name = "label-fib"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "summary")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "label-security"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mld_enabled.yfilter)
	|| ydk::is_set(mld_supported.yfilter)
	|| ydk::is_set(multi_label_drops.yfilter)
	|| ydk::is_set(rpf_drops.yfilter)
	|| ydk::is_set(rpf_enabled.yfilter)
	|| ydk::is_set(rpf_supported.yfilter)
	|| ydk::is_set(rpfifh.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mld_enabled.is_set || is_set(mld_enabled.yfilter)) leaf_name_data.push_back(mld_enabled.get_name_leafdata());
    if (mld_supported.is_set || is_set(mld_supported.yfilter)) leaf_name_data.push_back(mld_supported.get_name_leafdata());
    if (multi_label_drops.is_set || is_set(multi_label_drops.yfilter)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.yfilter)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());
    if (rpf_enabled.is_set || is_set(rpf_enabled.yfilter)) leaf_name_data.push_back(rpf_enabled.get_name_leafdata());
    if (rpf_supported.is_set || is_set(rpf_supported.yfilter)) leaf_name_data.push_back(rpf_supported.get_name_leafdata());
    if (rpfifh.is_set || is_set(rpfifh.yfilter)) leaf_name_data.push_back(rpfifh.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled = value;
        mld_enabled.value_namespace = name_space;
        mld_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-supported")
    {
        mld_supported = value;
        mld_supported.value_namespace = name_space;
        mld_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
        multi_label_drops.value_namespace = name_space;
        multi_label_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
        rpf_drops.value_namespace = name_space;
        rpf_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled = value;
        rpf_enabled.value_namespace = name_space;
        rpf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported = value;
        rpf_supported.value_namespace = name_space;
        rpf_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfifh")
    {
        rpfifh = value;
        rpfifh.value_namespace = name_space;
        rpfifh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mld-enabled")
    {
        mld_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-supported")
    {
        mld_supported.yfilter = yfilter;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops.yfilter = yfilter;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops.yfilter = yfilter;
    }
    if(value_path == "rpf-enabled")
    {
        rpf_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-supported")
    {
        rpf_supported.yfilter = yfilter;
    }
    if(value_path == "rpfifh")
    {
        rpfifh.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "mld-enabled" || name == "mld-supported" || name == "multi-label-drops" || name == "rpf-drops" || name == "rpf-enabled" || name == "rpf-supported" || name == "rpfifh")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::Summary()
    :
    multi_label_drops{YType::uint64, "multi-label-drops"},
    rpf_drops{YType::uint64, "rpf-drops"}
{

    yang_name = "summary"; yang_parent_name = "label-security"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multi_label_drops.yfilter)
	|| ydk::is_set(rpf_drops.yfilter);
}

std::string MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_label_drops.is_set || is_set(multi_label_drops.yfilter)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (rpf_drops.is_set || is_set(rpf_drops.yfilter)) leaf_name_data.push_back(rpf_drops.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
        multi_label_drops.value_namespace = name_space;
        multi_label_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops = value;
        rpf_drops.value_namespace = name_space;
        rpf_drops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-label-drops")
    {
        multi_label_drops.yfilter = yfilter;
    }
    if(value_path == "rpf-drops")
    {
        rpf_drops.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-label-drops" || name == "rpf-drops")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::Tunnel()
    :
    forwarding_tunnels(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels>())
{
    forwarding_tunnels->parent = this;

    yang_name = "tunnel"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (forwarding_tunnels !=  nullptr && forwarding_tunnels->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-tunnels")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnels()
{

    yang_name = "forwarding-tunnels"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-tunnel")
        return true;
    return false;
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

    yang_name = "forwarding-tunnel"; yang_parent_name = "forwarding-tunnels"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (fwdg !=  nullptr && fwdg->has_operation())
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-tunnel" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdg" || name == "tunnel-info" || name == "interface-name")
        return true;
    return false;
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

    yang_name = "fwdg"; yang_parent_name = "forwarding-tunnel"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(afi_table_id.yfilter)
	|| ydk::is_set(eos_bit.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(ldi_flags.yfilter)
	|| ydk::is_set(ldi_pointer.yfilter)
	|| ydk::is_set(ldi_referance_count.yfilter)
	|| ydk::is_set(ldi_type.yfilter)
	|| ydk::is_set(leaf_flags.yfilter)
	|| ydk::is_set(leaf_local_label.yfilter)
	|| ydk::is_set(leaf_referance_count.yfilter)
	|| ydk::is_set(leaf_time_in_milli_seconds.yfilter)
	|| ydk::is_set(lspa_flags.yfilter)
	|| ydk::is_set(lw_ldi_pointer.yfilter)
	|| ydk::is_set(lw_ldi_refernace_count.yfilter)
	|| ydk::is_set(lw_ldi_type.yfilter)
	|| ydk::is_set(lw_shared_ldi_pointer.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(path_list_flags.yfilter)
	|| ydk::is_set(path_list_referance_count.yfilter)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.yfilter)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.yfilter)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.yfilter)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.yfilter)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.yfilter)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.yfilter)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.yfilter)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.yfilter)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.yfilter)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.yfilter)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.yfilter)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.yfilter)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.yfilter)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.yfilter)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.yfilter)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
        afi_table_id.value_namespace = name_space;
        afi_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
        eos_bit.value_namespace = name_space;
        eos_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
        ldi_flags.value_namespace = name_space;
        ldi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
        ldi_pointer.value_namespace = name_space;
        ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
        ldi_referance_count.value_namespace = name_space;
        ldi_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
        ldi_type.value_namespace = name_space;
        ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
        leaf_flags.value_namespace = name_space;
        leaf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
        leaf_local_label.value_namespace = name_space;
        leaf_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
        leaf_referance_count.value_namespace = name_space;
        leaf_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
        leaf_time_in_milli_seconds.value_namespace = name_space;
        leaf_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
        lspa_flags.value_namespace = name_space;
        lspa_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
        lw_ldi_pointer.value_namespace = name_space;
        lw_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
        lw_ldi_refernace_count.value_namespace = name_space;
        lw_ldi_refernace_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
        lw_ldi_type.value_namespace = name_space;
        lw_ldi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
        lw_shared_ldi_pointer.value_namespace = name_space;
        lw_shared_ldi_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
        path_list_flags.value_namespace = name_space;
        path_list_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
        path_list_referance_count.value_namespace = name_space;
        path_list_referance_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id.yfilter = yfilter;
    }
    if(value_path == "eos-bit")
    {
        eos_bit.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags.yfilter = yfilter;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count.yfilter = yfilter;
    }
    if(value_path == "ldi-type")
    {
        ldi_type.yfilter = yfilter;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags.yfilter = yfilter;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label.yfilter = yfilter;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count.yfilter = yfilter;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count.yfilter = yfilter;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type.yfilter = yfilter;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags.yfilter = yfilter;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-information" || name == "ldi-information" || name == "multicast-information" || name == "afi-table-id" || name == "eos-bit" || name == "hardware-information" || name == "ldi-flags" || name == "ldi-pointer" || name == "ldi-referance-count" || name == "ldi-type" || name == "leaf-flags" || name == "leaf-local-label" || name == "leaf-referance-count" || name == "leaf-time-in-milli-seconds" || name == "lspa-flags" || name == "lw-ldi-pointer" || name == "lw-ldi-refernace-count" || name == "lw-ldi-type" || name == "lw-shared-ldi-pointer" || name == "multicast-label" || name == "path-list-flags" || name == "path-list-referance-count")
        return true;
    return false;
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
    outgoing_parent_interface{YType::str, "outgoing-parent-interface"},
    outgoing_physical_interface{YType::str, "outgoing-physical-interface"},
    prefix_or_id{YType::str, "prefix-or-id"},
    tunnel_id_present{YType::boolean, "tunnel-id-present"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_packets{YType::uint64, "tx-packets"}
    	,
    exact_route_hash_info(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo>())
	,label_information_detail(std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail>())
{
    exact_route_hash_info->parent = this;
    label_information_detail->parent = this;

    yang_name = "label-information"; yang_parent_name = "fwdg"; is_top_level_class = false; has_list_ancestor = true;
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
	|| outgoing_parent_interface.is_set
	|| outgoing_physical_interface.is_set
	|| prefix_or_id.is_set
	|| tunnel_id_present.is_set
	|| tunnel_interface.is_set
	|| tx_bytes.is_set
	|| tx_packets.is_set
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_data())
	|| (label_information_detail !=  nullptr && label_information_detail->has_data());
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_information_next_hop_protocol.yfilter)
	|| ydk::is_set(label_information_next_hop_string.yfilter)
	|| ydk::is_set(label_information_next_hop_type.yfilter)
	|| ydk::is_set(label_information_path_index.yfilter)
	|| ydk::is_set(label_information_route_version.yfilter)
	|| ydk::is_set(label_information_time_in_milli_seconds.yfilter)
	|| ydk::is_set(label_information_type.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(mpls_adjacency_flags.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(outgoing_interface_string.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(outgoing_label_string.yfilter)
	|| ydk::is_set(outgoing_parent_interface.yfilter)
	|| ydk::is_set(outgoing_physical_interface.yfilter)
	|| ydk::is_set(prefix_or_id.yfilter)
	|| ydk::is_set(tunnel_id_present.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| (exact_route_hash_info !=  nullptr && exact_route_hash_info->has_operation())
	|| (label_information_detail !=  nullptr && label_information_detail->has_operation());
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_information_next_hop_protocol.is_set || is_set(label_information_next_hop_protocol.yfilter)) leaf_name_data.push_back(label_information_next_hop_protocol.get_name_leafdata());
    if (label_information_next_hop_string.is_set || is_set(label_information_next_hop_string.yfilter)) leaf_name_data.push_back(label_information_next_hop_string.get_name_leafdata());
    if (label_information_next_hop_type.is_set || is_set(label_information_next_hop_type.yfilter)) leaf_name_data.push_back(label_information_next_hop_type.get_name_leafdata());
    if (label_information_path_index.is_set || is_set(label_information_path_index.yfilter)) leaf_name_data.push_back(label_information_path_index.get_name_leafdata());
    if (label_information_route_version.is_set || is_set(label_information_route_version.yfilter)) leaf_name_data.push_back(label_information_route_version.get_name_leafdata());
    if (label_information_time_in_milli_seconds.is_set || is_set(label_information_time_in_milli_seconds.yfilter)) leaf_name_data.push_back(label_information_time_in_milli_seconds.get_name_leafdata());
    if (label_information_type.is_set || is_set(label_information_type.yfilter)) leaf_name_data.push_back(label_information_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (mpls_adjacency_flags.is_set || is_set(mpls_adjacency_flags.yfilter)) leaf_name_data.push_back(mpls_adjacency_flags.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_interface_string.is_set || is_set(outgoing_interface_string.yfilter)) leaf_name_data.push_back(outgoing_interface_string.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_label_string.is_set || is_set(outgoing_label_string.yfilter)) leaf_name_data.push_back(outgoing_label_string.get_name_leafdata());
    if (outgoing_parent_interface.is_set || is_set(outgoing_parent_interface.yfilter)) leaf_name_data.push_back(outgoing_parent_interface.get_name_leafdata());
    if (outgoing_physical_interface.is_set || is_set(outgoing_physical_interface.yfilter)) leaf_name_data.push_back(outgoing_physical_interface.get_name_leafdata());
    if (prefix_or_id.is_set || is_set(prefix_or_id.yfilter)) leaf_name_data.push_back(prefix_or_id.get_name_leafdata());
    if (tunnel_id_present.is_set || is_set(tunnel_id_present.yfilter)) leaf_name_data.push_back(tunnel_id_present.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exact-route-hash-info")
    {
        if(exact_route_hash_info == nullptr)
        {
            exact_route_hash_info = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo>();
        }
        return exact_route_hash_info;
    }

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
    if(exact_route_hash_info != nullptr)
    {
        children["exact-route-hash-info"] = exact_route_hash_info;
    }

    if(label_information_detail != nullptr)
    {
        children["label-information-detail"] = label_information_detail;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol = value;
        label_information_next_hop_protocol.value_namespace = name_space;
        label_information_next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string = value;
        label_information_next_hop_string.value_namespace = name_space;
        label_information_next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type = value;
        label_information_next_hop_type.value_namespace = name_space;
        label_information_next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index = value;
        label_information_path_index.value_namespace = name_space;
        label_information_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version = value;
        label_information_route_version.value_namespace = name_space;
        label_information_route_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds = value;
        label_information_time_in_milli_seconds.value_namespace = name_space;
        label_information_time_in_milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-information-type")
    {
        label_information_type = value;
        label_information_type.value_namespace = name_space;
        label_information_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags = value;
        mpls_adjacency_flags.value_namespace = name_space;
        mpls_adjacency_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string = value;
        outgoing_interface_string.value_namespace = name_space;
        outgoing_interface_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string = value;
        outgoing_label_string.value_namespace = name_space;
        outgoing_label_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface = value;
        outgoing_parent_interface.value_namespace = name_space;
        outgoing_parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface = value;
        outgoing_physical_interface.value_namespace = name_space;
        outgoing_physical_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id = value;
        prefix_or_id.value_namespace = name_space;
        prefix_or_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present = value;
        tunnel_id_present.value_namespace = name_space;
        tunnel_id_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-information-next-hop-protocol")
    {
        label_information_next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-string")
    {
        label_information_next_hop_string.yfilter = yfilter;
    }
    if(value_path == "label-information-next-hop-type")
    {
        label_information_next_hop_type.yfilter = yfilter;
    }
    if(value_path == "label-information-path-index")
    {
        label_information_path_index.yfilter = yfilter;
    }
    if(value_path == "label-information-route-version")
    {
        label_information_route_version.yfilter = yfilter;
    }
    if(value_path == "label-information-time-in-milli-seconds")
    {
        label_information_time_in_milli_seconds.yfilter = yfilter;
    }
    if(value_path == "label-information-type")
    {
        label_information_type.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-flags")
    {
        mpls_adjacency_flags.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-string")
    {
        outgoing_interface_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label-string")
    {
        outgoing_label_string.yfilter = yfilter;
    }
    if(value_path == "outgoing-parent-interface")
    {
        outgoing_parent_interface.yfilter = yfilter;
    }
    if(value_path == "outgoing-physical-interface")
    {
        outgoing_physical_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-or-id")
    {
        prefix_or_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-present")
    {
        tunnel_id_present.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-route-hash-info" || name == "label-information-detail" || name == "label-information-next-hop-protocol" || name == "label-information-next-hop-string" || name == "label-information-next-hop-type" || name == "label-information-path-index" || name == "label-information-route-version" || name == "label-information-time-in-milli-seconds" || name == "label-information-type" || name == "local-label" || name == "mpls-adjacency-flags" || name == "outgoing-interface" || name == "outgoing-interface-string" || name == "outgoing-label" || name == "outgoing-label-string" || name == "outgoing-parent-interface" || name == "outgoing-physical-interface" || name == "prefix-or-id" || name == "tunnel-id-present" || name == "tunnel-interface" || name == "tx-bytes" || name == "tx-packets")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::ExactRouteHashInfo()
    :
    hash_index{YType::uint8, "hash-index"},
    hash_index_is_valid{YType::boolean, "hash-index-is-valid"}
{

    yang_name = "exact-route-hash-info"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::~ExactRouteHashInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_data() const
{
    return hash_index.is_set
	|| hash_index_is_valid.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(hash_index_is_valid.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exact-route-hash-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (hash_index_is_valid.is_set || is_set(hash_index_is_valid.yfilter)) leaf_name_data.push_back(hash_index_is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid = value;
        hash_index_is_valid.value_namespace = name_space;
        hash_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "hash-index-is-valid")
    {
        hash_index_is_valid.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-index" || name == "hash-index-is-valid")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelInformationDetail()
    :
    l3_mtu{YType::uint32, "l3-mtu"},
    mac_size{YType::uint32, "mac-size"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_protocol{YType::enumeration, "next-hop-protocol"},
    next_hop_string{YType::str, "next-hop-string"},
    status{YType::int32, "status"},
    total_encapsulation_size{YType::uint32, "total-encapsulation-size"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{

    yang_name = "label-information-detail"; yang_parent_name = "label-information"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::~LabelInformationDetail()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
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
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(l3_mtu.yfilter)
	|| ydk::is_set(mac_size.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_protocol.yfilter)
	|| ydk::is_set(next_hop_string.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(total_encapsulation_size.yfilter)
	|| ydk::is_set(transmit_number_of_bytes_switched.yfilter)
	|| ydk::is_set(transmit_number_of_packets_switched.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-information-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3_mtu.is_set || is_set(l3_mtu.yfilter)) leaf_name_data.push_back(l3_mtu.get_name_leafdata());
    if (mac_size.is_set || is_set(mac_size.yfilter)) leaf_name_data.push_back(mac_size.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_protocol.is_set || is_set(next_hop_protocol.yfilter)) leaf_name_data.push_back(next_hop_protocol.get_name_leafdata());
    if (next_hop_string.is_set || is_set(next_hop_string.yfilter)) leaf_name_data.push_back(next_hop_string.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (total_encapsulation_size.is_set || is_set(total_encapsulation_size.yfilter)) leaf_name_data.push_back(total_encapsulation_size.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.yfilter)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu = value;
        l3_mtu.value_namespace = name_space;
        l3_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-size")
    {
        mac_size = value;
        mac_size.value_namespace = name_space;
        mac_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol = value;
        next_hop_protocol.value_namespace = name_space;
        next_hop_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string = value;
        next_hop_string.value_namespace = name_space;
        next_hop_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size = value;
        total_encapsulation_size.value_namespace = name_space;
        total_encapsulation_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
        transmit_number_of_bytes_switched.value_namespace = name_space;
        transmit_number_of_bytes_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
        transmit_number_of_packets_switched.value_namespace = name_space;
        transmit_number_of_packets_switched.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3-mtu")
    {
        l3_mtu.yfilter = yfilter;
    }
    if(value_path == "mac-size")
    {
        mac_size.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-protocol")
    {
        next_hop_protocol.yfilter = yfilter;
    }
    if(value_path == "next-hop-string")
    {
        next_hop_string.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "total-encapsulation-size")
    {
        total_encapsulation_size.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched.yfilter = yfilter;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "l3-mtu" || name == "mac-size" || name == "next-hop-interface" || name == "next-hop-protocol" || name == "next-hop-string" || name == "status" || name == "total-encapsulation-size" || name == "transmit-number-of-bytes-switched" || name == "transmit-number-of-packets-switched")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "label-information-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::~LabelStack()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::LdiInformation()
    :
    ldi_hardware_information{YType::str, "ldi-hardware-information"}
{

    yang_name = "ldi-information"; yang_parent_name = "fwdg"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ldi_hardware_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi_hardware_information.is_set || is_set(ldi_hardware_information.yfilter)) leaf_name_data.push_back(ldi_hardware_information.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information = value;
        ldi_hardware_information.value_namespace = name_space;
        ldi_hardware_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi-hardware-information")
    {
        ldi_hardware_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi-hardware-information")
        return true;
    return false;
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

    yang_name = "multicast-information"; yang_parent_name = "fwdg"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multicast_encap_id.yfilter)
	|| ydk::is_set(multicast_mol_base_flags.yfilter)
	|| ydk::is_set(multicast_mol_flags.yfilter)
	|| ydk::is_set(multicast_mol_referance_count.yfilter)
	|| ydk::is_set(multicast_mpls_local_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_output_paths.yfilter)
	|| ydk::is_set(multicast_mpls_protocol_output_paths.yfilter)
	|| ydk::is_set(multicast_platform_data.yfilter)
	|| ydk::is_set(multicast_platform_data_length.yfilter)
	|| ydk::is_set(multicast_rpf_id.yfilter)
	|| ydk::is_set(multicast_tunnel_id.yfilter)
	|| ydk::is_set(multicast_tunnel_interface_handler.yfilter)
	|| ydk::is_set(multicast_tunnel_lspvif.yfilter)
	|| ydk::is_set(multicast_tunnel_next_hop_information.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_encap_id.is_set || is_set(multicast_encap_id.yfilter)) leaf_name_data.push_back(multicast_encap_id.get_name_leafdata());
    if (multicast_mol_base_flags.is_set || is_set(multicast_mol_base_flags.yfilter)) leaf_name_data.push_back(multicast_mol_base_flags.get_name_leafdata());
    if (multicast_mol_flags.is_set || is_set(multicast_mol_flags.yfilter)) leaf_name_data.push_back(multicast_mol_flags.get_name_leafdata());
    if (multicast_mol_referance_count.is_set || is_set(multicast_mol_referance_count.yfilter)) leaf_name_data.push_back(multicast_mol_referance_count.get_name_leafdata());
    if (multicast_mpls_local_output_paths.is_set || is_set(multicast_mpls_local_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_local_output_paths.get_name_leafdata());
    if (multicast_mpls_output_paths.is_set || is_set(multicast_mpls_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_output_paths.get_name_leafdata());
    if (multicast_mpls_protocol_output_paths.is_set || is_set(multicast_mpls_protocol_output_paths.yfilter)) leaf_name_data.push_back(multicast_mpls_protocol_output_paths.get_name_leafdata());
    if (multicast_platform_data.is_set || is_set(multicast_platform_data.yfilter)) leaf_name_data.push_back(multicast_platform_data.get_name_leafdata());
    if (multicast_platform_data_length.is_set || is_set(multicast_platform_data_length.yfilter)) leaf_name_data.push_back(multicast_platform_data_length.get_name_leafdata());
    if (multicast_rpf_id.is_set || is_set(multicast_rpf_id.yfilter)) leaf_name_data.push_back(multicast_rpf_id.get_name_leafdata());
    if (multicast_tunnel_id.is_set || is_set(multicast_tunnel_id.yfilter)) leaf_name_data.push_back(multicast_tunnel_id.get_name_leafdata());
    if (multicast_tunnel_interface_handler.is_set || is_set(multicast_tunnel_interface_handler.yfilter)) leaf_name_data.push_back(multicast_tunnel_interface_handler.get_name_leafdata());
    if (multicast_tunnel_lspvif.is_set || is_set(multicast_tunnel_lspvif.yfilter)) leaf_name_data.push_back(multicast_tunnel_lspvif.get_name_leafdata());
    if (multicast_tunnel_next_hop_information.is_set || is_set(multicast_tunnel_next_hop_information.yfilter)) leaf_name_data.push_back(multicast_tunnel_next_hop_information.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id = value;
        multicast_encap_id.value_namespace = name_space;
        multicast_encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags = value;
        multicast_mol_base_flags.value_namespace = name_space;
        multicast_mol_base_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags = value;
        multicast_mol_flags.value_namespace = name_space;
        multicast_mol_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count = value;
        multicast_mol_referance_count.value_namespace = name_space;
        multicast_mol_referance_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths = value;
        multicast_mpls_local_output_paths.value_namespace = name_space;
        multicast_mpls_local_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths = value;
        multicast_mpls_output_paths.value_namespace = name_space;
        multicast_mpls_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths = value;
        multicast_mpls_protocol_output_paths.value_namespace = name_space;
        multicast_mpls_protocol_output_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data = value;
        multicast_platform_data.value_namespace = name_space;
        multicast_platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length = value;
        multicast_platform_data_length.value_namespace = name_space;
        multicast_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id = value;
        multicast_rpf_id.value_namespace = name_space;
        multicast_rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id = value;
        multicast_tunnel_id.value_namespace = name_space;
        multicast_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler = value;
        multicast_tunnel_interface_handler.value_namespace = name_space;
        multicast_tunnel_interface_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif = value;
        multicast_tunnel_lspvif.value_namespace = name_space;
        multicast_tunnel_lspvif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information = value;
        multicast_tunnel_next_hop_information.value_namespace = name_space;
        multicast_tunnel_next_hop_information.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-encap-id")
    {
        multicast_encap_id.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-base-flags")
    {
        multicast_mol_base_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-flags")
    {
        multicast_mol_flags.yfilter = yfilter;
    }
    if(value_path == "multicast-mol-referance-count")
    {
        multicast_mol_referance_count.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-local-output-paths")
    {
        multicast_mpls_local_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-output-paths")
    {
        multicast_mpls_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-mpls-protocol-output-paths")
    {
        multicast_mpls_protocol_output_paths.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data")
    {
        multicast_platform_data.yfilter = yfilter;
    }
    if(value_path == "multicast-platform-data-length")
    {
        multicast_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "multicast-rpf-id")
    {
        multicast_rpf_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-id")
    {
        multicast_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-interface-handler")
    {
        multicast_tunnel_interface_handler.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-lspvif")
    {
        multicast_tunnel_lspvif.yfilter = yfilter;
    }
    if(value_path == "multicast-tunnel-next-hop-information")
    {
        multicast_tunnel_next_hop_information.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-encap-id" || name == "multicast-mol-base-flags" || name == "multicast-mol-flags" || name == "multicast-mol-referance-count" || name == "multicast-mpls-local-output-paths" || name == "multicast-mpls-output-paths" || name == "multicast-mpls-protocol-output-paths" || name == "multicast-platform-data" || name == "multicast-platform-data-length" || name == "multicast-rpf-id" || name == "multicast-tunnel-id" || name == "multicast-tunnel-interface-handler" || name == "multicast-tunnel-lspvif" || name == "multicast-tunnel-next-hop-information")
        return true;
    return false;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::TunnelInfo()
    :
    tunnel_fwd_class{YType::uint8, "tunnel-fwd-class"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    tunnel_is_programmed_to_drop{YType::boolean, "tunnel-is-programmed-to-drop"},
    tunnel_is_srte{YType::boolean, "tunnel-is-srte"},
    tunnel_load_metric{YType::uint8, "tunnel-load-metric"},
    tunnel_local_label{YType::uint32, "tunnel-local-label"},
    tunnel_resolution_incomplete{YType::boolean, "tunnel-resolution-incomplete"},
    tunnel_resolution_inconsistent{YType::boolean, "tunnel-resolution-inconsistent"}
{

    yang_name = "tunnel-info"; yang_parent_name = "forwarding-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::~TunnelInfo()
{
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_data() const
{
    return tunnel_fwd_class.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(tunnel_fwd_class.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(tunnel_is_programmed_to_drop.yfilter)
	|| ydk::is_set(tunnel_is_srte.yfilter)
	|| ydk::is_set(tunnel_load_metric.yfilter)
	|| ydk::is_set(tunnel_local_label.yfilter)
	|| ydk::is_set(tunnel_resolution_incomplete.yfilter)
	|| ydk::is_set(tunnel_resolution_inconsistent.yfilter);
}

std::string MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_fwd_class.is_set || is_set(tunnel_fwd_class.yfilter)) leaf_name_data.push_back(tunnel_fwd_class.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (tunnel_is_programmed_to_drop.is_set || is_set(tunnel_is_programmed_to_drop.yfilter)) leaf_name_data.push_back(tunnel_is_programmed_to_drop.get_name_leafdata());
    if (tunnel_is_srte.is_set || is_set(tunnel_is_srte.yfilter)) leaf_name_data.push_back(tunnel_is_srte.get_name_leafdata());
    if (tunnel_load_metric.is_set || is_set(tunnel_load_metric.yfilter)) leaf_name_data.push_back(tunnel_load_metric.get_name_leafdata());
    if (tunnel_local_label.is_set || is_set(tunnel_local_label.yfilter)) leaf_name_data.push_back(tunnel_local_label.get_name_leafdata());
    if (tunnel_resolution_incomplete.is_set || is_set(tunnel_resolution_incomplete.yfilter)) leaf_name_data.push_back(tunnel_resolution_incomplete.get_name_leafdata());
    if (tunnel_resolution_inconsistent.is_set || is_set(tunnel_resolution_inconsistent.yfilter)) leaf_name_data.push_back(tunnel_resolution_inconsistent.get_name_leafdata());

    return leaf_name_data;

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

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class = value;
        tunnel_fwd_class.value_namespace = name_space;
        tunnel_fwd_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop = value;
        tunnel_is_programmed_to_drop.value_namespace = name_space;
        tunnel_is_programmed_to_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte = value;
        tunnel_is_srte.value_namespace = name_space;
        tunnel_is_srte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric = value;
        tunnel_load_metric.value_namespace = name_space;
        tunnel_load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label = value;
        tunnel_local_label.value_namespace = name_space;
        tunnel_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete = value;
        tunnel_resolution_incomplete.value_namespace = name_space;
        tunnel_resolution_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent = value;
        tunnel_resolution_inconsistent.value_namespace = name_space;
        tunnel_resolution_inconsistent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-fwd-class")
    {
        tunnel_fwd_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-programmed-to-drop")
    {
        tunnel_is_programmed_to_drop.yfilter = yfilter;
    }
    if(value_path == "tunnel-is-srte")
    {
        tunnel_is_srte.yfilter = yfilter;
    }
    if(value_path == "tunnel-load-metric")
    {
        tunnel_load_metric.yfilter = yfilter;
    }
    if(value_path == "tunnel-local-label")
    {
        tunnel_local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-resolution-incomplete")
    {
        tunnel_resolution_incomplete.yfilter = yfilter;
    }
    if(value_path == "tunnel-resolution-inconsistent")
    {
        tunnel_resolution_inconsistent.yfilter = yfilter;
    }
}

bool MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-fwd-class" || name == "tunnel-interface-name" || name == "tunnel-is-programmed-to-drop" || name == "tunnel-is-srte" || name == "tunnel-load-metric" || name == "tunnel-local-label" || name == "tunnel-resolution-incomplete" || name == "tunnel-resolution-inconsistent")
        return true;
    return false;
}


}
}

