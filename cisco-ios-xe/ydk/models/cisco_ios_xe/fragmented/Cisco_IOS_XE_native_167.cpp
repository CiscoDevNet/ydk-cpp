
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_167.hpp"
#include "Cisco_IOS_XE_native_168.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
    	,
    area_cost(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost>())
	,area_tunnel(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel>())
{
    area_cost->parent = this;
    area_tunnel->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set
	|| (area_cost !=  nullptr && area_cost->has_data())
	|| (area_tunnel !=  nullptr && area_tunnel->has_data());
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cost.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (area_cost !=  nullptr && area_cost->has_operation())
	|| (area_tunnel !=  nullptr && area_tunnel->has_operation());
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-cost")
    {
        if(area_cost == nullptr)
        {
            area_cost = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost>();
        }
        return area_cost;
    }

    if(child_yang_name == "area-tunnel")
    {
        if(area_tunnel == nullptr)
        {
            area_tunnel = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel>();
        }
        return area_tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_cost != nullptr)
    {
        children["area-cost"] = area_cost;
    }

    if(area_tunnel != nullptr)
    {
        children["area-tunnel"] = area_tunnel;
    }

    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-cost" || name == "area-tunnel" || name == "maximum-cost" || name == "tunnel")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::AreaCost()
    :
    area{YType::str, "area"},
    maximum_cost{YType::uint32, "maximum-cost"}
{

    yang_name = "area-cost"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::~AreaCost()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::has_data() const
{
    return area.is_set
	|| maximum_cost.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(maximum_cost.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (maximum_cost.is_set || is_set(maximum_cost.yfilter)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
        maximum_cost.value_namespace = name_space;
        maximum_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "maximum-cost")
    {
        maximum_cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "maximum-cost")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::AreaTunnel()
    :
    area{YType::str, "area"},
    tunnel{YType::enumeration, "tunnel"}
{

    yang_name = "area-tunnel"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::~AreaTunnel()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::has_data() const
{
    return area.is_set
	|| tunnel.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "tunnel")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::TieBreak()
    :
    broadcast_interface_disjoint(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint>())
	,downstream(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream>())
	,linecard_disjoint(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint>())
	,lowest_metric(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric>())
	,node_protecting(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting>())
	,primary_path(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath>())
	,secondary_path(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath>())
	,srlg(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg>())
{
    broadcast_interface_disjoint->parent = this;
    downstream->parent = this;
    linecard_disjoint->parent = this;
    lowest_metric->parent = this;
    node_protecting->parent = this;
    primary_path->parent = this;
    secondary_path->parent = this;
    srlg->parent = this;

    yang_name = "tie-break"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::~TieBreak()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::has_data() const
{
    return (broadcast_interface_disjoint !=  nullptr && broadcast_interface_disjoint->has_data())
	|| (downstream !=  nullptr && downstream->has_data())
	|| (linecard_disjoint !=  nullptr && linecard_disjoint->has_data())
	|| (lowest_metric !=  nullptr && lowest_metric->has_data())
	|| (node_protecting !=  nullptr && node_protecting->has_data())
	|| (primary_path !=  nullptr && primary_path->has_data())
	|| (secondary_path !=  nullptr && secondary_path->has_data())
	|| (srlg !=  nullptr && srlg->has_data());
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_interface_disjoint !=  nullptr && broadcast_interface_disjoint->has_operation())
	|| (downstream !=  nullptr && downstream->has_operation())
	|| (linecard_disjoint !=  nullptr && linecard_disjoint->has_operation())
	|| (lowest_metric !=  nullptr && lowest_metric->has_operation())
	|| (node_protecting !=  nullptr && node_protecting->has_operation())
	|| (primary_path !=  nullptr && primary_path->has_operation())
	|| (secondary_path !=  nullptr && secondary_path->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation());
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tie-break";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-interface-disjoint")
    {
        if(broadcast_interface_disjoint == nullptr)
        {
            broadcast_interface_disjoint = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint>();
        }
        return broadcast_interface_disjoint;
    }

    if(child_yang_name == "downstream")
    {
        if(downstream == nullptr)
        {
            downstream = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream>();
        }
        return downstream;
    }

    if(child_yang_name == "linecard-disjoint")
    {
        if(linecard_disjoint == nullptr)
        {
            linecard_disjoint = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint>();
        }
        return linecard_disjoint;
    }

    if(child_yang_name == "lowest-metric")
    {
        if(lowest_metric == nullptr)
        {
            lowest_metric = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric>();
        }
        return lowest_metric;
    }

    if(child_yang_name == "node-protecting")
    {
        if(node_protecting == nullptr)
        {
            node_protecting = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting>();
        }
        return node_protecting;
    }

    if(child_yang_name == "primary-path")
    {
        if(primary_path == nullptr)
        {
            primary_path = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath>();
        }
        return primary_path;
    }

    if(child_yang_name == "secondary-path")
    {
        if(secondary_path == nullptr)
        {
            secondary_path = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath>();
        }
        return secondary_path;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg>();
        }
        return srlg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_interface_disjoint != nullptr)
    {
        children["broadcast-interface-disjoint"] = broadcast_interface_disjoint;
    }

    if(downstream != nullptr)
    {
        children["downstream"] = downstream;
    }

    if(linecard_disjoint != nullptr)
    {
        children["linecard-disjoint"] = linecard_disjoint;
    }

    if(lowest_metric != nullptr)
    {
        children["lowest-metric"] = lowest_metric;
    }

    if(node_protecting != nullptr)
    {
        children["node-protecting"] = node_protecting;
    }

    if(primary_path != nullptr)
    {
        children["primary-path"] = primary_path;
    }

    if(secondary_path != nullptr)
    {
        children["secondary-path"] = secondary_path;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-interface-disjoint" || name == "downstream" || name == "linecard-disjoint" || name == "lowest-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::BroadcastInterfaceDisjoint()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "broadcast-interface-disjoint"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::~BroadcastInterfaceDisjoint()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-interface-disjoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::Downstream()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "downstream"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::~Downstream()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::LinecardDisjoint()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "linecard-disjoint"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::~LinecardDisjoint()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linecard-disjoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::LowestMetric()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "lowest-metric"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::~LowestMetric()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lowest-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::NodeProtecting()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "node-protecting"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::~NodeProtecting()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protecting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::PrimaryPath()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "primary-path"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::~PrimaryPath()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::SecondaryPath()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "secondary-path"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::~SecondaryPath()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::Srlg()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{

    yang_name = "srlg"; yang_parent_name = "tie-break"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::~Srlg()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(required.yfilter);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.yfilter)) leaf_name_data.push_back(required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required")
    {
        required = value;
        required.value_namespace = name_space;
        required.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "required")
    {
        required.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "required")
        return true;
    return false;
}

Native::Router::Ospf::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"},
    restart_interval{YType::uint16, "restart-interval"}
    	,
    helper(nullptr) // presence node
{

    yang_name = "graceful-restart"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospf::GracefulRestart::has_data() const
{
    return disable.is_set
	|| restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::GracefulRestart::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-interval")
    {
        restart_interval = value;
        restart_interval.value_namespace = name_space;
        restart_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "restart-interval")
    {
        restart_interval.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "disable" || name == "restart-interval")
        return true;
    return false;
}

Native::Router::Ospf::GracefulRestart::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospf::GracefulRestart::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospf::GracefulRestart::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospf::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::GracefulRestart::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::GracefulRestart::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
        strict_lsa_checking.value_namespace = name_space;
        strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::GracefulRestart::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::GracefulRestart::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospf::Ignore::Ignore()
    :
    lsa(std::make_shared<Native::Router::Ospf::Ignore::Lsa>())
{
    lsa->parent = this;

    yang_name = "ignore"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Ignore::~Ignore()
{
}

bool Native::Router::Ospf::Ignore::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data());
}

bool Native::Router::Ospf::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation());
}

std::string Native::Router::Ospf::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospf::Ignore::Lsa>();
        }
        return lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    return children;
}

void Native::Router::Ospf::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Native::Router::Ospf::Ignore::Lsa::Lsa()
    :
    mospf{YType::empty, "mospf"}
{

    yang_name = "lsa"; yang_parent_name = "ignore"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Ignore::Lsa::~Lsa()
{
}

bool Native::Router::Ospf::Ignore::Lsa::has_data() const
{
    return mospf.is_set;
}

bool Native::Router::Ospf::Ignore::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mospf.yfilter);
}

std::string Native::Router::Ospf::Ignore::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Ignore::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mospf.is_set || is_set(mospf.yfilter)) leaf_name_data.push_back(mospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Ignore::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Ignore::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Ignore::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mospf")
    {
        mospf = value;
        mospf.value_namespace = name_space;
        mospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Ignore::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mospf")
    {
        mospf.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Ignore::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mospf")
        return true;
    return false;
}

Native::Router::Ospf::InterfaceId::InterfaceId()
    :
    snmp_if_index{YType::empty, "snmp-if-index"}
{

    yang_name = "interface-id"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::InterfaceId::~InterfaceId()
{
}

bool Native::Router::Ospf::InterfaceId::has_data() const
{
    return snmp_if_index.is_set;
}

bool Native::Router::Ospf::InterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp_if_index.yfilter);
}

std::string Native::Router::Ospf::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp_if_index.is_set || is_set(snmp_if_index.yfilter)) leaf_name_data.push_back(snmp_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index = value;
        snmp_if_index.value_namespace = name_space;
        snmp_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-if-index")
        return true;
    return false;
}

Native::Router::Ospf::Limit::Limit()
    :
    retransmissions(std::make_shared<Native::Router::Ospf::Limit::Retransmissions>())
{
    retransmissions->parent = this;

    yang_name = "limit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Limit::~Limit()
{
}

bool Native::Router::Ospf::Limit::has_data() const
{
    return (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Native::Router::Ospf::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Native::Router::Ospf::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Native::Router::Ospf::Limit::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    return children;
}

void Native::Router::Ospf::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmissions")
        return true;
    return false;
}

Native::Router::Ospf::Limit::Retransmissions::Retransmissions()
    :
    dc{YType::str, "dc"},
    non_dc{YType::str, "non-dc"}
{

    yang_name = "retransmissions"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Limit::Retransmissions::~Retransmissions()
{
}

bool Native::Router::Ospf::Limit::Retransmissions::has_data() const
{
    return dc.is_set
	|| non_dc.is_set;
}

bool Native::Router::Ospf::Limit::Retransmissions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dc.yfilter)
	|| ydk::is_set(non_dc.yfilter);
}

std::string Native::Router::Ospf::Limit::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Limit::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dc.is_set || is_set(dc.yfilter)) leaf_name_data.push_back(dc.get_name_leafdata());
    if (non_dc.is_set || is_set(non_dc.yfilter)) leaf_name_data.push_back(non_dc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Limit::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Limit::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Limit::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dc")
    {
        dc = value;
        dc.value_namespace = name_space;
        dc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-dc")
    {
        non_dc = value;
        non_dc.value_namespace = name_space;
        non_dc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Limit::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dc")
    {
        dc.yfilter = yfilter;
    }
    if(value_path == "non-dc")
    {
        non_dc.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Limit::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dc" || name == "non-dc")
        return true;
    return false;
}

Native::Router::Ospf::LocalRibCriteria::LocalRibCriteria()
    :
    forwarding_address{YType::empty, "forwarding-address"},
    inter_area_summary{YType::empty, "inter-area-summary"},
    nssa_translation{YType::empty, "nssa-translation"}
{

    yang_name = "local-rib-criteria"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::LocalRibCriteria::~LocalRibCriteria()
{
}

bool Native::Router::Ospf::LocalRibCriteria::has_data() const
{
    return forwarding_address.is_set
	|| inter_area_summary.is_set
	|| nssa_translation.is_set;
}

bool Native::Router::Ospf::LocalRibCriteria::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(inter_area_summary.yfilter)
	|| ydk::is_set(nssa_translation.yfilter);
}

std::string Native::Router::Ospf::LocalRibCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-rib-criteria";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::LocalRibCriteria::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (inter_area_summary.is_set || is_set(inter_area_summary.yfilter)) leaf_name_data.push_back(inter_area_summary.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::LocalRibCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::LocalRibCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::LocalRibCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-summary")
    {
        inter_area_summary = value;
        inter_area_summary.value_namespace = name_space;
        inter_area_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::LocalRibCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "inter-area-summary")
    {
        inter_area_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::LocalRibCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address" || name == "inter-area-summary" || name == "nssa-translation")
        return true;
    return false;
}

Native::Router::Ospf::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    detail{YType::empty, "detail"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::Ospf::LogAdjacencyChanges::has_data() const
{
    return detail.is_set;
}

bool Native::Router::Ospf::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::Router::Ospf::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Native::Router::Ospf::MaxLsa::MaxLsa()
    :
    ignore_count{YType::uint32, "ignore-count"},
    ignore_time{YType::uint32, "ignore-time"},
    number{YType::uint32, "number"},
    reset_time{YType::uint32, "reset-time"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "max-lsa"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::MaxLsa::~MaxLsa()
{
}

bool Native::Router::Ospf::MaxLsa::has_data() const
{
    return ignore_count.is_set
	|| ignore_time.is_set
	|| number.is_set
	|| reset_time.is_set
	|| threshold_value.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospf::MaxLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_count.yfilter)
	|| ydk::is_set(ignore_time.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospf::MaxLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::MaxLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_count.is_set || is_set(ignore_count.yfilter)) leaf_name_data.push_back(ignore_count.get_name_leafdata());
    if (ignore_time.is_set || is_set(ignore_time.yfilter)) leaf_name_data.push_back(ignore_time.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::MaxLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::MaxLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::MaxLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-count")
    {
        ignore_count = value;
        ignore_count.value_namespace = name_space;
        ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-time")
    {
        ignore_time = value;
        ignore_time.value_namespace = name_space;
        ignore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::MaxLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-count")
    {
        ignore_count.yfilter = yfilter;
    }
    if(value_path == "ignore-time")
    {
        ignore_time.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::MaxLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-count" || name == "ignore-time" || name == "number" || name == "reset-time" || name == "threshold-value" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospf::MaxMetric::MaxMetric()
    :
    router_lsa(nullptr) // presence node
{

    yang_name = "max-metric"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::MaxMetric::~MaxMetric()
{
}

bool Native::Router::Ospf::MaxMetric::has_data() const
{
    return (router_lsa !=  nullptr && router_lsa->has_data());
}

bool Native::Router::Ospf::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| (router_lsa !=  nullptr && router_lsa->has_operation());
}

std::string Native::Router::Ospf::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa")
    {
        if(router_lsa == nullptr)
        {
            router_lsa = std::make_shared<Native::Router::Ospf::MaxMetric::RouterLsa>();
        }
        return router_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router_lsa != nullptr)
    {
        children["router-lsa"] = router_lsa;
    }

    return children;
}

void Native::Router::Ospf::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa")
        return true;
    return false;
}

Native::Router::Ospf::MaxMetric::RouterLsa::RouterLsa()
    :
    include_stub{YType::empty, "include-stub"}
    	,
    external_lsa(nullptr) // presence node
	,on_startup(nullptr) // presence node
	,summary_lsa(nullptr) // presence node
{

    yang_name = "router-lsa"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::MaxMetric::RouterLsa::~RouterLsa()
{
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::has_data() const
{
    return include_stub.is_set
	|| (external_lsa !=  nullptr && external_lsa->has_data())
	|| (on_startup !=  nullptr && on_startup->has_data())
	|| (summary_lsa !=  nullptr && summary_lsa->has_data());
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| (external_lsa !=  nullptr && external_lsa->has_operation())
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (summary_lsa !=  nullptr && summary_lsa->has_operation());
}

std::string Native::Router::Ospf::MaxMetric::RouterLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::MaxMetric::RouterLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::MaxMetric::RouterLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa")
    {
        if(external_lsa == nullptr)
        {
            external_lsa = std::make_shared<Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa>();
        }
        return external_lsa;
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "summary-lsa")
    {
        if(summary_lsa == nullptr)
        {
            summary_lsa = std::make_shared<Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa>();
        }
        return summary_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::MaxMetric::RouterLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_lsa != nullptr)
    {
        children["external-lsa"] = external_lsa;
    }

    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(summary_lsa != nullptr)
    {
        children["summary-lsa"] = summary_lsa;
    }

    return children;
}

void Native::Router::Ospf::MaxMetric::RouterLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::MaxMetric::RouterLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "on-startup" || name == "summary-lsa" || name == "include-stub")
        return true;
    return false;
}

Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::ExternalLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "external-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::~ExternalLsa()
{
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::has_data() const
{
    return metric.is_set;
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::OnStartup()
    :
    time{YType::uint32, "time"},
    wait_for_bgp{YType::empty, "wait-for-bgp"}
{

    yang_name = "on-startup"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::~OnStartup()
{
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::has_data() const
{
    return time.is_set
	|| wait_for_bgp.is_set;
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::SummaryLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "summary-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::~SummaryLsa()
{
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::has_data() const
{
    return metric.is_set;
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospf::Microloop::Microloop()
    :
    avoidance(nullptr) // presence node
{

    yang_name = "microloop"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Microloop::~Microloop()
{
}

bool Native::Router::Ospf::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Native::Router::Ospf::Microloop::has_operation() const
{
    return is_set(yfilter)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Native::Router::Ospf::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Microloop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Native::Router::Ospf::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
}

void Native::Router::Ospf::Microloop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Microloop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Microloop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
}

Native::Router::Ospf::Microloop::Avoidance::Avoidance()
    :
    disable{YType::empty, "disable"},
    protected_{YType::empty, "protected"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{

    yang_name = "avoidance"; yang_parent_name = "microloop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::Ospf::Microloop::Avoidance::has_data() const
{
    return disable.is_set
	|| protected_.is_set
	|| rib_update_delay.is_set;
}

bool Native::Router::Ospf::Microloop::Avoidance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
}

std::string Native::Router::Ospf::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Microloop::Avoidance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Microloop::Avoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Microloop::Avoidance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Microloop::Avoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "protected" || name == "rib-update-delay")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::Mpls()
    :
    ldp(std::make_shared<Native::Router::Ospf::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng>())
{
    ldp->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::~Mpls()
{
}

bool Native::Router::Ospf::Mpls::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Router::Ospf::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Router::Ospf::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Router::Ospf::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Router::Ospf::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp" || name == "traffic-eng")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::Ldp::Ldp()
    :
    autoconfig(nullptr) // presence node
	,sync(nullptr) // presence node
{

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::Ldp::~Ldp()
{
}

bool Native::Router::Ospf::Mpls::Ldp::has_data() const
{
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (sync !=  nullptr && sync->has_data());
}

bool Native::Router::Ospf::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Router::Ospf::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Router::Ospf::Mpls::Ldp::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Router::Ospf::Mpls::Ldp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void Native::Router::Ospf::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "sync")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::Ldp::Autoconfig::Autoconfig()
    :
    area{YType::str, "area"}
{

    yang_name = "autoconfig"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::Ospf::Mpls::Ldp::Autoconfig::has_data() const
{
    return area.is_set;
}

bool Native::Router::Ospf::Mpls::Ldp::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::Ldp::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::Ldp::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::Ldp::Sync::Sync()
{

    yang_name = "sync"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::Ldp::Sync::~Sync()
{
}

bool Native::Router::Ospf::Mpls::Ldp::Sync::has_data() const
{
    return false;
}

bool Native::Router::Ospf::Mpls::Ldp::Sync::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Ospf::Mpls::Ldp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::Ldp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::Ldp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::Ldp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::Ldp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Mpls::Ldp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Mpls::Ldp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::TrafficEng()
    :
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    autoroute_exclude(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude>())
	,router_id(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId>())
{
    autoroute_exclude->parent = this;
    router_id->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return multicast_intact.is_set
	|| (autoroute_exclude !=  nullptr && autoroute_exclude->has_data())
	|| (router_id !=  nullptr && router_id->has_data());
}

bool Native::Router::Ospf::Mpls::TrafficEng::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(multicast_intact.yfilter)
	|| (autoroute_exclude !=  nullptr && autoroute_exclude->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation());
}

std::string Native::Router::Ospf::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_intact.is_set || is_set(multicast_intact.yfilter)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "autoroute-exclude")
    {
        if(autoroute_exclude == nullptr)
        {
            autoroute_exclude = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude>();
        }
        return autoroute_exclude;
    }

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
        auto c = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "mesh-group")
    {
        for(auto const & c : mesh_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(c);
        return c;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId>();
        }
        return router_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(autoroute_exclude != nullptr)
    {
        children["autoroute-exclude"] = autoroute_exclude;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mesh_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
        multicast_intact.value_namespace = name_space;
        multicast_intact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-intact")
    {
        multicast_intact.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "autoroute-exclude" || name == "interface" || name == "mesh-group" || name == "router-id" || name == "multicast-intact")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::Area::Area()
    :
    id{YType::str, "id"}
{

    yang_name = "area"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::Area::~Area()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::Area::has_data() const
{
    return id.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::AutorouteExclude()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "autoroute-exclude"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::~AutorouteExclude()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::has_data() const
{
    return prefix_list.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::Interface::Interface()
    :
    name_id{YType::str, "name-id"},
    area{YType::uint32, "area"}
{

    yang_name = "interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::Interface::~Interface()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::Interface::has_data() const
{
    return name_id.is_set
	|| area.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name-id='" <<name_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_id.is_set || is_set(name_id.yfilter)) leaf_name_data.push_back(name_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-id")
    {
        name_id = value;
        name_id.value_namespace = name_space;
        name_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-id")
    {
        name_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-id" || name == "area")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::MeshGroup()
    :
    id{YType::uint32, "id"},
    area{YType::str, "area"},
    interface{YType::str, "interface"}
{

    yang_name = "mesh-group"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::~MeshGroup()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::has_data() const
{
    return id.is_set
	|| area.is_set
	|| interface.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[id='" <<id <<"']" <<"[area='" <<area <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "interface")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::RouterId()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "router-id"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::~RouterId()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Ospf::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    cost{YType::uint32, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
    	,
    database_filter(std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Neighbor::~Neighbor()
{
}

bool Native::Router::Ospf::Neighbor::has_data() const
{
    return ip.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Router::Ospf::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Router::Ospf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Router::Ospf::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "ip" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Router::Ospf::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Ospf::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Ospf::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Ospf::Neighbor::DatabaseFilter::All::All()
    :
    out{YType::empty, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Neighbor::DatabaseFilter::All::~All()
{
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Neighbor::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Neighbor::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Native::Router::Ospf::Network::Network()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    area{YType::str, "area"}
{

    yang_name = "network"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Network::~Network()
{
}

bool Native::Router::Ospf::Network::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| area.is_set;
}

bool Native::Router::Ospf::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Native::Router::Ospf::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mask" || name == "area")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Nsf()
    :
    cisco(nullptr) // presence node
	,ietf(std::make_shared<Native::Router::Ospf::Nsf::Ietf>())
{
    ietf->parent = this;

    yang_name = "nsf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::~Nsf()
{
}

bool Native::Router::Ospf::Nsf::has_data() const
{
    return (cisco !=  nullptr && cisco->has_data())
	|| (ietf !=  nullptr && ietf->has_data());
}

bool Native::Router::Ospf::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (ietf !=  nullptr && ietf->has_operation());
}

std::string Native::Router::Ospf::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::Router::Ospf::Nsf::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Router::Ospf::Nsf::Ietf>();
        }
        return ietf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco != nullptr)
    {
        children["cisco"] = cisco;
    }

    if(ietf != nullptr)
    {
        children["ietf"] = ietf;
    }

    return children;
}

void Native::Router::Ospf::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "ietf")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Cisco::Cisco()
    :
    helper(nullptr) // presence node
{

    yang_name = "cisco"; yang_parent_name = "nsf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Cisco::~Cisco()
{
}

bool Native::Router::Ospf::Nsf::Cisco::has_data() const
{
    return (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::Nsf::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::Nsf::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Cisco::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::Nsf::Cisco::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::Nsf::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Nsf::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Nsf::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Cisco::Helper::Helper()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "helper"; yang_parent_name = "cisco"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Cisco::Helper::~Helper()
{
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Ospf::Nsf::Cisco::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Cisco::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Cisco::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Cisco::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Nsf::Cisco::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Nsf::Cisco::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Ietf::Ietf()
    :
    helper(nullptr) // presence node
{

    yang_name = "ietf"; yang_parent_name = "nsf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Ietf::~Ietf()
{
}

bool Native::Router::Ospf::Nsf::Ietf::has_data() const
{
    return (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::Nsf::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::Nsf::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::Nsf::Ietf::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::Nsf::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Nsf::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Nsf::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper")
        return true;
    return false;
}

Native::Router::Ospf::Nsf::Ietf::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "ietf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Nsf::Ietf::Helper::~Helper()
{
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospf::Nsf::Ietf::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Nsf::Ietf::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Ietf::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Ietf::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Nsf::Ietf::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
        strict_lsa_checking.value_namespace = name_space;
        strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Nsf::Ietf::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospf::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospf::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Ospf::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospf::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::Ospf::PrefixPriority::PrefixPriority()
    :
    high{YType::empty, "high"},
    route_map{YType::str, "route-map"}
{

    yang_name = "prefix-priority"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::PrefixPriority::~PrefixPriority()
{
}

bool Native::Router::Ospf::PrefixPriority::has_data() const
{
    return high.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::PrefixPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospf::PrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::PrefixPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::PrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::PrefixPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::PrefixPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::PrefixPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::PrefixPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::ProcessMinTime::ProcessMinTime()
    :
    percent{YType::uint32, "percent"}
{

    yang_name = "process-min-time"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::ProcessMinTime::~ProcessMinTime()
{
}

bool Native::Router::Ospf::ProcessMinTime::has_data() const
{
    return percent.is_set;
}

bool Native::Router::Ospf::ProcessMinTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Router::Ospf::ProcessMinTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-min-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::ProcessMinTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::ProcessMinTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::ProcessMinTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::ProcessMinTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::ProcessMinTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::ProcessMinTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Router::Ospf::QueueDepth::QueueDepth()
    :
    hello(std::make_shared<Native::Router::Ospf::QueueDepth::Hello>())
	,update(std::make_shared<Native::Router::Ospf::QueueDepth::Update>())
{
    hello->parent = this;
    update->parent = this;

    yang_name = "queue-depth"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::QueueDepth::~QueueDepth()
{
}

bool Native::Router::Ospf::QueueDepth::has_data() const
{
    return (hello !=  nullptr && hello->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Native::Router::Ospf::QueueDepth::has_operation() const
{
    return is_set(yfilter)
	|| (hello !=  nullptr && hello->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::Router::Ospf::QueueDepth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-depth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::QueueDepth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::QueueDepth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::Ospf::QueueDepth::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Router::Ospf::QueueDepth::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::QueueDepth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::Router::Ospf::QueueDepth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::QueueDepth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::QueueDepth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "update")
        return true;
    return false;
}

Native::Router::Ospf::QueueDepth::Hello::Hello()
    :
    options{YType::str, "options"}
{

    yang_name = "hello"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::QueueDepth::Hello::~Hello()
{
}

bool Native::Router::Ospf::QueueDepth::Hello::has_data() const
{
    return options.is_set;
}

bool Native::Router::Ospf::QueueDepth::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospf::QueueDepth::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::QueueDepth::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::QueueDepth::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::QueueDepth::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::QueueDepth::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::QueueDepth::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::QueueDepth::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospf::QueueDepth::Update::Update()
    :
    options{YType::str, "options"}
{

    yang_name = "update"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::QueueDepth::Update::~Update()
{
}

bool Native::Router::Ospf::QueueDepth::Update::has_data() const
{
    return options.is_set;
}

bool Native::Router::Ospf::QueueDepth::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospf::QueueDepth::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::QueueDepth::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::QueueDepth::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::QueueDepth::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::QueueDepth::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::QueueDepth::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::QueueDepth::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Redistribute()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospf::Redistribute::Lisp>())
	,maximum_prefix(std::make_shared<Native::Router::Ospf::Redistribute::MaximumPrefix>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::Ospf::Redistribute::Vrf>())
{
    lisp->parent = this;
    maximum_prefix->parent = this;
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::~Redistribute()
{
}

bool Native::Router::Ospf::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Ospf::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Ospf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospf::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospf::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospf::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospf::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Ospf::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospf::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospf::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospf::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Ospf::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "maximum-prefix" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Application::~Application()
{
}

bool Native::Router::Ospf::Redistribute::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Ospf::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Ospf::Redistribute::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospf::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Ospf::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospf::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Ospf::Redistribute::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"}
    	,
    threshold_warning_only_container(std::make_shared<Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>())
{
    threshold_warning_only_container->parent = this;

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_data());
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-warning-only-container")
    {
        if(threshold_warning_only_container == nullptr)
        {
            threshold_warning_only_container = std::make_shared<Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>();
        }
        return threshold_warning_only_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_warning_only_container != nullptr)
    {
        children["threshold-warning-only-container"] = threshold_warning_only_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-warning-only-container" || name == "number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::ThresholdWarningOnlyContainer()
    :
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "threshold-warning-only-container"; yang_parent_name = "maximum-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::~ThresholdWarningOnlyContainer()
{
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_data() const
{
    return threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-warning-only-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Ospf::Redistribute::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Ospf::Redistribute::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Ospf_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospf_::~Ospf_()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospf_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospfv3::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Ospf::Redistribute::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Ospf::Redistribute::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "non-global-vrf")
    {
        for(auto const & c : non_global_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf>();
        c->parent = this;
        non_global_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : non_global_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "non-global-vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Global()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::~Isis()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::~Odr()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Ospf_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::~Ospf_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::NonGlobalVrf()
    :
    name{YType::str, "name"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "non-global-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::~NonGlobalVrf()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return name.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-global-vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::~Application()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::~Bgp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::~Connected()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::~Isis()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::~Lisp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::Tunnel::mpls_ldp {0, "mpls-ldp"};

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::Tunnel::mpls_ldp {0, "mpls-ldp"};

const Enum::YLeaf Native::Router::Ospf::QueueDepth::Hello::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospf::QueueDepth::Update::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};


}
}

