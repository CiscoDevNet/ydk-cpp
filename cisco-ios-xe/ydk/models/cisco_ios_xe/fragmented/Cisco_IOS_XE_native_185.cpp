
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_185.hpp"
#include "Cisco_IOS_XE_native_186.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Rip::Redistribute::Static_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/static/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Rip_::~Rip_()
{
}

bool Native::Router::Rip::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Rip_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Rip_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Rip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Rip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Rip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Rip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/rip/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Timers::Timers()
    :
    basic(std::make_shared<Native::Router::Rip::Timers::Basic>())
{
    basic->parent = this;

    yang_name = "timers"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Timers::~Timers()
{
}

bool Native::Router::Rip::Timers::has_data() const
{
    return (basic !=  nullptr && basic->has_data());
}

bool Native::Router::Rip::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (basic !=  nullptr && basic->has_operation());
}

std::string Native::Router::Rip::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Router::Rip::Timers::Basic>();
        }
        return basic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    return children;
}

void Native::Router::Rip::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic")
        return true;
    return false;
}

Native::Router::Rip::Timers::Basic::Basic()
    :
    updates{YType::uint32, "updates"},
    invalid{YType::uint32, "invalid"},
    holddown{YType::uint32, "holddown"},
    flush{YType::uint32, "flush"},
    sleep{YType::uint32, "sleep"}
{

    yang_name = "basic"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Timers::Basic::~Basic()
{
}

bool Native::Router::Rip::Timers::Basic::has_data() const
{
    return updates.is_set
	|| invalid.is_set
	|| holddown.is_set
	|| flush.is_set
	|| sleep.is_set;
}

bool Native::Router::Rip::Timers::Basic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(updates.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(flush.yfilter)
	|| ydk::is_set(sleep.yfilter);
}

std::string Native::Router::Rip::Timers::Basic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Timers::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Timers::Basic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (sleep.is_set || is_set(sleep.yfilter)) leaf_name_data.push_back(sleep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Timers::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Timers::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Timers::Basic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleep")
    {
        sleep = value;
        sleep.value_namespace = name_space;
        sleep.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Timers::Basic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
    if(value_path == "sleep")
    {
        sleep.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Timers::Basic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "updates" || name == "invalid" || name == "holddown" || name == "flush" || name == "sleep")
        return true;
    return false;
}

Native::Router::Rip::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Rip::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Rip::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Rip::PassiveInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::Rip::Disable::Disable()
{

    yang_name = "disable"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Disable::~Disable()
{
}

bool Native::Router::Rip::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Rip::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Rip::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        for(auto const & c : passive_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::Rip::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Rip::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Rip::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Rip::Disable::PassiveInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Rip::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Rip::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Rip::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Rip::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Rip::TrafficShare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Rip::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Rip::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Rip::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::TrafficShare::Min::~Min()
{
}

bool Native::Router::Rip::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Rip::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Rip::TrafficShare::Min::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/traffic-share/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Rip::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address-family"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Rip::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Rip::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Rip::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Ipv4()
    :
    unicast(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast>())
{
    unicast->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (unicast !=  nullptr && unicast->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast>();
        }
        return unicast;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Unicast()
    :
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    validate_update_source{YType::boolean, "validate-update-source"},
    default_metric{YType::uint32, "default-metric"},
    version{YType::uint8, "version"},
    flash_update_threshold{YType::uint8, "flash-update-threshold"},
    input_queue{YType::uint16, "input-queue"},
    output_delay{YType::uint8, "output-delay"}
    	,
    default_information(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance>())
	,distribute_list(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList>())
	,redistribute(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute>())
	,timers(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers>())
	,passive_interface(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface>())
	,disable(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable>())
	,traffic_share(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare>())
{
    default_information->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    redistribute->parent = this;
    timers->parent = this;
    passive_interface->parent = this;
    disable->parent = this;
    traffic_share->parent = this;

    yang_name = "unicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::~Unicast()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<offset_list.size(); index++)
    {
        if(offset_list[index]->has_data())
            return true;
    }
    return auto_summary.is_set
	|| maximum_paths.is_set
	|| validate_update_source.is_set
	|| default_metric.is_set
	|| version.is_set
	|| flash_update_threshold.is_set
	|| input_queue.is_set
	|| output_delay.is_set
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<offset_list.size(); index++)
    {
        if(offset_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(validate_update_source.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(flash_update_threshold.yfilter)
	|| ydk::is_set(input_queue.yfilter)
	|| ydk::is_set(output_delay.yfilter)
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (validate_update_source.is_set || is_set(validate_update_source.yfilter)) leaf_name_data.push_back(validate_update_source.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (flash_update_threshold.is_set || is_set(flash_update_threshold.yfilter)) leaf_name_data.push_back(flash_update_threshold.get_name_leafdata());
    if (input_queue.is_set || is_set(input_queue.yfilter)) leaf_name_data.push_back(input_queue.get_name_leafdata());
    if (output_delay.is_set || is_set(output_delay.yfilter)) leaf_name_data.push_back(output_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "offset-list")
    {
        for(auto const & c : offset_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList>();
        c->parent = this;
        offset_list.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    for (auto const & c : offset_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate-update-source")
    {
        validate_update_source = value;
        validate_update_source.value_namespace = name_space;
        validate_update_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-update-threshold")
    {
        flash_update_threshold = value;
        flash_update_threshold.value_namespace = name_space;
        flash_update_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue")
    {
        input_queue = value;
        input_queue.value_namespace = name_space;
        input_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-delay")
    {
        output_delay = value;
        output_delay.value_namespace = name_space;
        output_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "validate-update-source")
    {
        validate_update_source.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "flash-update-threshold")
    {
        flash_update_threshold.yfilter = yfilter;
    }
    if(value_path == "input-queue")
    {
        input_queue.yfilter = yfilter;
    }
    if(value_path == "output-delay")
    {
        output_delay.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "network" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "offset-list" || name == "redistribute" || name == "timers" || name == "passive-interface" || name == "disable" || name == "traffic-share" || name == "auto-summary" || name == "maximum-paths" || name == "validate-update-source" || name == "default-metric" || name == "version" || name == "flash-update-threshold" || name == "input-queue" || name == "output-delay")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
{

    yang_name = "neighbor"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::~Neighbor()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::Network()
    :
    ip{YType::str, "ip"}
{

    yang_name = "network"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::~Network()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/default-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::Distance()
    :
    distance_leaf{YType::uint8, "distance-leaf"}
{

    yang_name = "distance"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::~Distance()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return distance_leaf.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distance_leaf.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance_leaf.is_set || is_set(distance_leaf.yfilter)) leaf_name_data.push_back(distance_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance-list")
    {
        for(auto const & c : distance_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf = value;
        distance_leaf.value_namespace = name_space;
        distance_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance-list" || name == "distance-leaf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::DistanceList()
    :
    number{YType::uint8, "number"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
{

    yang_name = "distance-list"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::~DistanceList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::has_data() const
{
    return number.is_set
	|| ip.is_set
	|| mask.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/distance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[number='" <<number <<"']" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::DistributeList()
{

    yang_name = "distribute-list"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::~DistributeList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::has_data() const
{
    for (std::size_t index=0; index<accesslist.size(); index++)
    {
        if(accesslist[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_ifname.size(); index++)
    {
        if(accesslist_ifname[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway.size(); index++)
    {
        if(accesslist_prefix_gateway[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway_ifname.size(); index++)
    {
        if(accesslist_prefix_gateway_ifname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<accesslist.size(); index++)
    {
        if(accesslist[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_ifname.size(); index++)
    {
        if(accesslist_ifname[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway.size(); index++)
    {
        if(accesslist_prefix_gateway[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway_ifname.size(); index++)
    {
        if(accesslist_prefix_gateway_ifname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesslist")
    {
        for(auto const & c : accesslist)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist>();
        c->parent = this;
        accesslist.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-ifname")
    {
        for(auto const & c : accesslist_ifname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname>();
        c->parent = this;
        accesslist_ifname.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway")
    {
        for(auto const & c : accesslist_prefix_gateway)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway>();
        c->parent = this;
        accesslist_prefix_gateway.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway-ifname")
    {
        for(auto const & c : accesslist_prefix_gateway_ifname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname>();
        c->parent = this;
        accesslist_prefix_gateway_ifname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : accesslist)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_ifname)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_prefix_gateway)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_prefix_gateway_ifname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesslist" || name == "accesslist-ifname" || name == "accesslist-prefix-gateway" || name == "accesslist-prefix-gateway-ifname")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::Accesslist()
    :
    in_out{YType::enumeration, "in-out"}
{

    yang_name = "accesslist"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::~Accesslist()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::has_data() const
{
    return in_out.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::AccesslistIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::~AccesslistIfname()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
        interface_routing_id.value_namespace = name_space;
        interface_routing_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
        isis_tag.value_namespace = name_space;
        isis_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id.yfilter = yfilter;
    }
    if(value_path == "isis-tag")
    {
        isis_tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    name{YType::str, "name"}
{

    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| prefix_gateway.is_set
	|| name.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
        prefix_gateway.value_namespace = name_space;
        prefix_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix-gateway" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    name{YType::str, "name"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-prefix-gateway-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| prefix_gateway.is_set
	|| name.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
        prefix_gateway.value_namespace = name_space;
        prefix_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
        interface_routing_id.value_namespace = name_space;
        interface_routing_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
        isis_tag.value_namespace = name_space;
        isis_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id.yfilter = yfilter;
    }
    if(value_path == "isis-tag")
    {
        isis_tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "prefix-gateway" || name == "name" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::OffsetList()
    :
    in_out{YType::enumeration, "in-out"},
    offset{YType::uint8, "offset"}
{

    yang_name = "offset-list"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::~OffsetList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::has_data() const
{
    return in_out.is_set
	|| offset.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "offset")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Redistribute()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,rip(nullptr) // presence node
{
    rip_metric_route_map->parent = this;

    yang_name = "redistribute"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::~Redistribute()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::has_data() const
{
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
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::has_operation() const
{
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
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected>();
        }
        return connected;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr>();
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
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

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "connected" || name == "bgp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/connected/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/isis/rip-isis-redist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/isis/rip-isis-redist/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isoigrp-list")
    {
        for(auto const & c : isoigrp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isoigrp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/iso-igrp/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/mobile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/mobile/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/odr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/odr/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;
    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return process_id.is_set
	|| (match !=  nullptr && match->has_data())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "match" || name == "rip-metric-route-map" || name == "process-id")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "external-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/static/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::~Rip_()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/redistribute/rip/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Timers()
    :
    basic(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic>())
{
    basic->parent = this;

    yang_name = "timers"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::~Timers()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::has_data() const
{
    return (basic !=  nullptr && basic->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (basic !=  nullptr && basic->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic>();
        }
        return basic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::Basic()
    :
    updates{YType::uint32, "updates"},
    invalid{YType::uint32, "invalid"},
    holddown{YType::uint32, "holddown"},
    flush{YType::uint32, "flush"},
    sleep{YType::uint32, "sleep"}
{

    yang_name = "basic"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::~Basic()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::has_data() const
{
    return updates.is_set
	|| invalid.is_set
	|| holddown.is_set
	|| flush.is_set
	|| sleep.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(updates.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(flush.yfilter)
	|| ydk::is_set(sleep.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (sleep.is_set || is_set(sleep.yfilter)) leaf_name_data.push_back(sleep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleep")
    {
        sleep = value;
        sleep.value_namespace = name_space;
        sleep.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
    if(value_path == "sleep")
    {
        sleep.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "updates" || name == "invalid" || name == "holddown" || name == "flush" || name == "sleep")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::Disable()
{

    yang_name = "disable"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::~Disable()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        for(auto const & c : passive_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::~Min()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/unicast/traffic-share/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Vrf()
    :
    name{YType::str, "name"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    validate_update_source{YType::boolean, "validate-update-source"},
    default_metric{YType::uint32, "default-metric"},
    version{YType::uint8, "version"}
    	,
    default_information(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance>())
	,distribute_list(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList>())
	,redistribute(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute>())
	,timers(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers>())
{
    default_information->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    redistribute->parent = this;
    timers->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::~Vrf()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<offset_list.size(); index++)
    {
        if(offset_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| validate_update_source.is_set
	|| default_metric.is_set
	|| version.is_set
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<offset_list.size(); index++)
    {
        if(offset_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(validate_update_source.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (validate_update_source.is_set || is_set(validate_update_source.yfilter)) leaf_name_data.push_back(validate_update_source.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "offset-list")
    {
        for(auto const & c : offset_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList>();
        c->parent = this;
        offset_list.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    for (auto const & c : offset_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate-update-source")
    {
        validate_update_source = value;
        validate_update_source.value_namespace = name_space;
        validate_update_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "validate-update-source")
    {
        validate_update_source.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "network" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "offset-list" || name == "redistribute" || name == "timers" || name == "name" || name == "auto-summary" || name == "maximum-paths" || name == "validate-update-source" || name == "default-metric" || name == "version")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
{

    yang_name = "neighbor"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::~Neighbor()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::Network()
    :
    ip{YType::str, "ip"}
{

    yang_name = "network"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::~Network()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::Distance()
    :
    distance_leaf{YType::uint8, "distance-leaf"}
{

    yang_name = "distance"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::~Distance()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return distance_leaf.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distance_leaf.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance_leaf.is_set || is_set(distance_leaf.yfilter)) leaf_name_data.push_back(distance_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance-list")
    {
        for(auto const & c : distance_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf = value;
        distance_leaf.value_namespace = name_space;
        distance_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance-list" || name == "distance-leaf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::DistanceList()
    :
    number{YType::uint8, "number"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
{

    yang_name = "distance-list"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::~DistanceList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::has_data() const
{
    return number.is_set
	|| ip.is_set
	|| mask.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[number='" <<number <<"']" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::DistributeList()
{

    yang_name = "distribute-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::~DistributeList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::has_data() const
{
    for (std::size_t index=0; index<accesslist.size(); index++)
    {
        if(accesslist[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_ifname.size(); index++)
    {
        if(accesslist_ifname[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway.size(); index++)
    {
        if(accesslist_prefix_gateway[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway_ifname.size(); index++)
    {
        if(accesslist_prefix_gateway_ifname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<accesslist.size(); index++)
    {
        if(accesslist[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_ifname.size(); index++)
    {
        if(accesslist_ifname[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway.size(); index++)
    {
        if(accesslist_prefix_gateway[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway_ifname.size(); index++)
    {
        if(accesslist_prefix_gateway_ifname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesslist")
    {
        for(auto const & c : accesslist)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist>();
        c->parent = this;
        accesslist.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-ifname")
    {
        for(auto const & c : accesslist_ifname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname>();
        c->parent = this;
        accesslist_ifname.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway")
    {
        for(auto const & c : accesslist_prefix_gateway)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway>();
        c->parent = this;
        accesslist_prefix_gateway.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway-ifname")
    {
        for(auto const & c : accesslist_prefix_gateway_ifname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname>();
        c->parent = this;
        accesslist_prefix_gateway_ifname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : accesslist)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_ifname)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_prefix_gateway)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_prefix_gateway_ifname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesslist" || name == "accesslist-ifname" || name == "accesslist-prefix-gateway" || name == "accesslist-prefix-gateway-ifname")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::Accesslist()
    :
    in_out{YType::enumeration, "in-out"}
{

    yang_name = "accesslist"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::~Accesslist()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::has_data() const
{
    return in_out.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::AccesslistIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::~AccesslistIfname()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
        interface_routing_id.value_namespace = name_space;
        interface_routing_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
        isis_tag.value_namespace = name_space;
        isis_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id.yfilter = yfilter;
    }
    if(value_path == "isis-tag")
    {
        isis_tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    name{YType::str, "name"}
{

    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| prefix_gateway.is_set
	|| name.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
        prefix_gateway.value_namespace = name_space;
        prefix_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix-gateway" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    name{YType::str, "name"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-prefix-gateway-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| prefix_gateway.is_set
	|| name.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
        prefix_gateway.value_namespace = name_space;
        prefix_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
        interface_routing_id.value_namespace = name_space;
        interface_routing_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
        isis_tag.value_namespace = name_space;
        isis_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id.yfilter = yfilter;
    }
    if(value_path == "isis-tag")
    {
        isis_tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "prefix-gateway" || name == "name" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::OffsetList()
    :
    in_out{YType::enumeration, "in-out"},
    offset{YType::uint8, "offset"}
{

    yang_name = "offset-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::~OffsetList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::has_data() const
{
    return in_out.is_set
	|| offset.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "offset")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Redistribute()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,rip(nullptr) // presence node
{
    rip_metric_route_map->parent = this;

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::has_data() const
{
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
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::has_operation() const
{
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
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected>();
        }
        return connected;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr>();
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
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

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "connected" || name == "bgp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isoigrp-list")
    {
        for(auto const & c : isoigrp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isoigrp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;
    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return process_id.is_set
	|| (match !=  nullptr && match->has_data())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "match" || name == "rip-metric-route-map" || name == "process-id")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::Vrf_()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::~Vrf_()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::has_data() const
{
    return name.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "external-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};


}
}

