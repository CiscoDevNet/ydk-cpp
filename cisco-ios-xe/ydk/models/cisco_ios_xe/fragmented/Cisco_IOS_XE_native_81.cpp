
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_81.hpp"
#include "Cisco_IOS_XE_native_82.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::~Rip_()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Rip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Static_::~Static_()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Timers::Timers()
    :
    garbage_collection{YType::uint16, "garbage-collection"},
    holddown{YType::uint16, "holddown"},
    timeout{YType::uint16, "timeout"},
    update{YType::uint16, "update"}
{

    yang_name = "timers"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Timers::~Timers()
{
}

bool Native::Ipv6::Router::Rip::Timers::has_data() const
{
    return garbage_collection.is_set
	|| holddown.is_set
	|| timeout.is_set
	|| update.is_set;
}

bool Native::Ipv6::Router::Rip::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(garbage_collection.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Ipv6::Router::Rip::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (garbage_collection.is_set || is_set(garbage_collection.yfilter)) leaf_name_data.push_back(garbage_collection.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "garbage-collection")
    {
        garbage_collection = value;
        garbage_collection.value_namespace = name_space;
        garbage_collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "garbage-collection")
    {
        garbage_collection.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "garbage-collection" || name == "holddown" || name == "timeout" || name == "update")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::SourceGuard()
{

    yang_name = "source-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::SourceGuard::~SourceGuard()
{
}

bool Native::Ipv6::SourceGuard::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::SourceGuard::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::SourceGuard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::SourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::SourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::SourceGuard::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::SourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::SourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::SourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::SourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::Policy::Policy()
    :
    source_guard_policy_name{YType::str, "source-guard-policy-name"}
    	,
    validate(std::make_shared<Native::Ipv6::SourceGuard::Policy::Validate>())
{
    validate->parent = this;

    yang_name = "policy"; yang_parent_name = "source-guard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::SourceGuard::Policy::~Policy()
{
}

bool Native::Ipv6::SourceGuard::Policy::has_data() const
{
    return source_guard_policy_name.is_set
	|| (validate !=  nullptr && validate->has_data());
}

bool Native::Ipv6::SourceGuard::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_guard_policy_name.yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Ipv6::SourceGuard::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/source-guard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::SourceGuard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[source-guard-policy-name='" <<source_guard_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_guard_policy_name.is_set || is_set(source_guard_policy_name.yfilter)) leaf_name_data.push_back(source_guard_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::SourceGuard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ipv6::SourceGuard::Policy::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::SourceGuard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Ipv6::SourceGuard::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-guard-policy-name")
    {
        source_guard_policy_name = value;
        source_guard_policy_name.value_namespace = name_space;
        source_guard_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::SourceGuard::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-guard-policy-name")
    {
        source_guard_policy_name.yfilter = yfilter;
    }
}

bool Native::Ipv6::SourceGuard::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "source-guard-policy-name")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::Policy::Validate::Validate()
    :
    address{YType::empty, "address"},
    prefix{YType::empty, "prefix"}
{

    yang_name = "validate"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::SourceGuard::Policy::Validate::~Validate()
{
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_data() const
{
    return address.is_set
	|| prefix.is_set;
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Ipv6::SourceGuard::Policy::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::Policy::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::SourceGuard::Policy::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::SourceGuard::Policy::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::SourceGuard::Policy::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::SourceGuard::Policy::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix")
        return true;
    return false;
}

Native::Ipv6::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ipv6::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Spd::~Spd()
{
}

bool Native::Ipv6::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ipv6::Spd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ipv6::Spd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Spd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ipv6::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ipv6::Spd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Spd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ipv6::Spd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "mode")
        return true;
    return false;
}

Native::Ipv6::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "spd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Spd::Queue::~Queue()
{
}

bool Native::Ipv6::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ipv6::Spd::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Ipv6::Spd::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/spd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Spd::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Spd::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Spd::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Ipv6::Spd::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Key::Key()
{

    yang_name = "key"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Key::~Key()
{
}

bool Native::Key::has_data() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Key::has_operation() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chain")
    {
        for(auto const & c : chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Key::Chain>();
        c->parent = this;
        chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain")
        return true;
    return false;
}

Native::Key::Chain::Chain()
    :
    name{YType::str, "name"},
    macsec{YType::empty, "macsec"}
{

    yang_name = "chain"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Key::Chain::~Chain()
{
}

bool Native::Key::Chain::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return name.is_set
	|| macsec.is_set;
}

bool Native::Key::Chain::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(macsec.yfilter);
}

std::string Native::Key::Chain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Key::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:chain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (macsec.is_set || is_set(macsec.yfilter)) leaf_name_data.push_back(macsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        for(auto const & c : key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Key::Chain::Key_>();
        c->parent = this;
        key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Key::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec")
    {
        macsec = value;
        macsec.value_namespace = name_space;
        macsec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        macsec.yfilter = yfilter;
    }
}

bool Native::Key::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "macsec")
        return true;
    return false;
}

Native::Key::Chain::Key_::Key_()
    :
    id{YType::str, "id"},
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"}
    	,
    key_string(std::make_shared<Native::Key::Chain::Key_::KeyString>())
{
    key_string->parent = this;

    yang_name = "key"; yang_parent_name = "chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::~Key_()
{
}

bool Native::Key::Chain::Key_::has_data() const
{
    return id.is_set
	|| cryptographic_algorithm.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Key::Chain::Key_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Key::Chain::Key_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Key::Chain::Key_::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Key::Chain::Key_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "id" || name == "cryptographic-algorithm")
        return true;
    return false;
}

Native::Key::Chain::Key_::KeyString::KeyString()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key-string"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::KeyString::~KeyString()
{
}

bool Native::Key::Chain::Key_::KeyString::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Key::Chain::Key_::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Key::Chain::Key_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Key::Chain::Key_::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::L2::L2()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "l2"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2::~L2()
{
}

bool Native::L2::has_data() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return router_id.is_set;
}

bool Native::L2::has_operation() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Native::L2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi")
    {
        for(auto const & c : vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2::Vfi>();
        c->parent = this;
        vfi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vfi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::L2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi" || name == "router-id")
        return true;
    return false;
}

Native::L2::Vfi::Vfi()
    :
    name{YType::str, "name"},
    bridge_domain{YType::uint16, "bridge-domain"},
    evc{YType::str, "evc"},
    mode{YType::enumeration, "mode"}
    	,
    vpn(std::make_shared<Native::L2::Vfi::Vpn>())
{
    vpn->parent = this;

    yang_name = "vfi"; yang_parent_name = "l2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2::Vfi::~Vfi()
{
}

bool Native::L2::Vfi::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return name.is_set
	|| bridge_domain.is_set
	|| evc.is_set
	|| mode.is_set
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2::Vfi::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2::Vfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::L2::Vfi::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2::Vfi::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::L2::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "vpn" || name == "name" || name == "bridge-domain" || name == "evc" || name == "mode")
        return true;
    return false;
}

Native::L2::Vfi::Neighbor::Neighbor()
    :
    router_id{YType::str, "router-id"},
    encapsulation{YType::enumeration, "encapsulation"},
    pw_class{YType::str, "pw-class"},
    vc_id{YType::uint64, "vc-id"}
{

    yang_name = "neighbor"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2::Vfi::Neighbor::~Neighbor()
{
}

bool Native::L2::Vfi::Neighbor::has_data() const
{
    return router_id.is_set
	|| encapsulation.is_set
	|| pw_class.is_set
	|| vc_id.is_set;
}

bool Native::L2::Vfi::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vc_id.yfilter);
}

std::string Native::L2::Vfi::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[router-id='" <<router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::Vfi::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2::Vfi::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "encapsulation" || name == "pw-class" || name == "vc-id")
        return true;
    return false;
}

Native::L2::Vfi::Vpn::Vpn()
    :
    id{YType::uint64, "id"}
{

    yang_name = "vpn"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2::Vfi::Vpn::~Vpn()
{
}

bool Native::L2::Vfi::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2::Vfi::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2::Vfi::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::Vfi::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2::Vfi::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cos{YType::uint8, "cos"}
    	,
    global(std::make_shared<Native::L2ProtocolTunnel::Global>())
{
    global->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::L2ProtocolTunnel::has_data() const
{
    return cos.is_set
	|| (global !=  nullptr && global->has_data());
}

bool Native::L2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::L2ProtocolTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::L2ProtocolTunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::L2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::L2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "cos")
        return true;
    return false;
}

Native::L2ProtocolTunnel::Global::Global()
    :
    drop_threshold{YType::uint16, "drop-threshold"}
{

    yang_name = "global"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2ProtocolTunnel::Global::~Global()
{
}

bool Native::L2ProtocolTunnel::Global::has_data() const
{
    return drop_threshold.is_set;
}

bool Native::L2ProtocolTunnel::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_threshold.yfilter);
}

std::string Native::L2ProtocolTunnel::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:l2protocol-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2ProtocolTunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2ProtocolTunnel::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_threshold.is_set || is_set(drop_threshold.yfilter)) leaf_name_data.push_back(drop_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2ProtocolTunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2ProtocolTunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2ProtocolTunnel::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold = value;
        drop_threshold.value_namespace = name_space;
        drop_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2ProtocolTunnel::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold.yfilter = yfilter;
    }
}

bool Native::L2ProtocolTunnel::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold")
        return true;
    return false;
}

Native::L2Vpn::L2Vpn()
    :
    pseudowire(std::make_shared<Native::L2Vpn::Pseudowire>())
	,vfi(std::make_shared<Native::L2Vpn::Vfi>())
	,xconnect(std::make_shared<Native::L2Vpn::Xconnect>())
{
    pseudowire->parent = this;
    vfi->parent = this;
    xconnect->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::~L2Vpn()
{
}

bool Native::L2Vpn::has_data() const
{
    return (pseudowire !=  nullptr && pseudowire->has_data())
	|| (vfi !=  nullptr && vfi->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (vfi !=  nullptr && vfi->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::L2Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2Vpn::Pseudowire>();
        }
        return pseudowire;
    }

    if(child_yang_name == "vfi")
    {
        if(vfi == nullptr)
        {
            vfi = std::make_shared<Native::L2Vpn::Vfi>();
        }
        return vfi;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::L2Vpn::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    if(vfi != nullptr)
    {
        children["vfi"] = vfi;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "vfi" || name == "xconnect")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Pseudowire()
    :
    routing{YType::empty, "routing"}
    	,
    group(std::make_shared<Native::L2Vpn::Pseudowire::Group>())
	,static_oam(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>())
	,tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv>())
{
    group->parent = this;
    static_oam->parent = this;
    tlv->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::~Pseudowire()
{
}

bool Native::L2Vpn::Pseudowire::has_data() const
{
    return routing.is_set
	|| (group !=  nullptr && group->has_data())
	|| (static_oam !=  nullptr && static_oam->has_data())
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (static_oam !=  nullptr && static_oam->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::L2Vpn::Pseudowire::Group>();
        }
        return group;
    }

    if(child_yang_name == "static-oam")
    {
        if(static_oam == nullptr)
        {
            static_oam = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>();
        }
        return static_oam;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(static_oam != nullptr)
    {
        children["static-oam"] = static_oam;
    }

    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "static-oam" || name == "tlv" || name == "routing")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Group::Group()
    :
    status{YType::empty, "status"}
{

    yang_name = "group"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::Group::~Group()
{
}

bool Native::L2Vpn::Pseudowire::Group::has_data() const
{
    return status.is_set;
}

bool Native::L2Vpn::Pseudowire::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::StaticOam()
{

    yang_name = "static-oam"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::StaticOam::~StaticOam()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::StaticOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Class_()
    :
    pw_nm{YType::str, "pw-nm"}
    	,
    timeout(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>())
{
    timeout->parent = this;

    yang_name = "class"; yang_parent_name = "static-oam"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::~Class_()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_data() const
{
    return pw_nm.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_nm.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/static-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[pw-nm='" <<pw_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_nm.is_set || is_set(pw_nm.yfilter)) leaf_name_data.push_back(pw_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-nm")
    {
        pw_nm = value;
        pw_nm.value_namespace = name_space;
        pw_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-nm")
    {
        pw_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "pw-nm")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Timeout()
    :
    refresh(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>())
{
    refresh->parent = this;

    yang_name = "timeout"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::~Timeout()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_data() const
{
    return (refresh !=  nullptr && refresh->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Refresh()
    :
    send(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>())
{
    send->parent = this;

    yang_name = "refresh"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::~Refresh()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::Send()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "send"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::~Send()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_data() const
{
    return interval.is_set;
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Tlv()
{

    yang_name = "tlv"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::Tlv::~Tlv()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::Tlv::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Template_()
    :
    tlv_nm{YType::str, "tlv-nm"}
    	,
    tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>())
{
    tlv->parent = this;

    yang_name = "template"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::~Template_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_data() const
{
    return tlv_nm.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_nm.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/tlv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[tlv-nm='" <<tlv_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_nm.is_set || is_set(tlv_nm.yfilter)) leaf_name_data.push_back(tlv_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm = value;
        tlv_nm.value_namespace = name_space;
        tlv_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "tlv-nm")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::Tlv_()
    :
    tlv_description(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>())
	,tlv_type(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>())
{
    tlv_description->parent = this;
    tlv_type->parent = this;

    yang_name = "tlv"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::~Tlv_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_data() const
{
    return (tlv_description !=  nullptr && tlv_description->has_data())
	|| (tlv_type !=  nullptr && tlv_type->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_operation() const
{
    return is_set(yfilter)
	|| (tlv_description !=  nullptr && tlv_description->has_operation())
	|| (tlv_type !=  nullptr && tlv_type->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-description")
    {
        if(tlv_description == nullptr)
        {
            tlv_description = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>();
        }
        return tlv_description;
    }

    if(child_yang_name == "tlv-type")
    {
        if(tlv_type == nullptr)
        {
            tlv_type = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>();
        }
        return tlv_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv_description != nullptr)
    {
        children["tlv-description"] = tlv_description;
    }

    if(tlv_type != nullptr)
    {
        children["tlv-type"] = tlv_type;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-description" || name == "tlv-type")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::TlvDescription()
    :
    description{YType::str, "description"}
{

    yang_name = "tlv-description"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::~TlvDescription()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_data() const
{
    return description.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::TlvType()
    :
    type{YType::uint8, "type"}
{

    yang_name = "tlv-type"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::~TlvType()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_data() const
{
    return type.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Vfi()
{

    yang_name = "vfi"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Vfi::~Vfi()
{
}

bool Native::L2Vpn::Vfi::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Vfi::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Vfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Vfi::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Context()
    :
    vfi_nm{YType::str, "vfi-nm"}
    	,
    autodiscovery(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>())
	,vpn(std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>())
{
    autodiscovery->parent = this;
    vpn->parent = this;

    yang_name = "context"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Vfi::Context::~Context()
{
}

bool Native::L2Vpn::Vfi::Context::has_data() const
{
    return vfi_nm.is_set
	|| (autodiscovery !=  nullptr && autodiscovery->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2Vpn::Vfi::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vfi_nm.yfilter)
	|| (autodiscovery !=  nullptr && autodiscovery->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Vfi::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[vfi-nm='" <<vfi_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_nm.is_set || is_set(vfi_nm.yfilter)) leaf_name_data.push_back(vfi_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autodiscovery")
    {
        if(autodiscovery == nullptr)
        {
            autodiscovery = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>();
        }
        return autodiscovery;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autodiscovery != nullptr)
    {
        children["autodiscovery"] = autodiscovery;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm = value;
        vfi_nm.value_namespace = name_space;
        vfi_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autodiscovery" || name == "vpn" || name == "vfi-nm")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Autodiscovery()
    :
    bgp(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>())
{
    bgp->parent = this;

    yang_name = "autodiscovery"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::~Autodiscovery()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autodiscovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Bgp()
    :
    signaling(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>())
{
    signaling->parent = this;

    yang_name = "bgp"; yang_parent_name = "autodiscovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::~Bgp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_data() const
{
    return (signaling !=  nullptr && signaling->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signaling != nullptr)
    {
        children["signaling"] = signaling;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Signaling()
    :
    bgp(nullptr) // presence node
	,ldp(nullptr) // presence node
{

    yang_name = "signaling"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::~Signaling()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "ldp")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::Bgp_()
    :
    template_{YType::str, "template"}
{

    yang_name = "bgp"; yang_parent_name = "signaling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::~Bgp_()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::Ldp()
    :
    template_{YType::str, "template"}
{

    yang_name = "ldp"; yang_parent_name = "signaling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::~Ldp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Vpn::Vpn()
    :
    id{YType::uint32, "id"}
{

    yang_name = "vpn"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Vpn::~Vpn()
{
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Xconnect()
{

    yang_name = "xconnect"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Xconnect::~Xconnect()
{
}

bool Native::L2Vpn::Xconnect::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::Context()
    :
    xc_name{YType::str, "xc-name"}
    	,
    xc_mode_config_xconnect(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>())
{
    xc_mode_config_xconnect->parent = this;

    yang_name = "context"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Xconnect::Context::~Context()
{
}

bool Native::L2Vpn::Xconnect::Context::has_data() const
{
    return xc_name.is_set
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_data());
}

bool Native::L2Vpn::Xconnect::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xc_name.yfilter)
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Xconnect::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[xc-name='" <<xc_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_name.is_set || is_set(xc_name.yfilter)) leaf_name_data.push_back(xc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xc-Mode-config-xconnect")
    {
        if(xc_mode_config_xconnect == nullptr)
        {
            xc_mode_config_xconnect = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>();
        }
        return xc_mode_config_xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xc_mode_config_xconnect != nullptr)
    {
        children["xc-Mode-config-xconnect"] = xc_mode_config_xconnect;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xc-name")
    {
        xc_name = value;
        xc_name.value_namespace = name_space;
        xc_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xc-name")
    {
        xc_name.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xc-Mode-config-xconnect" || name == "xc-name")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::XcModeConfigXconnect()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
    	,
    interworking(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>())
	,match(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>())
	,member(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>())
	,redundancy(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>())
	,remote(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>())
{
    interworking->parent = this;
    match->parent = this;
    member->parent = this;
    redundancy->parent = this;
    remote->parent = this;

    yang_name = "xc-Mode-config-xconnect"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::~XcModeConfigXconnect()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_data() const
{
    return description.is_set
	|| shutdown.is_set
	|| (interworking !=  nullptr && interworking->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (interworking !=  nullptr && interworking->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-Mode-config-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interworking")
    {
        if(interworking == nullptr)
        {
            interworking = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>();
        }
        return interworking;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>();
        }
        return match;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>();
        }
        return member;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interworking != nullptr)
    {
        children["interworking"] = interworking;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interworking" || name == "match" || name == "member" || name == "redundancy" || name == "remote" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::Interworking()
    :
    ethernet{YType::empty, "ethernet"},
    ip{YType::empty, "ip"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "interworking"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::~Interworking()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_data() const
{
    return ethernet.is_set
	|| ip.is_set
	|| vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interworking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ip" || name == "vlan")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Match()
    :
    protocol(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>())
{
    protocol->parent = this;

    yang_name = "match"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::~Match()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::Protocol()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::~Protocol()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_data() const
{
    return ipv6.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Member()
    :
    vlan{YType::uint16, "Vlan"}
{

    yang_name = "member"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::~Member()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4" || name == "Vlan")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::Interface()
    :
    interface{YType::str, "interface"},
    group{YType::empty, "group"},
    service_instance{YType::empty, "service-instance"}
{

    yang_name = "interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::~Interface()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_data() const
{
    return interface.is_set
	|| group.is_set
	|| service_instance.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(service_instance.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "group" || name == "service-instance")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mem_vcid{YType::uint32, "mem-vcid"}
{

    yang_name = "ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::~Ipv4()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mem_vcid.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mem_vcid.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mem-vcid")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Redundancy()
    :
    delay{YType::uint8, "delay"}
    	,
    predictive(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::~Redundancy()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_data() const
{
    return delay.is_set
	|| (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive" || name == "delay")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::Predictive()
    :
    disabled{YType::empty, "disabled"},
    enabled{YType::empty, "enabled"}
{

    yang_name = "predictive"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_data() const
{
    return disabled.is_set
	|| enabled.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Remote()
    :
    circuit(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>())
	,link(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>())
{
    circuit->parent = this;
    link->parent = this;

    yang_name = "remote"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::~Remote()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_data() const
{
    return (circuit !=  nullptr && circuit->has_data())
	|| (link !=  nullptr && link->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (circuit !=  nullptr && circuit->has_operation())
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit")
    {
        if(circuit == nullptr)
        {
            circuit = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>();
        }
        return circuit;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit != nullptr)
    {
        children["circuit"] = circuit;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit" || name == "link")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::Circuit()
    :
    id{YType::empty, "id"}
{

    yang_name = "circuit"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::~Circuit()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::Link()
    :
    failure{YType::empty, "failure"}
{

    yang_name = "link"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::~Link()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_data() const
{
    return failure.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::L2VpnConfig::L2VpnConfig()
    :
    l2vpn(nullptr) // presence node
{

    yang_name = "l2vpn-config"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::~L2VpnConfig()
{
}

bool Native::L2VpnConfig::has_data() const
{
    return (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::L2VpnConfig::has_operation() const
{
    return is_set(yfilter)
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::L2VpnConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::L2VpnConfig::L2Vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    return children;
}

void Native::L2VpnConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2VpnConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2VpnConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::L2Vpn()
    :
    router_id{YType::str, "router-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    logging(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>())
	,redundancy(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>())
{
    logging->parent = this;
    redundancy->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "l2vpn-config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::~L2Vpn()
{
}

bool Native::L2VpnConfig::L2Vpn::has_data() const
{
    return router_id.is_set
	|| shutdown.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::L2VpnConfig::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "redundancy" || name == "router-id" || name == "shutdown")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Logging::~Logging()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Redundancy()
    :
    predictive(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::~Redundancy()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_data() const
{
    return (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::Predictive()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "predictive"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_data() const
{
    return enabled.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::L3Vpn::L3Vpn()
    :
    encapsulation(std::make_shared<Native::L3Vpn::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "l3vpn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L3Vpn::~L3Vpn()
{
}

bool Native::L3Vpn::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::L3Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::L3Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::L3Vpn::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::L3Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Encapsulation()
{

    yang_name = "encapsulation"; yang_parent_name = "l3vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L3Vpn::Encapsulation::~Encapsulation()
{
}

bool Native::L3Vpn::Encapsulation::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L3Vpn::Encapsulation::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L3Vpn::Encapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l3vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L3Vpn::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l3vpn:encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L3Vpn::Encapsulation::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Ip()
    :
    profile_name{YType::str, "profile-name"}
    	,
    mpls(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>())
	,protocol(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>())
	,transport(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>())
{
    mpls->parent = this;
    protocol->parent = this;
    transport->parent = this;

    yang_name = "ip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L3Vpn::Encapsulation::Ip::~Ip()
{
}

bool Native::L3Vpn::Encapsulation::Ip::has_data() const
{
    return profile_name.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l3vpn/Cisco-IOS-XE-l3vpn:encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L3Vpn::Encapsulation::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "protocol" || name == "transport" || name == "profile-name")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Mpls::Mpls()
    :
    mtu{YType::str, "mtu"}
{

    yang_name = "mpls"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Mpls::~Mpls()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_data() const
{
    return mtu.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Protocol()
    :
    gre(nullptr) // presence node
{

    yang_name = "protocol"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::~Protocol()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_data() const
{
    return (gre !=  nullptr && gre->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::Gre()
    :
    key{YType::uint32, "key"}
{

    yang_name = "gre"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::~Gre()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_data() const
{
    return key.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Transport()
    :
    ipv4(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Transport::~Transport()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::Ipv4()
    :
    source{YType::str, "source"}
{

    yang_name = "ipv4"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::~Ipv4()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_data() const
{
    return source.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::License::License()
    :
    smart{YType::enumeration, "smart"}
    	,
    accept(std::make_shared<Native::License::Accept>())
	,boot(std::make_shared<Native::License::Boot>())
	,feature(std::make_shared<Native::License::Feature>())
	,udi(std::make_shared<Native::License::Udi>())
{
    accept->parent = this;
    boot->parent = this;
    feature->parent = this;
    udi->parent = this;

    yang_name = "license"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::~License()
{
}

bool Native::License::has_data() const
{
    return smart.is_set
	|| (accept !=  nullptr && accept->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (udi !=  nullptr && udi->has_data());
}

bool Native::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(smart.yfilter)
	|| (accept !=  nullptr && accept->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (udi !=  nullptr && udi->has_operation());
}

std::string Native::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart.is_set || is_set(smart.yfilter)) leaf_name_data.push_back(smart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::License::Accept>();
        }
        return accept;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::License::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::License::Feature>();
        }
        return feature;
    }

    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Native::License::Udi>();
        }
        return udi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    if(feature != nullptr)
    {
        children["feature"] = feature;
    }

    if(udi != nullptr)
    {
        children["udi"] = udi;
    }

    return children;
}

void Native::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "smart")
    {
        smart = value;
        smart.value_namespace = name_space;
        smart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart")
    {
        smart.yfilter = yfilter;
    }
}

bool Native::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept" || name == "boot" || name == "feature" || name == "udi" || name == "smart")
        return true;
    return false;
}

Native::License::Accept::Accept()
    :
    agreement{YType::empty, "agreement"},
    end{YType::empty, "end"},
    user{YType::empty, "user"}
{

    yang_name = "accept"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Accept::~Accept()
{
}

bool Native::License::Accept::has_data() const
{
    return agreement.is_set
	|| end.is_set
	|| user.is_set;
}

bool Native::License::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agreement.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(user.yfilter);
}

std::string Native::License::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agreement.is_set || is_set(agreement.yfilter)) leaf_name_data.push_back(agreement.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agreement")
    {
        agreement = value;
        agreement.value_namespace = name_space;
        agreement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agreement")
    {
        agreement.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
}

bool Native::License::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agreement" || name == "end" || name == "user")
        return true;
    return false;
}

Native::License::Boot::Boot()
    :
    boot_module(std::make_shared<Native::License::Boot::BootModule>())
	,level(std::make_shared<Native::License::Boot::Level>())
{
    boot_module->parent = this;
    level->parent = this;

    yang_name = "boot"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::~Boot()
{
}

bool Native::License::Boot::has_data() const
{
    return (boot_module !=  nullptr && boot_module->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::License::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (boot_module !=  nullptr && boot_module->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::License::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-module")
    {
        if(boot_module == nullptr)
        {
            boot_module = std::make_shared<Native::License::Boot::BootModule>();
        }
        return boot_module;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::License::Boot::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(boot_module != nullptr)
    {
        children["boot-module"] = boot_module;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::License::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-module" || name == "level")
        return true;
    return false;
}

Native::License::Boot::BootModule::BootModule()
    :
    module{YType::enumeration, "module"}
    	,
    technology_package(std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>())
{
    technology_package->parent = this;

    yang_name = "boot-module"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::BootModule::~BootModule()
{
}

bool Native::License::Boot::BootModule::has_data() const
{
    return module.is_set
	|| (technology_package !=  nullptr && technology_package->has_data());
}

bool Native::License::Boot::BootModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (technology_package !=  nullptr && technology_package->has_operation());
}

std::string Native::License::Boot::BootModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::BootModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::BootModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "technology-package")
    {
        if(technology_package == nullptr)
        {
            technology_package = std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>();
        }
        return technology_package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(technology_package != nullptr)
    {
        children["technology-package"] = technology_package;
    }

    return children;
}

void Native::License::Boot::BootModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "technology-package" || name == "module")
        return true;
    return false;
}

Native::License::Boot::BootModule::TechnologyPackage::TechnologyPackage()
    :
    datak9{YType::empty, "datak9"},
    securityk9{YType::empty, "securityk9"},
    uck9{YType::empty, "uck9"}
{

    yang_name = "technology-package"; yang_parent_name = "boot-module"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::BootModule::TechnologyPackage::~TechnologyPackage()
{
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_data() const
{
    return datak9.is_set
	|| securityk9.is_set
	|| uck9.is_set;
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(datak9.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| ydk::is_set(uck9.yfilter);
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/boot-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "technology-package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::BootModule::TechnologyPackage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datak9.is_set || is_set(datak9.yfilter)) leaf_name_data.push_back(datak9.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (uck9.is_set || is_set(uck9.yfilter)) leaf_name_data.push_back(uck9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::TechnologyPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::TechnologyPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::BootModule::TechnologyPackage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "datak9")
    {
        datak9 = value;
        datak9.value_namespace = name_space;
        datak9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uck9")
    {
        uck9 = value;
        uck9.value_namespace = name_space;
        uck9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::TechnologyPackage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "datak9")
    {
        datak9.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
    if(value_path == "uck9")
    {
        uck9.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datak9" || name == "securityk9" || name == "uck9")
        return true;
    return false;
}

Native::License::Boot::Level::Level()
    :
    advancedmetroipaccess{YType::empty, "advancedmetroipaccess"},
    adventerprise{YType::empty, "adventerprise"},
    appx{YType::empty, "appx"},
    appxk9{YType::empty, "appxk9"},
    entservices{YType::empty, "entservices"},
    ipbasek9{YType::empty, "ipbasek9"},
    lanbasek9{YType::empty, "lanbasek9"},
    metroaccess{YType::empty, "metroaccess"},
    metroipaccess{YType::empty, "metroipaccess"},
    securityk9{YType::empty, "securityk9"}
    	,
    ipbase(nullptr) // presence node
	,ipservices(nullptr) // presence node
	,ipservicesk9(nullptr) // presence node
	,lanbase(nullptr) // presence node
	,lite(nullptr) // presence node
	,metroaggrservices(nullptr) // presence node
	,uck9(nullptr) // presence node
{

    yang_name = "level"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::~Level()
{
}

bool Native::License::Boot::Level::has_data() const
{
    return advancedmetroipaccess.is_set
	|| adventerprise.is_set
	|| appx.is_set
	|| appxk9.is_set
	|| entservices.is_set
	|| ipbasek9.is_set
	|| lanbasek9.is_set
	|| metroaccess.is_set
	|| metroipaccess.is_set
	|| securityk9.is_set
	|| (ipbase !=  nullptr && ipbase->has_data())
	|| (ipservices !=  nullptr && ipservices->has_data())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_data())
	|| (lanbase !=  nullptr && lanbase->has_data())
	|| (lite !=  nullptr && lite->has_data())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_data())
	|| (uck9 !=  nullptr && uck9->has_data());
}

bool Native::License::Boot::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advancedmetroipaccess.yfilter)
	|| ydk::is_set(adventerprise.yfilter)
	|| ydk::is_set(appx.yfilter)
	|| ydk::is_set(appxk9.yfilter)
	|| ydk::is_set(entservices.yfilter)
	|| ydk::is_set(ipbasek9.yfilter)
	|| ydk::is_set(lanbasek9.yfilter)
	|| ydk::is_set(metroaccess.yfilter)
	|| ydk::is_set(metroipaccess.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| (ipbase !=  nullptr && ipbase->has_operation())
	|| (ipservices !=  nullptr && ipservices->has_operation())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_operation())
	|| (lanbase !=  nullptr && lanbase->has_operation())
	|| (lite !=  nullptr && lite->has_operation())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_operation())
	|| (uck9 !=  nullptr && uck9->has_operation());
}

std::string Native::License::Boot::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advancedmetroipaccess.is_set || is_set(advancedmetroipaccess.yfilter)) leaf_name_data.push_back(advancedmetroipaccess.get_name_leafdata());
    if (adventerprise.is_set || is_set(adventerprise.yfilter)) leaf_name_data.push_back(adventerprise.get_name_leafdata());
    if (appx.is_set || is_set(appx.yfilter)) leaf_name_data.push_back(appx.get_name_leafdata());
    if (appxk9.is_set || is_set(appxk9.yfilter)) leaf_name_data.push_back(appxk9.get_name_leafdata());
    if (entservices.is_set || is_set(entservices.yfilter)) leaf_name_data.push_back(entservices.get_name_leafdata());
    if (ipbasek9.is_set || is_set(ipbasek9.yfilter)) leaf_name_data.push_back(ipbasek9.get_name_leafdata());
    if (lanbasek9.is_set || is_set(lanbasek9.yfilter)) leaf_name_data.push_back(lanbasek9.get_name_leafdata());
    if (metroaccess.is_set || is_set(metroaccess.yfilter)) leaf_name_data.push_back(metroaccess.get_name_leafdata());
    if (metroipaccess.is_set || is_set(metroipaccess.yfilter)) leaf_name_data.push_back(metroipaccess.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipbase")
    {
        if(ipbase == nullptr)
        {
            ipbase = std::make_shared<Native::License::Boot::Level::Ipbase>();
        }
        return ipbase;
    }

    if(child_yang_name == "ipservices")
    {
        if(ipservices == nullptr)
        {
            ipservices = std::make_shared<Native::License::Boot::Level::Ipservices>();
        }
        return ipservices;
    }

    if(child_yang_name == "ipservicesk9")
    {
        if(ipservicesk9 == nullptr)
        {
            ipservicesk9 = std::make_shared<Native::License::Boot::Level::Ipservicesk9>();
        }
        return ipservicesk9;
    }

    if(child_yang_name == "lanbase")
    {
        if(lanbase == nullptr)
        {
            lanbase = std::make_shared<Native::License::Boot::Level::Lanbase>();
        }
        return lanbase;
    }

    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::License::Boot::Level::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "metroaggrservices")
    {
        if(metroaggrservices == nullptr)
        {
            metroaggrservices = std::make_shared<Native::License::Boot::Level::Metroaggrservices>();
        }
        return metroaggrservices;
    }

    if(child_yang_name == "uck9")
    {
        if(uck9 == nullptr)
        {
            uck9 = std::make_shared<Native::License::Boot::Level::Uck9>();
        }
        return uck9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipbase != nullptr)
    {
        children["ipbase"] = ipbase;
    }

    if(ipservices != nullptr)
    {
        children["ipservices"] = ipservices;
    }

    if(ipservicesk9 != nullptr)
    {
        children["ipservicesk9"] = ipservicesk9;
    }

    if(lanbase != nullptr)
    {
        children["lanbase"] = lanbase;
    }

    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(metroaggrservices != nullptr)
    {
        children["metroaggrservices"] = metroaggrservices;
    }

    if(uck9 != nullptr)
    {
        children["uck9"] = uck9;
    }

    return children;
}

void Native::License::Boot::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess = value;
        advancedmetroipaccess.value_namespace = name_space;
        advancedmetroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adventerprise")
    {
        adventerprise = value;
        adventerprise.value_namespace = name_space;
        adventerprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appx")
    {
        appx = value;
        appx.value_namespace = name_space;
        appx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appxk9")
    {
        appxk9 = value;
        appxk9.value_namespace = name_space;
        appxk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entservices")
    {
        entservices = value;
        entservices.value_namespace = name_space;
        entservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipbasek9")
    {
        ipbasek9 = value;
        ipbasek9.value_namespace = name_space;
        ipbasek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9 = value;
        lanbasek9.value_namespace = name_space;
        lanbasek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroaccess")
    {
        metroaccess = value;
        metroaccess.value_namespace = name_space;
        metroaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess = value;
        metroipaccess.value_namespace = name_space;
        metroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess.yfilter = yfilter;
    }
    if(value_path == "adventerprise")
    {
        adventerprise.yfilter = yfilter;
    }
    if(value_path == "appx")
    {
        appx.yfilter = yfilter;
    }
    if(value_path == "appxk9")
    {
        appxk9.yfilter = yfilter;
    }
    if(value_path == "entservices")
    {
        entservices.yfilter = yfilter;
    }
    if(value_path == "ipbasek9")
    {
        ipbasek9.yfilter = yfilter;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9.yfilter = yfilter;
    }
    if(value_path == "metroaccess")
    {
        metroaccess.yfilter = yfilter;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipbase" || name == "ipservices" || name == "ipservicesk9" || name == "lanbase" || name == "lite" || name == "metroaggrservices" || name == "uck9" || name == "advancedmetroipaccess" || name == "adventerprise" || name == "appx" || name == "appxk9" || name == "entservices" || name == "ipbasek9" || name == "lanbasek9" || name == "metroaccess" || name == "metroipaccess" || name == "securityk9")
        return true;
    return false;
}

Native::License::Boot::Level::Ipbase::Ipbase()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "ipbase"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Ipbase::~Ipbase()
{
}

bool Native::License::Boot::Level::Ipbase::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservices::Ipservices()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "ipservices"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Ipservices::~Ipservices()
{
}

bool Native::License::Boot::Level::Ipservices::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipservices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservicesk9::Ipservicesk9()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "ipservicesk9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Ipservicesk9::~Ipservicesk9()
{
}

bool Native::License::Boot::Level::Ipservicesk9::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservicesk9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservicesk9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipservicesk9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservicesk9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipservicesk9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservicesk9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservicesk9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservicesk9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservicesk9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservicesk9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lanbase::Lanbase()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "lanbase"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Lanbase::~Lanbase()
{
}

bool Native::License::Boot::Level::Lanbase::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lanbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lanbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lanbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lanbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lanbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lanbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lanbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lanbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lanbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lanbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lite::Lite()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "lite"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Lite::~Lite()
{
}

bool Native::License::Boot::Level::Lite::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Metroaggrservices::Metroaggrservices()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "metroaggrservices"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Metroaggrservices::~Metroaggrservices()
{
}

bool Native::License::Boot::Level::Metroaggrservices::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Metroaggrservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Metroaggrservices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Metroaggrservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metroaggrservices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Metroaggrservices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Metroaggrservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Metroaggrservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Metroaggrservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Metroaggrservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Metroaggrservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Uck9::Uck9()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "uck9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Uck9::~Uck9()
{
}

bool Native::License::Boot::Level::Uck9::has_data() const
{
    return disable.is_set;
}

bool Native::License::Boot::Level::Uck9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::License::Boot::Level::Uck9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Uck9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uck9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Uck9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Uck9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Uck9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Uck9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Uck9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Uck9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::License::Feature::Feature()
    :
    name{YType::str, "name"}
    	,
    port(std::make_shared<Native::License::Feature::Port>())
{
    port->parent = this;

    yang_name = "feature"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Feature::~Feature()
{
}

bool Native::License::Feature::has_data() const
{
    return name.is_set
	|| (port !=  nullptr && port->has_data());
}

bool Native::License::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::License::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::License::Feature::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::License::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::License::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "name")
        return true;
    return false;
}

Native::License::Feature::Port::Port()
    :
    b_6xonegig{YType::uint8, "b-6xonegig"},
    bulk{YType::empty, "bulk"},
    onegig{YType::uint8, "onegig"},
    tengig{YType::uint8, "tengig"}
{

    yang_name = "port"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Feature::Port::~Port()
{
}

bool Native::License::Feature::Port::has_data() const
{
    return b_6xonegig.is_set
	|| bulk.is_set
	|| onegig.is_set
	|| tengig.is_set;
}

bool Native::License::Feature::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_6xonegig.yfilter)
	|| ydk::is_set(bulk.yfilter)
	|| ydk::is_set(onegig.yfilter)
	|| ydk::is_set(tengig.yfilter);
}

std::string Native::License::Feature::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/feature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_6xonegig.is_set || is_set(b_6xonegig.yfilter)) leaf_name_data.push_back(b_6xonegig.get_name_leafdata());
    if (bulk.is_set || is_set(bulk.yfilter)) leaf_name_data.push_back(bulk.get_name_leafdata());
    if (onegig.is_set || is_set(onegig.yfilter)) leaf_name_data.push_back(onegig.get_name_leafdata());
    if (tengig.is_set || is_set(tengig.yfilter)) leaf_name_data.push_back(tengig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Feature::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Feature::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-6xonegig")
    {
        b_6xonegig = value;
        b_6xonegig.value_namespace = name_space;
        b_6xonegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bulk")
    {
        bulk = value;
        bulk.value_namespace = name_space;
        bulk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onegig")
    {
        onegig = value;
        onegig.value_namespace = name_space;
        onegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tengig")
    {
        tengig = value;
        tengig.value_namespace = name_space;
        tengig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-6xonegig")
    {
        b_6xonegig.yfilter = yfilter;
    }
    if(value_path == "bulk")
    {
        bulk.yfilter = yfilter;
    }
    if(value_path == "onegig")
    {
        onegig.yfilter = yfilter;
    }
    if(value_path == "tengig")
    {
        tengig.yfilter = yfilter;
    }
}

bool Native::License::Feature::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-6xonegig" || name == "bulk" || name == "onegig" || name == "tengig")
        return true;
    return false;
}

Native::License::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"}
{

    yang_name = "udi"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Udi::~Udi()
{
}

bool Native::License::Udi::has_data() const
{
    return pid.is_set
	|| sn.is_set;
}

bool Native::License::Udi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(sn.yfilter);
}

std::string Native::License::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "sn")
    {
        sn.yfilter = yfilter;
    }
}

bool Native::License::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "sn")
        return true;
    return false;
}

Native::Line::Line()
{

    yang_name = "line"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::~Line()
{
}

bool Native::Line::has_data() const
{
    for (std::size_t index=0; index<aux.size(); index++)
    {
        if(aux[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<console.size(); index++)
    {
        if(console[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<line_list.size(); index++)
    {
        if(line_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vty.size(); index++)
    {
        if(vty[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::has_operation() const
{
    for (std::size_t index=0; index<aux.size(); index++)
    {
        if(aux[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<console.size(); index++)
    {
        if(console[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<line_list.size(); index++)
    {
        if(line_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vty.size(); index++)
    {
        if(vty[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aux")
    {
        for(auto const & c : aux)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux>();
        c->parent = this;
        aux.push_back(c);
        return c;
    }

    if(child_yang_name == "console")
    {
        for(auto const & c : console)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console>();
        c->parent = this;
        console.push_back(c);
        return c;
    }

    if(child_yang_name == "line-list")
    {
        for(auto const & c : line_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList>();
        c->parent = this;
        line_list.push_back(c);
        return c;
    }

    if(child_yang_name == "vty")
    {
        for(auto const & c : vty)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty>();
        c->parent = this;
        vty.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aux)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : console)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : line_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vty)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aux" || name == "console" || name == "line-list" || name == "vty")
        return true;
    return false;
}

Native::Line::Aux::Aux()
    :
    first{YType::enumeration, "first"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::Aux::AccessClass>())
	,authorization(std::make_shared<Native::Line::Aux::Authorization>())
	,autocommand(std::make_shared<Native::Line::Aux::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::Aux::Databits>())
	,escape_character(std::make_shared<Native::Line::Aux::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::Aux::Exec>())
	,exec_timeout(std::make_shared<Native::Line::Aux::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::Aux::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::Aux::Ip>())
	,ipv6(std::make_shared<Native::Line::Aux::Ipv6>())
	,logging(std::make_shared<Native::Line::Aux::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::Aux::MediaType>())
	,modem(std::make_shared<Native::Line::Aux::Modem>())
	,no_exec(std::make_shared<Native::Line::Aux::NoExec>())
	,padding(std::make_shared<Native::Line::Aux::Padding>())
	,parity(std::make_shared<Native::Line::Aux::Parity>())
	,password(std::make_shared<Native::Line::Aux::Password>())
	,prc(std::make_shared<Native::Line::Aux::Prc>())
	,privilege(std::make_shared<Native::Line::Aux::Privilege>())
	,session_timeout(std::make_shared<Native::Line::Aux::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::Aux::Telnet>())
	,timeout(std::make_shared<Native::Line::Aux::Timeout>())
	,transport(std::make_shared<Native::Line::Aux::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::Aux::UsbInactivityTimeout>())
{
    access_class->parent = this;
    authorization->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    no_exec->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    telnet->parent = this;
    timeout->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "aux"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::Aux::~Aux()
{
}

bool Native::Line::Aux::has_data() const
{
    return first.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::Aux::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::Aux::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::Aux::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aux" <<"[first='" <<first <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Aux::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Aux::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Aux::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Aux::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Aux::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Aux::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Aux::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Aux::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Aux::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Aux::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Aux::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Aux::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Aux::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Aux::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Aux::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Aux::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Aux::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Aux::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Aux::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Aux::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Aux::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Aux::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Aux::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Aux::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Aux::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Aux::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Aux::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::Aux::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::Aux::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class" || name == "authorization" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "no-exec" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "telnet" || name == "timeout" || name == "transport" || name == "usb-inactivity-timeout" || name == "first" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "no-activation-character" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::Aux::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::AccessClass::~AccessClass()
{
}

bool Native::Line::Aux::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Aux::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Aux::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Aux::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::Aux::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Aux::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Aux::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::Aux::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::Aux::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Aux::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Authorization::~Authorization()
{
}

bool Native::Line::Aux::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::Aux::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::Aux::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Aux::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::Aux::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Line::Aux::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Authorization::Command::~Command()
{
}

bool Native::Line::Aux::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::Aux::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_name.yfilter)
	|| ydk::is_set(enable_level.yfilter);
}

std::string Native::Line::Aux::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-name" || name == "enable-level")
        return true;
    return false;
}

Native::Line::Aux::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Autocommand::~Autocommand()
{
}

bool Native::Line::Aux::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Aux::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Aux::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Aux::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Aux::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::Aux::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Aux::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Aux::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Aux::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Aux::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Aux::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Aux::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Aux::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::Aux::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::Aux::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::Aux::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::Aux::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::Aux::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Databits::~Databits()
{
}

bool Native::Line::Aux::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Aux::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::Aux::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::Aux::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Aux::EscapeCharacter::has_data() const
{
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::Aux::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::Aux::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::Aux::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::Aux::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Aux::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Exec::~Exec()
{
}

bool Native::Line::Aux::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Aux::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Aux::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Aux::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::Aux::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::Aux::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Aux::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::Aux::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::Aux::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::Aux::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Aux::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Aux::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::Aux::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::Aux::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::Aux::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Aux::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::Aux::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::Aux::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware" || name == "NONE" || name == "software")
        return true;
    return false;
}

Native::Line::Aux::History::History()
    :
    size{YType::uint8, "size"}
{

    yang_name = "history"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::History::~History()
{
}

bool Native::Line::Aux::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::Aux::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::Aux::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::Aux::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::Aux::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Ip::~Ip()
{
}

bool Native::Line::Aux::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Aux::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Aux::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Aux::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::Aux::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::Aux::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Aux::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::Aux::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::Aux::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::Aux::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Aux::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Ipv6::~Ipv6()
{
}

bool Native::Line::Aux::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Aux::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Aux::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Aux::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::Aux::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Aux::Ipv6::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Aux::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Aux::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Aux::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Aux::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Aux::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Aux::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Aux::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::Aux::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Logging::~Logging()
{
}

bool Native::Line::Aux::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Aux::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Aux::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Aux::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::Aux::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::Aux::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Aux::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::Aux::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::Aux::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::Aux::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{

    yang_name = "login"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Login::~Login()
{
}

bool Native::Line::Aux::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::Aux::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Line::Aux::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "local")
        return true;
    return false;
}

Native::Line::Aux::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::MediaType::~MediaType()
{
}

bool Native::Line::Aux::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::Aux::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::Aux::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::Aux::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::Aux::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{

    yang_name = "modem"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Modem::~Modem()
{
}

bool Native::Line::Aux::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::Aux::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dtr_delay.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter);
}

std::string Native::Line::Aux::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "answer-timeout" || name == "CTS-Alarm" || name == "Dialin" || name == "DTR-active" || name == "dtr-delay" || name == "Host" || name == "InOut" || name == "Printer")
        return true;
    return false;
}

Native::Line::Aux::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::NoExec::~NoExec()
{
}

bool Native::Line::Aux::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::Aux::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::Aux::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::Aux::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::Aux::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Padding::~Padding()
{
}

bool Native::Line::Aux::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Aux::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::Aux::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::Aux::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Parity::~Parity()
{
}

bool Native::Line::Aux::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Aux::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::Aux::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::Aux::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Password::~Password()
{
}

bool Native::Line::Aux::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::Aux::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Line::Aux::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
        return true;
    return false;
}

Native::Line::Aux::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Prc::~Prc()
{
}

bool Native::Line::Aux::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Aux::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::Aux::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::Aux::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Privilege::~Privilege()
{
}

bool Native::Line::Aux::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Aux::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Aux::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Aux::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::Aux::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::Aux::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Privilege::Level::~Level()
{
}

bool Native::Line::Aux::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::Aux::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::Aux::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::Aux::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{

    yang_name = "session-timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Aux::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::Aux::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(session_timeout_value.yfilter);
}

std::string Native::Line::Aux::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
}

bool Native::Line::Aux::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "session-timeout-value")
        return true;
    return false;
}

Native::Line::Aux::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Telnet::~Telnet()
{
}

bool Native::Line::Aux::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::Aux::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::Aux::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::Aux::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Timeout::~Timeout()
{
}

bool Native::Line::Aux::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::Aux::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::Aux::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::Aux::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Aux::Transport::Input>())
	,output(std::make_shared<Native::Line::Aux::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Transport::~Transport()
{
}

bool Native::Line::Aux::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Aux::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Aux::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Aux::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Aux::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Aux::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(preferred != nullptr)
    {
        children["preferred"] = preferred;
    }

    return children;
}

void Native::Line::Aux::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::Aux::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Transport::Input::~Input()
{
}

bool Native::Line::Aux::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Aux::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::Aux::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Aux::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::Aux::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Transport::Output::~Output()
{
}

bool Native::Line::Aux::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Aux::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Aux::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Aux::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::Aux::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Aux::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::Aux::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::Aux::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Aux::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Aux::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Aux::UsbInactivityTimeout::has_data() const
{
    return switch_.is_set;
}

bool Native::Line::Aux::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::Aux::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Aux::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Aux::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Line::Console::Console()
    :
    first{YType::enumeration, "first"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::Console::AccessClass>())
	,authorization(std::make_shared<Native::Line::Console::Authorization>())
	,autocommand(std::make_shared<Native::Line::Console::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::Console::Databits>())
	,escape_character(std::make_shared<Native::Line::Console::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::Console::Exec>())
	,exec_timeout(std::make_shared<Native::Line::Console::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::Console::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::Console::Ip>())
	,ipv6(std::make_shared<Native::Line::Console::Ipv6>())
	,logging(std::make_shared<Native::Line::Console::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::Console::MediaType>())
	,modem(std::make_shared<Native::Line::Console::Modem>())
	,no_exec(std::make_shared<Native::Line::Console::NoExec>())
	,padding(std::make_shared<Native::Line::Console::Padding>())
	,parity(std::make_shared<Native::Line::Console::Parity>())
	,password(std::make_shared<Native::Line::Console::Password>())
	,prc(std::make_shared<Native::Line::Console::Prc>())
	,privilege(std::make_shared<Native::Line::Console::Privilege>())
	,session_timeout(std::make_shared<Native::Line::Console::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::Console::Telnet>())
	,timeout(std::make_shared<Native::Line::Console::Timeout>())
	,transport(std::make_shared<Native::Line::Console::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::Console::UsbInactivityTimeout>())
{
    access_class->parent = this;
    authorization->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    no_exec->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    telnet->parent = this;
    timeout->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "console"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::Console::~Console()
{
}

bool Native::Line::Console::has_data() const
{
    return first.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console" <<"[first='" <<first <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Console::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Console::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Console::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Console::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Console::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Console::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Console::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Console::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Console::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Console::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Console::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Console::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Console::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Console::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Console::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Console::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Console::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Console::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Console::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Console::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Console::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Console::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Console::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Console::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Console::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Console::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Console::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class" || name == "authorization" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "no-exec" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "telnet" || name == "timeout" || name == "transport" || name == "usb-inactivity-timeout" || name == "first" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "no-activation-character" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::Console::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::AccessClass::~AccessClass()
{
}

bool Native::Line::Console::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Console::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Console::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Console::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::Console::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Console::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Console::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::Console::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::Console::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::Console::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Console::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Authorization::~Authorization()
{
}

bool Native::Line::Console::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::Console::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::Console::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Console::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::Console::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Line::Console::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Authorization::Command::~Command()
{
}

bool Native::Line::Console::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::Console::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_name.yfilter)
	|| ydk::is_set(enable_level.yfilter);
}

std::string Native::Line::Console::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
}

bool Native::Line::Console::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-name" || name == "enable-level")
        return true;
    return false;
}

Native::Line::Console::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Autocommand::~Autocommand()
{
}

bool Native::Line::Console::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Console::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Console::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Console::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Console::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Console::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::Console::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::Console::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Console::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Console::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Console::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Console::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Console::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Console::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Console::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::Console::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Console::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::Console::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::Console::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::Console::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::Console::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::Console::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::Databits::~Databits()
{
}

bool Native::Line::Console::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Console::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::Console::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::Console::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::Console::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::Console::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Console::EscapeCharacter::has_data() const
{
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::Console::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::Console::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::Console::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::Console::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

const Enum::YLeaf Native::Ipv6::Spd::Mode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_128_cmac {0, "aes-128-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_256_cmac {1, "aes-256-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_1 {2, "hmac-sha-1"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_256 {3, "hmac-sha-256"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_384 {4, "hmac-sha-384"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_512 {5, "hmac-sha-512"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::md5 {6, "md5"};

const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::L2::Vfi::Mode::autodiscovery {0, "autodiscovery"};
const Enum::YLeaf Native::L2::Vfi::Mode::manual {1, "manual"};
const Enum::YLeaf Native::L2::Vfi::Mode::point_to_point {2, "point-to-point"};

const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::L3Vpn::Encapsulation::Ip::Mpls::Mtu::max {0, "max"};

const Enum::YLeaf Native::License::Smart::enable {0, "enable"};

const Enum::YLeaf Native::License::Boot::BootModule::Module::c2900 {0, "c2900"};

const Enum::YLeaf Native::Line::Aux::First::Y_0 {0, "0"};

const Enum::YLeaf Native::Line::Aux::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Aux::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Aux::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Aux::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::Aux::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::Aux::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Aux::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Aux::EscapeCharacter::Char_::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Aux::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Aux::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Aux::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::Aux::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Aux::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Console::First::Y_0 {0, "0"};

const Enum::YLeaf Native::Line::Console::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Console::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Console::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Console::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::Console::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::Console::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Console::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Console::EscapeCharacter::Char_::NONE {2, "NONE"};


}
}

