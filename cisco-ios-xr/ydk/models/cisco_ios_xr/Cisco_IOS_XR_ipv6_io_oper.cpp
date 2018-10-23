
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_io_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_io_oper {

Ipv6Io::Ipv6Io()
    :
    nodes(std::make_shared<Ipv6Io::Nodes>())
{
    nodes->parent = this;

    yang_name = "ipv6-io"; yang_parent_name = "Cisco-IOS-XR-ipv6-io-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv6Io::~Ipv6Io()
{
}

bool Ipv6Io::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ipv6Io::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ipv6Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-oper:ipv6-io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ipv6Io::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Ipv6Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ipv6Io::clone_ptr() const
{
    return std::make_shared<Ipv6Io>();
}

std::string Ipv6Io::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Io::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Io::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6Io::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Ipv6Io::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "ipv6-io"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6Io::Nodes::~Nodes()
{
}

bool Ipv6Io::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Io::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Io::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-oper:ipv6-io/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Io::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Ipv6Io::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6Io::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Io::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Io::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ipv6Io::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    statistics(std::make_shared<Ipv6Io::Nodes::Node::Statistics>())
{
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6Io::Nodes::Node::~Node()
{
}

bool Ipv6Io::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv6Io::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv6Io::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-oper:ipv6-io/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Io::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv6Io::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Ipv6Io::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Io::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ipv6Io::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "node-name")
        return true;
    return false;
}

Ipv6Io::Nodes::Node::Statistics::Statistics()
    :
    traffic(std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic>())
{
    traffic->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6Io::Nodes::Node::Statistics::~Statistics()
{
}

bool Ipv6Io::Nodes::Node::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (traffic !=  nullptr && traffic->has_data());
}

bool Ipv6Io::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (traffic !=  nullptr && traffic->has_operation());
}

std::string Ipv6Io::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic>();
        }
        return traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic != nullptr)
    {
        _children["traffic"] = traffic;
    }

    return _children;
}

void Ipv6Io::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Io::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Io::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic")
        return true;
    return false;
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Traffic()
    :
    ipv6(std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6>())
    , icmp(std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp>())
    , ipv6_node_discovery(std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery>())
{
    ipv6->parent = this;
    icmp->parent = this;
    ipv6_node_discovery->parent = this;

    yang_name = "traffic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6Io::Nodes::Node::Statistics::Traffic::~Traffic()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (ipv6_node_discovery !=  nullptr && ipv6_node_discovery->has_data());
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (ipv6_node_discovery !=  nullptr && ipv6_node_discovery->has_operation());
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::Node::Statistics::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::Node::Statistics::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "ipv6-node-discovery")
    {
        if(ipv6_node_discovery == nullptr)
        {
            ipv6_node_discovery = std::make_shared<Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery>();
        }
        return ipv6_node_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::Node::Statistics::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(icmp != nullptr)
    {
        _children["icmp"] = icmp;
    }

    if(ipv6_node_discovery != nullptr)
    {
        _children["ipv6-node-discovery"] = ipv6_node_discovery;
    }

    return _children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "icmp" || name == "ipv6-node-discovery")
        return true;
    return false;
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::Ipv6()
    :
    total_packets{YType::uint32, "total-packets"},
    local_destination_packets{YType::uint32, "local-destination-packets"},
    format_errors{YType::uint32, "format-errors"},
    truncated_packets{YType::uint32, "truncated-packets"},
    hop_count_exceeded_packets{YType::uint32, "hop-count-exceeded-packets"},
    bad_source_address_packets{YType::uint32, "bad-source-address-packets"},
    bad_header_packets{YType::uint32, "bad-header-packets"},
    unknown_option_type_packets{YType::uint32, "unknown-option-type-packets"},
    unknown_protocol_packets{YType::uint32, "unknown-protocol-packets"},
    fragments{YType::uint32, "fragments"},
    reassembled_packets{YType::uint32, "reassembled-packets"},
    reassembly_timeouts{YType::uint32, "reassembly-timeouts"},
    reassembly_failures{YType::uint32, "reassembly-failures"},
    reassembly_maximum_drops{YType::uint32, "reassembly-maximum-drops"},
    generated_packets{YType::uint32, "generated-packets"},
    forwarded_packets{YType::uint32, "forwarded-packets"},
    source_routed_packets{YType::uint32, "source-routed-packets"},
    fragmented_packets{YType::uint32, "fragmented-packets"},
    fragment_count{YType::uint32, "fragment-count"},
    fragment_failures{YType::uint32, "fragment-failures"},
    no_route_packets{YType::uint32, "no-route-packets"},
    too_big_packets{YType::uint32, "too-big-packets"},
    received_multicast_packets{YType::uint32, "received-multicast-packets"},
    sent_multicast_packets{YType::uint32, "sent-multicast-packets"},
    miscellaneous_drops{YType::uint32, "miscellaneous-drops"},
    lisp_v4_encap_packets{YType::uint32, "lisp-v4-encap-packets"},
    lisp_v4_decap_packets{YType::uint32, "lisp-v4-decap-packets"},
    lisp_v6_encap_packets{YType::uint32, "lisp-v6-encap-packets"},
    lisp_v6_decap_packets{YType::uint32, "lisp-v6-decap-packets"},
    lisp_encap_errors{YType::uint32, "lisp-encap-errors"},
    lisp_decap_errors{YType::uint32, "lisp-decap-errors"}
{

    yang_name = "ipv6"; yang_parent_name = "traffic"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::~Ipv6()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return total_packets.is_set
	|| local_destination_packets.is_set
	|| format_errors.is_set
	|| truncated_packets.is_set
	|| hop_count_exceeded_packets.is_set
	|| bad_source_address_packets.is_set
	|| bad_header_packets.is_set
	|| unknown_option_type_packets.is_set
	|| unknown_protocol_packets.is_set
	|| fragments.is_set
	|| reassembled_packets.is_set
	|| reassembly_timeouts.is_set
	|| reassembly_failures.is_set
	|| reassembly_maximum_drops.is_set
	|| generated_packets.is_set
	|| forwarded_packets.is_set
	|| source_routed_packets.is_set
	|| fragmented_packets.is_set
	|| fragment_count.is_set
	|| fragment_failures.is_set
	|| no_route_packets.is_set
	|| too_big_packets.is_set
	|| received_multicast_packets.is_set
	|| sent_multicast_packets.is_set
	|| miscellaneous_drops.is_set
	|| lisp_v4_encap_packets.is_set
	|| lisp_v4_decap_packets.is_set
	|| lisp_v6_encap_packets.is_set
	|| lisp_v6_decap_packets.is_set
	|| lisp_encap_errors.is_set
	|| lisp_decap_errors.is_set;
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_packets.yfilter)
	|| ydk::is_set(local_destination_packets.yfilter)
	|| ydk::is_set(format_errors.yfilter)
	|| ydk::is_set(truncated_packets.yfilter)
	|| ydk::is_set(hop_count_exceeded_packets.yfilter)
	|| ydk::is_set(bad_source_address_packets.yfilter)
	|| ydk::is_set(bad_header_packets.yfilter)
	|| ydk::is_set(unknown_option_type_packets.yfilter)
	|| ydk::is_set(unknown_protocol_packets.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(reassembled_packets.yfilter)
	|| ydk::is_set(reassembly_timeouts.yfilter)
	|| ydk::is_set(reassembly_failures.yfilter)
	|| ydk::is_set(reassembly_maximum_drops.yfilter)
	|| ydk::is_set(generated_packets.yfilter)
	|| ydk::is_set(forwarded_packets.yfilter)
	|| ydk::is_set(source_routed_packets.yfilter)
	|| ydk::is_set(fragmented_packets.yfilter)
	|| ydk::is_set(fragment_count.yfilter)
	|| ydk::is_set(fragment_failures.yfilter)
	|| ydk::is_set(no_route_packets.yfilter)
	|| ydk::is_set(too_big_packets.yfilter)
	|| ydk::is_set(received_multicast_packets.yfilter)
	|| ydk::is_set(sent_multicast_packets.yfilter)
	|| ydk::is_set(miscellaneous_drops.yfilter)
	|| ydk::is_set(lisp_v4_encap_packets.yfilter)
	|| ydk::is_set(lisp_v4_decap_packets.yfilter)
	|| ydk::is_set(lisp_v6_encap_packets.yfilter)
	|| ydk::is_set(lisp_v6_decap_packets.yfilter)
	|| ydk::is_set(lisp_encap_errors.yfilter)
	|| ydk::is_set(lisp_decap_errors.yfilter);
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_packets.is_set || is_set(total_packets.yfilter)) leaf_name_data.push_back(total_packets.get_name_leafdata());
    if (local_destination_packets.is_set || is_set(local_destination_packets.yfilter)) leaf_name_data.push_back(local_destination_packets.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.yfilter)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (truncated_packets.is_set || is_set(truncated_packets.yfilter)) leaf_name_data.push_back(truncated_packets.get_name_leafdata());
    if (hop_count_exceeded_packets.is_set || is_set(hop_count_exceeded_packets.yfilter)) leaf_name_data.push_back(hop_count_exceeded_packets.get_name_leafdata());
    if (bad_source_address_packets.is_set || is_set(bad_source_address_packets.yfilter)) leaf_name_data.push_back(bad_source_address_packets.get_name_leafdata());
    if (bad_header_packets.is_set || is_set(bad_header_packets.yfilter)) leaf_name_data.push_back(bad_header_packets.get_name_leafdata());
    if (unknown_option_type_packets.is_set || is_set(unknown_option_type_packets.yfilter)) leaf_name_data.push_back(unknown_option_type_packets.get_name_leafdata());
    if (unknown_protocol_packets.is_set || is_set(unknown_protocol_packets.yfilter)) leaf_name_data.push_back(unknown_protocol_packets.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (reassembled_packets.is_set || is_set(reassembled_packets.yfilter)) leaf_name_data.push_back(reassembled_packets.get_name_leafdata());
    if (reassembly_timeouts.is_set || is_set(reassembly_timeouts.yfilter)) leaf_name_data.push_back(reassembly_timeouts.get_name_leafdata());
    if (reassembly_failures.is_set || is_set(reassembly_failures.yfilter)) leaf_name_data.push_back(reassembly_failures.get_name_leafdata());
    if (reassembly_maximum_drops.is_set || is_set(reassembly_maximum_drops.yfilter)) leaf_name_data.push_back(reassembly_maximum_drops.get_name_leafdata());
    if (generated_packets.is_set || is_set(generated_packets.yfilter)) leaf_name_data.push_back(generated_packets.get_name_leafdata());
    if (forwarded_packets.is_set || is_set(forwarded_packets.yfilter)) leaf_name_data.push_back(forwarded_packets.get_name_leafdata());
    if (source_routed_packets.is_set || is_set(source_routed_packets.yfilter)) leaf_name_data.push_back(source_routed_packets.get_name_leafdata());
    if (fragmented_packets.is_set || is_set(fragmented_packets.yfilter)) leaf_name_data.push_back(fragmented_packets.get_name_leafdata());
    if (fragment_count.is_set || is_set(fragment_count.yfilter)) leaf_name_data.push_back(fragment_count.get_name_leafdata());
    if (fragment_failures.is_set || is_set(fragment_failures.yfilter)) leaf_name_data.push_back(fragment_failures.get_name_leafdata());
    if (no_route_packets.is_set || is_set(no_route_packets.yfilter)) leaf_name_data.push_back(no_route_packets.get_name_leafdata());
    if (too_big_packets.is_set || is_set(too_big_packets.yfilter)) leaf_name_data.push_back(too_big_packets.get_name_leafdata());
    if (received_multicast_packets.is_set || is_set(received_multicast_packets.yfilter)) leaf_name_data.push_back(received_multicast_packets.get_name_leafdata());
    if (sent_multicast_packets.is_set || is_set(sent_multicast_packets.yfilter)) leaf_name_data.push_back(sent_multicast_packets.get_name_leafdata());
    if (miscellaneous_drops.is_set || is_set(miscellaneous_drops.yfilter)) leaf_name_data.push_back(miscellaneous_drops.get_name_leafdata());
    if (lisp_v4_encap_packets.is_set || is_set(lisp_v4_encap_packets.yfilter)) leaf_name_data.push_back(lisp_v4_encap_packets.get_name_leafdata());
    if (lisp_v4_decap_packets.is_set || is_set(lisp_v4_decap_packets.yfilter)) leaf_name_data.push_back(lisp_v4_decap_packets.get_name_leafdata());
    if (lisp_v6_encap_packets.is_set || is_set(lisp_v6_encap_packets.yfilter)) leaf_name_data.push_back(lisp_v6_encap_packets.get_name_leafdata());
    if (lisp_v6_decap_packets.is_set || is_set(lisp_v6_decap_packets.yfilter)) leaf_name_data.push_back(lisp_v6_decap_packets.get_name_leafdata());
    if (lisp_encap_errors.is_set || is_set(lisp_encap_errors.yfilter)) leaf_name_data.push_back(lisp_encap_errors.get_name_leafdata());
    if (lisp_decap_errors.is_set || is_set(lisp_decap_errors.yfilter)) leaf_name_data.push_back(lisp_decap_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-packets")
    {
        total_packets = value;
        total_packets.value_namespace = name_space;
        total_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-destination-packets")
    {
        local_destination_packets = value;
        local_destination_packets.value_namespace = name_space;
        local_destination_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
        format_errors.value_namespace = name_space;
        format_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-packets")
    {
        truncated_packets = value;
        truncated_packets.value_namespace = name_space;
        truncated_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count-exceeded-packets")
    {
        hop_count_exceeded_packets = value;
        hop_count_exceeded_packets.value_namespace = name_space;
        hop_count_exceeded_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-source-address-packets")
    {
        bad_source_address_packets = value;
        bad_source_address_packets.value_namespace = name_space;
        bad_source_address_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-header-packets")
    {
        bad_header_packets = value;
        bad_header_packets.value_namespace = name_space;
        bad_header_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-option-type-packets")
    {
        unknown_option_type_packets = value;
        unknown_option_type_packets.value_namespace = name_space;
        unknown_option_type_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets")
    {
        unknown_protocol_packets = value;
        unknown_protocol_packets.value_namespace = name_space;
        unknown_protocol_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembled-packets")
    {
        reassembled_packets = value;
        reassembled_packets.value_namespace = name_space;
        reassembled_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembly-timeouts")
    {
        reassembly_timeouts = value;
        reassembly_timeouts.value_namespace = name_space;
        reassembly_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembly-failures")
    {
        reassembly_failures = value;
        reassembly_failures.value_namespace = name_space;
        reassembly_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembly-maximum-drops")
    {
        reassembly_maximum_drops = value;
        reassembly_maximum_drops.value_namespace = name_space;
        reassembly_maximum_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generated-packets")
    {
        generated_packets = value;
        generated_packets.value_namespace = name_space;
        generated_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarded-packets")
    {
        forwarded_packets = value;
        forwarded_packets.value_namespace = name_space;
        forwarded_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-routed-packets")
    {
        source_routed_packets = value;
        source_routed_packets.value_namespace = name_space;
        source_routed_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmented-packets")
    {
        fragmented_packets = value;
        fragmented_packets.value_namespace = name_space;
        fragmented_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-count")
    {
        fragment_count = value;
        fragment_count.value_namespace = name_space;
        fragment_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-failures")
    {
        fragment_failures = value;
        fragment_failures.value_namespace = name_space;
        fragment_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-packets")
    {
        no_route_packets = value;
        no_route_packets.value_namespace = name_space;
        no_route_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-big-packets")
    {
        too_big_packets = value;
        too_big_packets.value_namespace = name_space;
        too_big_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-multicast-packets")
    {
        received_multicast_packets = value;
        received_multicast_packets.value_namespace = name_space;
        received_multicast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-multicast-packets")
    {
        sent_multicast_packets = value;
        sent_multicast_packets.value_namespace = name_space;
        sent_multicast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miscellaneous-drops")
    {
        miscellaneous_drops = value;
        miscellaneous_drops.value_namespace = name_space;
        miscellaneous_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v4-encap-packets")
    {
        lisp_v4_encap_packets = value;
        lisp_v4_encap_packets.value_namespace = name_space;
        lisp_v4_encap_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v4-decap-packets")
    {
        lisp_v4_decap_packets = value;
        lisp_v4_decap_packets.value_namespace = name_space;
        lisp_v4_decap_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v6-encap-packets")
    {
        lisp_v6_encap_packets = value;
        lisp_v6_encap_packets.value_namespace = name_space;
        lisp_v6_encap_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-v6-decap-packets")
    {
        lisp_v6_decap_packets = value;
        lisp_v6_decap_packets.value_namespace = name_space;
        lisp_v6_decap_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-encap-errors")
    {
        lisp_encap_errors = value;
        lisp_encap_errors.value_namespace = name_space;
        lisp_encap_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-decap-errors")
    {
        lisp_decap_errors = value;
        lisp_decap_errors.value_namespace = name_space;
        lisp_decap_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-packets")
    {
        total_packets.yfilter = yfilter;
    }
    if(value_path == "local-destination-packets")
    {
        local_destination_packets.yfilter = yfilter;
    }
    if(value_path == "format-errors")
    {
        format_errors.yfilter = yfilter;
    }
    if(value_path == "truncated-packets")
    {
        truncated_packets.yfilter = yfilter;
    }
    if(value_path == "hop-count-exceeded-packets")
    {
        hop_count_exceeded_packets.yfilter = yfilter;
    }
    if(value_path == "bad-source-address-packets")
    {
        bad_source_address_packets.yfilter = yfilter;
    }
    if(value_path == "bad-header-packets")
    {
        bad_header_packets.yfilter = yfilter;
    }
    if(value_path == "unknown-option-type-packets")
    {
        unknown_option_type_packets.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets")
    {
        unknown_protocol_packets.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "reassembled-packets")
    {
        reassembled_packets.yfilter = yfilter;
    }
    if(value_path == "reassembly-timeouts")
    {
        reassembly_timeouts.yfilter = yfilter;
    }
    if(value_path == "reassembly-failures")
    {
        reassembly_failures.yfilter = yfilter;
    }
    if(value_path == "reassembly-maximum-drops")
    {
        reassembly_maximum_drops.yfilter = yfilter;
    }
    if(value_path == "generated-packets")
    {
        generated_packets.yfilter = yfilter;
    }
    if(value_path == "forwarded-packets")
    {
        forwarded_packets.yfilter = yfilter;
    }
    if(value_path == "source-routed-packets")
    {
        source_routed_packets.yfilter = yfilter;
    }
    if(value_path == "fragmented-packets")
    {
        fragmented_packets.yfilter = yfilter;
    }
    if(value_path == "fragment-count")
    {
        fragment_count.yfilter = yfilter;
    }
    if(value_path == "fragment-failures")
    {
        fragment_failures.yfilter = yfilter;
    }
    if(value_path == "no-route-packets")
    {
        no_route_packets.yfilter = yfilter;
    }
    if(value_path == "too-big-packets")
    {
        too_big_packets.yfilter = yfilter;
    }
    if(value_path == "received-multicast-packets")
    {
        received_multicast_packets.yfilter = yfilter;
    }
    if(value_path == "sent-multicast-packets")
    {
        sent_multicast_packets.yfilter = yfilter;
    }
    if(value_path == "miscellaneous-drops")
    {
        miscellaneous_drops.yfilter = yfilter;
    }
    if(value_path == "lisp-v4-encap-packets")
    {
        lisp_v4_encap_packets.yfilter = yfilter;
    }
    if(value_path == "lisp-v4-decap-packets")
    {
        lisp_v4_decap_packets.yfilter = yfilter;
    }
    if(value_path == "lisp-v6-encap-packets")
    {
        lisp_v6_encap_packets.yfilter = yfilter;
    }
    if(value_path == "lisp-v6-decap-packets")
    {
        lisp_v6_decap_packets.yfilter = yfilter;
    }
    if(value_path == "lisp-encap-errors")
    {
        lisp_encap_errors.yfilter = yfilter;
    }
    if(value_path == "lisp-decap-errors")
    {
        lisp_decap_errors.yfilter = yfilter;
    }
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-packets" || name == "local-destination-packets" || name == "format-errors" || name == "truncated-packets" || name == "hop-count-exceeded-packets" || name == "bad-source-address-packets" || name == "bad-header-packets" || name == "unknown-option-type-packets" || name == "unknown-protocol-packets" || name == "fragments" || name == "reassembled-packets" || name == "reassembly-timeouts" || name == "reassembly-failures" || name == "reassembly-maximum-drops" || name == "generated-packets" || name == "forwarded-packets" || name == "source-routed-packets" || name == "fragmented-packets" || name == "fragment-count" || name == "fragment-failures" || name == "no-route-packets" || name == "too-big-packets" || name == "received-multicast-packets" || name == "sent-multicast-packets" || name == "miscellaneous-drops" || name == "lisp-v4-encap-packets" || name == "lisp-v4-decap-packets" || name == "lisp-v6-encap-packets" || name == "lisp-v6-decap-packets" || name == "lisp-encap-errors" || name == "lisp-decap-errors")
        return true;
    return false;
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::Icmp()
    :
    total_messages{YType::uint32, "total-messages"},
    too_short_error_messages{YType::uint32, "too-short-error-messages"},
    checksum_error_messages{YType::uint32, "checksum-error-messages"},
    unknown_error_type_messages{YType::uint32, "unknown-error-type-messages"},
    output_messages{YType::uint32, "output-messages"},
    sent_rate_limited_packets{YType::uint32, "sent-rate-limited-packets"},
    sent_unreachable_routing_messages{YType::uint32, "sent-unreachable-routing-messages"},
    sent_unreachable_admin_messages{YType::uint32, "sent-unreachable-admin-messages"},
    sent_unreachable_neighbor_messages{YType::uint32, "sent-unreachable-neighbor-messages"},
    sent_unreachable_address_messages{YType::uint32, "sent-unreachable-address-messages"},
    sent_unreachable_port_messages{YType::uint32, "sent-unreachable-port-messages"},
    received_unreachable_routing_messages{YType::uint32, "received-unreachable-routing-messages"},
    received_unreachable_admin_messages{YType::uint32, "received-unreachable-admin-messages"},
    received_unreachable_neighbor_messages{YType::uint32, "received-unreachable-neighbor-messages"},
    received_unreachable_address_messages{YType::uint32, "received-unreachable-address-messages"},
    received_unreachable_port_messages{YType::uint32, "received-unreachable-port-messages"},
    sent_hop_count_expired_messages{YType::uint32, "sent-hop-count-expired-messages"},
    sent_reassembly_timeouts{YType::uint32, "sent-reassembly-timeouts"},
    received_hop_count_expired_messages{YType::uint32, "received-hop-count-expired-messages"},
    received_reassembly_timeouts{YType::uint32, "received-reassembly-timeouts"},
    sent_too_big_messages{YType::uint32, "sent-too-big-messages"},
    received_too_big_messages{YType::uint32, "received-too-big-messages"},
    sent_parameter_error_messages{YType::uint32, "sent-parameter-error-messages"},
    sent_parameter_header_messages{YType::uint32, "sent-parameter-header-messages"},
    sent_parameter_option_messages{YType::uint32, "sent-parameter-option-messages"},
    received_parameter_error_messages{YType::uint32, "received-parameter-error-messages"},
    received_parameter_header_messages{YType::uint32, "received-parameter-header-messages"},
    received_parameter_option_messages{YType::uint32, "received-parameter-option-messages"},
    sent_echo_request_messages{YType::uint32, "sent-echo-request-messages"},
    sent_echo_reply_messages{YType::uint32, "sent-echo-reply-messages"},
    received_echo_request_messages{YType::uint32, "received-echo-request-messages"},
    received_echo_reply_messages{YType::uint32, "received-echo-reply-messages"},
    sent_unknown_timeout_messages{YType::uint32, "sent-unknown-timeout-messages"},
    received_unknown_timeout_messages{YType::uint32, "received-unknown-timeout-messages"},
    sent_parameter_unknown_type_messages{YType::uint32, "sent-parameter-unknown-type-messages"},
    received_parameter_unknown_type_messages{YType::uint32, "received-parameter-unknown-type-messages"},
    sent_unreachable_unknown_type_messages{YType::uint32, "sent-unreachable-unknown-type-messages"},
    received_unreachable_unknown_type_messages{YType::uint32, "received-unreachable-unknown-type-messages"}
{

    yang_name = "icmp"; yang_parent_name = "traffic"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::~Icmp()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return total_messages.is_set
	|| too_short_error_messages.is_set
	|| checksum_error_messages.is_set
	|| unknown_error_type_messages.is_set
	|| output_messages.is_set
	|| sent_rate_limited_packets.is_set
	|| sent_unreachable_routing_messages.is_set
	|| sent_unreachable_admin_messages.is_set
	|| sent_unreachable_neighbor_messages.is_set
	|| sent_unreachable_address_messages.is_set
	|| sent_unreachable_port_messages.is_set
	|| received_unreachable_routing_messages.is_set
	|| received_unreachable_admin_messages.is_set
	|| received_unreachable_neighbor_messages.is_set
	|| received_unreachable_address_messages.is_set
	|| received_unreachable_port_messages.is_set
	|| sent_hop_count_expired_messages.is_set
	|| sent_reassembly_timeouts.is_set
	|| received_hop_count_expired_messages.is_set
	|| received_reassembly_timeouts.is_set
	|| sent_too_big_messages.is_set
	|| received_too_big_messages.is_set
	|| sent_parameter_error_messages.is_set
	|| sent_parameter_header_messages.is_set
	|| sent_parameter_option_messages.is_set
	|| received_parameter_error_messages.is_set
	|| received_parameter_header_messages.is_set
	|| received_parameter_option_messages.is_set
	|| sent_echo_request_messages.is_set
	|| sent_echo_reply_messages.is_set
	|| received_echo_request_messages.is_set
	|| received_echo_reply_messages.is_set
	|| sent_unknown_timeout_messages.is_set
	|| received_unknown_timeout_messages.is_set
	|| sent_parameter_unknown_type_messages.is_set
	|| received_parameter_unknown_type_messages.is_set
	|| sent_unreachable_unknown_type_messages.is_set
	|| received_unreachable_unknown_type_messages.is_set;
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_messages.yfilter)
	|| ydk::is_set(too_short_error_messages.yfilter)
	|| ydk::is_set(checksum_error_messages.yfilter)
	|| ydk::is_set(unknown_error_type_messages.yfilter)
	|| ydk::is_set(output_messages.yfilter)
	|| ydk::is_set(sent_rate_limited_packets.yfilter)
	|| ydk::is_set(sent_unreachable_routing_messages.yfilter)
	|| ydk::is_set(sent_unreachable_admin_messages.yfilter)
	|| ydk::is_set(sent_unreachable_neighbor_messages.yfilter)
	|| ydk::is_set(sent_unreachable_address_messages.yfilter)
	|| ydk::is_set(sent_unreachable_port_messages.yfilter)
	|| ydk::is_set(received_unreachable_routing_messages.yfilter)
	|| ydk::is_set(received_unreachable_admin_messages.yfilter)
	|| ydk::is_set(received_unreachable_neighbor_messages.yfilter)
	|| ydk::is_set(received_unreachable_address_messages.yfilter)
	|| ydk::is_set(received_unreachable_port_messages.yfilter)
	|| ydk::is_set(sent_hop_count_expired_messages.yfilter)
	|| ydk::is_set(sent_reassembly_timeouts.yfilter)
	|| ydk::is_set(received_hop_count_expired_messages.yfilter)
	|| ydk::is_set(received_reassembly_timeouts.yfilter)
	|| ydk::is_set(sent_too_big_messages.yfilter)
	|| ydk::is_set(received_too_big_messages.yfilter)
	|| ydk::is_set(sent_parameter_error_messages.yfilter)
	|| ydk::is_set(sent_parameter_header_messages.yfilter)
	|| ydk::is_set(sent_parameter_option_messages.yfilter)
	|| ydk::is_set(received_parameter_error_messages.yfilter)
	|| ydk::is_set(received_parameter_header_messages.yfilter)
	|| ydk::is_set(received_parameter_option_messages.yfilter)
	|| ydk::is_set(sent_echo_request_messages.yfilter)
	|| ydk::is_set(sent_echo_reply_messages.yfilter)
	|| ydk::is_set(received_echo_request_messages.yfilter)
	|| ydk::is_set(received_echo_reply_messages.yfilter)
	|| ydk::is_set(sent_unknown_timeout_messages.yfilter)
	|| ydk::is_set(received_unknown_timeout_messages.yfilter)
	|| ydk::is_set(sent_parameter_unknown_type_messages.yfilter)
	|| ydk::is_set(received_parameter_unknown_type_messages.yfilter)
	|| ydk::is_set(sent_unreachable_unknown_type_messages.yfilter)
	|| ydk::is_set(received_unreachable_unknown_type_messages.yfilter);
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_messages.is_set || is_set(total_messages.yfilter)) leaf_name_data.push_back(total_messages.get_name_leafdata());
    if (too_short_error_messages.is_set || is_set(too_short_error_messages.yfilter)) leaf_name_data.push_back(too_short_error_messages.get_name_leafdata());
    if (checksum_error_messages.is_set || is_set(checksum_error_messages.yfilter)) leaf_name_data.push_back(checksum_error_messages.get_name_leafdata());
    if (unknown_error_type_messages.is_set || is_set(unknown_error_type_messages.yfilter)) leaf_name_data.push_back(unknown_error_type_messages.get_name_leafdata());
    if (output_messages.is_set || is_set(output_messages.yfilter)) leaf_name_data.push_back(output_messages.get_name_leafdata());
    if (sent_rate_limited_packets.is_set || is_set(sent_rate_limited_packets.yfilter)) leaf_name_data.push_back(sent_rate_limited_packets.get_name_leafdata());
    if (sent_unreachable_routing_messages.is_set || is_set(sent_unreachable_routing_messages.yfilter)) leaf_name_data.push_back(sent_unreachable_routing_messages.get_name_leafdata());
    if (sent_unreachable_admin_messages.is_set || is_set(sent_unreachable_admin_messages.yfilter)) leaf_name_data.push_back(sent_unreachable_admin_messages.get_name_leafdata());
    if (sent_unreachable_neighbor_messages.is_set || is_set(sent_unreachable_neighbor_messages.yfilter)) leaf_name_data.push_back(sent_unreachable_neighbor_messages.get_name_leafdata());
    if (sent_unreachable_address_messages.is_set || is_set(sent_unreachable_address_messages.yfilter)) leaf_name_data.push_back(sent_unreachable_address_messages.get_name_leafdata());
    if (sent_unreachable_port_messages.is_set || is_set(sent_unreachable_port_messages.yfilter)) leaf_name_data.push_back(sent_unreachable_port_messages.get_name_leafdata());
    if (received_unreachable_routing_messages.is_set || is_set(received_unreachable_routing_messages.yfilter)) leaf_name_data.push_back(received_unreachable_routing_messages.get_name_leafdata());
    if (received_unreachable_admin_messages.is_set || is_set(received_unreachable_admin_messages.yfilter)) leaf_name_data.push_back(received_unreachable_admin_messages.get_name_leafdata());
    if (received_unreachable_neighbor_messages.is_set || is_set(received_unreachable_neighbor_messages.yfilter)) leaf_name_data.push_back(received_unreachable_neighbor_messages.get_name_leafdata());
    if (received_unreachable_address_messages.is_set || is_set(received_unreachable_address_messages.yfilter)) leaf_name_data.push_back(received_unreachable_address_messages.get_name_leafdata());
    if (received_unreachable_port_messages.is_set || is_set(received_unreachable_port_messages.yfilter)) leaf_name_data.push_back(received_unreachable_port_messages.get_name_leafdata());
    if (sent_hop_count_expired_messages.is_set || is_set(sent_hop_count_expired_messages.yfilter)) leaf_name_data.push_back(sent_hop_count_expired_messages.get_name_leafdata());
    if (sent_reassembly_timeouts.is_set || is_set(sent_reassembly_timeouts.yfilter)) leaf_name_data.push_back(sent_reassembly_timeouts.get_name_leafdata());
    if (received_hop_count_expired_messages.is_set || is_set(received_hop_count_expired_messages.yfilter)) leaf_name_data.push_back(received_hop_count_expired_messages.get_name_leafdata());
    if (received_reassembly_timeouts.is_set || is_set(received_reassembly_timeouts.yfilter)) leaf_name_data.push_back(received_reassembly_timeouts.get_name_leafdata());
    if (sent_too_big_messages.is_set || is_set(sent_too_big_messages.yfilter)) leaf_name_data.push_back(sent_too_big_messages.get_name_leafdata());
    if (received_too_big_messages.is_set || is_set(received_too_big_messages.yfilter)) leaf_name_data.push_back(received_too_big_messages.get_name_leafdata());
    if (sent_parameter_error_messages.is_set || is_set(sent_parameter_error_messages.yfilter)) leaf_name_data.push_back(sent_parameter_error_messages.get_name_leafdata());
    if (sent_parameter_header_messages.is_set || is_set(sent_parameter_header_messages.yfilter)) leaf_name_data.push_back(sent_parameter_header_messages.get_name_leafdata());
    if (sent_parameter_option_messages.is_set || is_set(sent_parameter_option_messages.yfilter)) leaf_name_data.push_back(sent_parameter_option_messages.get_name_leafdata());
    if (received_parameter_error_messages.is_set || is_set(received_parameter_error_messages.yfilter)) leaf_name_data.push_back(received_parameter_error_messages.get_name_leafdata());
    if (received_parameter_header_messages.is_set || is_set(received_parameter_header_messages.yfilter)) leaf_name_data.push_back(received_parameter_header_messages.get_name_leafdata());
    if (received_parameter_option_messages.is_set || is_set(received_parameter_option_messages.yfilter)) leaf_name_data.push_back(received_parameter_option_messages.get_name_leafdata());
    if (sent_echo_request_messages.is_set || is_set(sent_echo_request_messages.yfilter)) leaf_name_data.push_back(sent_echo_request_messages.get_name_leafdata());
    if (sent_echo_reply_messages.is_set || is_set(sent_echo_reply_messages.yfilter)) leaf_name_data.push_back(sent_echo_reply_messages.get_name_leafdata());
    if (received_echo_request_messages.is_set || is_set(received_echo_request_messages.yfilter)) leaf_name_data.push_back(received_echo_request_messages.get_name_leafdata());
    if (received_echo_reply_messages.is_set || is_set(received_echo_reply_messages.yfilter)) leaf_name_data.push_back(received_echo_reply_messages.get_name_leafdata());
    if (sent_unknown_timeout_messages.is_set || is_set(sent_unknown_timeout_messages.yfilter)) leaf_name_data.push_back(sent_unknown_timeout_messages.get_name_leafdata());
    if (received_unknown_timeout_messages.is_set || is_set(received_unknown_timeout_messages.yfilter)) leaf_name_data.push_back(received_unknown_timeout_messages.get_name_leafdata());
    if (sent_parameter_unknown_type_messages.is_set || is_set(sent_parameter_unknown_type_messages.yfilter)) leaf_name_data.push_back(sent_parameter_unknown_type_messages.get_name_leafdata());
    if (received_parameter_unknown_type_messages.is_set || is_set(received_parameter_unknown_type_messages.yfilter)) leaf_name_data.push_back(received_parameter_unknown_type_messages.get_name_leafdata());
    if (sent_unreachable_unknown_type_messages.is_set || is_set(sent_unreachable_unknown_type_messages.yfilter)) leaf_name_data.push_back(sent_unreachable_unknown_type_messages.get_name_leafdata());
    if (received_unreachable_unknown_type_messages.is_set || is_set(received_unreachable_unknown_type_messages.yfilter)) leaf_name_data.push_back(received_unreachable_unknown_type_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-messages")
    {
        total_messages = value;
        total_messages.value_namespace = name_space;
        total_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-short-error-messages")
    {
        too_short_error_messages = value;
        too_short_error_messages.value_namespace = name_space;
        too_short_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-error-messages")
    {
        checksum_error_messages = value;
        checksum_error_messages.value_namespace = name_space;
        checksum_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-error-type-messages")
    {
        unknown_error_type_messages = value;
        unknown_error_type_messages.value_namespace = name_space;
        unknown_error_type_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-messages")
    {
        output_messages = value;
        output_messages.value_namespace = name_space;
        output_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-rate-limited-packets")
    {
        sent_rate_limited_packets = value;
        sent_rate_limited_packets.value_namespace = name_space;
        sent_rate_limited_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unreachable-routing-messages")
    {
        sent_unreachable_routing_messages = value;
        sent_unreachable_routing_messages.value_namespace = name_space;
        sent_unreachable_routing_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unreachable-admin-messages")
    {
        sent_unreachable_admin_messages = value;
        sent_unreachable_admin_messages.value_namespace = name_space;
        sent_unreachable_admin_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unreachable-neighbor-messages")
    {
        sent_unreachable_neighbor_messages = value;
        sent_unreachable_neighbor_messages.value_namespace = name_space;
        sent_unreachable_neighbor_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unreachable-address-messages")
    {
        sent_unreachable_address_messages = value;
        sent_unreachable_address_messages.value_namespace = name_space;
        sent_unreachable_address_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unreachable-port-messages")
    {
        sent_unreachable_port_messages = value;
        sent_unreachable_port_messages.value_namespace = name_space;
        sent_unreachable_port_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unreachable-routing-messages")
    {
        received_unreachable_routing_messages = value;
        received_unreachable_routing_messages.value_namespace = name_space;
        received_unreachable_routing_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unreachable-admin-messages")
    {
        received_unreachable_admin_messages = value;
        received_unreachable_admin_messages.value_namespace = name_space;
        received_unreachable_admin_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unreachable-neighbor-messages")
    {
        received_unreachable_neighbor_messages = value;
        received_unreachable_neighbor_messages.value_namespace = name_space;
        received_unreachable_neighbor_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unreachable-address-messages")
    {
        received_unreachable_address_messages = value;
        received_unreachable_address_messages.value_namespace = name_space;
        received_unreachable_address_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unreachable-port-messages")
    {
        received_unreachable_port_messages = value;
        received_unreachable_port_messages.value_namespace = name_space;
        received_unreachable_port_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-hop-count-expired-messages")
    {
        sent_hop_count_expired_messages = value;
        sent_hop_count_expired_messages.value_namespace = name_space;
        sent_hop_count_expired_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-reassembly-timeouts")
    {
        sent_reassembly_timeouts = value;
        sent_reassembly_timeouts.value_namespace = name_space;
        sent_reassembly_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-hop-count-expired-messages")
    {
        received_hop_count_expired_messages = value;
        received_hop_count_expired_messages.value_namespace = name_space;
        received_hop_count_expired_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-reassembly-timeouts")
    {
        received_reassembly_timeouts = value;
        received_reassembly_timeouts.value_namespace = name_space;
        received_reassembly_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-too-big-messages")
    {
        sent_too_big_messages = value;
        sent_too_big_messages.value_namespace = name_space;
        sent_too_big_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-too-big-messages")
    {
        received_too_big_messages = value;
        received_too_big_messages.value_namespace = name_space;
        received_too_big_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-parameter-error-messages")
    {
        sent_parameter_error_messages = value;
        sent_parameter_error_messages.value_namespace = name_space;
        sent_parameter_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-parameter-header-messages")
    {
        sent_parameter_header_messages = value;
        sent_parameter_header_messages.value_namespace = name_space;
        sent_parameter_header_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-parameter-option-messages")
    {
        sent_parameter_option_messages = value;
        sent_parameter_option_messages.value_namespace = name_space;
        sent_parameter_option_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-parameter-error-messages")
    {
        received_parameter_error_messages = value;
        received_parameter_error_messages.value_namespace = name_space;
        received_parameter_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-parameter-header-messages")
    {
        received_parameter_header_messages = value;
        received_parameter_header_messages.value_namespace = name_space;
        received_parameter_header_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-parameter-option-messages")
    {
        received_parameter_option_messages = value;
        received_parameter_option_messages.value_namespace = name_space;
        received_parameter_option_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-echo-request-messages")
    {
        sent_echo_request_messages = value;
        sent_echo_request_messages.value_namespace = name_space;
        sent_echo_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-echo-reply-messages")
    {
        sent_echo_reply_messages = value;
        sent_echo_reply_messages.value_namespace = name_space;
        sent_echo_reply_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-echo-request-messages")
    {
        received_echo_request_messages = value;
        received_echo_request_messages.value_namespace = name_space;
        received_echo_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-echo-reply-messages")
    {
        received_echo_reply_messages = value;
        received_echo_reply_messages.value_namespace = name_space;
        received_echo_reply_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unknown-timeout-messages")
    {
        sent_unknown_timeout_messages = value;
        sent_unknown_timeout_messages.value_namespace = name_space;
        sent_unknown_timeout_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unknown-timeout-messages")
    {
        received_unknown_timeout_messages = value;
        received_unknown_timeout_messages.value_namespace = name_space;
        received_unknown_timeout_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-parameter-unknown-type-messages")
    {
        sent_parameter_unknown_type_messages = value;
        sent_parameter_unknown_type_messages.value_namespace = name_space;
        sent_parameter_unknown_type_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-parameter-unknown-type-messages")
    {
        received_parameter_unknown_type_messages = value;
        received_parameter_unknown_type_messages.value_namespace = name_space;
        received_parameter_unknown_type_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unreachable-unknown-type-messages")
    {
        sent_unreachable_unknown_type_messages = value;
        sent_unreachable_unknown_type_messages.value_namespace = name_space;
        sent_unreachable_unknown_type_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unreachable-unknown-type-messages")
    {
        received_unreachable_unknown_type_messages = value;
        received_unreachable_unknown_type_messages.value_namespace = name_space;
        received_unreachable_unknown_type_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-messages")
    {
        total_messages.yfilter = yfilter;
    }
    if(value_path == "too-short-error-messages")
    {
        too_short_error_messages.yfilter = yfilter;
    }
    if(value_path == "checksum-error-messages")
    {
        checksum_error_messages.yfilter = yfilter;
    }
    if(value_path == "unknown-error-type-messages")
    {
        unknown_error_type_messages.yfilter = yfilter;
    }
    if(value_path == "output-messages")
    {
        output_messages.yfilter = yfilter;
    }
    if(value_path == "sent-rate-limited-packets")
    {
        sent_rate_limited_packets.yfilter = yfilter;
    }
    if(value_path == "sent-unreachable-routing-messages")
    {
        sent_unreachable_routing_messages.yfilter = yfilter;
    }
    if(value_path == "sent-unreachable-admin-messages")
    {
        sent_unreachable_admin_messages.yfilter = yfilter;
    }
    if(value_path == "sent-unreachable-neighbor-messages")
    {
        sent_unreachable_neighbor_messages.yfilter = yfilter;
    }
    if(value_path == "sent-unreachable-address-messages")
    {
        sent_unreachable_address_messages.yfilter = yfilter;
    }
    if(value_path == "sent-unreachable-port-messages")
    {
        sent_unreachable_port_messages.yfilter = yfilter;
    }
    if(value_path == "received-unreachable-routing-messages")
    {
        received_unreachable_routing_messages.yfilter = yfilter;
    }
    if(value_path == "received-unreachable-admin-messages")
    {
        received_unreachable_admin_messages.yfilter = yfilter;
    }
    if(value_path == "received-unreachable-neighbor-messages")
    {
        received_unreachable_neighbor_messages.yfilter = yfilter;
    }
    if(value_path == "received-unreachable-address-messages")
    {
        received_unreachable_address_messages.yfilter = yfilter;
    }
    if(value_path == "received-unreachable-port-messages")
    {
        received_unreachable_port_messages.yfilter = yfilter;
    }
    if(value_path == "sent-hop-count-expired-messages")
    {
        sent_hop_count_expired_messages.yfilter = yfilter;
    }
    if(value_path == "sent-reassembly-timeouts")
    {
        sent_reassembly_timeouts.yfilter = yfilter;
    }
    if(value_path == "received-hop-count-expired-messages")
    {
        received_hop_count_expired_messages.yfilter = yfilter;
    }
    if(value_path == "received-reassembly-timeouts")
    {
        received_reassembly_timeouts.yfilter = yfilter;
    }
    if(value_path == "sent-too-big-messages")
    {
        sent_too_big_messages.yfilter = yfilter;
    }
    if(value_path == "received-too-big-messages")
    {
        received_too_big_messages.yfilter = yfilter;
    }
    if(value_path == "sent-parameter-error-messages")
    {
        sent_parameter_error_messages.yfilter = yfilter;
    }
    if(value_path == "sent-parameter-header-messages")
    {
        sent_parameter_header_messages.yfilter = yfilter;
    }
    if(value_path == "sent-parameter-option-messages")
    {
        sent_parameter_option_messages.yfilter = yfilter;
    }
    if(value_path == "received-parameter-error-messages")
    {
        received_parameter_error_messages.yfilter = yfilter;
    }
    if(value_path == "received-parameter-header-messages")
    {
        received_parameter_header_messages.yfilter = yfilter;
    }
    if(value_path == "received-parameter-option-messages")
    {
        received_parameter_option_messages.yfilter = yfilter;
    }
    if(value_path == "sent-echo-request-messages")
    {
        sent_echo_request_messages.yfilter = yfilter;
    }
    if(value_path == "sent-echo-reply-messages")
    {
        sent_echo_reply_messages.yfilter = yfilter;
    }
    if(value_path == "received-echo-request-messages")
    {
        received_echo_request_messages.yfilter = yfilter;
    }
    if(value_path == "received-echo-reply-messages")
    {
        received_echo_reply_messages.yfilter = yfilter;
    }
    if(value_path == "sent-unknown-timeout-messages")
    {
        sent_unknown_timeout_messages.yfilter = yfilter;
    }
    if(value_path == "received-unknown-timeout-messages")
    {
        received_unknown_timeout_messages.yfilter = yfilter;
    }
    if(value_path == "sent-parameter-unknown-type-messages")
    {
        sent_parameter_unknown_type_messages.yfilter = yfilter;
    }
    if(value_path == "received-parameter-unknown-type-messages")
    {
        received_parameter_unknown_type_messages.yfilter = yfilter;
    }
    if(value_path == "sent-unreachable-unknown-type-messages")
    {
        sent_unreachable_unknown_type_messages.yfilter = yfilter;
    }
    if(value_path == "received-unreachable-unknown-type-messages")
    {
        received_unreachable_unknown_type_messages.yfilter = yfilter;
    }
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-messages" || name == "too-short-error-messages" || name == "checksum-error-messages" || name == "unknown-error-type-messages" || name == "output-messages" || name == "sent-rate-limited-packets" || name == "sent-unreachable-routing-messages" || name == "sent-unreachable-admin-messages" || name == "sent-unreachable-neighbor-messages" || name == "sent-unreachable-address-messages" || name == "sent-unreachable-port-messages" || name == "received-unreachable-routing-messages" || name == "received-unreachable-admin-messages" || name == "received-unreachable-neighbor-messages" || name == "received-unreachable-address-messages" || name == "received-unreachable-port-messages" || name == "sent-hop-count-expired-messages" || name == "sent-reassembly-timeouts" || name == "received-hop-count-expired-messages" || name == "received-reassembly-timeouts" || name == "sent-too-big-messages" || name == "received-too-big-messages" || name == "sent-parameter-error-messages" || name == "sent-parameter-header-messages" || name == "sent-parameter-option-messages" || name == "received-parameter-error-messages" || name == "received-parameter-header-messages" || name == "received-parameter-option-messages" || name == "sent-echo-request-messages" || name == "sent-echo-reply-messages" || name == "received-echo-request-messages" || name == "received-echo-reply-messages" || name == "sent-unknown-timeout-messages" || name == "received-unknown-timeout-messages" || name == "sent-parameter-unknown-type-messages" || name == "received-parameter-unknown-type-messages" || name == "sent-unreachable-unknown-type-messages" || name == "received-unreachable-unknown-type-messages")
        return true;
    return false;
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::Ipv6NodeDiscovery()
    :
    sent_router_solicitation_messages{YType::uint32, "sent-router-solicitation-messages"},
    sent_router_advertisement_messages{YType::uint32, "sent-router-advertisement-messages"},
    sent_neighbor_solicitation_messages{YType::uint32, "sent-neighbor-solicitation-messages"},
    sent_neighbor_advertisement_messages{YType::uint32, "sent-neighbor-advertisement-messages"},
    sent_redirect_messages{YType::uint32, "sent-redirect-messages"},
    received_router_solicitation_messages{YType::uint32, "received-router-solicitation-messages"},
    received_router_advertisement_messages{YType::uint32, "received-router-advertisement-messages"},
    received_neighbor_solicitation_messages{YType::uint32, "received-neighbor-solicitation-messages"},
    received_neighbor_advertisement_messages{YType::uint32, "received-neighbor-advertisement-messages"},
    received_redirect_messages{YType::uint32, "received-redirect-messages"}
{

    yang_name = "ipv6-node-discovery"; yang_parent_name = "traffic"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::~Ipv6NodeDiscovery()
{
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return sent_router_solicitation_messages.is_set
	|| sent_router_advertisement_messages.is_set
	|| sent_neighbor_solicitation_messages.is_set
	|| sent_neighbor_advertisement_messages.is_set
	|| sent_redirect_messages.is_set
	|| received_router_solicitation_messages.is_set
	|| received_router_advertisement_messages.is_set
	|| received_neighbor_solicitation_messages.is_set
	|| received_neighbor_advertisement_messages.is_set
	|| received_redirect_messages.is_set;
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_router_solicitation_messages.yfilter)
	|| ydk::is_set(sent_router_advertisement_messages.yfilter)
	|| ydk::is_set(sent_neighbor_solicitation_messages.yfilter)
	|| ydk::is_set(sent_neighbor_advertisement_messages.yfilter)
	|| ydk::is_set(sent_redirect_messages.yfilter)
	|| ydk::is_set(received_router_solicitation_messages.yfilter)
	|| ydk::is_set(received_router_advertisement_messages.yfilter)
	|| ydk::is_set(received_neighbor_solicitation_messages.yfilter)
	|| ydk::is_set(received_neighbor_advertisement_messages.yfilter)
	|| ydk::is_set(received_redirect_messages.yfilter);
}

std::string Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-node-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_router_solicitation_messages.is_set || is_set(sent_router_solicitation_messages.yfilter)) leaf_name_data.push_back(sent_router_solicitation_messages.get_name_leafdata());
    if (sent_router_advertisement_messages.is_set || is_set(sent_router_advertisement_messages.yfilter)) leaf_name_data.push_back(sent_router_advertisement_messages.get_name_leafdata());
    if (sent_neighbor_solicitation_messages.is_set || is_set(sent_neighbor_solicitation_messages.yfilter)) leaf_name_data.push_back(sent_neighbor_solicitation_messages.get_name_leafdata());
    if (sent_neighbor_advertisement_messages.is_set || is_set(sent_neighbor_advertisement_messages.yfilter)) leaf_name_data.push_back(sent_neighbor_advertisement_messages.get_name_leafdata());
    if (sent_redirect_messages.is_set || is_set(sent_redirect_messages.yfilter)) leaf_name_data.push_back(sent_redirect_messages.get_name_leafdata());
    if (received_router_solicitation_messages.is_set || is_set(received_router_solicitation_messages.yfilter)) leaf_name_data.push_back(received_router_solicitation_messages.get_name_leafdata());
    if (received_router_advertisement_messages.is_set || is_set(received_router_advertisement_messages.yfilter)) leaf_name_data.push_back(received_router_advertisement_messages.get_name_leafdata());
    if (received_neighbor_solicitation_messages.is_set || is_set(received_neighbor_solicitation_messages.yfilter)) leaf_name_data.push_back(received_neighbor_solicitation_messages.get_name_leafdata());
    if (received_neighbor_advertisement_messages.is_set || is_set(received_neighbor_advertisement_messages.yfilter)) leaf_name_data.push_back(received_neighbor_advertisement_messages.get_name_leafdata());
    if (received_redirect_messages.is_set || is_set(received_redirect_messages.yfilter)) leaf_name_data.push_back(received_redirect_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-router-solicitation-messages")
    {
        sent_router_solicitation_messages = value;
        sent_router_solicitation_messages.value_namespace = name_space;
        sent_router_solicitation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-router-advertisement-messages")
    {
        sent_router_advertisement_messages = value;
        sent_router_advertisement_messages.value_namespace = name_space;
        sent_router_advertisement_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-neighbor-solicitation-messages")
    {
        sent_neighbor_solicitation_messages = value;
        sent_neighbor_solicitation_messages.value_namespace = name_space;
        sent_neighbor_solicitation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-neighbor-advertisement-messages")
    {
        sent_neighbor_advertisement_messages = value;
        sent_neighbor_advertisement_messages.value_namespace = name_space;
        sent_neighbor_advertisement_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-redirect-messages")
    {
        sent_redirect_messages = value;
        sent_redirect_messages.value_namespace = name_space;
        sent_redirect_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-router-solicitation-messages")
    {
        received_router_solicitation_messages = value;
        received_router_solicitation_messages.value_namespace = name_space;
        received_router_solicitation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-router-advertisement-messages")
    {
        received_router_advertisement_messages = value;
        received_router_advertisement_messages.value_namespace = name_space;
        received_router_advertisement_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-neighbor-solicitation-messages")
    {
        received_neighbor_solicitation_messages = value;
        received_neighbor_solicitation_messages.value_namespace = name_space;
        received_neighbor_solicitation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-neighbor-advertisement-messages")
    {
        received_neighbor_advertisement_messages = value;
        received_neighbor_advertisement_messages.value_namespace = name_space;
        received_neighbor_advertisement_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-redirect-messages")
    {
        received_redirect_messages = value;
        received_redirect_messages.value_namespace = name_space;
        received_redirect_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-router-solicitation-messages")
    {
        sent_router_solicitation_messages.yfilter = yfilter;
    }
    if(value_path == "sent-router-advertisement-messages")
    {
        sent_router_advertisement_messages.yfilter = yfilter;
    }
    if(value_path == "sent-neighbor-solicitation-messages")
    {
        sent_neighbor_solicitation_messages.yfilter = yfilter;
    }
    if(value_path == "sent-neighbor-advertisement-messages")
    {
        sent_neighbor_advertisement_messages.yfilter = yfilter;
    }
    if(value_path == "sent-redirect-messages")
    {
        sent_redirect_messages.yfilter = yfilter;
    }
    if(value_path == "received-router-solicitation-messages")
    {
        received_router_solicitation_messages.yfilter = yfilter;
    }
    if(value_path == "received-router-advertisement-messages")
    {
        received_router_advertisement_messages.yfilter = yfilter;
    }
    if(value_path == "received-neighbor-solicitation-messages")
    {
        received_neighbor_solicitation_messages.yfilter = yfilter;
    }
    if(value_path == "received-neighbor-advertisement-messages")
    {
        received_neighbor_advertisement_messages.yfilter = yfilter;
    }
    if(value_path == "received-redirect-messages")
    {
        received_redirect_messages.yfilter = yfilter;
    }
}

bool Ipv6Io::Nodes::Node::Statistics::Traffic::Ipv6NodeDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-router-solicitation-messages" || name == "sent-router-advertisement-messages" || name == "sent-neighbor-solicitation-messages" || name == "sent-neighbor-advertisement-messages" || name == "sent-redirect-messages" || name == "received-router-solicitation-messages" || name == "received-router-advertisement-messages" || name == "received-neighbor-solicitation-messages" || name == "received-neighbor-advertisement-messages" || name == "received-redirect-messages")
        return true;
    return false;
}


}
}

