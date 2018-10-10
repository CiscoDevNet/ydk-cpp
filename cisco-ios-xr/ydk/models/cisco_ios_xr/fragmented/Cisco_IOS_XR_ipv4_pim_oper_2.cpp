
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::NextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::~NextHop()
{
}

bool Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::AutoRp::AutoRp()
{

    yang_name = "auto-rp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::AutoRp::~AutoRp()
{
}

bool Pim::Standby::Vrfs::Vrf::AutoRp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Pim::Standby::Vrfs::Vrf::AutoRp::has_operation() const
{
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::AutoRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::AutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::AutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::AutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::AutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
    :
    topology_interface_flag_route_count(this, {"interface_flag"})
{

    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_interface_flag_route_count.len(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.len(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-interface-flag-route-count")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topology_interface_flag_route_count.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-interface-flag-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    group_ranges{YType::uint32, "group-ranges"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"}
{

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    if (is_presence_container) return true;
    return interface_flag.is_set
	|| group_ranges.is_set
	|| active_group_ranges.is_set
	|| groute_count.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| is_node_low_memory.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_flag.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count";
    ADD_KEY_TOKEN(interface_flag, "interface-flag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.yfilter)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
        interface_flag.value_namespace = name_space;
        interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-flag")
    {
        interface_flag.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-flag" || name == "group-ranges" || name == "active-group-ranges" || name == "groute-count" || name == "sg-route-count" || name == "sgr-route-count" || name == "is-node-low-memory")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSources()
    :
    group_map_source(this, {})
{

    yang_name = "group-map-sources"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::~GroupMapSources()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_map_source.len(); index++)
    {
        if(group_map_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_source.len(); index++)
    {
        if(group_map_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapSources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-source")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource>();
        c->parent = this;
        group_map_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_map_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-source")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapSource()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    priority{YType::uint32, "priority"},
    holdtime{YType::int32, "holdtime"},
    expires{YType::uint64, "expires"},
    uptime{YType::uint64, "uptime"}
        ,
    source_of_information(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation>())
    , group_map_information(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation>())
{
    source_of_information->parent = this;
    group_map_information->parent = this;

    yang_name = "group-map-source"; yang_parent_name = "group-map-sources"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::~GroupMapSource()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| priority.is_set
	|| holdtime.is_set
	|| expires.is_set
	|| uptime.is_set
	|| (source_of_information !=  nullptr && source_of_information->has_data())
	|| (group_map_information !=  nullptr && group_map_information->has_data());
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (source_of_information !=  nullptr && source_of_information->has_operation())
	|| (group_map_information !=  nullptr && group_map_information->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation>();
        }
        return source_of_information;
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation>();
        }
        return group_map_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-of-information" || name == "group-map-information" || name == "prefix" || name == "prefix-length" || name == "client" || name == "protocol" || name == "rp-address" || name == "priority" || name == "holdtime" || name == "expires" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "group-map-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::GroupMapInformation()
    :
    prefix_length{YType::int32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    group_count{YType::uint32, "group-count"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    is_override{YType::boolean, "is-override"},
    priority{YType::uint32, "priority"}
        ,
    prefix(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>())
    , rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| group_count.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| is_override.is_set
	|| priority.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "prefix-length" || name == "client" || name == "protocol" || name == "group-count" || name == "is-used" || name == "mrib-active" || name == "is-override" || name == "priority")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::TrafficCounters()
    :
    elapsed_time{YType::uint32, "elapsed-time"},
    inputs{YType::uint32, "inputs"},
    outputs{YType::uint32, "outputs"},
    format_error{YType::uint32, "format-error"},
    pakman_error{YType::uint32, "pakman-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    checksum_error{YType::uint32, "checksum-error"},
    socket_error{YType::uint32, "socket-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    input_hello{YType::uint32, "input-hello"},
    output_hello{YType::uint32, "output-hello"},
    input_jp{YType::uint32, "input-jp"},
    output_jp{YType::uint32, "output-jp"},
    input_data_register{YType::uint32, "input-data-register"},
    input_null_register{YType::uint32, "input-null-register"},
    output_null_register{YType::uint32, "output-null-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_register_stop{YType::uint32, "output-register-stop"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    input_df_election{YType::uint32, "input-df-election"},
    output_df_election{YType::uint32, "output-df-election"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_loop_error{YType::uint32, "output-loop-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    output_join_group{YType::uint32, "output-join-group"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    invalid_registers{YType::uint32, "invalid-registers"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packets_standby{YType::uint32, "packets-standby"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"},
    invalid_source_encodings{YType::uint32, "invalid-source-encodings"},
    invalid_hello_options{YType::uint32, "invalid-hello-options"}
        ,
    packet_queue(this, {})
{

    yang_name = "traffic-counters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<packet_queue.len(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    return elapsed_time.is_set
	|| inputs.is_set
	|| outputs.is_set
	|| format_error.is_set
	|| pakman_error.is_set
	|| standby_packets_error.is_set
	|| checksum_error.is_set
	|| socket_error.is_set
	|| send_queue_full.is_set
	|| boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| input_hello.is_set
	|| output_hello.is_set
	|| input_jp.is_set
	|| output_jp.is_set
	|| input_data_register.is_set
	|| input_null_register.is_set
	|| output_null_register.is_set
	|| input_register_stop.is_set
	|| output_register_stop.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| input_df_election.is_set
	|| output_df_election.is_set
	|| input_bsr_message.is_set
	|| output_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| output_candidate_rp_advertisement.is_set
	|| input_ecmp_redirect.is_set
	|| output_ecmp_redirect.is_set
	|| output_loop_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| input_no_idb_error.is_set
	|| input_no_vrf_error.is_set
	|| input_no_pim_error.is_set
	|| input_pim_version_error.is_set
	|| output_join_group.is_set
	|| output_prune_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_hello_bytes.is_set
	|| non_supported_packets.is_set
	|| invalid_registers.is_set
	|| invalid_join_prunes.is_set
	|| packet_packman_error.is_set
	|| packet_read_socket_error.is_set
	|| packet_queue_last_clear.is_set
	|| packets_standby.is_set
	|| no_mdt_socket_connection.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| invalid_destination_packets.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| truncated_pim_packets.is_set
	|| invalid_source_encodings.is_set
	|| invalid_hello_options.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.len(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(outputs.yfilter)
	|| ydk::is_set(format_error.yfilter)
	|| ydk::is_set(pakman_error.yfilter)
	|| ydk::is_set(standby_packets_error.yfilter)
	|| ydk::is_set(checksum_error.yfilter)
	|| ydk::is_set(socket_error.yfilter)
	|| ydk::is_set(send_queue_full.yfilter)
	|| ydk::is_set(boundary_acl_rx_drop.yfilter)
	|| ydk::is_set(boundary_acl_tx_drop.yfilter)
	|| ydk::is_set(no_socket_connection.yfilter)
	|| ydk::is_set(no_source_address.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(input_data_register.yfilter)
	|| ydk::is_set(input_null_register.yfilter)
	|| ydk::is_set(output_null_register.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(output_register_stop.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(input_assert_batched.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(output_assert_batched.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_ecmp_redirect.yfilter)
	|| ydk::is_set(output_ecmp_redirect.yfilter)
	|| ydk::is_set(output_loop_error.yfilter)
	|| ydk::is_set(mldp_mdt_invalid_lsm_identifier.yfilter)
	|| ydk::is_set(input_no_idb_error.yfilter)
	|| ydk::is_set(input_no_vrf_error.yfilter)
	|| ydk::is_set(input_no_pim_error.yfilter)
	|| ydk::is_set(input_pim_version_error.yfilter)
	|| ydk::is_set(output_join_group.yfilter)
	|| ydk::is_set(output_prune_group.yfilter)
	|| ydk::is_set(output_join_prune_bytes.yfilter)
	|| ydk::is_set(output_hello_bytes.yfilter)
	|| ydk::is_set(non_supported_packets.yfilter)
	|| ydk::is_set(invalid_registers.yfilter)
	|| ydk::is_set(invalid_join_prunes.yfilter)
	|| ydk::is_set(packet_packman_error.yfilter)
	|| ydk::is_set(packet_read_socket_error.yfilter)
	|| ydk::is_set(packet_queue_last_clear.yfilter)
	|| ydk::is_set(packets_standby.yfilter)
	|| ydk::is_set(no_mdt_socket_connection.yfilter)
	|| ydk::is_set(mdt_send_queue_full.yfilter)
	|| ydk::is_set(mdt_socket_error.yfilter)
	|| ydk::is_set(mdt_join_tlv_sent.yfilter)
	|| ydk::is_set(mdt_join_tlv_received.yfilter)
	|| ydk::is_set(mdt_join_bad_type.yfilter)
	|| ydk::is_set(mdt_drop_local_source_address.yfilter)
	|| ydk::is_set(mdt_drop_null_local_address.yfilter)
	|| ydk::is_set(mdt_drop_no_idb.yfilter)
	|| ydk::is_set(mdt_drop_no_vrf.yfilter)
	|| ydk::is_set(invalid_destination_packets.yfilter)
	|| ydk::is_set(mdt_joins_drop_multiple_encapsulation.yfilter)
	|| ydk::is_set(truncated_pim_packets.yfilter)
	|| ydk::is_set(invalid_source_encodings.yfilter)
	|| ydk::is_set(invalid_hello_options.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.yfilter)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.yfilter)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.yfilter)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.yfilter)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.yfilter)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.yfilter)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.yfilter)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.yfilter)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.yfilter)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.yfilter)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.yfilter)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.yfilter)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.yfilter)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.yfilter)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.yfilter)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.yfilter)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.yfilter)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.yfilter)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.yfilter)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.yfilter)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.yfilter)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.yfilter)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.yfilter)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.yfilter)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.yfilter)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.yfilter)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.yfilter)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.yfilter)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.yfilter)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.yfilter)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.yfilter)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.yfilter)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.yfilter)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.yfilter)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.yfilter)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.yfilter)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.yfilter)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.yfilter)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.yfilter)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.yfilter)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.yfilter)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.yfilter)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.yfilter)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.yfilter)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());
    if (invalid_source_encodings.is_set || is_set(invalid_source_encodings.yfilter)) leaf_name_data.push_back(invalid_source_encodings.get_name_leafdata());
    if (invalid_hello_options.is_set || is_set(invalid_hello_options.yfilter)) leaf_name_data.push_back(invalid_hello_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : packet_queue.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-error")
    {
        format_error = value;
        format_error.value_namespace = name_space;
        format_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
        pakman_error.value_namespace = name_space;
        pakman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
        standby_packets_error.value_namespace = name_space;
        standby_packets_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
        checksum_error.value_namespace = name_space;
        checksum_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
        socket_error.value_namespace = name_space;
        socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
        send_queue_full.value_namespace = name_space;
        send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
        boundary_acl_rx_drop.value_namespace = name_space;
        boundary_acl_rx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
        boundary_acl_tx_drop.value_namespace = name_space;
        boundary_acl_tx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
        no_socket_connection.value_namespace = name_space;
        no_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
        no_source_address.value_namespace = name_space;
        no_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
        input_data_register.value_namespace = name_space;
        input_data_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
        input_null_register.value_namespace = name_space;
        input_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
        output_null_register.value_namespace = name_space;
        output_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
        input_assert_batched.value_namespace = name_space;
        input_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
        output_assert_batched.value_namespace = name_space;
        output_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
        input_ecmp_redirect.value_namespace = name_space;
        input_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
        output_ecmp_redirect.value_namespace = name_space;
        output_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
        output_loop_error.value_namespace = name_space;
        output_loop_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
        mldp_mdt_invalid_lsm_identifier.value_namespace = name_space;
        mldp_mdt_invalid_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
        input_no_idb_error.value_namespace = name_space;
        input_no_idb_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
        input_no_vrf_error.value_namespace = name_space;
        input_no_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
        input_no_pim_error.value_namespace = name_space;
        input_no_pim_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
        input_pim_version_error.value_namespace = name_space;
        input_pim_version_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
        output_join_group.value_namespace = name_space;
        output_join_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
        output_prune_group.value_namespace = name_space;
        output_prune_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
        output_join_prune_bytes.value_namespace = name_space;
        output_join_prune_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
        output_hello_bytes.value_namespace = name_space;
        output_hello_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
        non_supported_packets.value_namespace = name_space;
        non_supported_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
        invalid_registers.value_namespace = name_space;
        invalid_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
        invalid_join_prunes.value_namespace = name_space;
        invalid_join_prunes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
        packet_packman_error.value_namespace = name_space;
        packet_packman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
        packet_read_socket_error.value_namespace = name_space;
        packet_read_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
        packet_queue_last_clear.value_namespace = name_space;
        packet_queue_last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
        packets_standby.value_namespace = name_space;
        packets_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
        no_mdt_socket_connection.value_namespace = name_space;
        no_mdt_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
        mdt_send_queue_full.value_namespace = name_space;
        mdt_send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
        mdt_socket_error.value_namespace = name_space;
        mdt_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
        mdt_join_tlv_sent.value_namespace = name_space;
        mdt_join_tlv_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
        mdt_join_tlv_received.value_namespace = name_space;
        mdt_join_tlv_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
        mdt_join_bad_type.value_namespace = name_space;
        mdt_join_bad_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
        mdt_drop_local_source_address.value_namespace = name_space;
        mdt_drop_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
        mdt_drop_null_local_address.value_namespace = name_space;
        mdt_drop_null_local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
        mdt_drop_no_idb.value_namespace = name_space;
        mdt_drop_no_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
        mdt_drop_no_vrf.value_namespace = name_space;
        mdt_drop_no_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
        invalid_destination_packets.value_namespace = name_space;
        invalid_destination_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
        mdt_joins_drop_multiple_encapsulation.value_namespace = name_space;
        mdt_joins_drop_multiple_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
        truncated_pim_packets.value_namespace = name_space;
        truncated_pim_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-source-encodings")
    {
        invalid_source_encodings = value;
        invalid_source_encodings.value_namespace = name_space;
        invalid_source_encodings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-hello-options")
    {
        invalid_hello_options = value;
        invalid_hello_options.value_namespace = name_space;
        invalid_hello_options.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
    if(value_path == "format-error")
    {
        format_error.yfilter = yfilter;
    }
    if(value_path == "pakman-error")
    {
        pakman_error.yfilter = yfilter;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error.yfilter = yfilter;
    }
    if(value_path == "checksum-error")
    {
        checksum_error.yfilter = yfilter;
    }
    if(value_path == "socket-error")
    {
        socket_error.yfilter = yfilter;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full.yfilter = yfilter;
    }
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop.yfilter = yfilter;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop.yfilter = yfilter;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection.yfilter = yfilter;
    }
    if(value_path == "no-source-address")
    {
        no_source_address.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "input-data-register")
    {
        input_data_register.yfilter = yfilter;
    }
    if(value_path == "input-null-register")
    {
        input_null_register.yfilter = yfilter;
    }
    if(value_path == "output-null-register")
    {
        output_null_register.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error.yfilter = yfilter;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error.yfilter = yfilter;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error.yfilter = yfilter;
    }
    if(value_path == "output-join-group")
    {
        output_join_group.yfilter = yfilter;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group.yfilter = yfilter;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes.yfilter = yfilter;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes.yfilter = yfilter;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets.yfilter = yfilter;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers.yfilter = yfilter;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes.yfilter = yfilter;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error.yfilter = yfilter;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error.yfilter = yfilter;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear.yfilter = yfilter;
    }
    if(value_path == "packets-standby")
    {
        packets_standby.yfilter = yfilter;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection.yfilter = yfilter;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full.yfilter = yfilter;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received.yfilter = yfilter;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf.yfilter = yfilter;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets.yfilter = yfilter;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation.yfilter = yfilter;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets.yfilter = yfilter;
    }
    if(value_path == "invalid-source-encodings")
    {
        invalid_source_encodings.yfilter = yfilter;
    }
    if(value_path == "invalid-hello-options")
    {
        invalid_hello_options.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue" || name == "elapsed-time" || name == "inputs" || name == "outputs" || name == "format-error" || name == "pakman-error" || name == "standby-packets-error" || name == "checksum-error" || name == "socket-error" || name == "send-queue-full" || name == "boundary-acl-rx-drop" || name == "boundary-acl-tx-drop" || name == "no-socket-connection" || name == "no-source-address" || name == "input-hello" || name == "output-hello" || name == "input-jp" || name == "output-jp" || name == "input-data-register" || name == "input-null-register" || name == "output-null-register" || name == "input-register-stop" || name == "output-register-stop" || name == "input-assert" || name == "input-assert-batched" || name == "output-assert" || name == "output-assert-batched" || name == "input-df-election" || name == "output-df-election" || name == "input-bsr-message" || name == "output-bsr-message" || name == "input-candidate-rp-advertisement" || name == "output-candidate-rp-advertisement" || name == "input-ecmp-redirect" || name == "output-ecmp-redirect" || name == "output-loop-error" || name == "mldp-mdt-invalid-lsm-identifier" || name == "input-no-idb-error" || name == "input-no-vrf-error" || name == "input-no-pim-error" || name == "input-pim-version-error" || name == "output-join-group" || name == "output-prune-group" || name == "output-join-prune-bytes" || name == "output-hello-bytes" || name == "non-supported-packets" || name == "invalid-registers" || name == "invalid-join-prunes" || name == "packet-packman-error" || name == "packet-read-socket-error" || name == "packet-queue-last-clear" || name == "packets-standby" || name == "no-mdt-socket-connection" || name == "mdt-send-queue-full" || name == "mdt-socket-error" || name == "mdt-join-tlv-sent" || name == "mdt-join-tlv-received" || name == "mdt-join-bad-type" || name == "mdt-drop-local-source-address" || name == "mdt-drop-null-local-address" || name == "mdt-drop-no-idb" || name == "mdt-drop-no-vrf" || name == "invalid-destination-packets" || name == "mdt-joins-drop-multiple-encapsulation" || name == "truncated-pim-packets" || name == "invalid-source-encodings" || name == "invalid-hello-options")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
        ,
    packet_queue_state(std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>())
    , packet_queue_stats(std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;
    packet_queue_stats->parent = this;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::has_data() const
{
    if (is_presence_container) return true;
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_queue_priority.yfilter)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.yfilter)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state == nullptr)
        {
            packet_queue_state = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>();
        }
        return packet_queue_state;
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats == nullptr)
        {
            packet_queue_stats = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>();
        }
        return packet_queue_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet_queue_state != nullptr)
    {
        children["packet-queue-state"] = packet_queue_state;
    }

    if(packet_queue_stats != nullptr)
    {
        children["packet-queue-stats"] = packet_queue_stats;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
        packet_queue_priority.value_namespace = name_space;
        packet_queue_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue-state" || name == "packet-queue-stats" || name == "packet-queue-priority")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{

    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    if (is_presence_container) return true;
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_queue_size.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(queue_size_packets.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.yfilter)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.yfilter)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
        max_queue_size.value_namespace = name_space;
        max_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
        queue_size_packets.value_namespace = name_space;
        queue_size_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-queue-size" || name == "queue-size-bytes" || name == "queue-size-packets")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    enqueued_packets{YType::uint32, "enqueued-packets"},
    dequeued_packets{YType::uint32, "dequeued-packets"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    tail_drops{YType::uint32, "tail-drops"}
{

    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    if (is_presence_container) return true;
    return enqueued_packets.is_set
	|| dequeued_packets.is_set
	|| high_water_mark_packets.is_set
	|| high_water_mark_bytes.is_set
	|| tail_drops.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enqueued_packets.yfilter)
	|| ydk::is_set(dequeued_packets.yfilter)
	|| ydk::is_set(high_water_mark_packets.yfilter)
	|| ydk::is_set(high_water_mark_bytes.yfilter)
	|| ydk::is_set(tail_drops.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enqueued_packets.is_set || is_set(enqueued_packets.yfilter)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (dequeued_packets.is_set || is_set(dequeued_packets.yfilter)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.yfilter)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.yfilter)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.yfilter)) leaf_name_data.push_back(tail_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
        enqueued_packets.value_namespace = name_space;
        enqueued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
        dequeued_packets.value_namespace = name_space;
        dequeued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
        high_water_mark_packets.value_namespace = name_space;
        high_water_mark_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
        high_water_mark_bytes.value_namespace = name_space;
        high_water_mark_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
        tail_drops.value_namespace = name_space;
        tail_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enqueued-packets")
    {
        enqueued_packets.yfilter = yfilter;
    }
    if(value_path == "dequeued-packets")
    {
        dequeued_packets.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes.yfilter = yfilter;
    }
    if(value_path == "tail-drops")
    {
        tail_drops.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enqueued-packets" || name == "dequeued-packets" || name == "high-water-mark-packets" || name == "high-water-mark-bytes" || name == "tail-drops")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpfs()
    :
    group_map_rpf(this, {})
{

    yang_name = "group-map-rpfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_map_rpf.len(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.len(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapRpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-rpf")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_map_rpf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-rpf")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::uint32, "rp-priority"},
    are_we_rp{YType::boolean, "are-we-rp"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
        ,
    rpf_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
    , group_map_information(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
{
    rpf_neighbor->parent = this;
    group_map_information->parent = this;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| are_we_rp.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (group_map_information !=  nullptr && group_map_information->has_data());
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_priority.yfilter)
	|| ydk::is_set(are_we_rp.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (group_map_information !=  nullptr && group_map_information->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.yfilter)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (are_we_rp.is_set || is_set(are_we_rp.yfilter)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-priority")
    {
        rp_priority = value;
        rp_priority.value_namespace = name_space;
        rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
        are_we_rp.value_namespace = name_space;
        are_we_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-priority")
    {
        rp_priority.yfilter = yfilter;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "group-map-information" || name == "prefix" || name == "prefix-length" || name == "client" || name == "protocol" || name == "rp-address" || name == "rp-priority" || name == "are-we-rp" || name == "rpf-interface-name" || name == "rpf-vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    prefix_length{YType::int32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    group_count{YType::uint32, "group-count"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    is_override{YType::boolean, "is-override"},
    priority{YType::uint32, "priority"}
        ,
    prefix(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
    , rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| group_count.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| is_override.is_set
	|| priority.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "prefix-length" || name == "client" || name == "protocol" || name == "group-count" || name == "is-used" || name == "mrib-active" || name == "is-override" || name == "priority")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Summary::Summary()
    :
    route_limit{YType::uint32, "route-limit"},
    route_count{YType::uint32, "route-count"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    register_limit{YType::uint32, "register-limit"},
    register_count{YType::uint32, "register-count"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    route_threshold{YType::uint32, "route-threshold"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"}
{

    yang_name = "summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Summary::~Summary()
{
}

bool Pim::Standby::Vrfs::Vrf::Summary::has_data() const
{
    if (is_presence_container) return true;
    return route_limit.is_set
	|| route_count.is_set
	|| route_low_water_mark.is_set
	|| is_route_limit_reached.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_count.is_set
	|| rxi_low_water_mark.is_set
	|| rxi_limit_reached.is_set
	|| register_limit.is_set
	|| register_count.is_set
	|| register_limit_reached.is_set
	|| ranges_limit.is_set
	|| ranges_count.is_set
	|| ranges_threshold.is_set
	|| is_ranges_limit_reached.is_set
	|| bsr_ranges_limit.is_set
	|| bsr_ranges_count.is_set
	|| bsr_range_threshold.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| route_threshold.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_threshold.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| is_global_route_limit_reached.is_set
	|| topology_interface_state_threshold.is_set
	|| is_global_rxi_limit_reached.is_set
	|| register_threshold.is_set
	|| global_register_limit.is_set
	|| is_global_register_limit_reached.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
        is_maximum_enforcement_disabled.value_namespace = name_space;
        is_maximum_enforcement_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-limit" || name == "route-count" || name == "route-low-water-mark" || name == "is-route-limit-reached" || name == "topology-interface-state-limit" || name == "topology-interface-state-count" || name == "rxi-low-water-mark" || name == "rxi-limit-reached" || name == "register-limit" || name == "register-count" || name == "register-limit-reached" || name == "ranges-limit" || name == "ranges-count" || name == "ranges-threshold" || name == "is-ranges-limit-reached" || name == "bsr-ranges-limit" || name == "bsr-ranges-count" || name == "bsr-range-threshold" || name == "is-bsr-ranges-threshold-reached" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-threshold" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "route-threshold" || name == "global-auto-rp-ranges-limit" || name == "is-global-auto-rp-ranges-limit-reached" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-threshold" || name == "is-global-bsr-ranges-limit-reached" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-threshold" || name == "is-global-route-limit-reached" || name == "topology-interface-state-threshold" || name == "is-global-rxi-limit-reached" || name == "register-threshold" || name == "global-register-limit" || name == "is-global-register-limit-reached")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::Gre()
    :
    gre_hashes(std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreHashes>())
    , gre_next_hops(std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops>())
{
    gre_hashes->parent = this;
    gre_next_hops->parent = this;

    yang_name = "gre"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::~Gre()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::has_data() const
{
    if (is_presence_container) return true;
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Gre::has_operation() const
{
    return is_set(yfilter)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes == nullptr)
        {
            gre_hashes = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreHashes>();
        }
        return gre_hashes;
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops == nullptr)
        {
            gre_next_hops = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops>();
        }
        return gre_next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gre_hashes != nullptr)
    {
        children["gre-hashes"] = gre_hashes;
    }

    if(gre_next_hops != nullptr)
    {
        children["gre-next-hops"] = gre_next_hops;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hashes" || name == "gre-next-hops")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHashes()
    :
    gre_hash(this, {"source_address", "destination_address", "ifname"})
{

    yang_name = "gre-hashes"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreHashes::~GreHashes()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreHashes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gre_hash.len(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.len(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreHashes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hash")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreHashes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : gre_hash.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreHashes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Gre::GreHashes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreHashes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hash")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::GreHash()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    ifname{YType::str, "ifname"},
    next_hop_interface{YType::str, "next-hop-interface"}
{

    yang_name = "gre-hash"; yang_parent_name = "gre-hashes"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::~GreHash()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| ifname.is_set
	|| next_hop_interface.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hash";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(ifname, "ifname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreHashes::GreHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "ifname" || name == "next-hop-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHops()
    :
    gre_next_hop(this, {"destination_address"})
{

    yang_name = "gre-next-hops"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::~GreNextHops()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gre_next_hop.len(); index++)
    {
        if(gre_next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::has_operation() const
{
    for (std::size_t index=0; index<gre_next_hop.len(); index++)
    {
        if(gre_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-next-hop")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop>();
        c->parent = this;
        gre_next_hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : gre_next_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-next-hop")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GreNextHop()
    :
    destination_address{YType::str, "destination-address"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    is_connected{YType::uint8, "is-connected"}
        ,
    registered_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>())
    , gre_path(this, {})
{
    registered_address->parent = this;

    yang_name = "gre-next-hop"; yang_parent_name = "gre-next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::~GreNextHop()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gre_path.len(); index++)
    {
        if(gre_path[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| is_connected.is_set
	|| (registered_address !=  nullptr && registered_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_operation() const
{
    for (std::size_t index=0; index<gre_path.len(); index++)
    {
        if(gre_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| (registered_address !=  nullptr && registered_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address")
    {
        if(registered_address == nullptr)
        {
            registered_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>();
        }
        return registered_address;
    }

    if(child_yang_name == "gre-path")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath>();
        c->parent = this;
        gre_path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(registered_address != nullptr)
    {
        children["registered-address"] = registered_address;
    }

    count = 0;
    for (auto c : gre_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registered-address" || name == "gre-path" || name == "destination-address" || name == "metric" || name == "metric-preference" || name == "is-connected")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::RegisteredAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "registered-address"; yang_parent_name = "gre-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::~RegisteredAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GrePath()
    :
    gre_interface_name{YType::str, "gre-interface-name"},
    is_gre_interface_disabled{YType::boolean, "is-gre-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"}
        ,
    gre_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>())
    , gre_next_hop(std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>())
{
    gre_neighbor->parent = this;
    gre_next_hop->parent = this;

    yang_name = "gre-path"; yang_parent_name = "gre-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::~GrePath()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_data() const
{
    if (is_presence_container) return true;
    return gre_interface_name.is_set
	|| is_gre_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_connector_attribute_present.is_set
	|| extranet_vrf_name.is_set
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_data())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface_name.yfilter)
	|| ydk::is_set(is_gre_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_operation())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface_name.is_set || is_set(gre_interface_name.yfilter)) leaf_name_data.push_back(gre_interface_name.get_name_leafdata());
    if (is_gre_interface_disabled.is_set || is_set(is_gre_interface_disabled.yfilter)) leaf_name_data.push_back(is_gre_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-neighbor")
    {
        if(gre_neighbor == nullptr)
        {
            gre_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>();
        }
        return gre_neighbor;
    }

    if(child_yang_name == "gre-next-hop")
    {
        if(gre_next_hop == nullptr)
        {
            gre_next_hop = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>();
        }
        return gre_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gre_neighbor != nullptr)
    {
        children["gre-neighbor"] = gre_neighbor;
    }

    if(gre_next_hop != nullptr)
    {
        children["gre-next-hop"] = gre_next_hop;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface-name")
    {
        gre_interface_name = value;
        gre_interface_name.value_namespace = name_space;
        gre_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled = value;
        is_gre_interface_disabled.value_namespace = name_space;
        is_gre_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface-name")
    {
        gre_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-neighbor" || name == "gre-next-hop" || name == "gre-interface-name" || name == "is-gre-interface-disabled" || name == "is-via-lsm" || name == "is-connector-attribute-present" || name == "extranet-vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::GreNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gre-neighbor"; yang_parent_name = "gre-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::~GreNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::GreNextHop_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gre-next-hop"; yang_parent_name = "gre-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::~GreNextHop_()
{
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinners()
    :
    bidir_df_winner(this, {})
{

    yang_name = "bidir-df-winners"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::~BidirDfWinners()
{
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bidir_df_winner.len(); index++)
    {
        if(bidir_df_winner[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_winner.len(); index++)
    {
        if(bidir_df_winner[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::BidirDfWinners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winners";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::BidirDfWinners::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::BidirDfWinners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-winner")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner>();
        c->parent = this;
        bidir_df_winner.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::BidirDfWinners::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bidir_df_winner.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-df-winner")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::BidirDfWinner()
    :
    rp_address{YType::str, "rp-address"},
    interface_name{YType::str, "interface-name"},
    pim_interface_name{YType::str, "pim-interface-name"},
    are_we_df{YType::boolean, "are-we-df"},
    rp_lan{YType::boolean, "rp-lan"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    uptime{YType::uint64, "uptime"}
        ,
    rp_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr>())
    , df_winner(std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner>())
{
    rp_address_xr->parent = this;
    df_winner->parent = this;

    yang_name = "bidir-df-winner"; yang_parent_name = "bidir-df-winners"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::~BidirDfWinner()
{
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_data() const
{
    if (is_presence_container) return true;
    return rp_address.is_set
	|| interface_name.is_set
	|| pim_interface_name.is_set
	|| are_we_df.is_set
	|| rp_lan.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| uptime.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (df_winner !=  nullptr && df_winner->has_data());
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pim_interface_name.yfilter)
	|| ydk::is_set(are_we_df.yfilter)
	|| ydk::is_set(rp_lan.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (df_winner !=  nullptr && df_winner->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.yfilter)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (are_we_df.is_set || is_set(are_we_df.yfilter)) leaf_name_data.push_back(are_we_df.get_name_leafdata());
    if (rp_lan.is_set || is_set(rp_lan.yfilter)) leaf_name_data.push_back(rp_lan.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "df-winner")
    {
        if(df_winner == nullptr)
        {
            df_winner = std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner>();
        }
        return df_winner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(df_winner != nullptr)
    {
        children["df-winner"] = df_winner;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
        pim_interface_name.value_namespace = name_space;
        pim_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-df")
    {
        are_we_df = value;
        are_we_df.value_namespace = name_space;
        are_we_df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-lan")
    {
        rp_lan = value;
        rp_lan.value_namespace = name_space;
        rp_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-df")
    {
        are_we_df.yfilter = yfilter;
    }
    if(value_path == "rp-lan")
    {
        rp_lan.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address-xr" || name == "df-winner" || name == "rp-address" || name == "interface-name" || name == "pim-interface-name" || name == "are-we-df" || name == "rp-lan" || name == "metric" || name == "metric-preference" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-winner"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::DfWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "df-winner"; yang_parent_name = "bidir-df-winner"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::~DfWinner()
{
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TableContexts::TableContexts()
    :
    table_context(this, {})
{

    yang_name = "table-contexts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TableContexts::~TableContexts()
{
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table_context.len(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.len(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TableContexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-context")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TableContexts::TableContext>();
        c->parent = this;
        table_context.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TableContexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : table_context.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TableContexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::TableContexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-context")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::TableContext()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"},
    table_id{YType::uint32, "table-id"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    rpf_registrations{YType::uint32, "rpf-registrations"}
{

    yang_name = "table-context"; yang_parent_name = "table-contexts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::~TableContext()
{
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::has_data() const
{
    if (is_presence_container) return true;
    return saf_name.is_set
	|| topology_name.is_set
	|| afi.is_set
	|| safi.is_set
	|| table_name.is_set
	|| vrf_id.is_set
	|| table_id.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_registration_done.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_convergence.is_set
	|| rpf_registrations.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "saf-name" || name == "topology-name" || name == "afi" || name == "safi" || name == "table-name" || name == "vrf-id" || name == "table-id" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-registration-done" || name == "is-rib-convergence-received" || name == "is-rib-convergence" || name == "rpf-registrations")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummaries()
    :
    neighbor_summary(this, {"interface_name"})
{

    yang_name = "neighbor-summaries"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::NeighborSummaries::~NeighborSummaries()
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_summary.len(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.len(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::NeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"},
    number_of_neighbors{YType::int32, "number-of-neighbors"},
    number_of_external_neighbors{YType::int32, "number-of-external-neighbors"}
{

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| number_of_neighbors.is_set
	|| number_of_external_neighbors.is_set;
}

bool Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_external_neighbors.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_external_neighbors.is_set || is_set(number_of_external_neighbors.yfilter)) leaf_name_data.push_back(number_of_external_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors = value;
        number_of_external_neighbors.value_namespace = name_space;
        number_of_external_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "number-of-neighbors" || name == "number-of-external-neighbors")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::Context()
    :
    vrf_id{YType::uint32, "vrf-id"},
    table_id{YType::uint32, "table-id"},
    murib_id{YType::uint32, "murib-id"},
    rpf_id{YType::uint32, "rpf-id"},
    remote_table_id{YType::uint32, "remote-table-id"},
    mdt_default_group{YType::str, "mdt-default-group"},
    mdt_source{YType::str, "mdt-source"},
    mdt_source_interface{YType::str, "mdt-source-interface"},
    mdt_interface{YType::str, "mdt-interface"},
    mdt_gre_rpf_identifier{YType::uint32, "mdt-gre-rpf-identifier"},
    mdt_gre_remote_rpf_identifier{YType::uint32, "mdt-gre-remote-rpf-identifier"},
    is_unicast_rib_registration{YType::boolean, "is-unicast-rib-registration"},
    is_multicast_rib_registration{YType::boolean, "is-multicast-rib-registration"},
    is_active{YType::boolean, "is-active"},
    is_active_ital{YType::boolean, "is-active-ital"},
    is_mrib_register{YType::boolean, "is-mrib-register"},
    is_mdt_owner{YType::boolean, "is-mdt-owner"},
    is_routing_enabled{YType::boolean, "is-routing-enabled"},
    is_socket_add_required{YType::boolean, "is-socket-add-required"},
    is_socket_added{YType::boolean, "is-socket-added"},
    is_lpts_socket_add_required{YType::boolean, "is-lpts-socket-add-required"},
    is_lpts_socket_added{YType::boolean, "is-lpts-socket-added"},
    is_udp_socket_add_required{YType::boolean, "is-udp-socket-add-required"},
    is_udp_socket_added{YType::boolean, "is-udp-socket-added"},
    is_udp_socket_bind_required{YType::boolean, "is-udp-socket-bind-required"},
    is_udp_socket_bind{YType::boolean, "is-udp-socket-bind"},
    is_register_injection_socket_add_required{YType::boolean, "is-register-injection-socket-add-required"},
    is_register_injection_socket_added{YType::boolean, "is-register-injection-socket-added"},
    is_register_injection_lpts_socket_add_required{YType::boolean, "is-register-injection-lpts-socket-add-required"},
    is_register_injection_lpts_socket_added{YType::boolean, "is-register-injection-lpts-socket-added"},
    is_m_host_publish_pending{YType::boolean, "is-m-host-publish-pending"},
    mhost_interface{YType::str, "mhost-interface"},
    mhost_default_interface_config{YType::str, "mhost-default-interface-config"},
    mdt_mtu{YType::uint32, "mdt-mtu"},
    maximum_mdt_aggregation{YType::uint32, "maximum-mdt-aggregation"},
    mdt_data_switchover_interval{YType::uint32, "mdt-data-switchover-interval"},
    mdt_data_announce_interval{YType::uint32, "mdt-data-announce-interval"},
    non_default_vrf_count_on_socket{YType::uint32, "non-default-vrf-count-on-socket"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    mdt_neighbor_filter_name{YType::str, "mdt-neighbor-filter-name"},
    allow_rp_configured{YType::boolean, "allow-rp-configured"},
    allow_rp_group_list{YType::str, "allow-rp-group-list"},
    allow_rp_rp_list{YType::str, "allow-rp-rp-list"},
    sg_expiry_timer_configured{YType::boolean, "sg-expiry-timer-configured"},
    sg_expiry_time{YType::uint16, "sg-expiry-time"},
    sg_expiry_timer_sg_list{YType::str, "sg-expiry-timer-sg-list"},
    mldp_mdt_name{YType::str, "mldp-mdt-name"},
    mldp_mdt_interface{YType::str, "mldp-mdt-interface"},
    mldp_mdt_mtu{YType::uint32, "mldp-mdt-mtu"},
    mldp_maximum_mdt_aggregation{YType::uint32, "mldp-maximum-mdt-aggregation"},
    mldp_mdt_data_switchover_interval{YType::uint32, "mldp-mdt-data-switchover-interval"},
    mldp_mdt_data_announce_interval{YType::uint32, "mldp-mdt-data-announce-interval"},
    mldp_mdt_rpf_identifier{YType::uint32, "mldp-mdt-rpf-identifier"},
    mldp_mdt_remote_rpf_identifier{YType::uint32, "mldp-mdt-remote-rpf-identifier"},
    is_create_mldp_mdt_interface{YType::boolean, "is-create-mldp-mdt-interface"},
    is_mldp_mdt_owner{YType::boolean, "is-mldp-mdt-owner"},
    mldp_root_count{YType::uint32, "mldp-root-count"},
    mldp_head_lsm_identifier{YType::uint32, "mldp-head-lsm-identifier"},
    mldp_remote_head_lsm_identifier{YType::uint32, "mldp-remote-head-lsm-identifier"},
    organization_unique_identifier{YType::uint32, "organization-unique-identifier"},
    vpn_index{YType::uint32, "vpn-index"},
    mldp_partitioned_mdt_configured{YType::boolean, "mldp-partitioned-mdt-configured"},
    mldp_remote_partitioned_mdt_configured{YType::boolean, "mldp-remote-partitioned-mdt-configured"},
    mldp_partioned_mp2m_ptree{YType::boolean, "mldp-partioned-mp2m-ptree"},
    mldp_partitioned_head_lsm_identifier{YType::uint32, "mldp-partitioned-head-lsm-identifier"},
    mldp_head_local_label{YType::uint32, "mldp-head-local-label"},
    mldp_partitioned_mdt_identifier{YType::uint32, "mldp-partitioned-mdt-identifier"},
    bgp_auto_discovery_configured{YType::boolean, "bgp-auto-discovery-configured"},
    suppress_pim_data_mdt_tlv{YType::boolean, "suppress-pim-data-mdt-tlv"},
    inter_autonomous_system_enabled{YType::boolean, "inter-autonomous-system-enabled"},
    bgp_source_active_announce{YType::boolean, "bgp-source-active-announce"},
    bgp_i_pmsi_added{YType::boolean, "bgp-i-pmsi-added"},
    mldp_bsr_control_tree_added{YType::boolean, "mldp-bsr-control-tree-added"},
    mldp_auto_rp_discovery_tree_added{YType::boolean, "mldp-auto-rp-discovery-tree-added"},
    mldp_auto_rp_announce_tree_added{YType::boolean, "mldp-auto-rp-announce-tree-added"},
    bgp_auto_discovery_type{YType::uint32, "bgp-auto-discovery-type"},
    mdt_partitioned_mdt_control_identifier{YType::uint32, "mdt-partitioned-mdt-control-identifier"},
    mdt_partitioned_ir_control_identifier{YType::uint32, "mdt-partitioned-ir-control-identifier"},
    mldp_control_head_lsm_identifier{YType::uint32, "mldp-control-head-lsm-identifier"},
    umh{YType::boolean, "umh"},
    suppress_shared_tree_join{YType::boolean, "suppress-shared-tree-join"},
    rsvp_te_mdt_name{YType::str, "rsvp-te-mdt-name"},
    rsvp_te_mdt_interface{YType::str, "rsvp-te-mdt-interface"},
    rsvp_te_mdt_mtu{YType::uint32, "rsvp-te-mdt-mtu"},
    rsvp_te_maximum_mdt_aggregation{YType::uint32, "rsvp-te-maximum-mdt-aggregation"},
    rsvp_te_mdt_data_switchover_interval{YType::uint32, "rsvp-te-mdt-data-switchover-interval"},
    rsvp_te_mdt_data_announce_interval{YType::uint32, "rsvp-te-mdt-data-announce-interval"},
    rsvp_te_mdt_rpf_identifier{YType::uint32, "rsvp-te-mdt-rpf-identifier"},
    is_create_rsvp_te_mdt_interface{YType::boolean, "is-create-rsvp-te-mdt-interface"},
    is_rsvp_te_mdt_owner{YType::boolean, "is-rsvp-te-mdt-owner"},
    rsvp_te_mdt_static_p2mp_count{YType::uint32, "rsvp-te-mdt-static-p2mp-count"},
    p2mpte_li_drop{YType::uint32, "p2mpte-li-drop"},
    ir_mdt_name{YType::str, "ir-mdt-name"},
    ir_mdt_interface{YType::str, "ir-mdt-interface"},
    ir_mdt_mtu{YType::uint32, "ir-mdt-mtu"},
    ir_maximum_mdt_aggregation{YType::uint32, "ir-maximum-mdt-aggregation"},
    ir_mdt_data_switchover_interval{YType::uint32, "ir-mdt-data-switchover-interval"},
    ir_mdt_data_announce_interval{YType::uint32, "ir-mdt-data-announce-interval"},
    ir_mdt_rpf_identifier{YType::uint32, "ir-mdt-rpf-identifier"},
    ir_mdt_tail_label{YType::uint32, "ir-mdt-tail-label"},
    is_create_ir_mdt_interface{YType::boolean, "is-create-ir-mdt-interface"},
    is_ir_mdt_owner{YType::boolean, "is-ir-mdt-owner"},
    in_b_and_mdt_name{YType::str, "in-b-and-mdt-name"},
    in_b_and_mdt_interface{YType::str, "in-b-and-mdt-interface"},
    in_b_and_mdt_mtu{YType::uint32, "in-b-and-mdt-mtu"},
    in_band_maximum_mdt_aggregation{YType::uint32, "in-band-maximum-mdt-aggregation"},
    in_b_and_mdt_data_switchover_interval{YType::uint32, "in-b-and-mdt-data-switchover-interval"},
    in_b_and_mdt_data_announce_interval{YType::uint32, "in-b-and-mdt-data-announce-interval"},
    in_b_and_mdt_rpf_identifier{YType::uint32, "in-b-and-mdt-rpf-identifier"},
    is_create_in_b_and_mdt_interface{YType::boolean, "is-create-in-b-and-mdt-interface"},
    is_in_b_and_mdt_owner{YType::boolean, "is-in-b-and-mdt-owner"},
    in_band_signaling_local_enabled{YType::boolean, "in-band-signaling-local-enabled"},
    in_band_signaling_remote_enabled{YType::boolean, "in-band-signaling-remote-enabled"},
    valid_rd_present{YType::boolean, "valid-rd-present"},
    stale_rd_present{YType::boolean, "stale-rd-present"},
    route_distinguisher{YType::str, "route-distinguisher"},
    gin_b_and_mdt_name{YType::str, "gin-b-and-mdt-name"},
    gin_b_and_mdt_interface{YType::str, "gin-b-and-mdt-interface"},
    gin_b_and_mdt_mtu{YType::uint32, "gin-b-and-mdt-mtu"},
    gin_band_maximum_mdt_aggregation{YType::uint32, "gin-band-maximum-mdt-aggregation"},
    gin_b_and_mdt_data_switchover_interval{YType::uint32, "gin-b-and-mdt-data-switchover-interval"},
    gin_b_and_mdt_data_announce_interval{YType::uint32, "gin-b-and-mdt-data-announce-interval"},
    gin_b_and_mdt_rpf_identifier{YType::uint32, "gin-b-and-mdt-rpf-identifier"},
    is_create_gin_b_and_mdt_interface{YType::boolean, "is-create-gin-b-and-mdt-interface"},
    is_gin_b_and_mdt_owner{YType::boolean, "is-gin-b-and-mdt-owner"},
    is_pim_nsf_rib_converged{YType::boolean, "is-pim-nsf-rib-converged"},
    is_pim_nsf_rib_converge_received{YType::boolean, "is-pim-nsf-rib-converge-received"},
    is_rib_multipath_enabled{YType::boolean, "is-rib-multipath-enabled"},
    is_rib_multipath_interface_hash{YType::boolean, "is-rib-multipath-interface-hash"},
    is_rib_multipath_source_hash{YType::boolean, "is-rib-multipath-source-hash"},
    is_rib_multipath_source_next_hop_hash{YType::boolean, "is-rib-multipath-source-next-hop-hash"},
    rump_enabled{YType::boolean, "rump-enabled"},
    is_create_mdt_interface{YType::boolean, "is-create-mdt-interface"},
    is_auto_rp_listen_enabled{YType::boolean, "is-auto-rp-listen-enabled"},
    is_all_interface_disable_operation{YType::boolean, "is-all-interface-disable-operation"},
    is_default_granges{YType::boolean, "is-default-granges"},
    is_auto_rp_listen_sock_add{YType::boolean, "is-auto-rp-listen-sock-add"},
    is_redistribution_reset{YType::boolean, "is-redistribution-reset"},
    redistribution_reset_count{YType::uint32, "redistribution-reset-count"},
    rpf_policy_name{YType::str, "rpf-policy-name"},
    table_count{YType::uint32, "table-count"},
    active_table_count{YType::uint32, "active-table-count"},
    anycast_rp_policy_name{YType::str, "anycast-rp-policy-name"},
    anycast_rp_configured{YType::boolean, "anycast-rp-configured"},
    bgp_remote_on{YType::boolean, "bgp-remote-on"},
    bgp_remote_interface_name{YType::str, "bgp-remote-interface-name"},
    bgp_remote_interface{YType::str, "bgp-remote-interface"},
    bgp_remote_address{YType::str, "bgp-remote-address"},
    bgp_remote_state{YType::uint32, "bgp-remote-state"},
    physical_interface_count{YType::uint64, "physical-interface-count"},
    virtual_interface_count{YType::uint64, "virtual-interface-count"},
    virtual_mlc_interface_name{YType::str, "virtual-mlc-interface-name"},
    mdt_immediate_switch{YType::boolean, "mdt-immediate-switch"},
    mldp_root_address{YType::uint32, "mldp-root-address"}
        ,
    remote_default_group(std::make_shared<Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup>())
    , rpf_default_table(std::make_shared<Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable>())
    , export_route_target(this, {})
    , import_route_target(this, {})
    , anycast_rp_range(this, {})
{
    remote_default_group->parent = this;
    rpf_default_table->parent = this;

    yang_name = "context"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::~Context()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<export_route_target.len(); index++)
    {
        if(export_route_target[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.len(); index++)
    {
        if(import_route_target[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<anycast_rp_range.len(); index++)
    {
        if(anycast_rp_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vrf_id.is_set
	|| table_id.is_set
	|| murib_id.is_set
	|| rpf_id.is_set
	|| remote_table_id.is_set
	|| mdt_default_group.is_set
	|| mdt_source.is_set
	|| mdt_source_interface.is_set
	|| mdt_interface.is_set
	|| mdt_gre_rpf_identifier.is_set
	|| mdt_gre_remote_rpf_identifier.is_set
	|| is_unicast_rib_registration.is_set
	|| is_multicast_rib_registration.is_set
	|| is_active.is_set
	|| is_active_ital.is_set
	|| is_mrib_register.is_set
	|| is_mdt_owner.is_set
	|| is_routing_enabled.is_set
	|| is_socket_add_required.is_set
	|| is_socket_added.is_set
	|| is_lpts_socket_add_required.is_set
	|| is_lpts_socket_added.is_set
	|| is_udp_socket_add_required.is_set
	|| is_udp_socket_added.is_set
	|| is_udp_socket_bind_required.is_set
	|| is_udp_socket_bind.is_set
	|| is_register_injection_socket_add_required.is_set
	|| is_register_injection_socket_added.is_set
	|| is_register_injection_lpts_socket_add_required.is_set
	|| is_register_injection_lpts_socket_added.is_set
	|| is_m_host_publish_pending.is_set
	|| mhost_interface.is_set
	|| mhost_default_interface_config.is_set
	|| mdt_mtu.is_set
	|| maximum_mdt_aggregation.is_set
	|| mdt_data_switchover_interval.is_set
	|| mdt_data_announce_interval.is_set
	|| non_default_vrf_count_on_socket.is_set
	|| neighbor_filter_name.is_set
	|| mdt_neighbor_filter_name.is_set
	|| allow_rp_configured.is_set
	|| allow_rp_group_list.is_set
	|| allow_rp_rp_list.is_set
	|| sg_expiry_timer_configured.is_set
	|| sg_expiry_time.is_set
	|| sg_expiry_timer_sg_list.is_set
	|| mldp_mdt_name.is_set
	|| mldp_mdt_interface.is_set
	|| mldp_mdt_mtu.is_set
	|| mldp_maximum_mdt_aggregation.is_set
	|| mldp_mdt_data_switchover_interval.is_set
	|| mldp_mdt_data_announce_interval.is_set
	|| mldp_mdt_rpf_identifier.is_set
	|| mldp_mdt_remote_rpf_identifier.is_set
	|| is_create_mldp_mdt_interface.is_set
	|| is_mldp_mdt_owner.is_set
	|| mldp_root_count.is_set
	|| mldp_head_lsm_identifier.is_set
	|| mldp_remote_head_lsm_identifier.is_set
	|| organization_unique_identifier.is_set
	|| vpn_index.is_set
	|| mldp_partitioned_mdt_configured.is_set
	|| mldp_remote_partitioned_mdt_configured.is_set
	|| mldp_partioned_mp2m_ptree.is_set
	|| mldp_partitioned_head_lsm_identifier.is_set
	|| mldp_head_local_label.is_set
	|| mldp_partitioned_mdt_identifier.is_set
	|| bgp_auto_discovery_configured.is_set
	|| suppress_pim_data_mdt_tlv.is_set
	|| inter_autonomous_system_enabled.is_set
	|| bgp_source_active_announce.is_set
	|| bgp_i_pmsi_added.is_set
	|| mldp_bsr_control_tree_added.is_set
	|| mldp_auto_rp_discovery_tree_added.is_set
	|| mldp_auto_rp_announce_tree_added.is_set
	|| bgp_auto_discovery_type.is_set
	|| mdt_partitioned_mdt_control_identifier.is_set
	|| mdt_partitioned_ir_control_identifier.is_set
	|| mldp_control_head_lsm_identifier.is_set
	|| umh.is_set
	|| suppress_shared_tree_join.is_set
	|| rsvp_te_mdt_name.is_set
	|| rsvp_te_mdt_interface.is_set
	|| rsvp_te_mdt_mtu.is_set
	|| rsvp_te_maximum_mdt_aggregation.is_set
	|| rsvp_te_mdt_data_switchover_interval.is_set
	|| rsvp_te_mdt_data_announce_interval.is_set
	|| rsvp_te_mdt_rpf_identifier.is_set
	|| is_create_rsvp_te_mdt_interface.is_set
	|| is_rsvp_te_mdt_owner.is_set
	|| rsvp_te_mdt_static_p2mp_count.is_set
	|| p2mpte_li_drop.is_set
	|| ir_mdt_name.is_set
	|| ir_mdt_interface.is_set
	|| ir_mdt_mtu.is_set
	|| ir_maximum_mdt_aggregation.is_set
	|| ir_mdt_data_switchover_interval.is_set
	|| ir_mdt_data_announce_interval.is_set
	|| ir_mdt_rpf_identifier.is_set
	|| ir_mdt_tail_label.is_set
	|| is_create_ir_mdt_interface.is_set
	|| is_ir_mdt_owner.is_set
	|| in_b_and_mdt_name.is_set
	|| in_b_and_mdt_interface.is_set
	|| in_b_and_mdt_mtu.is_set
	|| in_band_maximum_mdt_aggregation.is_set
	|| in_b_and_mdt_data_switchover_interval.is_set
	|| in_b_and_mdt_data_announce_interval.is_set
	|| in_b_and_mdt_rpf_identifier.is_set
	|| is_create_in_b_and_mdt_interface.is_set
	|| is_in_b_and_mdt_owner.is_set
	|| in_band_signaling_local_enabled.is_set
	|| in_band_signaling_remote_enabled.is_set
	|| valid_rd_present.is_set
	|| stale_rd_present.is_set
	|| route_distinguisher.is_set
	|| gin_b_and_mdt_name.is_set
	|| gin_b_and_mdt_interface.is_set
	|| gin_b_and_mdt_mtu.is_set
	|| gin_band_maximum_mdt_aggregation.is_set
	|| gin_b_and_mdt_data_switchover_interval.is_set
	|| gin_b_and_mdt_data_announce_interval.is_set
	|| gin_b_and_mdt_rpf_identifier.is_set
	|| is_create_gin_b_and_mdt_interface.is_set
	|| is_gin_b_and_mdt_owner.is_set
	|| is_pim_nsf_rib_converged.is_set
	|| is_pim_nsf_rib_converge_received.is_set
	|| is_rib_multipath_enabled.is_set
	|| is_rib_multipath_interface_hash.is_set
	|| is_rib_multipath_source_hash.is_set
	|| is_rib_multipath_source_next_hop_hash.is_set
	|| rump_enabled.is_set
	|| is_create_mdt_interface.is_set
	|| is_auto_rp_listen_enabled.is_set
	|| is_all_interface_disable_operation.is_set
	|| is_default_granges.is_set
	|| is_auto_rp_listen_sock_add.is_set
	|| is_redistribution_reset.is_set
	|| redistribution_reset_count.is_set
	|| rpf_policy_name.is_set
	|| table_count.is_set
	|| active_table_count.is_set
	|| anycast_rp_policy_name.is_set
	|| anycast_rp_configured.is_set
	|| bgp_remote_on.is_set
	|| bgp_remote_interface_name.is_set
	|| bgp_remote_interface.is_set
	|| bgp_remote_address.is_set
	|| bgp_remote_state.is_set
	|| physical_interface_count.is_set
	|| virtual_interface_count.is_set
	|| virtual_mlc_interface_name.is_set
	|| mdt_immediate_switch.is_set
	|| (remote_default_group !=  nullptr && remote_default_group->has_data())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Context::has_operation() const
{
    for (std::size_t index=0; index<export_route_target.len(); index++)
    {
        if(export_route_target[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.len(); index++)
    {
        if(import_route_target[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<anycast_rp_range.len(); index++)
    {
        if(anycast_rp_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(murib_id.yfilter)
	|| ydk::is_set(rpf_id.yfilter)
	|| ydk::is_set(remote_table_id.yfilter)
	|| ydk::is_set(mdt_default_group.yfilter)
	|| ydk::is_set(mdt_source.yfilter)
	|| ydk::is_set(mdt_source_interface.yfilter)
	|| ydk::is_set(mdt_interface.yfilter)
	|| ydk::is_set(mdt_gre_rpf_identifier.yfilter)
	|| ydk::is_set(mdt_gre_remote_rpf_identifier.yfilter)
	|| ydk::is_set(is_unicast_rib_registration.yfilter)
	|| ydk::is_set(is_multicast_rib_registration.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_active_ital.yfilter)
	|| ydk::is_set(is_mrib_register.yfilter)
	|| ydk::is_set(is_mdt_owner.yfilter)
	|| ydk::is_set(is_routing_enabled.yfilter)
	|| ydk::is_set(is_socket_add_required.yfilter)
	|| ydk::is_set(is_socket_added.yfilter)
	|| ydk::is_set(is_lpts_socket_add_required.yfilter)
	|| ydk::is_set(is_lpts_socket_added.yfilter)
	|| ydk::is_set(is_udp_socket_add_required.yfilter)
	|| ydk::is_set(is_udp_socket_added.yfilter)
	|| ydk::is_set(is_udp_socket_bind_required.yfilter)
	|| ydk::is_set(is_udp_socket_bind.yfilter)
	|| ydk::is_set(is_register_injection_socket_add_required.yfilter)
	|| ydk::is_set(is_register_injection_socket_added.yfilter)
	|| ydk::is_set(is_register_injection_lpts_socket_add_required.yfilter)
	|| ydk::is_set(is_register_injection_lpts_socket_added.yfilter)
	|| ydk::is_set(is_m_host_publish_pending.yfilter)
	|| ydk::is_set(mhost_interface.yfilter)
	|| ydk::is_set(mhost_default_interface_config.yfilter)
	|| ydk::is_set(mdt_mtu.yfilter)
	|| ydk::is_set(maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(mdt_data_announce_interval.yfilter)
	|| ydk::is_set(non_default_vrf_count_on_socket.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(mdt_neighbor_filter_name.yfilter)
	|| ydk::is_set(allow_rp_configured.yfilter)
	|| ydk::is_set(allow_rp_group_list.yfilter)
	|| ydk::is_set(allow_rp_rp_list.yfilter)
	|| ydk::is_set(sg_expiry_timer_configured.yfilter)
	|| ydk::is_set(sg_expiry_time.yfilter)
	|| ydk::is_set(sg_expiry_timer_sg_list.yfilter)
	|| ydk::is_set(mldp_mdt_name.yfilter)
	|| ydk::is_set(mldp_mdt_interface.yfilter)
	|| ydk::is_set(mldp_mdt_mtu.yfilter)
	|| ydk::is_set(mldp_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(mldp_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(mldp_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(mldp_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(mldp_mdt_remote_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_mldp_mdt_interface.yfilter)
	|| ydk::is_set(is_mldp_mdt_owner.yfilter)
	|| ydk::is_set(mldp_root_count.yfilter)
	|| ydk::is_set(mldp_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_remote_head_lsm_identifier.yfilter)
	|| ydk::is_set(organization_unique_identifier.yfilter)
	|| ydk::is_set(vpn_index.yfilter)
	|| ydk::is_set(mldp_partitioned_mdt_configured.yfilter)
	|| ydk::is_set(mldp_remote_partitioned_mdt_configured.yfilter)
	|| ydk::is_set(mldp_partioned_mp2m_ptree.yfilter)
	|| ydk::is_set(mldp_partitioned_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_head_local_label.yfilter)
	|| ydk::is_set(mldp_partitioned_mdt_identifier.yfilter)
	|| ydk::is_set(bgp_auto_discovery_configured.yfilter)
	|| ydk::is_set(suppress_pim_data_mdt_tlv.yfilter)
	|| ydk::is_set(inter_autonomous_system_enabled.yfilter)
	|| ydk::is_set(bgp_source_active_announce.yfilter)
	|| ydk::is_set(bgp_i_pmsi_added.yfilter)
	|| ydk::is_set(mldp_bsr_control_tree_added.yfilter)
	|| ydk::is_set(mldp_auto_rp_discovery_tree_added.yfilter)
	|| ydk::is_set(mldp_auto_rp_announce_tree_added.yfilter)
	|| ydk::is_set(bgp_auto_discovery_type.yfilter)
	|| ydk::is_set(mdt_partitioned_mdt_control_identifier.yfilter)
	|| ydk::is_set(mdt_partitioned_ir_control_identifier.yfilter)
	|| ydk::is_set(mldp_control_head_lsm_identifier.yfilter)
	|| ydk::is_set(umh.yfilter)
	|| ydk::is_set(suppress_shared_tree_join.yfilter)
	|| ydk::is_set(rsvp_te_mdt_name.yfilter)
	|| ydk::is_set(rsvp_te_mdt_interface.yfilter)
	|| ydk::is_set(rsvp_te_mdt_mtu.yfilter)
	|| ydk::is_set(rsvp_te_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(rsvp_te_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(rsvp_te_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(rsvp_te_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_rsvp_te_mdt_interface.yfilter)
	|| ydk::is_set(is_rsvp_te_mdt_owner.yfilter)
	|| ydk::is_set(rsvp_te_mdt_static_p2mp_count.yfilter)
	|| ydk::is_set(p2mpte_li_drop.yfilter)
	|| ydk::is_set(ir_mdt_name.yfilter)
	|| ydk::is_set(ir_mdt_interface.yfilter)
	|| ydk::is_set(ir_mdt_mtu.yfilter)
	|| ydk::is_set(ir_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(ir_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(ir_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(ir_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(ir_mdt_tail_label.yfilter)
	|| ydk::is_set(is_create_ir_mdt_interface.yfilter)
	|| ydk::is_set(is_ir_mdt_owner.yfilter)
	|| ydk::is_set(in_b_and_mdt_name.yfilter)
	|| ydk::is_set(in_b_and_mdt_interface.yfilter)
	|| ydk::is_set(in_b_and_mdt_mtu.yfilter)
	|| ydk::is_set(in_band_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(in_b_and_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(in_b_and_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(in_b_and_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_in_b_and_mdt_interface.yfilter)
	|| ydk::is_set(is_in_b_and_mdt_owner.yfilter)
	|| ydk::is_set(in_band_signaling_local_enabled.yfilter)
	|| ydk::is_set(in_band_signaling_remote_enabled.yfilter)
	|| ydk::is_set(valid_rd_present.yfilter)
	|| ydk::is_set(stale_rd_present.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(gin_b_and_mdt_name.yfilter)
	|| ydk::is_set(gin_b_and_mdt_interface.yfilter)
	|| ydk::is_set(gin_b_and_mdt_mtu.yfilter)
	|| ydk::is_set(gin_band_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(gin_b_and_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(gin_b_and_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(gin_b_and_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_gin_b_and_mdt_interface.yfilter)
	|| ydk::is_set(is_gin_b_and_mdt_owner.yfilter)
	|| ydk::is_set(is_pim_nsf_rib_converged.yfilter)
	|| ydk::is_set(is_pim_nsf_rib_converge_received.yfilter)
	|| ydk::is_set(is_rib_multipath_enabled.yfilter)
	|| ydk::is_set(is_rib_multipath_interface_hash.yfilter)
	|| ydk::is_set(is_rib_multipath_source_hash.yfilter)
	|| ydk::is_set(is_rib_multipath_source_next_hop_hash.yfilter)
	|| ydk::is_set(rump_enabled.yfilter)
	|| ydk::is_set(is_create_mdt_interface.yfilter)
	|| ydk::is_set(is_auto_rp_listen_enabled.yfilter)
	|| ydk::is_set(is_all_interface_disable_operation.yfilter)
	|| ydk::is_set(is_default_granges.yfilter)
	|| ydk::is_set(is_auto_rp_listen_sock_add.yfilter)
	|| ydk::is_set(is_redistribution_reset.yfilter)
	|| ydk::is_set(redistribution_reset_count.yfilter)
	|| ydk::is_set(rpf_policy_name.yfilter)
	|| ydk::is_set(table_count.yfilter)
	|| ydk::is_set(active_table_count.yfilter)
	|| ydk::is_set(anycast_rp_policy_name.yfilter)
	|| ydk::is_set(anycast_rp_configured.yfilter)
	|| ydk::is_set(bgp_remote_on.yfilter)
	|| ydk::is_set(bgp_remote_interface_name.yfilter)
	|| ydk::is_set(bgp_remote_interface.yfilter)
	|| ydk::is_set(bgp_remote_address.yfilter)
	|| ydk::is_set(bgp_remote_state.yfilter)
	|| ydk::is_set(physical_interface_count.yfilter)
	|| ydk::is_set(virtual_interface_count.yfilter)
	|| ydk::is_set(virtual_mlc_interface_name.yfilter)
	|| ydk::is_set(mdt_immediate_switch.yfilter)
	|| ydk::is_set(mldp_root_address.yfilter)
	|| (remote_default_group !=  nullptr && remote_default_group->has_operation())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (murib_id.is_set || is_set(murib_id.yfilter)) leaf_name_data.push_back(murib_id.get_name_leafdata());
    if (rpf_id.is_set || is_set(rpf_id.yfilter)) leaf_name_data.push_back(rpf_id.get_name_leafdata());
    if (remote_table_id.is_set || is_set(remote_table_id.yfilter)) leaf_name_data.push_back(remote_table_id.get_name_leafdata());
    if (mdt_default_group.is_set || is_set(mdt_default_group.yfilter)) leaf_name_data.push_back(mdt_default_group.get_name_leafdata());
    if (mdt_source.is_set || is_set(mdt_source.yfilter)) leaf_name_data.push_back(mdt_source.get_name_leafdata());
    if (mdt_source_interface.is_set || is_set(mdt_source_interface.yfilter)) leaf_name_data.push_back(mdt_source_interface.get_name_leafdata());
    if (mdt_interface.is_set || is_set(mdt_interface.yfilter)) leaf_name_data.push_back(mdt_interface.get_name_leafdata());
    if (mdt_gre_rpf_identifier.is_set || is_set(mdt_gre_rpf_identifier.yfilter)) leaf_name_data.push_back(mdt_gre_rpf_identifier.get_name_leafdata());
    if (mdt_gre_remote_rpf_identifier.is_set || is_set(mdt_gre_remote_rpf_identifier.yfilter)) leaf_name_data.push_back(mdt_gre_remote_rpf_identifier.get_name_leafdata());
    if (is_unicast_rib_registration.is_set || is_set(is_unicast_rib_registration.yfilter)) leaf_name_data.push_back(is_unicast_rib_registration.get_name_leafdata());
    if (is_multicast_rib_registration.is_set || is_set(is_multicast_rib_registration.yfilter)) leaf_name_data.push_back(is_multicast_rib_registration.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_active_ital.is_set || is_set(is_active_ital.yfilter)) leaf_name_data.push_back(is_active_ital.get_name_leafdata());
    if (is_mrib_register.is_set || is_set(is_mrib_register.yfilter)) leaf_name_data.push_back(is_mrib_register.get_name_leafdata());
    if (is_mdt_owner.is_set || is_set(is_mdt_owner.yfilter)) leaf_name_data.push_back(is_mdt_owner.get_name_leafdata());
    if (is_routing_enabled.is_set || is_set(is_routing_enabled.yfilter)) leaf_name_data.push_back(is_routing_enabled.get_name_leafdata());
    if (is_socket_add_required.is_set || is_set(is_socket_add_required.yfilter)) leaf_name_data.push_back(is_socket_add_required.get_name_leafdata());
    if (is_socket_added.is_set || is_set(is_socket_added.yfilter)) leaf_name_data.push_back(is_socket_added.get_name_leafdata());
    if (is_lpts_socket_add_required.is_set || is_set(is_lpts_socket_add_required.yfilter)) leaf_name_data.push_back(is_lpts_socket_add_required.get_name_leafdata());
    if (is_lpts_socket_added.is_set || is_set(is_lpts_socket_added.yfilter)) leaf_name_data.push_back(is_lpts_socket_added.get_name_leafdata());
    if (is_udp_socket_add_required.is_set || is_set(is_udp_socket_add_required.yfilter)) leaf_name_data.push_back(is_udp_socket_add_required.get_name_leafdata());
    if (is_udp_socket_added.is_set || is_set(is_udp_socket_added.yfilter)) leaf_name_data.push_back(is_udp_socket_added.get_name_leafdata());
    if (is_udp_socket_bind_required.is_set || is_set(is_udp_socket_bind_required.yfilter)) leaf_name_data.push_back(is_udp_socket_bind_required.get_name_leafdata());
    if (is_udp_socket_bind.is_set || is_set(is_udp_socket_bind.yfilter)) leaf_name_data.push_back(is_udp_socket_bind.get_name_leafdata());
    if (is_register_injection_socket_add_required.is_set || is_set(is_register_injection_socket_add_required.yfilter)) leaf_name_data.push_back(is_register_injection_socket_add_required.get_name_leafdata());
    if (is_register_injection_socket_added.is_set || is_set(is_register_injection_socket_added.yfilter)) leaf_name_data.push_back(is_register_injection_socket_added.get_name_leafdata());
    if (is_register_injection_lpts_socket_add_required.is_set || is_set(is_register_injection_lpts_socket_add_required.yfilter)) leaf_name_data.push_back(is_register_injection_lpts_socket_add_required.get_name_leafdata());
    if (is_register_injection_lpts_socket_added.is_set || is_set(is_register_injection_lpts_socket_added.yfilter)) leaf_name_data.push_back(is_register_injection_lpts_socket_added.get_name_leafdata());
    if (is_m_host_publish_pending.is_set || is_set(is_m_host_publish_pending.yfilter)) leaf_name_data.push_back(is_m_host_publish_pending.get_name_leafdata());
    if (mhost_interface.is_set || is_set(mhost_interface.yfilter)) leaf_name_data.push_back(mhost_interface.get_name_leafdata());
    if (mhost_default_interface_config.is_set || is_set(mhost_default_interface_config.yfilter)) leaf_name_data.push_back(mhost_default_interface_config.get_name_leafdata());
    if (mdt_mtu.is_set || is_set(mdt_mtu.yfilter)) leaf_name_data.push_back(mdt_mtu.get_name_leafdata());
    if (maximum_mdt_aggregation.is_set || is_set(maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(maximum_mdt_aggregation.get_name_leafdata());
    if (mdt_data_switchover_interval.is_set || is_set(mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(mdt_data_switchover_interval.get_name_leafdata());
    if (mdt_data_announce_interval.is_set || is_set(mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(mdt_data_announce_interval.get_name_leafdata());
    if (non_default_vrf_count_on_socket.is_set || is_set(non_default_vrf_count_on_socket.yfilter)) leaf_name_data.push_back(non_default_vrf_count_on_socket.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (mdt_neighbor_filter_name.is_set || is_set(mdt_neighbor_filter_name.yfilter)) leaf_name_data.push_back(mdt_neighbor_filter_name.get_name_leafdata());
    if (allow_rp_configured.is_set || is_set(allow_rp_configured.yfilter)) leaf_name_data.push_back(allow_rp_configured.get_name_leafdata());
    if (allow_rp_group_list.is_set || is_set(allow_rp_group_list.yfilter)) leaf_name_data.push_back(allow_rp_group_list.get_name_leafdata());
    if (allow_rp_rp_list.is_set || is_set(allow_rp_rp_list.yfilter)) leaf_name_data.push_back(allow_rp_rp_list.get_name_leafdata());
    if (sg_expiry_timer_configured.is_set || is_set(sg_expiry_timer_configured.yfilter)) leaf_name_data.push_back(sg_expiry_timer_configured.get_name_leafdata());
    if (sg_expiry_time.is_set || is_set(sg_expiry_time.yfilter)) leaf_name_data.push_back(sg_expiry_time.get_name_leafdata());
    if (sg_expiry_timer_sg_list.is_set || is_set(sg_expiry_timer_sg_list.yfilter)) leaf_name_data.push_back(sg_expiry_timer_sg_list.get_name_leafdata());
    if (mldp_mdt_name.is_set || is_set(mldp_mdt_name.yfilter)) leaf_name_data.push_back(mldp_mdt_name.get_name_leafdata());
    if (mldp_mdt_interface.is_set || is_set(mldp_mdt_interface.yfilter)) leaf_name_data.push_back(mldp_mdt_interface.get_name_leafdata());
    if (mldp_mdt_mtu.is_set || is_set(mldp_mdt_mtu.yfilter)) leaf_name_data.push_back(mldp_mdt_mtu.get_name_leafdata());
    if (mldp_maximum_mdt_aggregation.is_set || is_set(mldp_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(mldp_maximum_mdt_aggregation.get_name_leafdata());
    if (mldp_mdt_data_switchover_interval.is_set || is_set(mldp_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(mldp_mdt_data_switchover_interval.get_name_leafdata());
    if (mldp_mdt_data_announce_interval.is_set || is_set(mldp_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(mldp_mdt_data_announce_interval.get_name_leafdata());
    if (mldp_mdt_rpf_identifier.is_set || is_set(mldp_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_rpf_identifier.get_name_leafdata());
    if (mldp_mdt_remote_rpf_identifier.is_set || is_set(mldp_mdt_remote_rpf_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_remote_rpf_identifier.get_name_leafdata());
    if (is_create_mldp_mdt_interface.is_set || is_set(is_create_mldp_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_mldp_mdt_interface.get_name_leafdata());
    if (is_mldp_mdt_owner.is_set || is_set(is_mldp_mdt_owner.yfilter)) leaf_name_data.push_back(is_mldp_mdt_owner.get_name_leafdata());
    if (mldp_root_count.is_set || is_set(mldp_root_count.yfilter)) leaf_name_data.push_back(mldp_root_count.get_name_leafdata());
    if (mldp_head_lsm_identifier.is_set || is_set(mldp_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_head_lsm_identifier.get_name_leafdata());
    if (mldp_remote_head_lsm_identifier.is_set || is_set(mldp_remote_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_remote_head_lsm_identifier.get_name_leafdata());
    if (organization_unique_identifier.is_set || is_set(organization_unique_identifier.yfilter)) leaf_name_data.push_back(organization_unique_identifier.get_name_leafdata());
    if (vpn_index.is_set || is_set(vpn_index.yfilter)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (mldp_partitioned_mdt_configured.is_set || is_set(mldp_partitioned_mdt_configured.yfilter)) leaf_name_data.push_back(mldp_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_remote_partitioned_mdt_configured.is_set || is_set(mldp_remote_partitioned_mdt_configured.yfilter)) leaf_name_data.push_back(mldp_remote_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_partioned_mp2m_ptree.is_set || is_set(mldp_partioned_mp2m_ptree.yfilter)) leaf_name_data.push_back(mldp_partioned_mp2m_ptree.get_name_leafdata());
    if (mldp_partitioned_head_lsm_identifier.is_set || is_set(mldp_partitioned_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_partitioned_head_lsm_identifier.get_name_leafdata());
    if (mldp_head_local_label.is_set || is_set(mldp_head_local_label.yfilter)) leaf_name_data.push_back(mldp_head_local_label.get_name_leafdata());
    if (mldp_partitioned_mdt_identifier.is_set || is_set(mldp_partitioned_mdt_identifier.yfilter)) leaf_name_data.push_back(mldp_partitioned_mdt_identifier.get_name_leafdata());
    if (bgp_auto_discovery_configured.is_set || is_set(bgp_auto_discovery_configured.yfilter)) leaf_name_data.push_back(bgp_auto_discovery_configured.get_name_leafdata());
    if (suppress_pim_data_mdt_tlv.is_set || is_set(suppress_pim_data_mdt_tlv.yfilter)) leaf_name_data.push_back(suppress_pim_data_mdt_tlv.get_name_leafdata());
    if (inter_autonomous_system_enabled.is_set || is_set(inter_autonomous_system_enabled.yfilter)) leaf_name_data.push_back(inter_autonomous_system_enabled.get_name_leafdata());
    if (bgp_source_active_announce.is_set || is_set(bgp_source_active_announce.yfilter)) leaf_name_data.push_back(bgp_source_active_announce.get_name_leafdata());
    if (bgp_i_pmsi_added.is_set || is_set(bgp_i_pmsi_added.yfilter)) leaf_name_data.push_back(bgp_i_pmsi_added.get_name_leafdata());
    if (mldp_bsr_control_tree_added.is_set || is_set(mldp_bsr_control_tree_added.yfilter)) leaf_name_data.push_back(mldp_bsr_control_tree_added.get_name_leafdata());
    if (mldp_auto_rp_discovery_tree_added.is_set || is_set(mldp_auto_rp_discovery_tree_added.yfilter)) leaf_name_data.push_back(mldp_auto_rp_discovery_tree_added.get_name_leafdata());
    if (mldp_auto_rp_announce_tree_added.is_set || is_set(mldp_auto_rp_announce_tree_added.yfilter)) leaf_name_data.push_back(mldp_auto_rp_announce_tree_added.get_name_leafdata());
    if (bgp_auto_discovery_type.is_set || is_set(bgp_auto_discovery_type.yfilter)) leaf_name_data.push_back(bgp_auto_discovery_type.get_name_leafdata());
    if (mdt_partitioned_mdt_control_identifier.is_set || is_set(mdt_partitioned_mdt_control_identifier.yfilter)) leaf_name_data.push_back(mdt_partitioned_mdt_control_identifier.get_name_leafdata());
    if (mdt_partitioned_ir_control_identifier.is_set || is_set(mdt_partitioned_ir_control_identifier.yfilter)) leaf_name_data.push_back(mdt_partitioned_ir_control_identifier.get_name_leafdata());
    if (mldp_control_head_lsm_identifier.is_set || is_set(mldp_control_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_control_head_lsm_identifier.get_name_leafdata());
    if (umh.is_set || is_set(umh.yfilter)) leaf_name_data.push_back(umh.get_name_leafdata());
    if (suppress_shared_tree_join.is_set || is_set(suppress_shared_tree_join.yfilter)) leaf_name_data.push_back(suppress_shared_tree_join.get_name_leafdata());
    if (rsvp_te_mdt_name.is_set || is_set(rsvp_te_mdt_name.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_name.get_name_leafdata());
    if (rsvp_te_mdt_interface.is_set || is_set(rsvp_te_mdt_interface.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_interface.get_name_leafdata());
    if (rsvp_te_mdt_mtu.is_set || is_set(rsvp_te_mdt_mtu.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_mtu.get_name_leafdata());
    if (rsvp_te_maximum_mdt_aggregation.is_set || is_set(rsvp_te_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(rsvp_te_maximum_mdt_aggregation.get_name_leafdata());
    if (rsvp_te_mdt_data_switchover_interval.is_set || is_set(rsvp_te_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_data_switchover_interval.get_name_leafdata());
    if (rsvp_te_mdt_data_announce_interval.is_set || is_set(rsvp_te_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_data_announce_interval.get_name_leafdata());
    if (rsvp_te_mdt_rpf_identifier.is_set || is_set(rsvp_te_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_rpf_identifier.get_name_leafdata());
    if (is_create_rsvp_te_mdt_interface.is_set || is_set(is_create_rsvp_te_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_rsvp_te_mdt_interface.get_name_leafdata());
    if (is_rsvp_te_mdt_owner.is_set || is_set(is_rsvp_te_mdt_owner.yfilter)) leaf_name_data.push_back(is_rsvp_te_mdt_owner.get_name_leafdata());
    if (rsvp_te_mdt_static_p2mp_count.is_set || is_set(rsvp_te_mdt_static_p2mp_count.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_static_p2mp_count.get_name_leafdata());
    if (p2mpte_li_drop.is_set || is_set(p2mpte_li_drop.yfilter)) leaf_name_data.push_back(p2mpte_li_drop.get_name_leafdata());
    if (ir_mdt_name.is_set || is_set(ir_mdt_name.yfilter)) leaf_name_data.push_back(ir_mdt_name.get_name_leafdata());
    if (ir_mdt_interface.is_set || is_set(ir_mdt_interface.yfilter)) leaf_name_data.push_back(ir_mdt_interface.get_name_leafdata());
    if (ir_mdt_mtu.is_set || is_set(ir_mdt_mtu.yfilter)) leaf_name_data.push_back(ir_mdt_mtu.get_name_leafdata());
    if (ir_maximum_mdt_aggregation.is_set || is_set(ir_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(ir_maximum_mdt_aggregation.get_name_leafdata());
    if (ir_mdt_data_switchover_interval.is_set || is_set(ir_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(ir_mdt_data_switchover_interval.get_name_leafdata());
    if (ir_mdt_data_announce_interval.is_set || is_set(ir_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(ir_mdt_data_announce_interval.get_name_leafdata());
    if (ir_mdt_rpf_identifier.is_set || is_set(ir_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(ir_mdt_rpf_identifier.get_name_leafdata());
    if (ir_mdt_tail_label.is_set || is_set(ir_mdt_tail_label.yfilter)) leaf_name_data.push_back(ir_mdt_tail_label.get_name_leafdata());
    if (is_create_ir_mdt_interface.is_set || is_set(is_create_ir_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_ir_mdt_interface.get_name_leafdata());
    if (is_ir_mdt_owner.is_set || is_set(is_ir_mdt_owner.yfilter)) leaf_name_data.push_back(is_ir_mdt_owner.get_name_leafdata());
    if (in_b_and_mdt_name.is_set || is_set(in_b_and_mdt_name.yfilter)) leaf_name_data.push_back(in_b_and_mdt_name.get_name_leafdata());
    if (in_b_and_mdt_interface.is_set || is_set(in_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(in_b_and_mdt_interface.get_name_leafdata());
    if (in_b_and_mdt_mtu.is_set || is_set(in_b_and_mdt_mtu.yfilter)) leaf_name_data.push_back(in_b_and_mdt_mtu.get_name_leafdata());
    if (in_band_maximum_mdt_aggregation.is_set || is_set(in_band_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(in_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_b_and_mdt_data_switchover_interval.is_set || is_set(in_b_and_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(in_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (in_b_and_mdt_data_announce_interval.is_set || is_set(in_b_and_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(in_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (in_b_and_mdt_rpf_identifier.is_set || is_set(in_b_and_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(in_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (is_create_in_b_and_mdt_interface.is_set || is_set(is_create_in_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_in_b_and_mdt_interface.get_name_leafdata());
    if (is_in_b_and_mdt_owner.is_set || is_set(is_in_b_and_mdt_owner.yfilter)) leaf_name_data.push_back(is_in_b_and_mdt_owner.get_name_leafdata());
    if (in_band_signaling_local_enabled.is_set || is_set(in_band_signaling_local_enabled.yfilter)) leaf_name_data.push_back(in_band_signaling_local_enabled.get_name_leafdata());
    if (in_band_signaling_remote_enabled.is_set || is_set(in_band_signaling_remote_enabled.yfilter)) leaf_name_data.push_back(in_band_signaling_remote_enabled.get_name_leafdata());
    if (valid_rd_present.is_set || is_set(valid_rd_present.yfilter)) leaf_name_data.push_back(valid_rd_present.get_name_leafdata());
    if (stale_rd_present.is_set || is_set(stale_rd_present.yfilter)) leaf_name_data.push_back(stale_rd_present.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (gin_b_and_mdt_name.is_set || is_set(gin_b_and_mdt_name.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_name.get_name_leafdata());
    if (gin_b_and_mdt_interface.is_set || is_set(gin_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_interface.get_name_leafdata());
    if (gin_b_and_mdt_mtu.is_set || is_set(gin_b_and_mdt_mtu.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_mtu.get_name_leafdata());
    if (gin_band_maximum_mdt_aggregation.is_set || is_set(gin_band_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(gin_band_maximum_mdt_aggregation.get_name_leafdata());
    if (gin_b_and_mdt_data_switchover_interval.is_set || is_set(gin_b_and_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (gin_b_and_mdt_data_announce_interval.is_set || is_set(gin_b_and_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (gin_b_and_mdt_rpf_identifier.is_set || is_set(gin_b_and_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (is_create_gin_b_and_mdt_interface.is_set || is_set(is_create_gin_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_gin_b_and_mdt_interface.get_name_leafdata());
    if (is_gin_b_and_mdt_owner.is_set || is_set(is_gin_b_and_mdt_owner.yfilter)) leaf_name_data.push_back(is_gin_b_and_mdt_owner.get_name_leafdata());
    if (is_pim_nsf_rib_converged.is_set || is_set(is_pim_nsf_rib_converged.yfilter)) leaf_name_data.push_back(is_pim_nsf_rib_converged.get_name_leafdata());
    if (is_pim_nsf_rib_converge_received.is_set || is_set(is_pim_nsf_rib_converge_received.yfilter)) leaf_name_data.push_back(is_pim_nsf_rib_converge_received.get_name_leafdata());
    if (is_rib_multipath_enabled.is_set || is_set(is_rib_multipath_enabled.yfilter)) leaf_name_data.push_back(is_rib_multipath_enabled.get_name_leafdata());
    if (is_rib_multipath_interface_hash.is_set || is_set(is_rib_multipath_interface_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_interface_hash.get_name_leafdata());
    if (is_rib_multipath_source_hash.is_set || is_set(is_rib_multipath_source_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_source_hash.get_name_leafdata());
    if (is_rib_multipath_source_next_hop_hash.is_set || is_set(is_rib_multipath_source_next_hop_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_source_next_hop_hash.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (is_create_mdt_interface.is_set || is_set(is_create_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_mdt_interface.get_name_leafdata());
    if (is_auto_rp_listen_enabled.is_set || is_set(is_auto_rp_listen_enabled.yfilter)) leaf_name_data.push_back(is_auto_rp_listen_enabled.get_name_leafdata());
    if (is_all_interface_disable_operation.is_set || is_set(is_all_interface_disable_operation.yfilter)) leaf_name_data.push_back(is_all_interface_disable_operation.get_name_leafdata());
    if (is_default_granges.is_set || is_set(is_default_granges.yfilter)) leaf_name_data.push_back(is_default_granges.get_name_leafdata());
    if (is_auto_rp_listen_sock_add.is_set || is_set(is_auto_rp_listen_sock_add.yfilter)) leaf_name_data.push_back(is_auto_rp_listen_sock_add.get_name_leafdata());
    if (is_redistribution_reset.is_set || is_set(is_redistribution_reset.yfilter)) leaf_name_data.push_back(is_redistribution_reset.get_name_leafdata());
    if (redistribution_reset_count.is_set || is_set(redistribution_reset_count.yfilter)) leaf_name_data.push_back(redistribution_reset_count.get_name_leafdata());
    if (rpf_policy_name.is_set || is_set(rpf_policy_name.yfilter)) leaf_name_data.push_back(rpf_policy_name.get_name_leafdata());
    if (table_count.is_set || is_set(table_count.yfilter)) leaf_name_data.push_back(table_count.get_name_leafdata());
    if (active_table_count.is_set || is_set(active_table_count.yfilter)) leaf_name_data.push_back(active_table_count.get_name_leafdata());
    if (anycast_rp_policy_name.is_set || is_set(anycast_rp_policy_name.yfilter)) leaf_name_data.push_back(anycast_rp_policy_name.get_name_leafdata());
    if (anycast_rp_configured.is_set || is_set(anycast_rp_configured.yfilter)) leaf_name_data.push_back(anycast_rp_configured.get_name_leafdata());
    if (bgp_remote_on.is_set || is_set(bgp_remote_on.yfilter)) leaf_name_data.push_back(bgp_remote_on.get_name_leafdata());
    if (bgp_remote_interface_name.is_set || is_set(bgp_remote_interface_name.yfilter)) leaf_name_data.push_back(bgp_remote_interface_name.get_name_leafdata());
    if (bgp_remote_interface.is_set || is_set(bgp_remote_interface.yfilter)) leaf_name_data.push_back(bgp_remote_interface.get_name_leafdata());
    if (bgp_remote_address.is_set || is_set(bgp_remote_address.yfilter)) leaf_name_data.push_back(bgp_remote_address.get_name_leafdata());
    if (bgp_remote_state.is_set || is_set(bgp_remote_state.yfilter)) leaf_name_data.push_back(bgp_remote_state.get_name_leafdata());
    if (physical_interface_count.is_set || is_set(physical_interface_count.yfilter)) leaf_name_data.push_back(physical_interface_count.get_name_leafdata());
    if (virtual_interface_count.is_set || is_set(virtual_interface_count.yfilter)) leaf_name_data.push_back(virtual_interface_count.get_name_leafdata());
    if (virtual_mlc_interface_name.is_set || is_set(virtual_mlc_interface_name.yfilter)) leaf_name_data.push_back(virtual_mlc_interface_name.get_name_leafdata());
    if (mdt_immediate_switch.is_set || is_set(mdt_immediate_switch.yfilter)) leaf_name_data.push_back(mdt_immediate_switch.get_name_leafdata());

    auto mldp_root_address_name_datas = mldp_root_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mldp_root_address_name_datas.begin(), mldp_root_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-default-group")
    {
        if(remote_default_group == nullptr)
        {
            remote_default_group = std::make_shared<Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup>();
        }
        return remote_default_group;
    }

    if(child_yang_name == "rpf-default-table")
    {
        if(rpf_default_table == nullptr)
        {
            rpf_default_table = std::make_shared<Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable>();
        }
        return rpf_default_table;
    }

    if(child_yang_name == "export-route-target")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget>();
        c->parent = this;
        export_route_target.append(c);
        return c;
    }

    if(child_yang_name == "import-route-target")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget>();
        c->parent = this;
        import_route_target.append(c);
        return c;
    }

    if(child_yang_name == "anycast-rp-range")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange>();
        c->parent = this;
        anycast_rp_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_default_group != nullptr)
    {
        children["remote-default-group"] = remote_default_group;
    }

    if(rpf_default_table != nullptr)
    {
        children["rpf-default-table"] = rpf_default_table;
    }

    count = 0;
    for (auto c : export_route_target.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : import_route_target.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : anycast_rp_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "murib-id")
    {
        murib_id = value;
        murib_id.value_namespace = name_space;
        murib_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-id")
    {
        rpf_id = value;
        rpf_id.value_namespace = name_space;
        rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id = value;
        remote_table_id.value_namespace = name_space;
        remote_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group = value;
        mdt_default_group.value_namespace = name_space;
        mdt_default_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-source")
    {
        mdt_source = value;
        mdt_source.value_namespace = name_space;
        mdt_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-source-interface")
    {
        mdt_source_interface = value;
        mdt_source_interface.value_namespace = name_space;
        mdt_source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface = value;
        mdt_interface.value_namespace = name_space;
        mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier = value;
        mdt_gre_rpf_identifier.value_namespace = name_space;
        mdt_gre_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier = value;
        mdt_gre_remote_rpf_identifier.value_namespace = name_space;
        mdt_gre_remote_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration = value;
        is_unicast_rib_registration.value_namespace = name_space;
        is_unicast_rib_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration = value;
        is_multicast_rib_registration.value_namespace = name_space;
        is_multicast_rib_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital = value;
        is_active_ital.value_namespace = name_space;
        is_active_ital.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register = value;
        is_mrib_register.value_namespace = name_space;
        is_mrib_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner = value;
        is_mdt_owner.value_namespace = name_space;
        is_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled = value;
        is_routing_enabled.value_namespace = name_space;
        is_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required = value;
        is_socket_add_required.value_namespace = name_space;
        is_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added = value;
        is_socket_added.value_namespace = name_space;
        is_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required = value;
        is_lpts_socket_add_required.value_namespace = name_space;
        is_lpts_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added = value;
        is_lpts_socket_added.value_namespace = name_space;
        is_lpts_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required = value;
        is_udp_socket_add_required.value_namespace = name_space;
        is_udp_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added = value;
        is_udp_socket_added.value_namespace = name_space;
        is_udp_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required = value;
        is_udp_socket_bind_required.value_namespace = name_space;
        is_udp_socket_bind_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind = value;
        is_udp_socket_bind.value_namespace = name_space;
        is_udp_socket_bind.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required = value;
        is_register_injection_socket_add_required.value_namespace = name_space;
        is_register_injection_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added = value;
        is_register_injection_socket_added.value_namespace = name_space;
        is_register_injection_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required = value;
        is_register_injection_lpts_socket_add_required.value_namespace = name_space;
        is_register_injection_lpts_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added = value;
        is_register_injection_lpts_socket_added.value_namespace = name_space;
        is_register_injection_lpts_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending = value;
        is_m_host_publish_pending.value_namespace = name_space;
        is_m_host_publish_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface = value;
        mhost_interface.value_namespace = name_space;
        mhost_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config = value;
        mhost_default_interface_config.value_namespace = name_space;
        mhost_default_interface_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu = value;
        mdt_mtu.value_namespace = name_space;
        mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation = value;
        maximum_mdt_aggregation.value_namespace = name_space;
        maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval = value;
        mdt_data_switchover_interval.value_namespace = name_space;
        mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval = value;
        mdt_data_announce_interval.value_namespace = name_space;
        mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket = value;
        non_default_vrf_count_on_socket.value_namespace = name_space;
        non_default_vrf_count_on_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name = value;
        mdt_neighbor_filter_name.value_namespace = name_space;
        mdt_neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-rp-configured")
    {
        allow_rp_configured = value;
        allow_rp_configured.value_namespace = name_space;
        allow_rp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-rp-group-list")
    {
        allow_rp_group_list = value;
        allow_rp_group_list.value_namespace = name_space;
        allow_rp_group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-rp-rp-list")
    {
        allow_rp_rp_list = value;
        allow_rp_rp_list.value_namespace = name_space;
        allow_rp_rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured = value;
        sg_expiry_timer_configured.value_namespace = name_space;
        sg_expiry_timer_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time = value;
        sg_expiry_time.value_namespace = name_space;
        sg_expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list = value;
        sg_expiry_timer_sg_list.value_namespace = name_space;
        sg_expiry_timer_sg_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name = value;
        mldp_mdt_name.value_namespace = name_space;
        mldp_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface = value;
        mldp_mdt_interface.value_namespace = name_space;
        mldp_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu = value;
        mldp_mdt_mtu.value_namespace = name_space;
        mldp_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation = value;
        mldp_maximum_mdt_aggregation.value_namespace = name_space;
        mldp_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval = value;
        mldp_mdt_data_switchover_interval.value_namespace = name_space;
        mldp_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval = value;
        mldp_mdt_data_announce_interval.value_namespace = name_space;
        mldp_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier = value;
        mldp_mdt_rpf_identifier.value_namespace = name_space;
        mldp_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier = value;
        mldp_mdt_remote_rpf_identifier.value_namespace = name_space;
        mldp_mdt_remote_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface = value;
        is_create_mldp_mdt_interface.value_namespace = name_space;
        is_create_mldp_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner = value;
        is_mldp_mdt_owner.value_namespace = name_space;
        is_mldp_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count = value;
        mldp_root_count.value_namespace = name_space;
        mldp_root_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier = value;
        mldp_head_lsm_identifier.value_namespace = name_space;
        mldp_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier = value;
        mldp_remote_head_lsm_identifier.value_namespace = name_space;
        mldp_remote_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier = value;
        organization_unique_identifier.value_namespace = name_space;
        organization_unique_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-index")
    {
        vpn_index = value;
        vpn_index.value_namespace = name_space;
        vpn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured = value;
        mldp_partitioned_mdt_configured.value_namespace = name_space;
        mldp_partitioned_mdt_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured = value;
        mldp_remote_partitioned_mdt_configured.value_namespace = name_space;
        mldp_remote_partitioned_mdt_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree = value;
        mldp_partioned_mp2m_ptree.value_namespace = name_space;
        mldp_partioned_mp2m_ptree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier = value;
        mldp_partitioned_head_lsm_identifier.value_namespace = name_space;
        mldp_partitioned_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label = value;
        mldp_head_local_label.value_namespace = name_space;
        mldp_head_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier = value;
        mldp_partitioned_mdt_identifier.value_namespace = name_space;
        mldp_partitioned_mdt_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured = value;
        bgp_auto_discovery_configured.value_namespace = name_space;
        bgp_auto_discovery_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv = value;
        suppress_pim_data_mdt_tlv.value_namespace = name_space;
        suppress_pim_data_mdt_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled = value;
        inter_autonomous_system_enabled.value_namespace = name_space;
        inter_autonomous_system_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce = value;
        bgp_source_active_announce.value_namespace = name_space;
        bgp_source_active_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added = value;
        bgp_i_pmsi_added.value_namespace = name_space;
        bgp_i_pmsi_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added = value;
        mldp_bsr_control_tree_added.value_namespace = name_space;
        mldp_bsr_control_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added = value;
        mldp_auto_rp_discovery_tree_added.value_namespace = name_space;
        mldp_auto_rp_discovery_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added = value;
        mldp_auto_rp_announce_tree_added.value_namespace = name_space;
        mldp_auto_rp_announce_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type = value;
        bgp_auto_discovery_type.value_namespace = name_space;
        bgp_auto_discovery_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier = value;
        mdt_partitioned_mdt_control_identifier.value_namespace = name_space;
        mdt_partitioned_mdt_control_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier = value;
        mdt_partitioned_ir_control_identifier.value_namespace = name_space;
        mdt_partitioned_ir_control_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier = value;
        mldp_control_head_lsm_identifier.value_namespace = name_space;
        mldp_control_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "umh")
    {
        umh = value;
        umh.value_namespace = name_space;
        umh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join = value;
        suppress_shared_tree_join.value_namespace = name_space;
        suppress_shared_tree_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name = value;
        rsvp_te_mdt_name.value_namespace = name_space;
        rsvp_te_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface = value;
        rsvp_te_mdt_interface.value_namespace = name_space;
        rsvp_te_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu = value;
        rsvp_te_mdt_mtu.value_namespace = name_space;
        rsvp_te_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation = value;
        rsvp_te_maximum_mdt_aggregation.value_namespace = name_space;
        rsvp_te_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval = value;
        rsvp_te_mdt_data_switchover_interval.value_namespace = name_space;
        rsvp_te_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval = value;
        rsvp_te_mdt_data_announce_interval.value_namespace = name_space;
        rsvp_te_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier = value;
        rsvp_te_mdt_rpf_identifier.value_namespace = name_space;
        rsvp_te_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface = value;
        is_create_rsvp_te_mdt_interface.value_namespace = name_space;
        is_create_rsvp_te_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner = value;
        is_rsvp_te_mdt_owner.value_namespace = name_space;
        is_rsvp_te_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count = value;
        rsvp_te_mdt_static_p2mp_count.value_namespace = name_space;
        rsvp_te_mdt_static_p2mp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop = value;
        p2mpte_li_drop.value_namespace = name_space;
        p2mpte_li_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name = value;
        ir_mdt_name.value_namespace = name_space;
        ir_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface = value;
        ir_mdt_interface.value_namespace = name_space;
        ir_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu = value;
        ir_mdt_mtu.value_namespace = name_space;
        ir_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation = value;
        ir_maximum_mdt_aggregation.value_namespace = name_space;
        ir_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval = value;
        ir_mdt_data_switchover_interval.value_namespace = name_space;
        ir_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval = value;
        ir_mdt_data_announce_interval.value_namespace = name_space;
        ir_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier = value;
        ir_mdt_rpf_identifier.value_namespace = name_space;
        ir_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label = value;
        ir_mdt_tail_label.value_namespace = name_space;
        ir_mdt_tail_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface = value;
        is_create_ir_mdt_interface.value_namespace = name_space;
        is_create_ir_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner = value;
        is_ir_mdt_owner.value_namespace = name_space;
        is_ir_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name = value;
        in_b_and_mdt_name.value_namespace = name_space;
        in_b_and_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface = value;
        in_b_and_mdt_interface.value_namespace = name_space;
        in_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu = value;
        in_b_and_mdt_mtu.value_namespace = name_space;
        in_b_and_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation = value;
        in_band_maximum_mdt_aggregation.value_namespace = name_space;
        in_band_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval = value;
        in_b_and_mdt_data_switchover_interval.value_namespace = name_space;
        in_b_and_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval = value;
        in_b_and_mdt_data_announce_interval.value_namespace = name_space;
        in_b_and_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier = value;
        in_b_and_mdt_rpf_identifier.value_namespace = name_space;
        in_b_and_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface = value;
        is_create_in_b_and_mdt_interface.value_namespace = name_space;
        is_create_in_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner = value;
        is_in_b_and_mdt_owner.value_namespace = name_space;
        is_in_b_and_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled = value;
        in_band_signaling_local_enabled.value_namespace = name_space;
        in_band_signaling_local_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled = value;
        in_band_signaling_remote_enabled.value_namespace = name_space;
        in_band_signaling_remote_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present = value;
        valid_rd_present.value_namespace = name_space;
        valid_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present = value;
        stale_rd_present.value_namespace = name_space;
        stale_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name = value;
        gin_b_and_mdt_name.value_namespace = name_space;
        gin_b_and_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface = value;
        gin_b_and_mdt_interface.value_namespace = name_space;
        gin_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu = value;
        gin_b_and_mdt_mtu.value_namespace = name_space;
        gin_b_and_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation = value;
        gin_band_maximum_mdt_aggregation.value_namespace = name_space;
        gin_band_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval = value;
        gin_b_and_mdt_data_switchover_interval.value_namespace = name_space;
        gin_b_and_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval = value;
        gin_b_and_mdt_data_announce_interval.value_namespace = name_space;
        gin_b_and_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier = value;
        gin_b_and_mdt_rpf_identifier.value_namespace = name_space;
        gin_b_and_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface = value;
        is_create_gin_b_and_mdt_interface.value_namespace = name_space;
        is_create_gin_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner = value;
        is_gin_b_and_mdt_owner.value_namespace = name_space;
        is_gin_b_and_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged = value;
        is_pim_nsf_rib_converged.value_namespace = name_space;
        is_pim_nsf_rib_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received = value;
        is_pim_nsf_rib_converge_received.value_namespace = name_space;
        is_pim_nsf_rib_converge_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-enabled")
    {
        is_rib_multipath_enabled = value;
        is_rib_multipath_enabled.value_namespace = name_space;
        is_rib_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-interface-hash")
    {
        is_rib_multipath_interface_hash = value;
        is_rib_multipath_interface_hash.value_namespace = name_space;
        is_rib_multipath_interface_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-source-hash")
    {
        is_rib_multipath_source_hash = value;
        is_rib_multipath_source_hash.value_namespace = name_space;
        is_rib_multipath_source_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-source-next-hop-hash")
    {
        is_rib_multipath_source_next_hop_hash = value;
        is_rib_multipath_source_next_hop_hash.value_namespace = name_space;
        is_rib_multipath_source_next_hop_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface = value;
        is_create_mdt_interface.value_namespace = name_space;
        is_create_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled = value;
        is_auto_rp_listen_enabled.value_namespace = name_space;
        is_auto_rp_listen_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation = value;
        is_all_interface_disable_operation.value_namespace = name_space;
        is_all_interface_disable_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges = value;
        is_default_granges.value_namespace = name_space;
        is_default_granges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add = value;
        is_auto_rp_listen_sock_add.value_namespace = name_space;
        is_auto_rp_listen_sock_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset = value;
        is_redistribution_reset.value_namespace = name_space;
        is_redistribution_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count = value;
        redistribution_reset_count.value_namespace = name_space;
        redistribution_reset_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name = value;
        rpf_policy_name.value_namespace = name_space;
        rpf_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-count")
    {
        table_count = value;
        table_count.value_namespace = name_space;
        table_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-table-count")
    {
        active_table_count = value;
        active_table_count.value_namespace = name_space;
        active_table_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name = value;
        anycast_rp_policy_name.value_namespace = name_space;
        anycast_rp_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured = value;
        anycast_rp_configured.value_namespace = name_space;
        anycast_rp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on = value;
        bgp_remote_on.value_namespace = name_space;
        bgp_remote_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name = value;
        bgp_remote_interface_name.value_namespace = name_space;
        bgp_remote_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface = value;
        bgp_remote_interface.value_namespace = name_space;
        bgp_remote_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address = value;
        bgp_remote_address.value_namespace = name_space;
        bgp_remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state = value;
        bgp_remote_state.value_namespace = name_space;
        bgp_remote_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-interface-count")
    {
        physical_interface_count = value;
        physical_interface_count.value_namespace = name_space;
        physical_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface-count")
    {
        virtual_interface_count = value;
        virtual_interface_count.value_namespace = name_space;
        virtual_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mlc-interface-name")
    {
        virtual_mlc_interface_name = value;
        virtual_mlc_interface_name.value_namespace = name_space;
        virtual_mlc_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-immediate-switch")
    {
        mdt_immediate_switch = value;
        mdt_immediate_switch.value_namespace = name_space;
        mdt_immediate_switch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.append(value);
    }
}

void Pim::Standby::Vrfs::Vrf::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "murib-id")
    {
        murib_id.yfilter = yfilter;
    }
    if(value_path == "rpf-id")
    {
        rpf_id.yfilter = yfilter;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id.yfilter = yfilter;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group.yfilter = yfilter;
    }
    if(value_path == "mdt-source")
    {
        mdt_source.yfilter = yfilter;
    }
    if(value_path == "mdt-source-interface")
    {
        mdt_source_interface.yfilter = yfilter;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface.yfilter = yfilter;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration.yfilter = yfilter;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital.yfilter = yfilter;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register.yfilter = yfilter;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending.yfilter = yfilter;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface.yfilter = yfilter;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config.yfilter = yfilter;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "allow-rp-configured")
    {
        allow_rp_configured.yfilter = yfilter;
    }
    if(value_path == "allow-rp-group-list")
    {
        allow_rp_group_list.yfilter = yfilter;
    }
    if(value_path == "allow-rp-rp-list")
    {
        allow_rp_rp_list.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count.yfilter = yfilter;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier.yfilter = yfilter;
    }
    if(value_path == "vpn-index")
    {
        vpn_index.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured.yfilter = yfilter;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured.yfilter = yfilter;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured.yfilter = yfilter;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv.yfilter = yfilter;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled.yfilter = yfilter;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce.yfilter = yfilter;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added.yfilter = yfilter;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type.yfilter = yfilter;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "umh")
    {
        umh.yfilter = yfilter;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count.yfilter = yfilter;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label.yfilter = yfilter;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled.yfilter = yfilter;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled.yfilter = yfilter;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present.yfilter = yfilter;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged.yfilter = yfilter;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-enabled")
    {
        is_rib_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-interface-hash")
    {
        is_rib_multipath_interface_hash.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-source-hash")
    {
        is_rib_multipath_source_hash.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-source-next-hop-hash")
    {
        is_rib_multipath_source_next_hop_hash.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled.yfilter = yfilter;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation.yfilter = yfilter;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges.yfilter = yfilter;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add.yfilter = yfilter;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset.yfilter = yfilter;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count.yfilter = yfilter;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name.yfilter = yfilter;
    }
    if(value_path == "table-count")
    {
        table_count.yfilter = yfilter;
    }
    if(value_path == "active-table-count")
    {
        active_table_count.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state.yfilter = yfilter;
    }
    if(value_path == "physical-interface-count")
    {
        physical_interface_count.yfilter = yfilter;
    }
    if(value_path == "virtual-interface-count")
    {
        virtual_interface_count.yfilter = yfilter;
    }
    if(value_path == "virtual-mlc-interface-name")
    {
        virtual_mlc_interface_name.yfilter = yfilter;
    }
    if(value_path == "mdt-immediate-switch")
    {
        mdt_immediate_switch.yfilter = yfilter;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-default-group" || name == "rpf-default-table" || name == "export-route-target" || name == "import-route-target" || name == "anycast-rp-range" || name == "vrf-id" || name == "table-id" || name == "murib-id" || name == "rpf-id" || name == "remote-table-id" || name == "mdt-default-group" || name == "mdt-source" || name == "mdt-source-interface" || name == "mdt-interface" || name == "mdt-gre-rpf-identifier" || name == "mdt-gre-remote-rpf-identifier" || name == "is-unicast-rib-registration" || name == "is-multicast-rib-registration" || name == "is-active" || name == "is-active-ital" || name == "is-mrib-register" || name == "is-mdt-owner" || name == "is-routing-enabled" || name == "is-socket-add-required" || name == "is-socket-added" || name == "is-lpts-socket-add-required" || name == "is-lpts-socket-added" || name == "is-udp-socket-add-required" || name == "is-udp-socket-added" || name == "is-udp-socket-bind-required" || name == "is-udp-socket-bind" || name == "is-register-injection-socket-add-required" || name == "is-register-injection-socket-added" || name == "is-register-injection-lpts-socket-add-required" || name == "is-register-injection-lpts-socket-added" || name == "is-m-host-publish-pending" || name == "mhost-interface" || name == "mhost-default-interface-config" || name == "mdt-mtu" || name == "maximum-mdt-aggregation" || name == "mdt-data-switchover-interval" || name == "mdt-data-announce-interval" || name == "non-default-vrf-count-on-socket" || name == "neighbor-filter-name" || name == "mdt-neighbor-filter-name" || name == "allow-rp-configured" || name == "allow-rp-group-list" || name == "allow-rp-rp-list" || name == "sg-expiry-timer-configured" || name == "sg-expiry-time" || name == "sg-expiry-timer-sg-list" || name == "mldp-mdt-name" || name == "mldp-mdt-interface" || name == "mldp-mdt-mtu" || name == "mldp-maximum-mdt-aggregation" || name == "mldp-mdt-data-switchover-interval" || name == "mldp-mdt-data-announce-interval" || name == "mldp-mdt-rpf-identifier" || name == "mldp-mdt-remote-rpf-identifier" || name == "is-create-mldp-mdt-interface" || name == "is-mldp-mdt-owner" || name == "mldp-root-count" || name == "mldp-head-lsm-identifier" || name == "mldp-remote-head-lsm-identifier" || name == "organization-unique-identifier" || name == "vpn-index" || name == "mldp-partitioned-mdt-configured" || name == "mldp-remote-partitioned-mdt-configured" || name == "mldp-partioned-mp2m-ptree" || name == "mldp-partitioned-head-lsm-identifier" || name == "mldp-head-local-label" || name == "mldp-partitioned-mdt-identifier" || name == "bgp-auto-discovery-configured" || name == "suppress-pim-data-mdt-tlv" || name == "inter-autonomous-system-enabled" || name == "bgp-source-active-announce" || name == "bgp-i-pmsi-added" || name == "mldp-bsr-control-tree-added" || name == "mldp-auto-rp-discovery-tree-added" || name == "mldp-auto-rp-announce-tree-added" || name == "bgp-auto-discovery-type" || name == "mdt-partitioned-mdt-control-identifier" || name == "mdt-partitioned-ir-control-identifier" || name == "mldp-control-head-lsm-identifier" || name == "umh" || name == "suppress-shared-tree-join" || name == "rsvp-te-mdt-name" || name == "rsvp-te-mdt-interface" || name == "rsvp-te-mdt-mtu" || name == "rsvp-te-maximum-mdt-aggregation" || name == "rsvp-te-mdt-data-switchover-interval" || name == "rsvp-te-mdt-data-announce-interval" || name == "rsvp-te-mdt-rpf-identifier" || name == "is-create-rsvp-te-mdt-interface" || name == "is-rsvp-te-mdt-owner" || name == "rsvp-te-mdt-static-p2mp-count" || name == "p2mpte-li-drop" || name == "ir-mdt-name" || name == "ir-mdt-interface" || name == "ir-mdt-mtu" || name == "ir-maximum-mdt-aggregation" || name == "ir-mdt-data-switchover-interval" || name == "ir-mdt-data-announce-interval" || name == "ir-mdt-rpf-identifier" || name == "ir-mdt-tail-label" || name == "is-create-ir-mdt-interface" || name == "is-ir-mdt-owner" || name == "in-b-and-mdt-name" || name == "in-b-and-mdt-interface" || name == "in-b-and-mdt-mtu" || name == "in-band-maximum-mdt-aggregation" || name == "in-b-and-mdt-data-switchover-interval" || name == "in-b-and-mdt-data-announce-interval" || name == "in-b-and-mdt-rpf-identifier" || name == "is-create-in-b-and-mdt-interface" || name == "is-in-b-and-mdt-owner" || name == "in-band-signaling-local-enabled" || name == "in-band-signaling-remote-enabled" || name == "valid-rd-present" || name == "stale-rd-present" || name == "route-distinguisher" || name == "gin-b-and-mdt-name" || name == "gin-b-and-mdt-interface" || name == "gin-b-and-mdt-mtu" || name == "gin-band-maximum-mdt-aggregation" || name == "gin-b-and-mdt-data-switchover-interval" || name == "gin-b-and-mdt-data-announce-interval" || name == "gin-b-and-mdt-rpf-identifier" || name == "is-create-gin-b-and-mdt-interface" || name == "is-gin-b-and-mdt-owner" || name == "is-pim-nsf-rib-converged" || name == "is-pim-nsf-rib-converge-received" || name == "is-rib-multipath-enabled" || name == "is-rib-multipath-interface-hash" || name == "is-rib-multipath-source-hash" || name == "is-rib-multipath-source-next-hop-hash" || name == "rump-enabled" || name == "is-create-mdt-interface" || name == "is-auto-rp-listen-enabled" || name == "is-all-interface-disable-operation" || name == "is-default-granges" || name == "is-auto-rp-listen-sock-add" || name == "is-redistribution-reset" || name == "redistribution-reset-count" || name == "rpf-policy-name" || name == "table-count" || name == "active-table-count" || name == "anycast-rp-policy-name" || name == "anycast-rp-configured" || name == "bgp-remote-on" || name == "bgp-remote-interface-name" || name == "bgp-remote-interface" || name == "bgp-remote-address" || name == "bgp-remote-state" || name == "physical-interface-count" || name == "virtual-interface-count" || name == "virtual-mlc-interface-name" || name == "mdt-immediate-switch" || name == "mldp-root-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::RemoteDefaultGroup()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "remote-default-group"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::~RemoteDefaultGroup()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-default-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::RemoteDefaultGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::RpfDefaultTable()
    :
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"},
    table_id{YType::uint32, "table-id"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    rpf_registrations{YType::uint32, "rpf-registrations"}
{

    yang_name = "rpf-default-table"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::~RpfDefaultTable()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| safi.is_set
	|| table_name.is_set
	|| vrf_id.is_set
	|| table_id.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_registration_done.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_convergence.is_set
	|| rpf_registrations.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-default-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::RpfDefaultTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "safi" || name == "table-name" || name == "vrf-id" || name == "table-id" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-registration-done" || name == "is-rib-convergence-received" || name == "is-rib-convergence" || name == "rpf-registrations")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::ExportRouteTarget()
    :
    route_target{YType::str, "route-target"},
    configured{YType::boolean, "configured"},
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    update_pending{YType::boolean, "update-pending"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    segment_border{YType::boolean, "segment-border"}
{

    yang_name = "export-route-target"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::~ExportRouteTarget()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return route_target.is_set
	|| configured.is_set
	|| anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| update_pending.is_set
	|| bgp_auto_discovery.is_set
	|| segment_border.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(update_pending.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(segment_border.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
        anycast_rp.value_namespace = name_space;
        anycast_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
        anycast_rp_marked.value_namespace = name_space;
        anycast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::ExportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "configured" || name == "anycast-rp" || name == "anycast-rp-marked" || name == "update-pending" || name == "bgp-auto-discovery" || name == "segment-border")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::ImportRouteTarget()
    :
    route_target{YType::str, "route-target"},
    configured{YType::boolean, "configured"},
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    update_pending{YType::boolean, "update-pending"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    segment_border{YType::boolean, "segment-border"}
{

    yang_name = "import-route-target"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::~ImportRouteTarget()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return route_target.is_set
	|| configured.is_set
	|| anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| update_pending.is_set
	|| bgp_auto_discovery.is_set
	|| segment_border.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(update_pending.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(segment_border.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
        anycast_rp.value_namespace = name_space;
        anycast_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
        anycast_rp_marked.value_namespace = name_space;
        anycast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::ImportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "configured" || name == "anycast-rp" || name == "anycast-rp-marked" || name == "update-pending" || name == "bgp-auto-discovery" || name == "segment-border")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::AnycastRpRange()
    :
    prefix_length{YType::uint8, "prefix-length"},
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"}
        ,
    prefix(std::make_shared<Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;

    yang_name = "anycast-rp-range"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| ancast_rp_marked.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(ancast_rp_marked.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ancast_rp_marked.is_set || is_set(ancast_rp_marked.yfilter)) leaf_name_data.push_back(ancast_rp_marked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked = value;
        ancast_rp_marked.value_namespace = name_space;
        ancast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "ancast-rp-marked")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "anycast-rp-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
    :
    topology_entry_flag_route_count(this, {"entry_flag"})
{

    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_entry_flag_route_count.len(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.len(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-entry-flag-route-count")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topology_entry_flag_route_count.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-entry-flag-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    group_ranges{YType::uint32, "group-ranges"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"}
{

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    if (is_presence_container) return true;
    return entry_flag.is_set
	|| group_ranges.is_set
	|| active_group_ranges.is_set
	|| groute_count.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| is_node_low_memory.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_flag.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count";
    ADD_KEY_TOKEN(entry_flag, "entry-flag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.yfilter)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
        entry_flag.value_namespace = name_space;
        entry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-flag")
    {
        entry_flag.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-flag" || name == "group-ranges" || name == "active-group-ranges" || name == "groute-count" || name == "sg-route-count" || name == "sgr-route-count" || name == "is-node-low-memory")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RpfRedirect()
    :
    redirect_route_databases(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>())
    , bundle_interfaces(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces>())
{
    redirect_route_databases->parent = this;
    bundle_interfaces->parent = this;

    yang_name = "rpf-redirect"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::~RpfRedirect()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::has_data() const
{
    if (is_presence_container) return true;
    return (redirect_route_databases !=  nullptr && redirect_route_databases->has_data())
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data());
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::has_operation() const
{
    return is_set(yfilter)
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_operation())
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-databases")
    {
        if(redirect_route_databases == nullptr)
        {
            redirect_route_databases = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>();
        }
        return redirect_route_databases;
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redirect_route_databases != nullptr)
    {
        children["redirect-route-databases"] = redirect_route_databases;
    }

    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-route-databases" || name == "bundle-interfaces")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabases()
    :
    redirect_route_database(this, {})
{

    yang_name = "redirect-route-databases"; yang_parent_name = "rpf-redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::~RedirectRouteDatabases()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redirect_route_database.len(); index++)
    {
        if(redirect_route_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_operation() const
{
    for (std::size_t index=0; index<redirect_route_database.len(); index++)
    {
        if(redirect_route_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-database")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase>();
        c->parent = this;
        redirect_route_database.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : redirect_route_database.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-route-database")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::RedirectRouteDatabase()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    bandwidth{YType::uint32, "bandwidth"},
    uptime{YType::uint64, "uptime"}
        ,
    group_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>())
    , source_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>())
    , interface(this, {})
{
    group_address_xr->parent = this;
    source_address_xr->parent = this;

    yang_name = "redirect-route-database"; yang_parent_name = "redirect-route-databases"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::~RedirectRouteDatabase()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| group_address.is_set
	|| bandwidth.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "source-address-xr" || name == "interface" || name == "source-address" || name == "group-address" || name == "bandwidth" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    uptime{YType::uint64, "uptime"},
    expiry{YType::uint64, "expiry"},
    is_rpf_interface{YType::boolean, "is-rpf-interface"},
    is_outgoing_interface{YType::boolean, "is-outgoing-interface"},
    is_snoop_interface{YType::boolean, "is-snoop-interface"}
        ,
    rpf_address(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>())
{
    rpf_address->parent = this;

    yang_name = "interface"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::~Interface()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| uptime.is_set
	|| expiry.is_set
	|| is_rpf_interface.is_set
	|| is_outgoing_interface.is_set
	|| is_snoop_interface.is_set
	|| (rpf_address !=  nullptr && rpf_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(is_rpf_interface.yfilter)
	|| ydk::is_set(is_outgoing_interface.yfilter)
	|| ydk::is_set(is_snoop_interface.yfilter)
	|| (rpf_address !=  nullptr && rpf_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (is_rpf_interface.is_set || is_set(is_rpf_interface.yfilter)) leaf_name_data.push_back(is_rpf_interface.get_name_leafdata());
    if (is_outgoing_interface.is_set || is_set(is_outgoing_interface.yfilter)) leaf_name_data.push_back(is_outgoing_interface.get_name_leafdata());
    if (is_snoop_interface.is_set || is_set(is_snoop_interface.yfilter)) leaf_name_data.push_back(is_snoop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-address")
    {
        if(rpf_address == nullptr)
        {
            rpf_address = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>();
        }
        return rpf_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_address != nullptr)
    {
        children["rpf-address"] = rpf_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface = value;
        is_rpf_interface.value_namespace = name_space;
        is_rpf_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface = value;
        is_outgoing_interface.value_namespace = name_space;
        is_outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface = value;
        is_snoop_interface.value_namespace = name_space;
        is_snoop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface.yfilter = yfilter;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-address" || name == "interface-name" || name == "uptime" || name == "expiry" || name == "is-rpf-interface" || name == "is-outgoing-interface" || name == "is-snoop-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::RpfAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::~RpfAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterfaces()
    :
    bundle_interface(this, {})
{

    yang_name = "bundle-interfaces"; yang_parent_name = "rpf-redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::~BundleInterfaces()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_interface.len(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.len(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bundle_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::BundleInterface()
    :
    bundle_name{YType::str, "bundle-name"},
    interface_name{YType::str, "interface-name"},
    rpf_redirect_bundle_name{YType::str, "rpf-redirect-bundle-name"},
    rpf_redirect_interface_name{YType::str, "rpf-redirect-interface-name"},
    available_bandwidth{YType::int32, "available-bandwidth"},
    allocated_bandwidth{YType::int32, "allocated-bandwidth"},
    total_bandwidth{YType::int32, "total-bandwidth"},
    topology_bandwidth_used{YType::int32, "topology-bandwidth-used"},
    snooping_bandwidth_used{YType::int32, "snooping-bandwidth-used"},
    allocated_threshold_bandwidth{YType::int32, "allocated-threshold-bandwidth"},
    available_threshold_bandwidth{YType::int32, "available-threshold-bandwidth"}
{

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| interface_name.is_set
	|| rpf_redirect_bundle_name.is_set
	|| rpf_redirect_interface_name.is_set
	|| available_bandwidth.is_set
	|| allocated_bandwidth.is_set
	|| total_bandwidth.is_set
	|| topology_bandwidth_used.is_set
	|| snooping_bandwidth_used.is_set
	|| allocated_threshold_bandwidth.is_set
	|| available_threshold_bandwidth.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(rpf_redirect_bundle_name.yfilter)
	|| ydk::is_set(rpf_redirect_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(allocated_bandwidth.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(topology_bandwidth_used.yfilter)
	|| ydk::is_set(snooping_bandwidth_used.yfilter)
	|| ydk::is_set(allocated_threshold_bandwidth.yfilter)
	|| ydk::is_set(available_threshold_bandwidth.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_redirect_bundle_name.is_set || is_set(rpf_redirect_bundle_name.yfilter)) leaf_name_data.push_back(rpf_redirect_bundle_name.get_name_leafdata());
    if (rpf_redirect_interface_name.is_set || is_set(rpf_redirect_interface_name.yfilter)) leaf_name_data.push_back(rpf_redirect_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (allocated_bandwidth.is_set || is_set(allocated_bandwidth.yfilter)) leaf_name_data.push_back(allocated_bandwidth.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (topology_bandwidth_used.is_set || is_set(topology_bandwidth_used.yfilter)) leaf_name_data.push_back(topology_bandwidth_used.get_name_leafdata());
    if (snooping_bandwidth_used.is_set || is_set(snooping_bandwidth_used.yfilter)) leaf_name_data.push_back(snooping_bandwidth_used.get_name_leafdata());
    if (allocated_threshold_bandwidth.is_set || is_set(allocated_threshold_bandwidth.yfilter)) leaf_name_data.push_back(allocated_threshold_bandwidth.get_name_leafdata());
    if (available_threshold_bandwidth.is_set || is_set(available_threshold_bandwidth.yfilter)) leaf_name_data.push_back(available_threshold_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name = value;
        rpf_redirect_bundle_name.value_namespace = name_space;
        rpf_redirect_bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name = value;
        rpf_redirect_interface_name.value_namespace = name_space;
        rpf_redirect_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth = value;
        allocated_bandwidth.value_namespace = name_space;
        allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used = value;
        topology_bandwidth_used.value_namespace = name_space;
        topology_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used = value;
        snooping_bandwidth_used.value_namespace = name_space;
        snooping_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth = value;
        allocated_threshold_bandwidth.value_namespace = name_space;
        allocated_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth = value;
        available_threshold_bandwidth.value_namespace = name_space;
        available_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name.yfilter = yfilter;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "interface-name" || name == "rpf-redirect-bundle-name" || name == "rpf-redirect-interface-name" || name == "available-bandwidth" || name == "allocated-bandwidth" || name == "total-bandwidth" || name == "topology-bandwidth-used" || name == "snooping-bandwidth-used" || name == "allocated-threshold-bandwidth" || name == "available-threshold-bandwidth")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnels()
    :
    tunnel(this, {"tunnel_name"})
{

    yang_name = "tunnels"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Tunnels::~Tunnels()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
        ,
    source_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>())
    , rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>())
    , source_address_netio(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>())
    , group_address_netio(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>())
{
    source_address->parent = this;
    rp_address->parent = this;
    source_address_netio->parent = this;
    group_address_netio->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::~Tunnel()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data())
	|| (group_address_netio !=  nullptr && group_address_netio->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation())
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "rp-address" || name == "source-address-netio" || name == "group-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoutes()
    :
    multicast_static_route(this, {})
{

    yang_name = "multicast-static-routes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::~MulticastStaticRoutes()
{
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_static_route.len(); index++)
    {
        if(multicast_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_static_route.len(); index++)
    {
        if(multicast_static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-static-route")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute>();
        c->parent = this;
        multicast_static_route.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : multicast_static_route.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-static-route")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::MulticastStaticRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    interface_name{YType::str, "interface-name"},
    distance{YType::uint32, "distance"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    is_via_lsm{YType::boolean, "is-via-lsm"}
        ,
    prefix(std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>())
    , nexthop(std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>())
{
    prefix->parent = this;
    nexthop->parent = this;

    yang_name = "multicast-static-route"; yang_parent_name = "multicast-static-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::~MulticastStaticRoute()
{
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| interface_name.is_set
	|| distance.is_set
	|| prefix_length_xr.is_set
	|| is_via_lsm.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "nexthop" || name == "address" || name == "prefix-length" || name == "interface-name" || name == "distance" || name == "prefix-length-xr" || name == "is-via-lsm")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "multicast-static-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::~Prefix()
{
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::Nexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "nexthop"; yang_parent_name = "multicast-static-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::~Nexthop()
{
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Neighbors::Neighbors()
    :
    neighbor(this, {})
{

    yang_name = "neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name_xr{YType::str, "interface-name-xr"},
    uptime{YType::uint64, "uptime"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    dr_priority{YType::uint32, "dr-priority"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    propagation_delay{YType::uint16, "propagation-delay"},
    override_interval{YType::uint16, "override-interval"}
        ,
    neighbor_address_xr(this, {})
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_address_xr.len(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| interface_name_xr.is_set
	|| uptime.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| is_this_neighbor_us.is_set
	|| is_this_neighbor_dr.is_set
	|| is_dr_priority_capable.is_set
	|| dr_priority.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_bfd_state.is_set
	|| propagation_delay.is_set
	|| override_interval.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.len(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(override_interval.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_address_xr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
        expiry_timer.value_namespace = name_space;
        expiry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "interface-name" || name == "neighbor-address" || name == "interface-name-xr" || name == "uptime" || name == "expires" || name == "expiry-timer" || name == "is-this-neighbor-us" || name == "is-this-neighbor-dr" || name == "is-dr-priority-capable" || name == "dr-priority" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "is-ecmp-redirect-capable" || name == "is-bfd-state" || name == "propagation-delay" || name == "override-interval")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Active()
    :
    default_context(std::make_shared<Pim::Active::DefaultContext>())
    , process(std::make_shared<Pim::Active::Process>())
    , vrfs(std::make_shared<Pim::Active::Vrfs>())
{
    default_context->parent = this;
    process->parent = this;
    vrfs->parent = this;

    yang_name = "active"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::~Active()
{
}

bool Pim::Active::has_data() const
{
    if (is_presence_container) return true;
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Pim::Active::has_operation() const
{
    return is_set(yfilter)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Pim::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Pim::Active::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Pim::Active::Process>();
        }
        return process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Pim::Active::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Pim::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-context" || name == "process" || name == "vrfs")
        return true;
    return false;
}

Pim::Active::DefaultContext::DefaultContext()
    :
    global_interfaces(std::make_shared<Pim::Active::DefaultContext::GlobalInterfaces>())
    , ifrs_interfaces(std::make_shared<Pim::Active::DefaultContext::IfrsInterfaces>())
    , safs(std::make_shared<Pim::Active::DefaultContext::Safs>())
    , interface_statistics(std::make_shared<Pim::Active::DefaultContext::InterfaceStatistics>())
    , topology_route_count(std::make_shared<Pim::Active::DefaultContext::TopologyRouteCount>())
    , jp_statistics(std::make_shared<Pim::Active::DefaultContext::JpStatistics>())
    , mib_databases(std::make_shared<Pim::Active::DefaultContext::MibDatabases>())
    , neighbor_old_formats(std::make_shared<Pim::Active::DefaultContext::NeighborOldFormats>())
    , ifrs_summary(std::make_shared<Pim::Active::DefaultContext::IfrsSummary>())
    , ranges(std::make_shared<Pim::Active::DefaultContext::Ranges>())
    , interface_old_formats(std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats>())
    , bsr(std::make_shared<Pim::Active::DefaultContext::Bsr>())
    , route_policy(std::make_shared<Pim::Active::DefaultContext::RoutePolicy>())
    , rpf_summary(std::make_shared<Pim::Active::DefaultContext::RpfSummary>())
    , interfaces(std::make_shared<Pim::Active::DefaultContext::Interfaces>())
    , net_io_tunnels(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels>())
    , bidir_df_states(std::make_shared<Pim::Active::DefaultContext::BidirDfStates>())
    , topologies(std::make_shared<Pim::Active::DefaultContext::Topologies>())
    , bgp_afs(std::make_shared<Pim::Active::DefaultContext::BgpAfs>())
    , auto_rp(std::make_shared<Pim::Active::DefaultContext::AutoRp>())
    , topology_interface_flag_route_counts(std::make_shared<Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts>())
    , group_map_sources(std::make_shared<Pim::Active::DefaultContext::GroupMapSources>())
    , traffic_counters(std::make_shared<Pim::Active::DefaultContext::TrafficCounters>())
    , group_map_rpfs(std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs>())
    , summary(std::make_shared<Pim::Active::DefaultContext::Summary>())
    , gre(std::make_shared<Pim::Active::DefaultContext::Gre>())
    , bidir_df_winners(std::make_shared<Pim::Active::DefaultContext::BidirDfWinners>())
    , table_contexts(std::make_shared<Pim::Active::DefaultContext::TableContexts>())
    , neighbor_summaries(std::make_shared<Pim::Active::DefaultContext::NeighborSummaries>())
    , context(std::make_shared<Pim::Active::DefaultContext::Context>())
    , topology_entry_flag_route_counts(std::make_shared<Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts>())
    , rpf_redirect(std::make_shared<Pim::Active::DefaultContext::RpfRedirect>())
    , tunnels(std::make_shared<Pim::Active::DefaultContext::Tunnels>())
    , multicast_static_routes(std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes>())
    , neighbors(std::make_shared<Pim::Active::DefaultContext::Neighbors>())
{
    global_interfaces->parent = this;
    ifrs_interfaces->parent = this;
    safs->parent = this;
    interface_statistics->parent = this;
    topology_route_count->parent = this;
    jp_statistics->parent = this;
    mib_databases->parent = this;
    neighbor_old_formats->parent = this;
    ifrs_summary->parent = this;
    ranges->parent = this;
    interface_old_formats->parent = this;
    bsr->parent = this;
    route_policy->parent = this;
    rpf_summary->parent = this;
    interfaces->parent = this;
    net_io_tunnels->parent = this;
    bidir_df_states->parent = this;
    topologies->parent = this;
    bgp_afs->parent = this;
    auto_rp->parent = this;
    topology_interface_flag_route_counts->parent = this;
    group_map_sources->parent = this;
    traffic_counters->parent = this;
    group_map_rpfs->parent = this;
    summary->parent = this;
    gre->parent = this;
    bidir_df_winners->parent = this;
    table_contexts->parent = this;
    neighbor_summaries->parent = this;
    context->parent = this;
    topology_entry_flag_route_counts->parent = this;
    rpf_redirect->parent = this;
    tunnels->parent = this;
    multicast_static_routes->parent = this;
    neighbors->parent = this;

    yang_name = "default-context"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::~DefaultContext()
{
}

bool Pim::Active::DefaultContext::has_data() const
{
    if (is_presence_container) return true;
    return (global_interfaces !=  nullptr && global_interfaces->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (safs !=  nullptr && safs->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (topology_route_count !=  nullptr && topology_route_count->has_data())
	|| (jp_statistics !=  nullptr && jp_statistics->has_data())
	|| (mib_databases !=  nullptr && mib_databases->has_data())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_data())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (route_policy !=  nullptr && route_policy->has_data())
	|| (rpf_summary !=  nullptr && rpf_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_data())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (bgp_afs !=  nullptr && bgp_afs->has_data())
	|| (auto_rp !=  nullptr && auto_rp->has_data())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_data())
	|| (group_map_sources !=  nullptr && group_map_sources->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_data())
	|| (table_contexts !=  nullptr && table_contexts->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (context !=  nullptr && context->has_data())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Pim::Active::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| (global_interfaces !=  nullptr && global_interfaces->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (safs !=  nullptr && safs->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (topology_route_count !=  nullptr && topology_route_count->has_operation())
	|| (jp_statistics !=  nullptr && jp_statistics->has_operation())
	|| (mib_databases !=  nullptr && mib_databases->has_operation())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_operation())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (route_policy !=  nullptr && route_policy->has_operation())
	|| (rpf_summary !=  nullptr && rpf_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_operation())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (bgp_afs !=  nullptr && bgp_afs->has_operation())
	|| (auto_rp !=  nullptr && auto_rp->has_operation())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_operation())
	|| (group_map_sources !=  nullptr && group_map_sources->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_operation())
	|| (table_contexts !=  nullptr && table_contexts->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (context !=  nullptr && context->has_operation())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Pim::Active::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-interfaces")
    {
        if(global_interfaces == nullptr)
        {
            global_interfaces = std::make_shared<Pim::Active::DefaultContext::GlobalInterfaces>();
        }
        return global_interfaces;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Pim::Active::DefaultContext::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "safs")
    {
        if(safs == nullptr)
        {
            safs = std::make_shared<Pim::Active::DefaultContext::Safs>();
        }
        return safs;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Pim::Active::DefaultContext::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "topology-route-count")
    {
        if(topology_route_count == nullptr)
        {
            topology_route_count = std::make_shared<Pim::Active::DefaultContext::TopologyRouteCount>();
        }
        return topology_route_count;
    }

    if(child_yang_name == "jp-statistics")
    {
        if(jp_statistics == nullptr)
        {
            jp_statistics = std::make_shared<Pim::Active::DefaultContext::JpStatistics>();
        }
        return jp_statistics;
    }

    if(child_yang_name == "mib-databases")
    {
        if(mib_databases == nullptr)
        {
            mib_databases = std::make_shared<Pim::Active::DefaultContext::MibDatabases>();
        }
        return mib_databases;
    }

    if(child_yang_name == "neighbor-old-formats")
    {
        if(neighbor_old_formats == nullptr)
        {
            neighbor_old_formats = std::make_shared<Pim::Active::DefaultContext::NeighborOldFormats>();
        }
        return neighbor_old_formats;
    }

    if(child_yang_name == "ifrs-summary")
    {
        if(ifrs_summary == nullptr)
        {
            ifrs_summary = std::make_shared<Pim::Active::DefaultContext::IfrsSummary>();
        }
        return ifrs_summary;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Pim::Active::DefaultContext::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::Active::DefaultContext::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "route-policy")
    {
        if(route_policy == nullptr)
        {
            route_policy = std::make_shared<Pim::Active::DefaultContext::RoutePolicy>();
        }
        return route_policy;
    }

    if(child_yang_name == "rpf-summary")
    {
        if(rpf_summary == nullptr)
        {
            rpf_summary = std::make_shared<Pim::Active::DefaultContext::RpfSummary>();
        }
        return rpf_summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::Active::DefaultContext::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "net-io-tunnels")
    {
        if(net_io_tunnels == nullptr)
        {
            net_io_tunnels = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels>();
        }
        return net_io_tunnels;
    }

    if(child_yang_name == "bidir-df-states")
    {
        if(bidir_df_states == nullptr)
        {
            bidir_df_states = std::make_shared<Pim::Active::DefaultContext::BidirDfStates>();
        }
        return bidir_df_states;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Pim::Active::DefaultContext::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "bgp-afs")
    {
        if(bgp_afs == nullptr)
        {
            bgp_afs = std::make_shared<Pim::Active::DefaultContext::BgpAfs>();
        }
        return bgp_afs;
    }

    if(child_yang_name == "auto-rp")
    {
        if(auto_rp == nullptr)
        {
            auto_rp = std::make_shared<Pim::Active::DefaultContext::AutoRp>();
        }
        return auto_rp;
    }

    if(child_yang_name == "topology-interface-flag-route-counts")
    {
        if(topology_interface_flag_route_counts == nullptr)
        {
            topology_interface_flag_route_counts = std::make_shared<Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts>();
        }
        return topology_interface_flag_route_counts;
    }

    if(child_yang_name == "group-map-sources")
    {
        if(group_map_sources == nullptr)
        {
            group_map_sources = std::make_shared<Pim::Active::DefaultContext::GroupMapSources>();
        }
        return group_map_sources;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Pim::Active::DefaultContext::TrafficCounters>();
        }
        return traffic_counters;
    }

    if(child_yang_name == "group-map-rpfs")
    {
        if(group_map_rpfs == nullptr)
        {
            group_map_rpfs = std::make_shared<Pim::Active::DefaultContext::GroupMapRpfs>();
        }
        return group_map_rpfs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Pim::Active::DefaultContext::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Pim::Active::DefaultContext::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "bidir-df-winners")
    {
        if(bidir_df_winners == nullptr)
        {
            bidir_df_winners = std::make_shared<Pim::Active::DefaultContext::BidirDfWinners>();
        }
        return bidir_df_winners;
    }

    if(child_yang_name == "table-contexts")
    {
        if(table_contexts == nullptr)
        {
            table_contexts = std::make_shared<Pim::Active::DefaultContext::TableContexts>();
        }
        return table_contexts;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Pim::Active::DefaultContext::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Pim::Active::DefaultContext::Context>();
        }
        return context;
    }

    if(child_yang_name == "topology-entry-flag-route-counts")
    {
        if(topology_entry_flag_route_counts == nullptr)
        {
            topology_entry_flag_route_counts = std::make_shared<Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts>();
        }
        return topology_entry_flag_route_counts;
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect == nullptr)
        {
            rpf_redirect = std::make_shared<Pim::Active::DefaultContext::RpfRedirect>();
        }
        return rpf_redirect;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<Pim::Active::DefaultContext::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "multicast-static-routes")
    {
        if(multicast_static_routes == nullptr)
        {
            multicast_static_routes = std::make_shared<Pim::Active::DefaultContext::MulticastStaticRoutes>();
        }
        return multicast_static_routes;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Pim::Active::DefaultContext::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_interfaces != nullptr)
    {
        children["global-interfaces"] = global_interfaces;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(safs != nullptr)
    {
        children["safs"] = safs;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(topology_route_count != nullptr)
    {
        children["topology-route-count"] = topology_route_count;
    }

    if(jp_statistics != nullptr)
    {
        children["jp-statistics"] = jp_statistics;
    }

    if(mib_databases != nullptr)
    {
        children["mib-databases"] = mib_databases;
    }

    if(neighbor_old_formats != nullptr)
    {
        children["neighbor-old-formats"] = neighbor_old_formats;
    }

    if(ifrs_summary != nullptr)
    {
        children["ifrs-summary"] = ifrs_summary;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(route_policy != nullptr)
    {
        children["route-policy"] = route_policy;
    }

    if(rpf_summary != nullptr)
    {
        children["rpf-summary"] = rpf_summary;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(net_io_tunnels != nullptr)
    {
        children["net-io-tunnels"] = net_io_tunnels;
    }

    if(bidir_df_states != nullptr)
    {
        children["bidir-df-states"] = bidir_df_states;
    }

    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    if(bgp_afs != nullptr)
    {
        children["bgp-afs"] = bgp_afs;
    }

    if(auto_rp != nullptr)
    {
        children["auto-rp"] = auto_rp;
    }

    if(topology_interface_flag_route_counts != nullptr)
    {
        children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
    }

    if(group_map_sources != nullptr)
    {
        children["group-map-sources"] = group_map_sources;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    if(group_map_rpfs != nullptr)
    {
        children["group-map-rpfs"] = group_map_rpfs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    if(bidir_df_winners != nullptr)
    {
        children["bidir-df-winners"] = bidir_df_winners;
    }

    if(table_contexts != nullptr)
    {
        children["table-contexts"] = table_contexts;
    }

    if(neighbor_summaries != nullptr)
    {
        children["neighbor-summaries"] = neighbor_summaries;
    }

    if(context != nullptr)
    {
        children["context"] = context;
    }

    if(topology_entry_flag_route_counts != nullptr)
    {
        children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
    }

    if(rpf_redirect != nullptr)
    {
        children["rpf-redirect"] = rpf_redirect;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(multicast_static_routes != nullptr)
    {
        children["multicast-static-routes"] = multicast_static_routes;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Pim::Active::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-interfaces" || name == "ifrs-interfaces" || name == "safs" || name == "interface-statistics" || name == "topology-route-count" || name == "jp-statistics" || name == "mib-databases" || name == "neighbor-old-formats" || name == "ifrs-summary" || name == "ranges" || name == "interface-old-formats" || name == "bsr" || name == "route-policy" || name == "rpf-summary" || name == "interfaces" || name == "net-io-tunnels" || name == "bidir-df-states" || name == "topologies" || name == "bgp-afs" || name == "auto-rp" || name == "topology-interface-flag-route-counts" || name == "group-map-sources" || name == "traffic-counters" || name == "group-map-rpfs" || name == "summary" || name == "gre" || name == "bidir-df-winners" || name == "table-contexts" || name == "neighbor-summaries" || name == "context" || name == "topology-entry-flag-route-counts" || name == "rpf-redirect" || name == "tunnels" || name == "multicast-static-routes" || name == "neighbors")
        return true;
    return false;
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterfaces()
    :
    global_interface(this, {"interface_name"})
{

    yang_name = "global-interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::GlobalInterfaces::~GlobalInterfaces()
{
}

bool Pim::Active::DefaultContext::GlobalInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_interface.len(); index++)
    {
        if(global_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::GlobalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<global_interface.len(); index++)
    {
        if(global_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::GlobalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::GlobalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::GlobalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GlobalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-interface")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface>();
        c->parent = this;
        global_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::GlobalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : global_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::GlobalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::GlobalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::GlobalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-interface")
        return true;
    return false;
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::GlobalInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "global-interface"; yang_parent_name = "global-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::~GlobalInterface()
{
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/global-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::~DrAddress()
{
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterfaces()
    :
    ifrs_interface(this, {"interface_name"})
{

    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Pim::Active::DefaultContext::IfrsInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrs_interface.len(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.len(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::IfrsInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::IfrsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifrs_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ifrs-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::~DrAddress()
{
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Safs()
    :
    saf(this, {})
{

    yang_name = "safs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::~Safs()
{
}

bool Pim::Active::DefaultContext::Safs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<saf.len(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.len(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Safs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "saf")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Safs::Saf>();
        c->parent = this;
        saf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : saf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Safs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Safs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "saf")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Saf()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
        ,
    rpf_hash_source_groups(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups>())
    , rpf_hash_sources(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources>())
    , rpfs(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs>())
{
    rpf_hash_source_groups->parent = this;
    rpf_hash_sources->parent = this;
    rpfs->parent = this;

    yang_name = "saf"; yang_parent_name = "safs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::~Saf()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::has_data() const
{
    if (is_presence_container) return true;
    return saf_name.is_set
	|| topology_name.is_set
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_data())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_data())
	|| (rpfs !=  nullptr && rpfs->has_data());
}

bool Pim::Active::DefaultContext::Safs::Saf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_operation())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_operation())
	|| (rpfs !=  nullptr && rpfs->has_operation());
}

std::string Pim::Active::DefaultContext::Safs::Saf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-groups")
    {
        if(rpf_hash_source_groups == nullptr)
        {
            rpf_hash_source_groups = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups>();
        }
        return rpf_hash_source_groups;
    }

    if(child_yang_name == "rpf-hash-sources")
    {
        if(rpf_hash_sources == nullptr)
        {
            rpf_hash_sources = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources>();
        }
        return rpf_hash_sources;
    }

    if(child_yang_name == "rpfs")
    {
        if(rpfs == nullptr)
        {
            rpfs = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs>();
        }
        return rpfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_hash_source_groups != nullptr)
    {
        children["rpf-hash-source-groups"] = rpf_hash_source_groups;
    }

    if(rpf_hash_sources != nullptr)
    {
        children["rpf-hash-sources"] = rpf_hash_sources;
    }

    if(rpfs != nullptr)
    {
        children["rpfs"] = rpfs;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-groups" || name == "rpf-hash-sources" || name == "rpfs" || name == "saf-name" || name == "topology-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroups()
    :
    rpf_hash_source_group(this, {})
{

    yang_name = "rpf-hash-source-groups"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::~RpfHashSourceGroups()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf_hash_source_group.len(); index++)
    {
        if(rpf_hash_source_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.len(); index++)
    {
        if(rpf_hash_source_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-group")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup>();
        c->parent = this;
        rpf_hash_source_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpf_hash_source_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-group")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::RpfHashSourceGroup()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    mask_length{YType::uint32, "mask-length"},
    mofrr{YType::uint32, "mofrr"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    next_hop_interface{YType::str, "next-hop-interface"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"}
        ,
    next_hop_address(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>())
    , secondary_next_hop_address(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source-group"; yang_parent_name = "rpf-hash-source-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::~RpfHashSourceGroup()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| mask_length.is_set
	|| mofrr.is_set
	|| next_hop_multipath_enabled.is_set
	|| next_hop_interface.is_set
	|| secondary_next_hop_interface.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpf-hash-source-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "source-address" || name == "group-address" || name == "mask-length" || name == "mofrr" || name == "next-hop-multipath-enabled" || name == "next-hop-interface" || name == "secondary-next-hop-interface")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpf-hash-source-groups/rpf-hash-source-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpf-hash-source-groups/rpf-hash-source-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSources()
    :
    rpf_hash_source(this, {})
{

    yang_name = "rpf-hash-sources"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::~RpfHashSources()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf_hash_source.len(); index++)
    {
        if(rpf_hash_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source.len(); index++)
    {
        if(rpf_hash_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource>();
        c->parent = this;
        rpf_hash_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpf_hash_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::RpfHashSource()
    :
    source_address{YType::str, "source-address"},
    mofrr{YType::uint32, "mofrr"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    next_hop_interface{YType::str, "next-hop-interface"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"}
        ,
    next_hop_address(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>())
    , secondary_next_hop_address(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source"; yang_parent_name = "rpf-hash-sources"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::~RpfHashSource()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| mofrr.is_set
	|| next_hop_multipath_enabled.is_set
	|| next_hop_interface.is_set
	|| secondary_next_hop_interface.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpf-hash-sources/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "source-address" || name == "mofrr" || name == "next-hop-multipath-enabled" || name == "next-hop-interface" || name == "secondary-next-hop-interface")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpf-hash-sources/rpf-hash-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpf-hash-sources/rpf-hash-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpfs()
    :
    rpf(this, {"registered_address"})
{

    yang_name = "rpfs"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::~Rpfs()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf.len(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::has_operation() const
{
    for (std::size_t index=0; index<rpf.len(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::Rpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::Rpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf>();
        c->parent = this;
        rpf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::Rpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::Rpf()
    :
    registered_address{YType::str, "registered-address"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    is_connected{YType::uint8, "is-connected"},
    is_rpf_bgp_route{YType::boolean, "is-rpf-bgp-route"}
        ,
    registered_address_xr(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>())
    , rpf_path(this, {})
{
    registered_address_xr->parent = this;

    yang_name = "rpf"; yang_parent_name = "rpfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::~Rpf()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf_path.len(); index++)
    {
        if(rpf_path[index]->has_data())
            return true;
    }
    return registered_address.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| is_connected.is_set
	|| is_rpf_bgp_route.is_set
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_data());
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf_path.len(); index++)
    {
        if(rpf_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(registered_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_rpf_bgp_route.yfilter)
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/safs/saf/rpfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    ADD_KEY_TOKEN(registered_address, "registered-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registered_address.is_set || is_set(registered_address.yfilter)) leaf_name_data.push_back(registered_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_rpf_bgp_route.is_set || is_set(is_rpf_bgp_route.yfilter)) leaf_name_data.push_back(is_rpf_bgp_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address-xr")
    {
        if(registered_address_xr == nullptr)
        {
            registered_address_xr = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>();
        }
        return registered_address_xr;
    }

    if(child_yang_name == "rpf-path")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath>();
        c->parent = this;
        rpf_path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(registered_address_xr != nullptr)
    {
        children["registered-address-xr"] = registered_address_xr;
    }

    count = 0;
    for (auto c : rpf_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "registered-address")
    {
        registered_address = value;
        registered_address.value_namespace = name_space;
        registered_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route = value;
        is_rpf_bgp_route.value_namespace = name_space;
        is_rpf_bgp_route.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "registered-address")
    {
        registered_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registered-address-xr" || name == "rpf-path" || name == "registered-address" || name == "metric" || name == "metric-preference" || name == "is-connected" || name == "is-rpf-bgp-route")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::RegisteredAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "registered-address-xr"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::~RegisteredAddressXr()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfPath()
    :
    rpf_interface_name{YType::str, "rpf-interface-name"},
    is_rpf_interface_disabled{YType::boolean, "is-rpf-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_via_mlsm{YType::boolean, "is-via-mlsm"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    connector{YType::str, "connector"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"}
        ,
    rpf_neighbor(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>())
    , rpf_nexthop(std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>())
{
    rpf_neighbor->parent = this;
    rpf_nexthop->parent = this;

    yang_name = "rpf-path"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::~RpfPath()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_data() const
{
    if (is_presence_container) return true;
    return rpf_interface_name.is_set
	|| is_rpf_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_via_mlsm.is_set
	|| is_connector_attribute_present.is_set
	|| connector.is_set
	|| extranet_vrf_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_data());
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(is_rpf_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(is_via_mlsm.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_operation());
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (is_rpf_interface_disabled.is_set || is_set(is_rpf_interface_disabled.yfilter)) leaf_name_data.push_back(is_rpf_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_via_mlsm.is_set || is_set(is_via_mlsm.yfilter)) leaf_name_data.push_back(is_via_mlsm.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-nexthop")
    {
        if(rpf_nexthop == nullptr)
        {
            rpf_nexthop = std::make_shared<Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>();
        }
        return rpf_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_nexthop != nullptr)
    {
        children["rpf-nexthop"] = rpf_nexthop;
    }

    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled = value;
        is_rpf_interface_disabled.value_namespace = name_space;
        is_rpf_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm = value;
        is_via_mlsm.value_namespace = name_space;
        is_via_mlsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "rpf-nexthop" || name == "rpf-interface-name" || name == "is-rpf-interface-disabled" || name == "is-via-lsm" || name == "is-via-mlsm" || name == "is-connector-attribute-present" || name == "connector" || name == "extranet-vrf-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistics()
    :
    interface_statistic(this, {"interface_name"})
{

    yang_name = "interface-statistics"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Pim::Active::DefaultContext::InterfaceStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::InterfaceStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    input_hello{YType::uint32, "input-hello"},
    output_hello{YType::uint32, "output-hello"},
    input_register{YType::uint32, "input-register"},
    output_register{YType::uint32, "output-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_register_stop{YType::uint32, "output-register-stop"},
    input_jp{YType::uint32, "input-jp"},
    output_jp{YType::uint32, "output-jp"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    input_assert{YType::uint32, "input-assert"},
    output_assert{YType::uint32, "output-assert"},
    input_graft_message{YType::uint32, "input-graft-message"},
    output_graft_message{YType::uint32, "output-graft-message"},
    input_graft_ack_message{YType::uint32, "input-graft-ack-message"},
    output_graft_ack_message{YType::uint32, "output-graft-ack-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    input_df_election{YType::uint32, "input-df-election"},
    output_df_election{YType::uint32, "output-df-election"},
    input_miscellaneous{YType::uint32, "input-miscellaneous"}
{

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| input_hello.is_set
	|| output_hello.is_set
	|| input_register.is_set
	|| output_register.is_set
	|| input_register_stop.is_set
	|| output_register_stop.is_set
	|| input_jp.is_set
	|| output_jp.is_set
	|| input_bsr_message.is_set
	|| output_bsr_message.is_set
	|| input_assert.is_set
	|| output_assert.is_set
	|| input_graft_message.is_set
	|| output_graft_message.is_set
	|| input_graft_ack_message.is_set
	|| output_graft_ack_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| output_candidate_rp_advertisement.is_set
	|| input_df_election.is_set
	|| output_df_election.is_set
	|| input_miscellaneous.is_set;
}

bool Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(input_register.yfilter)
	|| ydk::is_set(output_register.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(output_register_stop.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(input_graft_message.yfilter)
	|| ydk::is_set(output_graft_message.yfilter)
	|| ydk::is_set(input_graft_ack_message.yfilter)
	|| ydk::is_set(output_graft_ack_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(input_miscellaneous.yfilter);
}

std::string Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/interface-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (input_register.is_set || is_set(input_register.yfilter)) leaf_name_data.push_back(input_register.get_name_leafdata());
    if (output_register.is_set || is_set(output_register.yfilter)) leaf_name_data.push_back(output_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (input_graft_message.is_set || is_set(input_graft_message.yfilter)) leaf_name_data.push_back(input_graft_message.get_name_leafdata());
    if (output_graft_message.is_set || is_set(output_graft_message.yfilter)) leaf_name_data.push_back(output_graft_message.get_name_leafdata());
    if (input_graft_ack_message.is_set || is_set(input_graft_ack_message.yfilter)) leaf_name_data.push_back(input_graft_ack_message.get_name_leafdata());
    if (output_graft_ack_message.is_set || is_set(output_graft_ack_message.yfilter)) leaf_name_data.push_back(output_graft_ack_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (input_miscellaneous.is_set || is_set(input_miscellaneous.yfilter)) leaf_name_data.push_back(input_miscellaneous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register")
    {
        input_register = value;
        input_register.value_namespace = name_space;
        input_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register")
    {
        output_register = value;
        output_register.value_namespace = name_space;
        output_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message = value;
        input_graft_message.value_namespace = name_space;
        input_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message = value;
        output_graft_message.value_namespace = name_space;
        output_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message = value;
        input_graft_ack_message.value_namespace = name_space;
        input_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message = value;
        output_graft_ack_message.value_namespace = name_space;
        output_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous = value;
        input_miscellaneous.value_namespace = name_space;
        input_miscellaneous.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "input-register")
    {
        input_register.yfilter = yfilter;
    }
    if(value_path == "output-register")
    {
        output_register.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message.yfilter = yfilter;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message.yfilter = yfilter;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "input-hello" || name == "output-hello" || name == "input-register" || name == "output-register" || name == "input-register-stop" || name == "output-register-stop" || name == "input-jp" || name == "output-jp" || name == "input-bsr-message" || name == "output-bsr-message" || name == "input-assert" || name == "output-assert" || name == "input-graft-message" || name == "output-graft-message" || name == "input-graft-ack-message" || name == "output-graft-ack-message" || name == "input-candidate-rp-advertisement" || name == "output-candidate-rp-advertisement" || name == "input-df-election" || name == "output-df-election" || name == "input-miscellaneous")
        return true;
    return false;
}

Pim::Active::DefaultContext::TopologyRouteCount::TopologyRouteCount()
    :
    group_ranges{YType::uint32, "group-ranges"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"}
{

    yang_name = "topology-route-count"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Active::DefaultContext::TopologyRouteCount::has_data() const
{
    if (is_presence_container) return true;
    return group_ranges.is_set
	|| active_group_ranges.is_set
	|| groute_count.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| is_node_low_memory.is_set;
}

bool Pim::Active::DefaultContext::TopologyRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter);
}

std::string Pim::Active::DefaultContext::TopologyRouteCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::TopologyRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::TopologyRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::TopologyRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::TopologyRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::TopologyRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-ranges" || name == "active-group-ranges" || name == "groute-count" || name == "sg-route-count" || name == "sgr-route-count" || name == "is-node-low-memory")
        return true;
    return false;
}

Pim::Active::DefaultContext::JpStatistics::JpStatistics()
    :
    jp_statistic(this, {"interface_name"})
{

    yang_name = "jp-statistics"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::JpStatistics::~JpStatistics()
{
}

bool Pim::Active::DefaultContext::JpStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jp_statistic.len(); index++)
    {
        if(jp_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::JpStatistics::has_operation() const
{
    for (std::size_t index=0; index<jp_statistic.len(); index++)
    {
        if(jp_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::JpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::JpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::JpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::JpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jp-statistic")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::JpStatistics::JpStatistic>();
        c->parent = this;
        jp_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::JpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : jp_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::JpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::JpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::JpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jp-statistic")
        return true;
    return false;
}

Pim::Active::DefaultContext::JpStatistics::JpStatistic::JpStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    transmitted{YType::uint32, "transmitted"},
    transmitted100{YType::uint16, "transmitted100"},
    transmitted_1k{YType::uint16, "transmitted-1k"},
    transmitted_10k{YType::uint16, "transmitted-10k"},
    transmitted_50k{YType::uint16, "transmitted-50k"},
    received{YType::uint32, "received"},
    received100{YType::uint16, "received100"},
    received_1k{YType::uint16, "received-1k"},
    received_10k{YType::uint16, "received-10k"},
    received_50k{YType::uint16, "received-50k"}
{

    yang_name = "jp-statistic"; yang_parent_name = "jp-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::JpStatistics::JpStatistic::~JpStatistic()
{
}

bool Pim::Active::DefaultContext::JpStatistics::JpStatistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| transmitted.is_set
	|| transmitted100.is_set
	|| transmitted_1k.is_set
	|| transmitted_10k.is_set
	|| transmitted_50k.is_set
	|| received.is_set
	|| received100.is_set
	|| received_1k.is_set
	|| received_10k.is_set
	|| received_50k.is_set;
}

bool Pim::Active::DefaultContext::JpStatistics::JpStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(transmitted.yfilter)
	|| ydk::is_set(transmitted100.yfilter)
	|| ydk::is_set(transmitted_1k.yfilter)
	|| ydk::is_set(transmitted_10k.yfilter)
	|| ydk::is_set(transmitted_50k.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(received100.yfilter)
	|| ydk::is_set(received_1k.yfilter)
	|| ydk::is_set(received_10k.yfilter)
	|| ydk::is_set(received_50k.yfilter);
}

std::string Pim::Active::DefaultContext::JpStatistics::JpStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/jp-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::JpStatistics::JpStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::JpStatistics::JpStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (transmitted.is_set || is_set(transmitted.yfilter)) leaf_name_data.push_back(transmitted.get_name_leafdata());
    if (transmitted100.is_set || is_set(transmitted100.yfilter)) leaf_name_data.push_back(transmitted100.get_name_leafdata());
    if (transmitted_1k.is_set || is_set(transmitted_1k.yfilter)) leaf_name_data.push_back(transmitted_1k.get_name_leafdata());
    if (transmitted_10k.is_set || is_set(transmitted_10k.yfilter)) leaf_name_data.push_back(transmitted_10k.get_name_leafdata());
    if (transmitted_50k.is_set || is_set(transmitted_50k.yfilter)) leaf_name_data.push_back(transmitted_50k.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (received100.is_set || is_set(received100.yfilter)) leaf_name_data.push_back(received100.get_name_leafdata());
    if (received_1k.is_set || is_set(received_1k.yfilter)) leaf_name_data.push_back(received_1k.get_name_leafdata());
    if (received_10k.is_set || is_set(received_10k.yfilter)) leaf_name_data.push_back(received_10k.get_name_leafdata());
    if (received_50k.is_set || is_set(received_50k.yfilter)) leaf_name_data.push_back(received_50k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::JpStatistics::JpStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::JpStatistics::JpStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::JpStatistics::JpStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted")
    {
        transmitted = value;
        transmitted.value_namespace = name_space;
        transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted100")
    {
        transmitted100 = value;
        transmitted100.value_namespace = name_space;
        transmitted100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k = value;
        transmitted_1k.value_namespace = name_space;
        transmitted_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k = value;
        transmitted_10k.value_namespace = name_space;
        transmitted_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k = value;
        transmitted_50k.value_namespace = name_space;
        transmitted_50k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received100")
    {
        received100 = value;
        received100.value_namespace = name_space;
        received100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-1k")
    {
        received_1k = value;
        received_1k.value_namespace = name_space;
        received_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-10k")
    {
        received_10k = value;
        received_10k.value_namespace = name_space;
        received_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-50k")
    {
        received_50k = value;
        received_50k.value_namespace = name_space;
        received_50k.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::JpStatistics::JpStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "transmitted")
    {
        transmitted.yfilter = yfilter;
    }
    if(value_path == "transmitted100")
    {
        transmitted100.yfilter = yfilter;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k.yfilter = yfilter;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k.yfilter = yfilter;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "received100")
    {
        received100.yfilter = yfilter;
    }
    if(value_path == "received-1k")
    {
        received_1k.yfilter = yfilter;
    }
    if(value_path == "received-10k")
    {
        received_10k.yfilter = yfilter;
    }
    if(value_path == "received-50k")
    {
        received_50k.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::JpStatistics::JpStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "mtu" || name == "transmitted" || name == "transmitted100" || name == "transmitted-1k" || name == "transmitted-10k" || name == "transmitted-50k" || name == "received" || name == "received100" || name == "received-1k" || name == "received-10k" || name == "received-50k")
        return true;
    return false;
}

Pim::Active::DefaultContext::MibDatabases::MibDatabases()
    :
    mib_database(this, {})
{

    yang_name = "mib-databases"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::MibDatabases::~MibDatabases()
{
}

bool Pim::Active::DefaultContext::MibDatabases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mib_database.len(); index++)
    {
        if(mib_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::MibDatabases::has_operation() const
{
    for (std::size_t index=0; index<mib_database.len(); index++)
    {
        if(mib_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::MibDatabases::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::MibDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::MibDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MibDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-database")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase>();
        c->parent = this;
        mib_database.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::MibDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mib_database.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::MibDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::MibDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::MibDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-database")
        return true;
    return false;
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::MibDatabase()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    source_netmask{YType::uint32, "source-netmask"},
    upstream_assert_timer{YType::int32, "upstream-assert-timer"},
    assert_metric{YType::uint32, "assert-metric"},
    assert_metric_preference{YType::uint32, "assert-metric-preference"},
    assert_rpt_bit{YType::boolean, "assert-rpt-bit"},
    spt_bit{YType::boolean, "spt-bit"},
    rpf_mask{YType::uint32, "rpf-mask"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    bidirectional_route{YType::boolean, "bidirectional-route"},
    uptime{YType::uint64, "uptime"},
    protocol{YType::enumeration, "protocol"}
        ,
    source_address_xr(std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr>())
    , group_address_xr(std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr>())
    , rpf_neighbor(std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor>())
    , rpf_root(std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot>())
{
    source_address_xr->parent = this;
    group_address_xr->parent = this;
    rpf_neighbor->parent = this;
    rpf_root->parent = this;

    yang_name = "mib-database"; yang_parent_name = "mib-databases"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::~MibDatabase()
{
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| source_netmask.is_set
	|| upstream_assert_timer.is_set
	|| assert_metric.is_set
	|| assert_metric_preference.is_set
	|| assert_rpt_bit.is_set
	|| spt_bit.is_set
	|| rpf_mask.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| bidirectional_route.is_set
	|| uptime.is_set
	|| protocol.is_set
	|| (source_address_xr !=  nullptr && source_address_xr->has_data())
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data());
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_netmask.yfilter)
	|| ydk::is_set(upstream_assert_timer.yfilter)
	|| ydk::is_set(assert_metric.yfilter)
	|| ydk::is_set(assert_metric_preference.yfilter)
	|| ydk::is_set(assert_rpt_bit.yfilter)
	|| ydk::is_set(spt_bit.yfilter)
	|| ydk::is_set(rpf_mask.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(bidirectional_route.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation())
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation());
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/mib-databases/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::MibDatabases::MibDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_netmask.is_set || is_set(source_netmask.yfilter)) leaf_name_data.push_back(source_netmask.get_name_leafdata());
    if (upstream_assert_timer.is_set || is_set(upstream_assert_timer.yfilter)) leaf_name_data.push_back(upstream_assert_timer.get_name_leafdata());
    if (assert_metric.is_set || is_set(assert_metric.yfilter)) leaf_name_data.push_back(assert_metric.get_name_leafdata());
    if (assert_metric_preference.is_set || is_set(assert_metric_preference.yfilter)) leaf_name_data.push_back(assert_metric_preference.get_name_leafdata());
    if (assert_rpt_bit.is_set || is_set(assert_rpt_bit.yfilter)) leaf_name_data.push_back(assert_rpt_bit.get_name_leafdata());
    if (spt_bit.is_set || is_set(spt_bit.yfilter)) leaf_name_data.push_back(spt_bit.get_name_leafdata());
    if (rpf_mask.is_set || is_set(rpf_mask.yfilter)) leaf_name_data.push_back(rpf_mask.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (bidirectional_route.is_set || is_set(bidirectional_route.yfilter)) leaf_name_data.push_back(bidirectional_route.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MibDatabases::MibDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot>();
        }
        return rpf_root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::MibDatabases::MibDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    return children;
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-netmask")
    {
        source_netmask = value;
        source_netmask.value_namespace = name_space;
        source_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer = value;
        upstream_assert_timer.value_namespace = name_space;
        upstream_assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-metric")
    {
        assert_metric = value;
        assert_metric.value_namespace = name_space;
        assert_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference = value;
        assert_metric_preference.value_namespace = name_space;
        assert_metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit = value;
        assert_rpt_bit.value_namespace = name_space;
        assert_rpt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-bit")
    {
        spt_bit = value;
        spt_bit.value_namespace = name_space;
        spt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask = value;
        rpf_mask.value_namespace = name_space;
        rpf_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route = value;
        bidirectional_route.value_namespace = name_space;
        bidirectional_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-netmask")
    {
        source_netmask.yfilter = yfilter;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer.yfilter = yfilter;
    }
    if(value_path == "assert-metric")
    {
        assert_metric.yfilter = yfilter;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference.yfilter = yfilter;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit.yfilter = yfilter;
    }
    if(value_path == "spt-bit")
    {
        spt_bit.yfilter = yfilter;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-xr" || name == "group-address-xr" || name == "rpf-neighbor" || name == "rpf-root" || name == "source-address" || name == "group-address" || name == "source-netmask" || name == "upstream-assert-timer" || name == "assert-metric" || name == "assert-metric-preference" || name == "assert-rpt-bit" || name == "spt-bit" || name == "rpf-mask" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-drop" || name == "rpf-extranet" || name == "rpf-interface-name" || name == "rpf-vrf-name" || name == "bidirectional-route" || name == "uptime" || name == "protocol")
        return true;
    return false;
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-root"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::~RpfRoot()
{
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormats()
    :
    neighbor_old_format(this, {})
{

    yang_name = "neighbor-old-formats"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::NeighborOldFormats::~NeighborOldFormats()
{
}

bool Pim::Active::DefaultContext::NeighborOldFormats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_old_format.len(); index++)
    {
        if(neighbor_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::NeighborOldFormats::has_operation() const
{
    for (std::size_t index=0; index<neighbor_old_format.len(); index++)
    {
        if(neighbor_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::NeighborOldFormats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::NeighborOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::NeighborOldFormats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NeighborOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-old-format")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat>();
        c->parent = this;
        neighbor_old_format.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::NeighborOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_old_format.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::NeighborOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::NeighborOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::NeighborOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-old-format")
        return true;
    return false;
}

Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name_xr{YType::str, "interface-name-xr"},
    uptime{YType::uint64, "uptime"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    dr_priority{YType::uint32, "dr-priority"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    propagation_delay{YType::uint16, "propagation-delay"},
    override_interval{YType::uint16, "override-interval"}
        ,
    neighbor_address_xr(this, {})
{

    yang_name = "neighbor-old-format"; yang_parent_name = "neighbor-old-formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::~NeighborOldFormat()
{
}

bool Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_address_xr.len(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| interface_name_xr.is_set
	|| uptime.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| is_this_neighbor_us.is_set
	|| is_this_neighbor_dr.is_set
	|| is_dr_priority_capable.is_set
	|| dr_priority.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_bfd_state.is_set
	|| propagation_delay.is_set
	|| override_interval.is_set;
}

bool Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.len(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(override_interval.yfilter);
}

std::string Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/neighbor-old-formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_address_xr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
        expiry_timer.value_namespace = name_space;
        expiry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "interface-name" || name == "neighbor-address" || name == "interface-name-xr" || name == "uptime" || name == "expires" || name == "expiry-timer" || name == "is-this-neighbor-us" || name == "is-this-neighbor-dr" || name == "is-dr-priority-capable" || name == "dr-priority" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "is-ecmp-redirect-capable" || name == "is-bfd-state" || name == "propagation-delay" || name == "override-interval")
        return true;
    return false;
}

Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor-old-format"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/neighbor-old-formats/neighbor-old-format/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::IfrsSummary::IfrsSummary()
    :
    interface_count{YType::uint32, "interface-count"},
    configuration_count{YType::uint32, "configuration-count"}
{

    yang_name = "ifrs-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::IfrsSummary::~IfrsSummary()
{
}

bool Pim::Active::DefaultContext::IfrsSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_count.is_set
	|| configuration_count.is_set;
}

bool Pim::Active::DefaultContext::IfrsSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(configuration_count.yfilter);
}

std::string Pim::Active::DefaultContext::IfrsSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::IfrsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::IfrsSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::IfrsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::IfrsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::IfrsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-count")
    {
        configuration_count = value;
        configuration_count.value_namespace = name_space;
        configuration_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::IfrsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "configuration-count")
    {
        configuration_count.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::IfrsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-count" || name == "configuration-count")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Ranges()
    :
    range(this, {})
{

    yang_name = "ranges"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::~Ranges()
{
}

bool Pim::Active::DefaultContext::Ranges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Range::Range()
    :
    rp_address{YType::str, "rp-address"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"}
        ,
    rp_address_xr(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::RpAddressXr>())
    , source_of_information(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation>())
    , group_range(this, {})
{
    rp_address_xr->parent = this;
    source_of_information->parent = this;

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::Range::~Range()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_range.len(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| client.is_set
	|| protocol.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::DefaultContext::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.len(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(client_xr.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::DefaultContext::Ranges::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.yfilter)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation>();
        }
        return source_of_information;
    }

    if(child_yang_name == "group-range")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    count = 0;
    for (auto c : group_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
        client_xr.value_namespace = name_space;
        client_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "client-xr")
    {
        client_xr.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address-xr" || name == "source-of-information" || name == "group-range" || name == "rp-address" || name == "client" || name == "protocol" || name == "client-xr" || name == "expires")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Ranges::Range::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::GroupRange()
    :
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"},
    expires{YType::uint64, "expires"}
        ,
    prefix(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix>())
    , source_of_information(std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;
    source_of_information->parent = this;

    yang_name = "group-range"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| uptime.is_set
	|| expires.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::Range::GroupRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "source-of-information" || name == "prefix-length" || name == "uptime" || name == "expires")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/group-range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "group-range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/ranges/range/group-range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormats()
    :
    interface_old_format(this, {"interface_name"})
{

    yang_name = "interface-old-formats"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_old_format.len(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.len(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::InterfaceOldFormats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_old_format.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::InterfaceOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-old-format")
        return true;
    return false;
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/interface-old-formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "interface-old-format"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "interface-old-format"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::Bsr()
    :
    rp_caches(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches>())
    , candidate_rps(std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps>())
    , bsr_elections(std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections>())
{
    rp_caches->parent = this;
    candidate_rps->parent = this;
    bsr_elections->parent = this;

    yang_name = "bsr"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::~Bsr()
{
}

bool Pim::Active::DefaultContext::Bsr::has_data() const
{
    if (is_presence_container) return true;
    return (rp_caches !=  nullptr && rp_caches->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (bsr_elections !=  nullptr && bsr_elections->has_data());
}

bool Pim::Active::DefaultContext::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (rp_caches !=  nullptr && rp_caches->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation())
	|| (bsr_elections !=  nullptr && bsr_elections->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-caches")
    {
        if(rp_caches == nullptr)
        {
            rp_caches = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches>();
        }
        return rp_caches;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    if(child_yang_name == "bsr-elections")
    {
        if(bsr_elections == nullptr)
        {
            bsr_elections = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections>();
        }
        return bsr_elections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_caches != nullptr)
    {
        children["rp-caches"] = rp_caches;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    if(bsr_elections != nullptr)
    {
        children["bsr-elections"] = bsr_elections;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-caches" || name == "candidate-rps" || name == "bsr-elections")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCaches()
    :
    rp_cache(this, {"group_prefix"})
{

    yang_name = "rp-caches"; yang_parent_name = "bsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::RpCaches::~RpCaches()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_cache.len(); index++)
    {
        if(rp_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::has_operation() const
{
    for (std::size_t index=0; index<rp_cache.len(); index++)
    {
        if(rp_cache[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-caches";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::RpCaches::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-cache")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache>();
        c->parent = this;
        rp_cache.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::RpCaches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rp_cache.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Bsr::RpCaches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-cache")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::RpCache()
    :
    group_prefix{YType::str, "group-prefix"},
    group_prefix_length{YType::uint32, "group-prefix-length"},
    candidate_rp_group_count{YType::uint32, "candidate-rp-group-count"}
        ,
    group_prefix_xr(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>())
    , candidate_rp_list(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>())
{
    group_prefix_xr->parent = this;
    candidate_rp_list->parent = this;

    yang_name = "rp-cache"; yang_parent_name = "rp-caches"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::~RpCache()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::has_data() const
{
    if (is_presence_container) return true;
    return group_prefix.is_set
	|| group_prefix_length.is_set
	|| candidate_rp_group_count.is_set
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_data())
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_data());
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_prefix.yfilter)
	|| ydk::is_set(group_prefix_length.yfilter)
	|| ydk::is_set(candidate_rp_group_count.yfilter)
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_operation())
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/rp-caches/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-cache";
    ADD_KEY_TOKEN(group_prefix, "group-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_prefix.is_set || is_set(group_prefix.yfilter)) leaf_name_data.push_back(group_prefix.get_name_leafdata());
    if (group_prefix_length.is_set || is_set(group_prefix_length.yfilter)) leaf_name_data.push_back(group_prefix_length.get_name_leafdata());
    if (candidate_rp_group_count.is_set || is_set(candidate_rp_group_count.yfilter)) leaf_name_data.push_back(candidate_rp_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-prefix-xr")
    {
        if(group_prefix_xr == nullptr)
        {
            group_prefix_xr = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>();
        }
        return group_prefix_xr;
    }

    if(child_yang_name == "candidate-rp-list")
    {
        if(candidate_rp_list == nullptr)
        {
            candidate_rp_list = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>();
        }
        return candidate_rp_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_prefix_xr != nullptr)
    {
        children["group-prefix-xr"] = group_prefix_xr;
    }

    if(candidate_rp_list != nullptr)
    {
        children["candidate-rp-list"] = candidate_rp_list;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-prefix")
    {
        group_prefix = value;
        group_prefix.value_namespace = name_space;
        group_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length = value;
        group_prefix_length.value_namespace = name_space;
        group_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count = value;
        candidate_rp_group_count.value_namespace = name_space;
        candidate_rp_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-prefix")
    {
        group_prefix.yfilter = yfilter;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-prefix-xr" || name == "candidate-rp-list" || name == "group-prefix" || name == "group-prefix-length" || name == "candidate-rp-group-count")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::GroupPrefixXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-prefix-xr"; yang_parent_name = "rp-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::~GroupPrefixXr()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-prefix-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::CandidateRpList()
    :
    pim_bsr_crp_bag(this, {})
{

    yang_name = "candidate-rp-list"; yang_parent_name = "rp-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::~CandidateRpList()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pim_bsr_crp_bag.len(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_operation() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.len(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pim-bsr-crp-bag")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag>();
        c->parent = this;
        pim_bsr_crp_bag.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pim_bsr_crp_bag.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim-bsr-crp-bag")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::PimBsrCrpBag()
    :
    candidate_rp_holdtime{YType::uint16, "candidate-rp-holdtime"},
    candidate_rp_priority{YType::uint8, "candidate-rp-priority"},
    candidate_rp_up_time{YType::uint16, "candidate-rp-up-time"},
    candidate_rp_expires{YType::uint16, "candidate-rp-expires"},
    protocol{YType::enumeration, "protocol"}
        ,
    candidate_rp_address(std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>())
{
    candidate_rp_address->parent = this;

    yang_name = "pim-bsr-crp-bag"; yang_parent_name = "candidate-rp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::~PimBsrCrpBag()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_data() const
{
    if (is_presence_container) return true;
    return candidate_rp_holdtime.is_set
	|| candidate_rp_priority.is_set
	|| candidate_rp_up_time.is_set
	|| candidate_rp_expires.is_set
	|| protocol.is_set
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_data());
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_rp_holdtime.yfilter)
	|| ydk::is_set(candidate_rp_priority.yfilter)
	|| ydk::is_set(candidate_rp_up_time.yfilter)
	|| ydk::is_set(candidate_rp_expires.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-bsr-crp-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_holdtime.is_set || is_set(candidate_rp_holdtime.yfilter)) leaf_name_data.push_back(candidate_rp_holdtime.get_name_leafdata());
    if (candidate_rp_priority.is_set || is_set(candidate_rp_priority.yfilter)) leaf_name_data.push_back(candidate_rp_priority.get_name_leafdata());
    if (candidate_rp_up_time.is_set || is_set(candidate_rp_up_time.yfilter)) leaf_name_data.push_back(candidate_rp_up_time.get_name_leafdata());
    if (candidate_rp_expires.is_set || is_set(candidate_rp_expires.yfilter)) leaf_name_data.push_back(candidate_rp_expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp-address")
    {
        if(candidate_rp_address == nullptr)
        {
            candidate_rp_address = std::make_shared<Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>();
        }
        return candidate_rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_rp_address != nullptr)
    {
        children["candidate-rp-address"] = candidate_rp_address;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime = value;
        candidate_rp_holdtime.value_namespace = name_space;
        candidate_rp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority = value;
        candidate_rp_priority.value_namespace = name_space;
        candidate_rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time = value;
        candidate_rp_up_time.value_namespace = name_space;
        candidate_rp_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires = value;
        candidate_rp_expires.value_namespace = name_space;
        candidate_rp_expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp-address" || name == "candidate-rp-holdtime" || name == "candidate-rp-priority" || name == "candidate-rp-up-time" || name == "candidate-rp-expires" || name == "protocol")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::CandidateRpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "candidate-rp-address"; yang_parent_name = "pim-bsr-crp-bag"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::~CandidateRpAddress()
{
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRps()
    :
    candidate_rp(this, {"rp_address"})
{

    yang_name = "candidate-rps"; yang_parent_name = "bsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<candidate_rp.len(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.len(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::CandidateRps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : candidate_rp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    rp_address{YType::str, "rp-address"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    candidate_rp_scope{YType::int32, "candidate-rp-scope"},
    crp_priority{YType::uint8, "crp-priority"},
    crp_holdtime{YType::uint16, "crp-holdtime"},
    candidate_rp_advance_interval{YType::uint16, "candidate-rp-advance-interval"},
    candidate_rp_uptime{YType::uint16, "candidate-rp-uptime"},
    acl_name{YType::str, "acl-name"}
        ,
    candidate_rp(std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>())
    , crp_access(this, {})
{
    candidate_rp->parent = this;

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crp_access.len(); index++)
    {
        if(crp_access[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| candidate_rp_mode.is_set
	|| candidate_rp_scope.is_set
	|| crp_priority.is_set
	|| crp_holdtime.is_set
	|| candidate_rp_advance_interval.is_set
	|| candidate_rp_uptime.is_set
	|| acl_name.is_set
	|| (candidate_rp !=  nullptr && candidate_rp->has_data());
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    for (std::size_t index=0; index<crp_access.len(); index++)
    {
        if(crp_access[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(candidate_rp_mode.yfilter)
	|| ydk::is_set(candidate_rp_scope.yfilter)
	|| ydk::is_set(crp_priority.yfilter)
	|| ydk::is_set(crp_holdtime.yfilter)
	|| ydk::is_set(candidate_rp_advance_interval.yfilter)
	|| ydk::is_set(candidate_rp_uptime.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/candidate-rps/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";
    ADD_KEY_TOKEN(rp_address, "rp-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.yfilter)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (candidate_rp_scope.is_set || is_set(candidate_rp_scope.yfilter)) leaf_name_data.push_back(candidate_rp_scope.get_name_leafdata());
    if (crp_priority.is_set || is_set(crp_priority.yfilter)) leaf_name_data.push_back(crp_priority.get_name_leafdata());
    if (crp_holdtime.is_set || is_set(crp_holdtime.yfilter)) leaf_name_data.push_back(crp_holdtime.get_name_leafdata());
    if (candidate_rp_advance_interval.is_set || is_set(candidate_rp_advance_interval.yfilter)) leaf_name_data.push_back(candidate_rp_advance_interval.get_name_leafdata());
    if (candidate_rp_uptime.is_set || is_set(candidate_rp_uptime.yfilter)) leaf_name_data.push_back(candidate_rp_uptime.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp == nullptr)
        {
            candidate_rp = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>();
        }
        return candidate_rp;
    }

    if(child_yang_name == "crp-access")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess>();
        c->parent = this;
        crp_access.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_rp != nullptr)
    {
        children["candidate-rp"] = candidate_rp;
    }

    count = 0;
    for (auto c : crp_access.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
        candidate_rp_mode.value_namespace = name_space;
        candidate_rp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope = value;
        candidate_rp_scope.value_namespace = name_space;
        candidate_rp_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crp-priority")
    {
        crp_priority = value;
        crp_priority.value_namespace = name_space;
        crp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime = value;
        crp_holdtime.value_namespace = name_space;
        crp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval = value;
        candidate_rp_advance_interval.value_namespace = name_space;
        candidate_rp_advance_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime = value;
        candidate_rp_uptime.value_namespace = name_space;
        candidate_rp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope.yfilter = yfilter;
    }
    if(value_path == "crp-priority")
    {
        crp_priority.yfilter = yfilter;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp" || name == "crp-access" || name == "rp-address" || name == "candidate-rp-mode" || name == "candidate-rp-scope" || name == "crp-priority" || name == "crp-holdtime" || name == "candidate-rp-advance-interval" || name == "candidate-rp-uptime" || name == "acl-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::CandidateRp_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::~CandidateRp_()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::CrpAccess()
    :
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "crp-access"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::~CrpAccess()
{
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_data() const
{
    if (is_presence_container) return true;
    return candidate_rp_mode.is_set
	|| acl_name.is_set;
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_rp_mode.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crp-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.yfilter)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
        candidate_rp_mode.value_namespace = name_space;
        candidate_rp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp-mode" || name == "acl-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElections()
    :
    bsr_election(this, {"pim_scope"})
{

    yang_name = "bsr-elections"; yang_parent_name = "bsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::BsrElections::~BsrElections()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsr_election.len(); index++)
    {
        if(bsr_election[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::has_operation() const
{
    for (std::size_t index=0; index<bsr_election.len(); index++)
    {
        if(bsr_election[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-elections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::BsrElections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-election")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection>();
        c->parent = this;
        bsr_election.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::BsrElections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bsr_election.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Bsr::BsrElections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-election")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrElection()
    :
    pim_scope{YType::uint32, "pim-scope"},
    bsr_priority{YType::uint8, "bsr-priority"},
    bsr_mask_length{YType::uint8, "bsr-mask-length"},
    bsr_up_time{YType::uint16, "bsr-up-time"},
    bootstrap_timeout{YType::uint16, "bootstrap-timeout"},
    candidate_bsr_state{YType::uint32, "candidate-bsr-state"},
    bsr_election_state{YType::uint32, "bsr-election-state"},
    bsr_scope{YType::uint16, "bsr-scope"},
    candidate_bsr_flag{YType::boolean, "candidate-bsr-flag"},
    candidate_bsr_priority{YType::uint8, "candidate-bsr-priority"},
    candidate_bsr_mask_length{YType::uint8, "candidate-bsr-mask-length"}
        ,
    bsr_address(std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>())
    , candidate_bsr_address(std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>())
{
    bsr_address->parent = this;
    candidate_bsr_address->parent = this;

    yang_name = "bsr-election"; yang_parent_name = "bsr-elections"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::~BsrElection()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::has_data() const
{
    if (is_presence_container) return true;
    return pim_scope.is_set
	|| bsr_priority.is_set
	|| bsr_mask_length.is_set
	|| bsr_up_time.is_set
	|| bootstrap_timeout.is_set
	|| candidate_bsr_state.is_set
	|| bsr_election_state.is_set
	|| bsr_scope.is_set
	|| candidate_bsr_flag.is_set
	|| candidate_bsr_priority.is_set
	|| candidate_bsr_mask_length.is_set
	|| (bsr_address !=  nullptr && bsr_address->has_data())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_data());
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim_scope.yfilter)
	|| ydk::is_set(bsr_priority.yfilter)
	|| ydk::is_set(bsr_mask_length.yfilter)
	|| ydk::is_set(bsr_up_time.yfilter)
	|| ydk::is_set(bootstrap_timeout.yfilter)
	|| ydk::is_set(candidate_bsr_state.yfilter)
	|| ydk::is_set(bsr_election_state.yfilter)
	|| ydk::is_set(bsr_scope.yfilter)
	|| ydk::is_set(candidate_bsr_flag.yfilter)
	|| ydk::is_set(candidate_bsr_priority.yfilter)
	|| ydk::is_set(candidate_bsr_mask_length.yfilter)
	|| (bsr_address !=  nullptr && bsr_address->has_operation())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_operation());
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/bsr/bsr-elections/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-election";
    ADD_KEY_TOKEN(pim_scope, "pim-scope");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_scope.is_set || is_set(pim_scope.yfilter)) leaf_name_data.push_back(pim_scope.get_name_leafdata());
    if (bsr_priority.is_set || is_set(bsr_priority.yfilter)) leaf_name_data.push_back(bsr_priority.get_name_leafdata());
    if (bsr_mask_length.is_set || is_set(bsr_mask_length.yfilter)) leaf_name_data.push_back(bsr_mask_length.get_name_leafdata());
    if (bsr_up_time.is_set || is_set(bsr_up_time.yfilter)) leaf_name_data.push_back(bsr_up_time.get_name_leafdata());
    if (bootstrap_timeout.is_set || is_set(bootstrap_timeout.yfilter)) leaf_name_data.push_back(bootstrap_timeout.get_name_leafdata());
    if (candidate_bsr_state.is_set || is_set(candidate_bsr_state.yfilter)) leaf_name_data.push_back(candidate_bsr_state.get_name_leafdata());
    if (bsr_election_state.is_set || is_set(bsr_election_state.yfilter)) leaf_name_data.push_back(bsr_election_state.get_name_leafdata());
    if (bsr_scope.is_set || is_set(bsr_scope.yfilter)) leaf_name_data.push_back(bsr_scope.get_name_leafdata());
    if (candidate_bsr_flag.is_set || is_set(candidate_bsr_flag.yfilter)) leaf_name_data.push_back(candidate_bsr_flag.get_name_leafdata());
    if (candidate_bsr_priority.is_set || is_set(candidate_bsr_priority.yfilter)) leaf_name_data.push_back(candidate_bsr_priority.get_name_leafdata());
    if (candidate_bsr_mask_length.is_set || is_set(candidate_bsr_mask_length.yfilter)) leaf_name_data.push_back(candidate_bsr_mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-address")
    {
        if(bsr_address == nullptr)
        {
            bsr_address = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>();
        }
        return bsr_address;
    }

    if(child_yang_name == "candidate-bsr-address")
    {
        if(candidate_bsr_address == nullptr)
        {
            candidate_bsr_address = std::make_shared<Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>();
        }
        return candidate_bsr_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bsr_address != nullptr)
    {
        children["bsr-address"] = bsr_address;
    }

    if(candidate_bsr_address != nullptr)
    {
        children["candidate-bsr-address"] = candidate_bsr_address;
    }

    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim-scope")
    {
        pim_scope = value;
        pim_scope.value_namespace = name_space;
        pim_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority = value;
        bsr_priority.value_namespace = name_space;
        bsr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length = value;
        bsr_mask_length.value_namespace = name_space;
        bsr_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time = value;
        bsr_up_time.value_namespace = name_space;
        bsr_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout = value;
        bootstrap_timeout.value_namespace = name_space;
        bootstrap_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state = value;
        candidate_bsr_state.value_namespace = name_space;
        candidate_bsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state = value;
        bsr_election_state.value_namespace = name_space;
        bsr_election_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope = value;
        bsr_scope.value_namespace = name_space;
        bsr_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag = value;
        candidate_bsr_flag.value_namespace = name_space;
        candidate_bsr_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority = value;
        candidate_bsr_priority.value_namespace = name_space;
        candidate_bsr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length = value;
        candidate_bsr_mask_length.value_namespace = name_space;
        candidate_bsr_mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim-scope")
    {
        pim_scope.yfilter = yfilter;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority.yfilter = yfilter;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length.yfilter = yfilter;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time.yfilter = yfilter;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state.yfilter = yfilter;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state.yfilter = yfilter;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-address" || name == "candidate-bsr-address" || name == "pim-scope" || name == "bsr-priority" || name == "bsr-mask-length" || name == "bsr-up-time" || name == "bootstrap-timeout" || name == "candidate-bsr-state" || name == "bsr-election-state" || name == "bsr-scope" || name == "candidate-bsr-flag" || name == "candidate-bsr-priority" || name == "candidate-bsr-mask-length")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::BsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "bsr-address"; yang_parent_name = "bsr-election"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::~BsrAddress()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::CandidateBsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "candidate-bsr-address"; yang_parent_name = "bsr-election"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::~CandidateBsrAddress()
{
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics>())
    , route_policy_tests(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;
    route_policy_tests->parent = this;

    yang_name = "route-policy"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Active::DefaultContext::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Active::DefaultContext::RoutePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics == nullptr)
        {
            route_policy_statistics = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics>();
        }
        return route_policy_statistics;
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests == nullptr)
        {
            route_policy_tests = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests>();
        }
        return route_policy_tests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_policy_statistics != nullptr)
    {
        children["route-policy-statistics"] = route_policy_statistics;
    }

    if(route_policy_tests != nullptr)
    {
        children["route-policy-tests"] = route_policy_tests;
    }

    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::RoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::RoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-statistics" || name == "route-policy-tests")
        return true;
    return false;
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"},
    pass{YType::uint32, "pass"},
    drop{YType::uint32, "drop"},
    default_table{YType::uint32, "default-table"},
    any_table{YType::uint32, "any-table"}
{

    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| requests.is_set
	|| pass.is_set
	|| drop.is_set
	|| default_table.is_set
	|| any_table.is_set;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(any_table.yfilter);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (any_table.is_set || is_set(any_table.yfilter)) leaf_name_data.push_back(any_table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-table")
    {
        any_table = value;
        any_table.value_namespace = name_space;
        any_table.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "any-table")
    {
        any_table.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "requests" || name == "pass" || name == "drop" || name == "default-table" || name == "any-table")
        return true;
    return false;
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
    :
    route_policy_test(this, {})
{

    yang_name = "route-policy-tests"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_policy_test.len(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.len(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-test")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_policy_test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-test")
        return true;
    return false;
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    ext_comm{YType::str, "ext-comm"},
    policy_name{YType::str, "policy-name"},
    extended_community_rt{YType::str, "extended-community-rt"},
    pass{YType::boolean, "pass"},
    default_table{YType::boolean, "default-table"},
    vrf_name{YType::str, "vrf-name"},
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    table_name{YType::str, "table-name"},
    table_exists{YType::boolean, "table-exists"},
    table_active{YType::boolean, "table-active"}
        ,
    source_address_xr(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
    , group_address_xr(std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
{
    source_address_xr->parent = this;
    group_address_xr->parent = this;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| ext_comm.is_set
	|| policy_name.is_set
	|| extended_community_rt.is_set
	|| pass.is_set
	|| default_table.is_set
	|| vrf_name.is_set
	|| afi.is_set
	|| safi.is_set
	|| table_name.is_set
	|| table_exists.is_set
	|| table_active.is_set
	|| (source_address_xr !=  nullptr && source_address_xr->has_data())
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(ext_comm.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(extended_community_rt.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(table_exists.yfilter)
	|| ydk::is_set(table_active.yfilter)
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation())
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/route-policy-tests/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.yfilter)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.yfilter)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.yfilter)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.yfilter)) leaf_name_data.push_back(table_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
        ext_comm.value_namespace = name_space;
        ext_comm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
        extended_community_rt.value_namespace = name_space;
        extended_community_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
        table_exists.value_namespace = name_space;
        table_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-active")
    {
        table_active = value;
        table_active.value_namespace = name_space;
        table_active.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "ext-comm")
    {
        ext_comm.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "table-exists")
    {
        table_exists.yfilter = yfilter;
    }
    if(value_path == "table-active")
    {
        table_active.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-xr" || name == "group-address-xr" || name == "source-address" || name == "group-address" || name == "ext-comm" || name == "policy-name" || name == "extended-community-rt" || name == "pass" || name == "default-table" || name == "vrf-name" || name == "afi" || name == "safi" || name == "table-name" || name == "table-exists" || name == "table-active")
        return true;
    return false;
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rump_enabled{YType::boolean, "rump-enabled"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"}
{

    yang_name = "rpf-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::RpfSummary::~RpfSummary()
{
}

bool Pim::Active::DefaultContext::RpfSummary::has_data() const
{
    if (is_presence_container) return true;
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_mbgp_configured.is_set
	|| is_ospf_te_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_isis_mtr_configured.is_set
	|| mo_frr_configured.is_set
	|| rib_mo_frr_configured.is_set
	|| rump_enabled.is_set
	|| rib_convergence_timeout.is_set
	|| rib_convergence_time_left.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| rpf_registrations.is_set
	|| is_rib_convergence.is_set;
}

bool Pim::Active::DefaultContext::RpfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_safi.yfilter)
	|| ydk::is_set(default_table_name.yfilter)
	|| ydk::is_set(is_mbgp_configured.yfilter)
	|| ydk::is_set(is_ospf_te_configured.yfilter)
	|| ydk::is_set(is_isis_te_configured.yfilter)
	|| ydk::is_set(is_isis_mtr_configured.yfilter)
	|| ydk::is_set(mo_frr_configured.yfilter)
	|| ydk::is_set(rib_mo_frr_configured.yfilter)
	|| ydk::is_set(rump_enabled.yfilter)
	|| ydk::is_set(rib_convergence_timeout.yfilter)
	|| ydk::is_set(rib_convergence_time_left.yfilter)
	|| ydk::is_set(is_multipath_enabled.yfilter)
	|| ydk::is_set(is_multipath_interface_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_next_hop_hash_enabled.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter);
}

std::string Pim::Active::DefaultContext::RpfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::RpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.yfilter)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.yfilter)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.yfilter)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.yfilter)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.yfilter)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.yfilter)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.yfilter)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.yfilter)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.yfilter)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.yfilter)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.yfilter)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::RpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::RpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
        default_safi.value_namespace = name_space;
        default_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
        default_table_name.value_namespace = name_space;
        default_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
        is_mbgp_configured.value_namespace = name_space;
        is_mbgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
        is_ospf_te_configured.value_namespace = name_space;
        is_ospf_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
        is_isis_te_configured.value_namespace = name_space;
        is_isis_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
        is_isis_mtr_configured.value_namespace = name_space;
        is_isis_mtr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
        mo_frr_configured.value_namespace = name_space;
        mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
        rib_mo_frr_configured.value_namespace = name_space;
        rib_mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
        rib_convergence_timeout.value_namespace = name_space;
        rib_convergence_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
        rib_convergence_time_left.value_namespace = name_space;
        rib_convergence_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
        is_multipath_enabled.value_namespace = name_space;
        is_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
        is_multipath_interface_hash_enabled.value_namespace = name_space;
        is_multipath_interface_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
        is_multipath_source_hash_enabled.value_namespace = name_space;
        is_multipath_source_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
        is_multipath_source_next_hop_hash_enabled.value_namespace = name_space;
        is_multipath_source_next_hop_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::RpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-safi")
    {
        default_safi.yfilter = yfilter;
    }
    if(value_path == "default-table-name")
    {
        default_table_name.yfilter = yfilter;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured.yfilter = yfilter;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured.yfilter = yfilter;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left.yfilter = yfilter;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::RpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-safi" || name == "default-table-name" || name == "is-mbgp-configured" || name == "is-ospf-te-configured" || name == "is-isis-te-configured" || name == "is-isis-mtr-configured" || name == "mo-frr-configured" || name == "rib-mo-frr-configured" || name == "rump-enabled" || name == "rib-convergence-timeout" || name == "rib-convergence-time-left" || name == "is-multipath-enabled" || name == "is-multipath-interface-hash-enabled" || name == "is-multipath-source-hash-enabled" || name == "is-multipath-source-next-hop-hash-enabled" || name == "rpf-registrations" || name == "is-rib-convergence")
        return true;
    return false;
}

Pim::Active::DefaultContext::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Interfaces::~Interfaces()
{
}

bool Pim::Active::DefaultContext::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::Active::DefaultContext::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Pim::Active::DefaultContext::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::DefaultContext::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Interfaces::Interface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnels()
    :
    net_io_tunnel(this, {"tunnel_name"})
{

    yang_name = "net-io-tunnels"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<net_io_tunnel.len(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::DefaultContext::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.len(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::NetIoTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net-io-tunnel")
    {
        auto c = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::NetIoTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : net_io_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::DefaultContext::NetIoTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-io-tunnel")
        return true;
    return false;
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::NetIoTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
        ,
    source_address(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>())
    , rp_address(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>())
    , source_address_netio(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>())
    , group_address_netio(std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>())
{
    source_address->parent = this;
    rp_address->parent = this;
    source_address_netio->parent = this;
    group_address_netio->parent = this;

    yang_name = "net-io-tunnel"; yang_parent_name = "net-io-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::~NetIoTunnel()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data())
	|| (group_address_netio !=  nullptr && group_address_netio->has_data());
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation())
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation());
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/active/default-context/net-io-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "rp-address" || name == "source-address-netio" || name == "group-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}


}
}

