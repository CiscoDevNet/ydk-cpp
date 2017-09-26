
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bgp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_oper {

BgpStateData::BgpStateData()
    :
    address_families(std::make_shared<BgpStateData::AddressFamilies>())
	,bgp_route_vrfs(std::make_shared<BgpStateData::BgpRouteVrfs>())
	,neighbors(std::make_shared<BgpStateData::Neighbors>())
{
    address_families->parent = this;
    bgp_route_vrfs->parent = this;
    neighbors->parent = this;

    yang_name = "bgp-state-data"; yang_parent_name = "Cisco-IOS-XE-bgp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

BgpStateData::~BgpStateData()
{
}

bool BgpStateData::has_data() const
{
    return (address_families !=  nullptr && address_families->has_data())
	|| (bgp_route_vrfs !=  nullptr && bgp_route_vrfs->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool BgpStateData::has_operation() const
{
    return is_set(yfilter)
	|| (address_families !=  nullptr && address_families->has_operation())
	|| (bgp_route_vrfs !=  nullptr && bgp_route_vrfs->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string BgpStateData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-families")
    {
        if(address_families == nullptr)
        {
            address_families = std::make_shared<BgpStateData::AddressFamilies>();
        }
        return address_families;
    }

    if(child_yang_name == "bgp-route-vrfs")
    {
        if(bgp_route_vrfs == nullptr)
        {
            bgp_route_vrfs = std::make_shared<BgpStateData::BgpRouteVrfs>();
        }
        return bgp_route_vrfs;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<BgpStateData::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_families != nullptr)
    {
        children["address-families"] = address_families;
    }

    if(bgp_route_vrfs != nullptr)
    {
        children["bgp-route-vrfs"] = bgp_route_vrfs;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void BgpStateData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BgpStateData::clone_ptr() const
{
    return std::make_shared<BgpStateData>();
}

std::string BgpStateData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BgpStateData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BgpStateData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BgpStateData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BgpStateData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "bgp-route-vrfs" || name == "neighbors")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamilies()
{

    yang_name = "address-families"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false;
}

BgpStateData::AddressFamilies::~AddressFamilies()
{
}

bool BgpStateData::AddressFamilies::has_data() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::AddressFamilies::has_operation() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::AddressFamilies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::AddressFamilies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-families";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        for(auto const & c : address_family)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::AddressFamilies::AddressFamily>();
        c->parent = this;
        address_family.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_family)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::AddressFamilies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::AddressFamilies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::AddressFamilies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::AddressFamily()
    :
    afi_safi{YType::enumeration, "afi-safi"},
    vrf_name{YType::str, "vrf-name"},
    bgp_table_version{YType::uint64, "bgp-table-version"},
    router_id{YType::str, "router-id"},
    routing_table_version{YType::uint64, "routing-table-version"},
    total_memory{YType::uint64, "total-memory"}
    	,
    activities(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Activities>())
	,as_path(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::AsPath>())
	,bgp_neighbor_summaries(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries>())
	,filter_list(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::FilterList>())
	,path(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Path>())
	,prefixes(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Prefixes>())
	,route_map(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::RouteMap>())
{
    activities->parent = this;
    as_path->parent = this;
    bgp_neighbor_summaries->parent = this;
    filter_list->parent = this;
    path->parent = this;
    prefixes->parent = this;
    route_map->parent = this;

    yang_name = "address-family"; yang_parent_name = "address-families"; is_top_level_class = false; has_list_ancestor = false;
}

BgpStateData::AddressFamilies::AddressFamily::~AddressFamily()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::has_data() const
{
    return afi_safi.is_set
	|| vrf_name.is_set
	|| bgp_table_version.is_set
	|| router_id.is_set
	|| routing_table_version.is_set
	|| total_memory.is_set
	|| (activities !=  nullptr && activities->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (bgp_neighbor_summaries !=  nullptr && bgp_neighbor_summaries->has_data())
	|| (filter_list !=  nullptr && filter_list->has_data())
	|| (path !=  nullptr && path->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool BgpStateData::AddressFamilies::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(bgp_table_version.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(routing_table_version.yfilter)
	|| ydk::is_set(total_memory.yfilter)
	|| (activities !=  nullptr && activities->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (bgp_neighbor_summaries !=  nullptr && bgp_neighbor_summaries->has_operation())
	|| (filter_list !=  nullptr && filter_list->has_operation())
	|| (path !=  nullptr && path->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string BgpStateData::AddressFamilies::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/address-families/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::AddressFamilies::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family" <<"[afi-safi='" <<afi_safi <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (bgp_table_version.is_set || is_set(bgp_table_version.yfilter)) leaf_name_data.push_back(bgp_table_version.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (routing_table_version.is_set || is_set(routing_table_version.yfilter)) leaf_name_data.push_back(routing_table_version.get_name_leafdata());
    if (total_memory.is_set || is_set(total_memory.yfilter)) leaf_name_data.push_back(total_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activities")
    {
        if(activities == nullptr)
        {
            activities = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Activities>();
        }
        return activities;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "bgp-neighbor-summaries")
    {
        if(bgp_neighbor_summaries == nullptr)
        {
            bgp_neighbor_summaries = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries>();
        }
        return bgp_neighbor_summaries;
    }

    if(child_yang_name == "filter-list")
    {
        if(filter_list == nullptr)
        {
            filter_list = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::FilterList>();
        }
        return filter_list;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Path>();
        }
        return path;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(activities != nullptr)
    {
        children["activities"] = activities;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(bgp_neighbor_summaries != nullptr)
    {
        children["bgp-neighbor-summaries"] = bgp_neighbor_summaries;
    }

    if(filter_list != nullptr)
    {
        children["filter-list"] = filter_list;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-table-version")
    {
        bgp_table_version = value;
        bgp_table_version.value_namespace = name_space;
        bgp_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table-version")
    {
        routing_table_version = value;
        routing_table_version.value_namespace = name_space;
        routing_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-memory")
    {
        total_memory = value;
        total_memory.value_namespace = name_space;
        total_memory.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "bgp-table-version")
    {
        bgp_table_version.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "routing-table-version")
    {
        routing_table_version.yfilter = yfilter;
    }
    if(value_path == "total-memory")
    {
        total_memory.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activities" || name == "as-path" || name == "bgp-neighbor-summaries" || name == "filter-list" || name == "path" || name == "prefixes" || name == "route-map" || name == "afi-safi" || name == "vrf-name" || name == "bgp-table-version" || name == "router-id" || name == "routing-table-version" || name == "total-memory")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::Activities::Activities()
    :
    paths{YType::uint64, "paths"},
    prefixes{YType::uint64, "prefixes"},
    scan_interval{YType::str, "scan-interval"}
{

    yang_name = "activities"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::Activities::~Activities()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::Activities::has_data() const
{
    return paths.is_set
	|| prefixes.is_set
	|| scan_interval.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::Activities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(scan_interval.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::Activities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::Activities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (scan_interval.is_set || is_set(scan_interval.yfilter)) leaf_name_data.push_back(scan_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::Activities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::Activities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::Activities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-interval")
    {
        scan_interval = value;
        scan_interval.value_namespace = name_space;
        scan_interval.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::Activities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "scan-interval")
    {
        scan_interval.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::Activities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "prefixes" || name == "scan-interval")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::AsPath::AsPath()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{

    yang_name = "as-path"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::AsPath::~AsPath()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::AsPath::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::AsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(total_entries.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-usage" || name == "total-entries")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummaries()
{

    yang_name = "bgp-neighbor-summaries"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::~BgpNeighborSummaries()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<bgp_neighbor_summary.size(); index++)
    {
        if(bgp_neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor_summary.size(); index++)
    {
        if(bgp_neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-summary")
    {
        for(auto const & c : bgp_neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary>();
        c->parent = this;
        bgp_neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-summary")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::BgpNeighborSummary()
    :
    id{YType::str, "id"},
    bgp_version{YType::uint32, "bgp-version"},
    dynamically_configured{YType::boolean, "dynamically-configured"},
    input_queue{YType::uint64, "input-queue"},
    messages_received{YType::uint64, "messages-received"},
    messages_sent{YType::uint64, "messages-sent"},
    output_queue{YType::uint64, "output-queue"},
    prefixes_received{YType::uint64, "prefixes-received"},
    state{YType::enumeration, "state"},
    table_version{YType::uint64, "table-version"},
    up_time{YType::str, "up-time"}
{

    yang_name = "bgp-neighbor-summary"; yang_parent_name = "bgp-neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::~BgpNeighborSummary()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_data() const
{
    return id.is_set
	|| bgp_version.is_set
	|| dynamically_configured.is_set
	|| input_queue.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| output_queue.is_set
	|| prefixes_received.is_set
	|| state.is_set
	|| table_version.is_set
	|| up_time.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(bgp_version.yfilter)
	|| ydk::is_set(dynamically_configured.yfilter)
	|| ydk::is_set(input_queue.yfilter)
	|| ydk::is_set(messages_received.yfilter)
	|| ydk::is_set(messages_sent.yfilter)
	|| ydk::is_set(output_queue.yfilter)
	|| ydk::is_set(prefixes_received.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(table_version.yfilter)
	|| ydk::is_set(up_time.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-summary" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.yfilter)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (dynamically_configured.is_set || is_set(dynamically_configured.yfilter)) leaf_name_data.push_back(dynamically_configured.get_name_leafdata());
    if (input_queue.is_set || is_set(input_queue.yfilter)) leaf_name_data.push_back(input_queue.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.yfilter)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.yfilter)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (output_queue.is_set || is_set(output_queue.yfilter)) leaf_name_data.push_back(output_queue.get_name_leafdata());
    if (prefixes_received.is_set || is_set(prefixes_received.yfilter)) leaf_name_data.push_back(prefixes_received.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.yfilter)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
        bgp_version.value_namespace = name_space;
        bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamically-configured")
    {
        dynamically_configured = value;
        dynamically_configured.value_namespace = name_space;
        dynamically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue")
    {
        input_queue = value;
        input_queue.value_namespace = name_space;
        input_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
        messages_received.value_namespace = name_space;
        messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
        messages_sent.value_namespace = name_space;
        messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue")
    {
        output_queue = value;
        output_queue.value_namespace = name_space;
        output_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-received")
    {
        prefixes_received = value;
        prefixes_received.value_namespace = name_space;
        prefixes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-version")
    {
        table_version = value;
        table_version.value_namespace = name_space;
        table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "bgp-version")
    {
        bgp_version.yfilter = yfilter;
    }
    if(value_path == "dynamically-configured")
    {
        dynamically_configured.yfilter = yfilter;
    }
    if(value_path == "input-queue")
    {
        input_queue.yfilter = yfilter;
    }
    if(value_path == "messages-received")
    {
        messages_received.yfilter = yfilter;
    }
    if(value_path == "messages-sent")
    {
        messages_sent.yfilter = yfilter;
    }
    if(value_path == "output-queue")
    {
        output_queue.yfilter = yfilter;
    }
    if(value_path == "prefixes-received")
    {
        prefixes_received.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "table-version")
    {
        table_version.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "bgp-version" || name == "dynamically-configured" || name == "input-queue" || name == "messages-received" || name == "messages-sent" || name == "output-queue" || name == "prefixes-received" || name == "state" || name == "table-version" || name == "up-time")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::FilterList::FilterList()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{

    yang_name = "filter-list"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::FilterList::~FilterList()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::FilterList::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(total_entries.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-usage" || name == "total-entries")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::Path::Path()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{

    yang_name = "path"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::Path::~Path()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::Path::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(total_entries.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-usage" || name == "total-entries")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::Prefixes::Prefixes()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{

    yang_name = "prefixes"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::Prefixes::~Prefixes()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::Prefixes::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(total_entries.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-usage" || name == "total-entries")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::RouteMap::RouteMap()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{

    yang_name = "route-map"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::AddressFamilies::AddressFamily::RouteMap::~RouteMap()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::RouteMap::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(total_entries.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::AddressFamilies::AddressFamily::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-usage" || name == "total-entries")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrfs()
{

    yang_name = "bgp-route-vrfs"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false;
}

BgpStateData::BgpRouteVrfs::~BgpRouteVrfs()
{
}

bool BgpStateData::BgpRouteVrfs::has_data() const
{
    for (std::size_t index=0; index<bgp_route_vrf.size(); index++)
    {
        if(bgp_route_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_vrf.size(); index++)
    {
        if(bgp_route_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::BgpRouteVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-vrf")
    {
        for(auto const & c : bgp_route_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf>();
        c->parent = this;
        bgp_route_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_route_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-vrf")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteVrf()
    :
    vrf{YType::str, "vrf"}
    	,
    bgp_route_afs(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs>())
{
    bgp_route_afs->parent = this;

    yang_name = "bgp-route-vrf"; yang_parent_name = "bgp-route-vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::~BgpRouteVrf()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::has_data() const
{
    return vrf.is_set
	|| (bgp_route_afs !=  nullptr && bgp_route_afs->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (bgp_route_afs !=  nullptr && bgp_route_afs->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/bgp-route-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-vrf" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-afs")
    {
        if(bgp_route_afs == nullptr)
        {
            bgp_route_afs = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs>();
        }
        return bgp_route_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_route_afs != nullptr)
    {
        children["bgp-route-afs"] = bgp_route_afs;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-afs" || name == "vrf")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAfs()
{

    yang_name = "bgp-route-afs"; yang_parent_name = "bgp-route-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::~BgpRouteAfs()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::has_data() const
{
    for (std::size_t index=0; index<bgp_route_af.size(); index++)
    {
        if(bgp_route_af[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_af.size(); index++)
    {
        if(bgp_route_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-af")
    {
        for(auto const & c : bgp_route_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf>();
        c->parent = this;
        bgp_route_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_route_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-af")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteAf()
    :
    afi_safi{YType::enumeration, "afi-safi"}
    	,
    bgp_route_filters(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters>())
{
    bgp_route_filters->parent = this;

    yang_name = "bgp-route-af"; yang_parent_name = "bgp-route-afs"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::~BgpRouteAf()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::has_data() const
{
    return afi_safi.is_set
	|| (bgp_route_filters !=  nullptr && bgp_route_filters->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| (bgp_route_filters !=  nullptr && bgp_route_filters->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-af" <<"[afi-safi='" <<afi_safi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-filters")
    {
        if(bgp_route_filters == nullptr)
        {
            bgp_route_filters = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters>();
        }
        return bgp_route_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_route_filters != nullptr)
    {
        children["bgp-route-filters"] = bgp_route_filters;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-filters" || name == "afi-safi")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilters()
{

    yang_name = "bgp-route-filters"; yang_parent_name = "bgp-route-af"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::~BgpRouteFilters()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::has_data() const
{
    for (std::size_t index=0; index<bgp_route_filter.size(); index++)
    {
        if(bgp_route_filter[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_filter.size(); index++)
    {
        if(bgp_route_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-filter")
    {
        for(auto const & c : bgp_route_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter>();
        c->parent = this;
        bgp_route_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_route_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteFilter()
    :
    route_filter{YType::enumeration, "route-filter"}
    	,
    bgp_route_entries(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries>())
{
    bgp_route_entries->parent = this;

    yang_name = "bgp-route-filter"; yang_parent_name = "bgp-route-filters"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::~BgpRouteFilter()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::has_data() const
{
    return route_filter.is_set
	|| (bgp_route_entries !=  nullptr && bgp_route_entries->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_filter.yfilter)
	|| (bgp_route_entries !=  nullptr && bgp_route_entries->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-filter" <<"[route-filter='" <<route_filter <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_filter.is_set || is_set(route_filter.yfilter)) leaf_name_data.push_back(route_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-entries")
    {
        if(bgp_route_entries == nullptr)
        {
            bgp_route_entries = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries>();
        }
        return bgp_route_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_route_entries != nullptr)
    {
        children["bgp-route-entries"] = bgp_route_entries;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-filter")
    {
        route_filter = value;
        route_filter.value_namespace = name_space;
        route_filter.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-filter")
    {
        route_filter.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-entries" || name == "route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntries()
{

    yang_name = "bgp-route-entries"; yang_parent_name = "bgp-route-filter"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::~BgpRouteEntries()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::has_data() const
{
    for (std::size_t index=0; index<bgp_route_entry.size(); index++)
    {
        if(bgp_route_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_entry.size(); index++)
    {
        if(bgp_route_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-entry")
    {
        for(auto const & c : bgp_route_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry>();
        c->parent = this;
        bgp_route_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_route_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpRouteEntry()
    :
    prefix{YType::str, "prefix"},
    advertised_to{YType::str, "advertised-to"},
    available_paths{YType::uint32, "available-paths"},
    version{YType::uint32, "version"}
    	,
    bgp_path_entries(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries>())
{
    bgp_path_entries->parent = this;

    yang_name = "bgp-route-entry"; yang_parent_name = "bgp-route-entries"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::~BgpRouteEntry()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::has_data() const
{
    return prefix.is_set
	|| advertised_to.is_set
	|| available_paths.is_set
	|| version.is_set
	|| (bgp_path_entries !=  nullptr && bgp_path_entries->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(advertised_to.yfilter)
	|| ydk::is_set(available_paths.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (bgp_path_entries !=  nullptr && bgp_path_entries->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-entry" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertised_to.is_set || is_set(advertised_to.yfilter)) leaf_name_data.push_back(advertised_to.get_name_leafdata());
    if (available_paths.is_set || is_set(available_paths.yfilter)) leaf_name_data.push_back(available_paths.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-path-entries")
    {
        if(bgp_path_entries == nullptr)
        {
            bgp_path_entries = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries>();
        }
        return bgp_path_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_path_entries != nullptr)
    {
        children["bgp-path-entries"] = bgp_path_entries;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertised-to")
    {
        advertised_to = value;
        advertised_to.value_namespace = name_space;
        advertised_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-paths")
    {
        available_paths = value;
        available_paths.value_namespace = name_space;
        available_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "advertised-to")
    {
        advertised_to.yfilter = yfilter;
    }
    if(value_path == "available-paths")
    {
        available_paths.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-path-entries" || name == "prefix" || name == "advertised-to" || name == "available-paths" || name == "version")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntries()
{

    yang_name = "bgp-path-entries"; yang_parent_name = "bgp-route-entry"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::~BgpPathEntries()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::has_data() const
{
    for (std::size_t index=0; index<bgp_path_entry.size(); index++)
    {
        if(bgp_path_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_path_entry.size(); index++)
    {
        if(bgp_path_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-path-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-path-entry")
    {
        for(auto const & c : bgp_path_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry>();
        c->parent = this;
        bgp_path_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_path_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-path-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::BgpPathEntry()
    :
    nexthop{YType::str, "nexthop"},
    as_path{YType::str, "as-path"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    metric{YType::uint32, "metric"},
    origin{YType::enumeration, "origin"},
    rpki_status{YType::enumeration, "rpki-status"},
    weight{YType::uint32, "weight"}
    	,
    path_status(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus>())
{
    path_status->parent = this;

    yang_name = "bgp-path-entry"; yang_parent_name = "bgp-path-entries"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::~BgpPathEntry()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::has_data() const
{
    return nexthop.is_set
	|| as_path.is_set
	|| community.is_set
	|| local_pref.is_set
	|| metric.is_set
	|| origin.is_set
	|| rpki_status.is_set
	|| weight.is_set
	|| (path_status !=  nullptr && path_status->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(rpki_status.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (path_status !=  nullptr && path_status->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-path-entry" <<"[nexthop='" <<nexthop <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (rpki_status.is_set || is_set(rpki_status.yfilter)) leaf_name_data.push_back(rpki_status.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-status")
    {
        if(path_status == nullptr)
        {
            path_status = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus>();
        }
        return path_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_status != nullptr)
    {
        children["path-status"] = path_status;
    }

    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-status")
    {
        rpki_status = value;
        rpki_status.value_namespace = name_space;
        rpki_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "rpki-status")
    {
        rpki_status.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-status" || name == "nexthop" || name == "as-path" || name == "community" || name == "local-pref" || name == "metric" || name == "origin" || name == "rpki-status" || name == "weight")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::PathStatus()
    :
    additional_path{YType::empty, "additional-path"},
    backup_path{YType::empty, "backup-path"},
    best_external{YType::empty, "best-external"},
    bestpath{YType::empty, "bestpath"},
    damped{YType::empty, "damped"},
    history{YType::empty, "history"},
    internal{YType::empty, "internal"},
    multipath{YType::empty, "multipath"},
    rib_compressed{YType::empty, "rib-compressed"},
    rib_fail{YType::empty, "rib-fail"},
    rt_filter{YType::empty, "rt-filter"},
    sourced{YType::empty, "sourced"},
    stale{YType::empty, "stale"},
    suppressed{YType::empty, "suppressed"},
    valid{YType::empty, "valid"}
{

    yang_name = "path-status"; yang_parent_name = "bgp-path-entry"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::~PathStatus()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::has_data() const
{
    return additional_path.is_set
	|| backup_path.is_set
	|| best_external.is_set
	|| bestpath.is_set
	|| damped.is_set
	|| history.is_set
	|| internal.is_set
	|| multipath.is_set
	|| rib_compressed.is_set
	|| rib_fail.is_set
	|| rt_filter.is_set
	|| sourced.is_set
	|| stale.is_set
	|| suppressed.is_set
	|| valid.is_set;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(additional_path.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(bestpath.yfilter)
	|| ydk::is_set(damped.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(rib_compressed.yfilter)
	|| ydk::is_set(rib_fail.yfilter)
	|| ydk::is_set(rt_filter.yfilter)
	|| ydk::is_set(sourced.yfilter)
	|| ydk::is_set(stale.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_path.is_set || is_set(additional_path.yfilter)) leaf_name_data.push_back(additional_path.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.yfilter)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (bestpath.is_set || is_set(bestpath.yfilter)) leaf_name_data.push_back(bestpath.get_name_leafdata());
    if (damped.is_set || is_set(damped.yfilter)) leaf_name_data.push_back(damped.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (rib_compressed.is_set || is_set(rib_compressed.yfilter)) leaf_name_data.push_back(rib_compressed.get_name_leafdata());
    if (rib_fail.is_set || is_set(rib_fail.yfilter)) leaf_name_data.push_back(rib_fail.get_name_leafdata());
    if (rt_filter.is_set || is_set(rt_filter.yfilter)) leaf_name_data.push_back(rt_filter.get_name_leafdata());
    if (sourced.is_set || is_set(sourced.yfilter)) leaf_name_data.push_back(sourced.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additional-path")
    {
        additional_path = value;
        additional_path.value_namespace = name_space;
        additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
        backup_path.value_namespace = name_space;
        backup_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpath")
    {
        bestpath = value;
        bestpath.value_namespace = name_space;
        bestpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped")
    {
        damped = value;
        damped.value_namespace = name_space;
        damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed = value;
        rib_compressed.value_namespace = name_space;
        rib_compressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-fail")
    {
        rib_fail = value;
        rib_fail.value_namespace = name_space;
        rib_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-filter")
    {
        rt_filter = value;
        rt_filter.value_namespace = name_space;
        rt_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourced")
    {
        sourced = value;
        sourced.value_namespace = name_space;
        sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additional-path")
    {
        additional_path.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "bestpath")
    {
        bestpath.yfilter = yfilter;
    }
    if(value_path == "damped")
    {
        damped.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed.yfilter = yfilter;
    }
    if(value_path == "rib-fail")
    {
        rib_fail.yfilter = yfilter;
    }
    if(value_path == "rt-filter")
    {
        rt_filter.yfilter = yfilter;
    }
    if(value_path == "sourced")
    {
        sourced.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-path" || name == "backup-path" || name == "best-external" || name == "bestpath" || name == "damped" || name == "history" || name == "internal" || name == "multipath" || name == "rib-compressed" || name == "rib-fail" || name == "rt-filter" || name == "sourced" || name == "stale" || name == "suppressed" || name == "valid")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false;
}

BgpStateData::Neighbors::~Neighbors()
{
}

bool BgpStateData::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpStateData::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpStateData::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::Neighbor()
    :
    afi_safi{YType::enumeration, "afi-safi"},
    vrf_name{YType::str, "vrf-name"},
    neighbor_id{YType::str, "neighbor-id"},
    bgp_version{YType::uint16, "bgp-version"},
    description{YType::str, "description"},
    installed_prefixes{YType::uint32, "installed-prefixes"},
    last_read{YType::str, "last-read"},
    last_write{YType::str, "last-write"},
    link{YType::enumeration, "link"},
    negotiated_cap{YType::str, "negotiated-cap"},
    session_state{YType::enumeration, "session-state"},
    up_time{YType::str, "up-time"}
    	,
    bgp_neighbor_counters(std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters>())
	,connection(std::make_shared<BgpStateData::Neighbors::Neighbor::Connection>())
	,negotiated_keepalive_timers(std::make_shared<BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers>())
	,prefix_activity(std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity>())
	,transport(std::make_shared<BgpStateData::Neighbors::Neighbor::Transport>())
{
    bgp_neighbor_counters->parent = this;
    connection->parent = this;
    negotiated_keepalive_timers->parent = this;
    prefix_activity->parent = this;
    transport->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

BgpStateData::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpStateData::Neighbors::Neighbor::has_data() const
{
    for (auto const & leaf : negotiated_cap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return afi_safi.is_set
	|| vrf_name.is_set
	|| neighbor_id.is_set
	|| bgp_version.is_set
	|| description.is_set
	|| installed_prefixes.is_set
	|| last_read.is_set
	|| last_write.is_set
	|| link.is_set
	|| session_state.is_set
	|| up_time.is_set
	|| (bgp_neighbor_counters !=  nullptr && bgp_neighbor_counters->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (negotiated_keepalive_timers !=  nullptr && negotiated_keepalive_timers->has_data())
	|| (prefix_activity !=  nullptr && prefix_activity->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool BgpStateData::Neighbors::Neighbor::has_operation() const
{
    for (auto const & leaf : negotiated_cap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(bgp_version.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(installed_prefixes.yfilter)
	|| ydk::is_set(last_read.yfilter)
	|| ydk::is_set(last_write.yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(negotiated_cap.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| (bgp_neighbor_counters !=  nullptr && bgp_neighbor_counters->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (negotiated_keepalive_timers !=  nullptr && negotiated_keepalive_timers->has_operation())
	|| (prefix_activity !=  nullptr && prefix_activity->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string BgpStateData::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[afi-safi='" <<afi_safi <<"']" <<"[vrf-name='" <<vrf_name <<"']" <<"[neighbor-id='" <<neighbor_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.yfilter)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (installed_prefixes.is_set || is_set(installed_prefixes.yfilter)) leaf_name_data.push_back(installed_prefixes.get_name_leafdata());
    if (last_read.is_set || is_set(last_read.yfilter)) leaf_name_data.push_back(last_read.get_name_leafdata());
    if (last_write.is_set || is_set(last_write.yfilter)) leaf_name_data.push_back(last_write.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());

    auto negotiated_cap_name_datas = negotiated_cap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), negotiated_cap_name_datas.begin(), negotiated_cap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-counters")
    {
        if(bgp_neighbor_counters == nullptr)
        {
            bgp_neighbor_counters = std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters>();
        }
        return bgp_neighbor_counters;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BgpStateData::Neighbors::Neighbor::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "negotiated-keepalive-timers")
    {
        if(negotiated_keepalive_timers == nullptr)
        {
            negotiated_keepalive_timers = std::make_shared<BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers>();
        }
        return negotiated_keepalive_timers;
    }

    if(child_yang_name == "prefix-activity")
    {
        if(prefix_activity == nullptr)
        {
            prefix_activity = std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity>();
        }
        return prefix_activity;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<BgpStateData::Neighbors::Neighbor::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_neighbor_counters != nullptr)
    {
        children["bgp-neighbor-counters"] = bgp_neighbor_counters;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(negotiated_keepalive_timers != nullptr)
    {
        children["negotiated-keepalive-timers"] = negotiated_keepalive_timers;
    }

    if(prefix_activity != nullptr)
    {
        children["prefix-activity"] = prefix_activity;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void BgpStateData::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
        bgp_version.value_namespace = name_space;
        bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed-prefixes")
    {
        installed_prefixes = value;
        installed_prefixes.value_namespace = name_space;
        installed_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-read")
    {
        last_read = value;
        last_read.value_namespace = name_space;
        last_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-write")
    {
        last_write = value;
        last_write.value_namespace = name_space;
        last_write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-cap")
    {
        negotiated_cap.append(value);
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "bgp-version")
    {
        bgp_version.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "installed-prefixes")
    {
        installed_prefixes.yfilter = yfilter;
    }
    if(value_path == "last-read")
    {
        last_read.yfilter = yfilter;
    }
    if(value_path == "last-write")
    {
        last_write.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "negotiated-cap")
    {
        negotiated_cap.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-counters" || name == "connection" || name == "negotiated-keepalive-timers" || name == "prefix-activity" || name == "transport" || name == "afi-safi" || name == "vrf-name" || name == "neighbor-id" || name == "bgp-version" || name == "description" || name == "installed-prefixes" || name == "last-read" || name == "last-write" || name == "link" || name == "negotiated-cap" || name == "session-state" || name == "up-time")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::BgpNeighborCounters()
    :
    inq_depth{YType::uint32, "inq-depth"},
    outq_depth{YType::uint32, "outq-depth"}
    	,
    received(std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received>())
	,sent(std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent>())
{
    received->parent = this;
    sent->parent = this;

    yang_name = "bgp-neighbor-counters"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::~BgpNeighborCounters()
{
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::has_data() const
{
    return inq_depth.is_set
	|| outq_depth.is_set
	|| (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data());
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inq_depth.yfilter)
	|| ydk::is_set(outq_depth.yfilter)
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation());
}

std::string BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inq_depth.is_set || is_set(inq_depth.yfilter)) leaf_name_data.push_back(inq_depth.get_name_leafdata());
    if (outq_depth.is_set || is_set(outq_depth.yfilter)) leaf_name_data.push_back(outq_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received>();
        }
        return received;
    }

    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent>();
        }
        return sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    return children;
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inq-depth")
    {
        inq_depth = value;
        inq_depth.value_namespace = name_space;
        inq_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outq-depth")
    {
        outq_depth = value;
        outq_depth.value_namespace = name_space;
        outq_depth.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inq-depth")
    {
        inq_depth.yfilter = yfilter;
    }
    if(value_path == "outq-depth")
    {
        outq_depth.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "sent" || name == "inq-depth" || name == "outq-depth")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::Received()
    :
    keepalives{YType::uint32, "keepalives"},
    notifications{YType::uint32, "notifications"},
    opens{YType::uint32, "opens"},
    route_refreshes{YType::uint32, "route-refreshes"},
    updates{YType::uint32, "updates"}
{

    yang_name = "received"; yang_parent_name = "bgp-neighbor-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::~Received()
{
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::has_data() const
{
    return keepalives.is_set
	|| notifications.is_set
	|| opens.is_set
	|| route_refreshes.is_set
	|| updates.is_set;
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(opens.yfilter)
	|| ydk::is_set(route_refreshes.yfilter)
	|| ydk::is_set(updates.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (opens.is_set || is_set(opens.yfilter)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (route_refreshes.is_set || is_set(route_refreshes.yfilter)) leaf_name_data.push_back(route_refreshes.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opens")
    {
        opens = value;
        opens.value_namespace = name_space;
        opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes = value;
        route_refreshes.value_namespace = name_space;
        route_refreshes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "opens")
    {
        opens.yfilter = yfilter;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalives" || name == "notifications" || name == "opens" || name == "route-refreshes" || name == "updates")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::Sent()
    :
    keepalives{YType::uint32, "keepalives"},
    notifications{YType::uint32, "notifications"},
    opens{YType::uint32, "opens"},
    route_refreshes{YType::uint32, "route-refreshes"},
    updates{YType::uint32, "updates"}
{

    yang_name = "sent"; yang_parent_name = "bgp-neighbor-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::~Sent()
{
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_data() const
{
    return keepalives.is_set
	|| notifications.is_set
	|| opens.is_set
	|| route_refreshes.is_set
	|| updates.is_set;
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(opens.yfilter)
	|| ydk::is_set(route_refreshes.yfilter)
	|| ydk::is_set(updates.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (opens.is_set || is_set(opens.yfilter)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (route_refreshes.is_set || is_set(route_refreshes.yfilter)) leaf_name_data.push_back(route_refreshes.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opens")
    {
        opens = value;
        opens.value_namespace = name_space;
        opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes = value;
        route_refreshes.value_namespace = name_space;
        route_refreshes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "opens")
    {
        opens.yfilter = yfilter;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalives" || name == "notifications" || name == "opens" || name == "route-refreshes" || name == "updates")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::Connection::Connection()
    :
    last_reset{YType::str, "last-reset"},
    mode{YType::enumeration, "mode"},
    reset_reason{YType::str, "reset-reason"},
    state{YType::enumeration, "state"},
    total_dropped{YType::uint32, "total-dropped"},
    total_established{YType::uint32, "total-established"}
{

    yang_name = "connection"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::Connection::~Connection()
{
}

bool BgpStateData::Neighbors::Neighbor::Connection::has_data() const
{
    return last_reset.is_set
	|| mode.is_set
	|| reset_reason.is_set
	|| state.is_set
	|| total_dropped.is_set
	|| total_established.is_set;
}

bool BgpStateData::Neighbors::Neighbor::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_reset.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(reset_reason.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(total_dropped.yfilter)
	|| ydk::is_set(total_established.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_reset.is_set || is_set(last_reset.yfilter)) leaf_name_data.push_back(last_reset.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.yfilter)) leaf_name_data.push_back(reset_reason.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_dropped.is_set || is_set(total_dropped.yfilter)) leaf_name_data.push_back(total_dropped.get_name_leafdata());
    if (total_established.is_set || is_set(total_established.yfilter)) leaf_name_data.push_back(total_established.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-reset")
    {
        last_reset = value;
        last_reset.value_namespace = name_space;
        last_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
        reset_reason.value_namespace = name_space;
        reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dropped")
    {
        total_dropped = value;
        total_dropped.value_namespace = name_space;
        total_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-established")
    {
        total_established = value;
        total_established.value_namespace = name_space;
        total_established.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-reset")
    {
        last_reset.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "reset-reason")
    {
        reset_reason.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "total-dropped")
    {
        total_dropped.yfilter = yfilter;
    }
    if(value_path == "total-established")
    {
        total_established.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-reset" || name == "mode" || name == "reset-reason" || name == "state" || name == "total-dropped" || name == "total-established")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::NegotiatedKeepaliveTimers()
    :
    hold_time{YType::uint16, "hold-time"},
    keepalive_interval{YType::uint16, "keepalive-interval"}
{

    yang_name = "negotiated-keepalive-timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::~NegotiatedKeepaliveTimers()
{
}

bool BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set;
}

bool BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "negotiated-keepalive-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::PrefixActivity()
    :
    received(std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Received>())
	,sent(std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent>())
{
    received->parent = this;
    sent->parent = this;

    yang_name = "prefix-activity"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::~PrefixActivity()
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::has_data() const
{
    return (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data());
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::has_operation() const
{
    return is_set(yfilter)
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation());
}

std::string BgpStateData::Neighbors::Neighbor::PrefixActivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-activity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::PrefixActivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::PrefixActivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Received>();
        }
        return received;
    }

    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent>();
        }
        return sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::PrefixActivity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    return children;
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received" || name == "sent")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::Received()
    :
    bestpaths{YType::uint64, "bestpaths"},
    current_prefixes{YType::uint64, "current-prefixes"},
    explicit_withdraw{YType::uint64, "explicit-withdraw"},
    implicit_withdraw{YType::uint64, "implicit-withdraw"},
    multipaths{YType::uint64, "multipaths"},
    total_prefixes{YType::uint64, "total-prefixes"}
{

    yang_name = "received"; yang_parent_name = "prefix-activity"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::~Received()
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::has_data() const
{
    return bestpaths.is_set
	|| current_prefixes.is_set
	|| explicit_withdraw.is_set
	|| implicit_withdraw.is_set
	|| multipaths.is_set
	|| total_prefixes.is_set;
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bestpaths.yfilter)
	|| ydk::is_set(current_prefixes.yfilter)
	|| ydk::is_set(explicit_withdraw.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| ydk::is_set(multipaths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bestpaths.is_set || is_set(bestpaths.yfilter)) leaf_name_data.push_back(bestpaths.get_name_leafdata());
    if (current_prefixes.is_set || is_set(current_prefixes.yfilter)) leaf_name_data.push_back(current_prefixes.get_name_leafdata());
    if (explicit_withdraw.is_set || is_set(explicit_withdraw.yfilter)) leaf_name_data.push_back(explicit_withdraw.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (multipaths.is_set || is_set(multipaths.yfilter)) leaf_name_data.push_back(multipaths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bestpaths")
    {
        bestpaths = value;
        bestpaths.value_namespace = name_space;
        bestpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-prefixes")
    {
        current_prefixes = value;
        current_prefixes.value_namespace = name_space;
        current_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw = value;
        explicit_withdraw.value_namespace = name_space;
        explicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipaths")
    {
        multipaths = value;
        multipaths.value_namespace = name_space;
        multipaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bestpaths")
    {
        bestpaths.yfilter = yfilter;
    }
    if(value_path == "current-prefixes")
    {
        current_prefixes.yfilter = yfilter;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "multipaths")
    {
        multipaths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bestpaths" || name == "current-prefixes" || name == "explicit-withdraw" || name == "implicit-withdraw" || name == "multipaths" || name == "total-prefixes")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::Sent()
    :
    bestpaths{YType::uint64, "bestpaths"},
    current_prefixes{YType::uint64, "current-prefixes"},
    explicit_withdraw{YType::uint64, "explicit-withdraw"},
    implicit_withdraw{YType::uint64, "implicit-withdraw"},
    multipaths{YType::uint64, "multipaths"},
    total_prefixes{YType::uint64, "total-prefixes"}
{

    yang_name = "sent"; yang_parent_name = "prefix-activity"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::~Sent()
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::has_data() const
{
    return bestpaths.is_set
	|| current_prefixes.is_set
	|| explicit_withdraw.is_set
	|| implicit_withdraw.is_set
	|| multipaths.is_set
	|| total_prefixes.is_set;
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bestpaths.yfilter)
	|| ydk::is_set(current_prefixes.yfilter)
	|| ydk::is_set(explicit_withdraw.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| ydk::is_set(multipaths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bestpaths.is_set || is_set(bestpaths.yfilter)) leaf_name_data.push_back(bestpaths.get_name_leafdata());
    if (current_prefixes.is_set || is_set(current_prefixes.yfilter)) leaf_name_data.push_back(current_prefixes.get_name_leafdata());
    if (explicit_withdraw.is_set || is_set(explicit_withdraw.yfilter)) leaf_name_data.push_back(explicit_withdraw.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (multipaths.is_set || is_set(multipaths.yfilter)) leaf_name_data.push_back(multipaths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bestpaths")
    {
        bestpaths = value;
        bestpaths.value_namespace = name_space;
        bestpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-prefixes")
    {
        current_prefixes = value;
        current_prefixes.value_namespace = name_space;
        current_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw = value;
        explicit_withdraw.value_namespace = name_space;
        explicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipaths")
    {
        multipaths = value;
        multipaths.value_namespace = name_space;
        multipaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bestpaths")
    {
        bestpaths.yfilter = yfilter;
    }
    if(value_path == "current-prefixes")
    {
        current_prefixes.yfilter = yfilter;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "multipaths")
    {
        multipaths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bestpaths" || name == "current-prefixes" || name == "explicit-withdraw" || name == "implicit-withdraw" || name == "multipaths" || name == "total-prefixes")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::Transport::Transport()
    :
    foreign_host{YType::str, "foreign-host"},
    foreign_port{YType::uint32, "foreign-port"},
    local_host{YType::str, "local-host"},
    local_port{YType::uint32, "local-port"},
    mss{YType::uint32, "mss"},
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

BgpStateData::Neighbors::Neighbor::Transport::~Transport()
{
}

bool BgpStateData::Neighbors::Neighbor::Transport::has_data() const
{
    return foreign_host.is_set
	|| foreign_port.is_set
	|| local_host.is_set
	|| local_port.is_set
	|| mss.is_set
	|| path_mtu_discovery.is_set;
}

bool BgpStateData::Neighbors::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foreign_host.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(local_host.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_host.is_set || is_set(foreign_host.yfilter)) leaf_name_data.push_back(foreign_host.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_host.is_set || is_set(local_host.yfilter)) leaf_name_data.push_back(local_host.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BgpStateData::Neighbors::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpStateData::Neighbors::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpStateData::Neighbors::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreign-host")
    {
        foreign_host = value;
        foreign_host.value_namespace = name_space;
        foreign_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-host")
    {
        local_host = value;
        local_host.value_namespace = name_space;
        local_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreign-host")
    {
        foreign_host.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "local-host")
    {
        local_host.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-host" || name == "foreign-port" || name == "local-host" || name == "local-port" || name == "mss" || name == "path-mtu-discovery")
        return true;
    return false;
}

const Enum::YLeaf BgpMode::mode_active {0, "mode-active"};
const Enum::YLeaf BgpMode::mode_passive {1, "mode-passive"};

const Enum::YLeaf BgpFsmState::fsm_idle {0, "fsm-idle"};
const Enum::YLeaf BgpFsmState::fsm_connect {1, "fsm-connect"};
const Enum::YLeaf BgpFsmState::fsm_active {2, "fsm-active"};
const Enum::YLeaf BgpFsmState::fsm_opensent {3, "fsm-opensent"};
const Enum::YLeaf BgpFsmState::fsm_openconfirm {4, "fsm-openconfirm"};
const Enum::YLeaf BgpFsmState::fsm_established {5, "fsm-established"};
const Enum::YLeaf BgpFsmState::fsm_nonnegotiated {6, "fsm-nonnegotiated"};

const Enum::YLeaf BgpLink::internal {0, "internal"};
const Enum::YLeaf BgpLink::external {1, "external"};


}
}

