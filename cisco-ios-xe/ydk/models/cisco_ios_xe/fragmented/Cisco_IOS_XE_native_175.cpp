
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_175.hpp"
#include "Cisco_IOS_XE_native_176.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Rip::Default_::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/connected/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::get_children() const
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

void Native::Router::Rip::Default_::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/rip-isis-redist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/rip-isis-redist/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_children() const
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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/iso-igrp/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/mobile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/mobile/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Rip::Default_::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/odr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/odr/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;
    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::has_data() const
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

bool Native::Router::Rip::Default_::Redistribute::Ospf::has_operation() const
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

std::string Native::Router::Rip::Default_::Redistribute::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "rip-metric-route-map" || name == "vrf" || name == "process-id")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::get_children() const
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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "external-routes")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Rip_::~Rip_()
{
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Rip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Rip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Rip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/rip/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Rip::Default_::Redistribute::Static_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/static/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Default_::Timers::Timers()
    :
    basic{YType::empty, "basic"}
{

    yang_name = "timers"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::Timers::~Timers()
{
}

bool Native::Router::Rip::Default_::Timers::has_data() const
{
    return basic.is_set;
}

bool Native::Router::Rip::Default_::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic.yfilter);
}

std::string Native::Router::Rip::Default_::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic.is_set || is_set(basic.yfilter)) leaf_name_data.push_back(basic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic")
    {
        basic = value;
        basic.value_namespace = name_space;
        basic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic")
    {
        basic.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic")
        return true;
    return false;
}

Native::Router::Rip::Default_::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Rip::Default_::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Rip::Default_::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Rip::Default_::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Rip::Default_::TrafficShare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Rip::Default_::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Rip::Default_::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Default_::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Default_::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Rip::Default_::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Default_::TrafficShare::Min::~Min()
{
}

bool Native::Router::Rip::Default_::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Rip::Default_::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Rip::Default_::TrafficShare::Min::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/traffic-share/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Default_::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Default_::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Default_::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Default_::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
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

Native::Router::Rip::Distance::Distance()
    :
    distance_leaf{YType::uint8, "distance-leaf"}
{

    yang_name = "distance"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Distance::~Distance()
{
}

bool Native::Router::Rip::Distance::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return distance_leaf.is_set;
}

bool Native::Router::Rip::Distance::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distance_leaf.yfilter);
}

std::string Native::Router::Rip::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance_leaf.is_set || is_set(distance_leaf.yfilter)) leaf_name_data.push_back(distance_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Distance::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf = value;
        distance_leaf.value_namespace = name_space;
        distance_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance-list" || name == "distance-leaf")
        return true;
    return false;
}

Native::Router::Rip::Distance::DistanceList::DistanceList()
    :
    number{YType::uint8, "number"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    access_list{YType::str, "access-list"}
{

    yang_name = "distance-list"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Distance::DistanceList::~DistanceList()
{
}

bool Native::Router::Rip::Distance::DistanceList::has_data() const
{
    return number.is_set
	|| ip.is_set
	|| mask.is_set
	|| access_list.is_set;
}

bool Native::Router::Rip::Distance::DistanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Router::Rip::Distance::DistanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/distance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Distance::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[number='" <<number <<"']" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Distance::DistanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Distance::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Distance::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Distance::DistanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Distance::DistanceList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Distance::DistanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip" || name == "mask" || name == "access-list")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::DistributeList()
{

    yang_name = "distribute-list"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DistributeList::~DistributeList()
{
}

bool Native::Router::Rip::DistributeList::has_data() const
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

bool Native::Router::Rip::DistributeList::has_operation() const
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

std::string Native::Router::Rip::DistributeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::DistributeList::Accesslist>();
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
        auto c = std::make_shared<Native::Router::Rip::DistributeList::AccesslistIfname>();
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
        auto c = std::make_shared<Native::Router::Rip::DistributeList::AccesslistPrefixGateway>();
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
        auto c = std::make_shared<Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname>();
        c->parent = this;
        accesslist_prefix_gateway_ifname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::get_children() const
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

void Native::Router::Rip::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesslist" || name == "accesslist-ifname" || name == "accesslist-prefix-gateway" || name == "accesslist-prefix-gateway-ifname")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::Accesslist::Accesslist()
    :
    in_out{YType::enumeration, "in-out"},
    id{YType::str, "id"}
{

    yang_name = "accesslist"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DistributeList::Accesslist::~Accesslist()
{
}

bool Native::Router::Rip::DistributeList::Accesslist::has_data() const
{
    return in_out.is_set
	|| id.is_set;
}

bool Native::Router::Rip::DistributeList::Accesslist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Router::Rip::DistributeList::Accesslist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DistributeList::Accesslist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DistributeList::Accesslist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::Accesslist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::Accesslist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::DistributeList::Accesslist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::DistributeList::Accesslist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::DistributeList::Accesslist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "id")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::AccesslistIfname::AccesslistIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    id{YType::str, "id"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DistributeList::AccesslistIfname::~AccesslistIfname()
{
}

bool Native::Router::Rip::DistributeList::AccesslistIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| id.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Rip::DistributeList::AccesslistIfname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DistributeList::AccesslistIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DistributeList::AccesslistIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::DistributeList::AccesslistIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Rip::DistributeList::AccesslistIfname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool Native::Router::Rip::DistributeList::AccesslistIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "id" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    name{YType::str, "name"},
    prefix_gateway{YType::enumeration, "prefix-gateway"}
{

    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| name.is_set
	|| prefix_gateway.is_set;
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter);
}

std::string Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::DistributeList::AccesslistPrefixGateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
        prefix_gateway.value_namespace = name_space;
        prefix_gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::DistributeList::AccesslistPrefixGateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway.yfilter = yfilter;
    }
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "name" || name == "prefix-gateway")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    name{YType::str, "name"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    vrf{YType::str, "vrf"}
{

    yang_name = "accesslist-prefix-gateway-ifname"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| name.is_set
	|| prefix_gateway.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/distribute-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
        prefix_gateway.value_namespace = name_space;
        prefix_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "interface-routing-id" || name == "isis-tag" || name == "name" || name == "prefix-gateway" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
{

    yang_name = "neighbor"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Neighbor::~Neighbor()
{
}

bool Native::Router::Rip::Neighbor::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Rip::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Router::Rip::Network::Network()
    :
    ip{YType::str, "ip"}
{

    yang_name = "network"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Network::~Network()
{
}

bool Native::Router::Rip::Network::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Rip::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Router::Rip::OffsetList::OffsetList()
    :
    in_out{YType::enumeration, "in-out"},
    id{YType::str, "id"},
    offset{YType::uint8, "offset"}
{

    yang_name = "offset-list"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::OffsetList::~OffsetList()
{
}

bool Native::Router::Rip::OffsetList::has_data() const
{
    return in_out.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Router::Rip::OffsetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Router::Rip::OffsetList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Router::Rip::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "id" || name == "offset")
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

Native::Router::Rip::Redistribute::Redistribute()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::RipMetricRouteMap>())
	,static_(nullptr) // presence node
{
    rip_metric_route_map->parent = this;

    yang_name = "redistribute"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::~Redistribute()
{
}

bool Native::Router::Rip::Redistribute::has_data() const
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
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Rip::Redistribute::has_operation() const
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
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Rip::Redistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Rip::Redistribute::Connected>();
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Rip::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Rip::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Rip::Redistribute::Odr>();
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip::Redistribute::Rip_>();
        }
        return rip;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Rip::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Rip::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "rip" || name == "rip-metric-route-map" || name == "static")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Rip::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Rip::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/connected/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Rip::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Router::Rip::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Rip::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::Redistribute::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::get_children() const
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

void Native::Router::Rip::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::Redistribute::Isis::IsisArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Isis::RipIsisRedist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/isis/rip-isis-redist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/isis/rip-isis-redist/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::IsoIgrp::get_children() const
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

void Native::Router::Rip::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/iso-igrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/iso-igrp/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Rip::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Mobile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/mobile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/mobile/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Rip::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Odr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/odr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/odr/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;
    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Rip::Redistribute::Ospf::has_data() const
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

bool Native::Router::Rip::Redistribute::Ospf::has_operation() const
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

std::string Native::Router::Rip::Redistribute::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "rip-metric-route-map" || name == "vrf" || name == "process-id")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::get_children() const
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

void Native::Router::Rip::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "external-routes")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

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

Native::Router::Rip::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Router::Rip::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Rip::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Ospf::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Ospf::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Ospf::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
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
    flush{YType::uint32, "flush"},
    holddown{YType::uint32, "holddown"},
    invalid{YType::uint32, "invalid"},
    sleep{YType::uint32, "sleep"},
    updates{YType::uint32, "updates"}
{

    yang_name = "basic"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Timers::Basic::~Basic()
{
}

bool Native::Router::Rip::Timers::Basic::has_data() const
{
    return flush.is_set
	|| holddown.is_set
	|| invalid.is_set
	|| sleep.is_set
	|| updates.is_set;
}

bool Native::Router::Rip::Timers::Basic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flush.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(sleep.yfilter)
	|| ydk::is_set(updates.yfilter);
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

    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (sleep.is_set || is_set(sleep.yfilter)) leaf_name_data.push_back(sleep.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());

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
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleep")
    {
        sleep = value;
        sleep.value_namespace = name_space;
        sleep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Timers::Basic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "sleep")
    {
        sleep.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Timers::Basic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flush" || name == "holddown" || name == "invalid" || name == "sleep" || name == "updates")
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

Native::Sampler::Sampler()
    :
    name{YType::str, "name"},
    description{YType::str, "Cisco-IOS-XE-flow:description"}
    	,
    granularity(std::make_shared<Native::Sampler::Granularity>())
	,mode(std::make_shared<Native::Sampler::Mode>())
{
    granularity->parent = this;
    mode->parent = this;

    yang_name = "sampler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Sampler::~Sampler()
{
}

bool Native::Sampler::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (granularity !=  nullptr && granularity->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (granularity !=  nullptr && granularity->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Sampler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Sampler::Granularity>();
        }
        return granularity;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Sampler::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(granularity != nullptr)
    {
        children["granularity"] = granularity;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "granularity" || name == "mode" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Sampler::Granularity::Granularity()
    :
    connection{YType::empty, "connection"},
    packet{YType::empty, "packet"}
{

    yang_name = "granularity"; yang_parent_name = "sampler"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Granularity::~Granularity()
{
}

bool Native::Sampler::Granularity::has_data() const
{
    return connection.is_set
	|| packet.is_set;
}

bool Native::Sampler::Granularity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string Native::Sampler::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:granularity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Granularity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection.is_set || is_set(connection.yfilter)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Granularity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection")
    {
        connection = value;
        connection.value_namespace = name_space;
        connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Granularity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection")
    {
        connection.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Native::Sampler::Granularity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "packet")
        return true;
    return false;
}

Native::Sampler::Mode::Mode()
    :
    deterministic(std::make_shared<Native::Sampler::Mode::Deterministic>())
	,hash(std::make_shared<Native::Sampler::Mode::Hash>())
	,random(std::make_shared<Native::Sampler::Mode::Random>())
{
    deterministic->parent = this;
    hash->parent = this;
    random->parent = this;

    yang_name = "mode"; yang_parent_name = "sampler"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::~Mode()
{
}

bool Native::Sampler::Mode::has_data() const
{
    return (deterministic !=  nullptr && deterministic->has_data())
	|| (hash !=  nullptr && hash->has_data())
	|| (random !=  nullptr && random->has_data());
}

bool Native::Sampler::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (deterministic !=  nullptr && deterministic->has_operation())
	|| (hash !=  nullptr && hash->has_operation())
	|| (random !=  nullptr && random->has_operation());
}

std::string Native::Sampler::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deterministic")
    {
        if(deterministic == nullptr)
        {
            deterministic = std::make_shared<Native::Sampler::Mode::Deterministic>();
        }
        return deterministic;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Sampler::Mode::Hash>();
        }
        return hash;
    }

    if(child_yang_name == "random")
    {
        if(random == nullptr)
        {
            random = std::make_shared<Native::Sampler::Mode::Random>();
        }
        return random;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deterministic != nullptr)
    {
        children["deterministic"] = deterministic;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    if(random != nullptr)
    {
        children["random"] = random;
    }

    return children;
}

void Native::Sampler::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Sampler::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Sampler::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic" || name == "hash" || name == "random")
        return true;
    return false;
}

Native::Sampler::Mode::Deterministic::Deterministic()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "deterministic"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::Deterministic::~Deterministic()
{
}

bool Native::Sampler::Mode::Deterministic::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Deterministic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Deterministic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deterministic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Deterministic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Deterministic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Deterministic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Deterministic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Deterministic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Deterministic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Mode::Hash::Hash()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "hash"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::Hash::~Hash()
{
}

bool Native::Sampler::Mode::Hash::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Mode::Random::Random()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "random"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Sampler::Mode::Random::~Random()
{
}

bool Native::Sampler::Mode::Random::has_data() const
{
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Random::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Random::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Random::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sampler::Mode::Random::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sampler::Mode::Random::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sampler::Mode::Random::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Random::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Random::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Scheduler::Scheduler()
    :
    allocate(std::make_shared<Native::Scheduler::Allocate>())
	,runtime(std::make_shared<Native::Scheduler::Runtime>())
{
    allocate->parent = this;
    runtime->parent = this;

    yang_name = "scheduler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::~Scheduler()
{
}

bool Native::Scheduler::has_data() const
{
    return (allocate !=  nullptr && allocate->has_data())
	|| (runtime !=  nullptr && runtime->has_data());
}

bool Native::Scheduler::has_operation() const
{
    return is_set(yfilter)
	|| (allocate !=  nullptr && allocate->has_operation())
	|| (runtime !=  nullptr && runtime->has_operation());
}

std::string Native::Scheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Scheduler::Allocate>();
        }
        return allocate;
    }

    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Native::Scheduler::Runtime>();
        }
        return runtime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    if(runtime != nullptr)
    {
        children["runtime"] = runtime;
    }

    return children;
}

void Native::Scheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Scheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Scheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocate" || name == "runtime")
        return true;
    return false;
}

Native::Scheduler::Allocate::Allocate()
    :
    interrupt_time{YType::uint16, "interrupt-time"},
    process_time{YType::uint16, "process-time"}
{

    yang_name = "allocate"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::Allocate::~Allocate()
{
}

bool Native::Scheduler::Allocate::has_data() const
{
    return interrupt_time.is_set
	|| process_time.is_set;
}

bool Native::Scheduler::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interrupt_time.yfilter)
	|| ydk::is_set(process_time.yfilter);
}

std::string Native::Scheduler::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interrupt_time.is_set || is_set(interrupt_time.yfilter)) leaf_name_data.push_back(interrupt_time.get_name_leafdata());
    if (process_time.is_set || is_set(process_time.yfilter)) leaf_name_data.push_back(process_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time = value;
        interrupt_time.value_namespace = name_space;
        interrupt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-time")
    {
        process_time = value;
        process_time.value_namespace = name_space;
        process_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time.yfilter = yfilter;
    }
    if(value_path == "process-time")
    {
        process_time.yfilter = yfilter;
    }
}

bool Native::Scheduler::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt-time" || name == "process-time")
        return true;
    return false;
}

Native::Scheduler::Runtime::Runtime()
    :
    netinput{YType::uint16, "netinput"}
{

    yang_name = "runtime"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::Runtime::~Runtime()
{
}

bool Native::Scheduler::Runtime::has_data() const
{
    return netinput.is_set;
}

bool Native::Scheduler::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netinput.yfilter);
}

std::string Native::Scheduler::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netinput.is_set || is_set(netinput.yfilter)) leaf_name_data.push_back(netinput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netinput")
    {
        netinput = value;
        netinput.value_namespace = name_space;
        netinput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netinput")
    {
        netinput.yfilter = yfilter;
    }
}

bool Native::Scheduler::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netinput")
        return true;
    return false;
}

Native::Sdm::Sdm()
    :
    prefer(nullptr) // presence node
{

    yang_name = "sdm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Sdm::~Sdm()
{
}

bool Native::Sdm::has_data() const
{
    return (prefer !=  nullptr && prefer->has_data());
}

bool Native::Sdm::has_operation() const
{
    return is_set(yfilter)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string Native::Sdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefer")
    {
        if(prefer == nullptr)
        {
            prefer = std::make_shared<Native::Sdm::Prefer>();
        }
        return prefer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefer != nullptr)
    {
        children["prefer"] = prefer;
    }

    return children;
}

void Native::Sdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Sdm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Sdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Sdm::Prefer::Prefer()
    :
    default_{YType::empty, "default"},
    qos{YType::empty, "qos"}
{

    yang_name = "prefer"; yang_parent_name = "sdm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Sdm::Prefer::~Prefer()
{
}

bool Native::Sdm::Prefer::has_data() const
{
    return default_.is_set
	|| qos.is_set;
}

bool Native::Sdm::Prefer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(qos.yfilter);
}

std::string Native::Sdm::Prefer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/sdm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sdm::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:prefer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sdm::Prefer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Sdm::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Sdm::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Sdm::Prefer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos")
    {
        qos = value;
        qos.value_namespace = name_space;
        qos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sdm::Prefer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "qos")
    {
        qos.yfilter = yfilter;
    }
}

bool Native::Sdm::Prefer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "qos")
        return true;
    return false;
}

Native::SegmentRouting::SegmentRouting()
    :
    mpls(nullptr) // presence node
{

    yang_name = "segment-routing"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::~SegmentRouting()
{
}

bool Native::SegmentRouting::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data());
}

bool Native::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SegmentRouting::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::Mpls()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    connected_prefix_sid_map(nullptr) // presence node
	,global_block(std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>())
	,mapping_server(nullptr) // presence node
	,set_attributes(nullptr) // presence node
{
    global_block->parent = this;

    yang_name = "mpls"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::~Mpls()
{
}

bool Native::SegmentRouting::Mpls::has_data() const
{
    return shutdown.is_set
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_data())
	|| (global_block !=  nullptr && global_block->has_data())
	|| (mapping_server !=  nullptr && mapping_server->has_data())
	|| (set_attributes !=  nullptr && set_attributes->has_data());
}

bool Native::SegmentRouting::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_operation())
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (mapping_server !=  nullptr && mapping_server->has_operation())
	|| (set_attributes !=  nullptr && set_attributes->has_operation());
}

std::string Native::SegmentRouting::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-segment-routing:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-prefix-sid-map")
    {
        if(connected_prefix_sid_map == nullptr)
        {
            connected_prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap>();
        }
        return connected_prefix_sid_map;
    }

    if(child_yang_name == "global-block")
    {
        if(global_block == nullptr)
        {
            global_block = std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>();
        }
        return global_block;
    }

    if(child_yang_name == "mapping-server")
    {
        if(mapping_server == nullptr)
        {
            mapping_server = std::make_shared<Native::SegmentRouting::Mpls::MappingServer>();
        }
        return mapping_server;
    }

    if(child_yang_name == "set-attributes")
    {
        if(set_attributes == nullptr)
        {
            set_attributes = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes>();
        }
        return set_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_prefix_sid_map != nullptr)
    {
        children["connected-prefix-sid-map"] = connected_prefix_sid_map;
    }

    if(global_block != nullptr)
    {
        children["global-block"] = global_block;
    }

    if(mapping_server != nullptr)
    {
        children["mapping-server"] = mapping_server;
    }

    if(set_attributes != nullptr)
    {
        children["set-attributes"] = set_attributes;
    }

    return children;
}

void Native::SegmentRouting::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-prefix-sid-map" || name == "global-block" || name == "mapping-server" || name == "set-attributes" || name == "shutdown")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::ConnectedPrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "connected-prefix-sid-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::~ConnectedPrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "connected-prefix-sid-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
{
    absolute->parent = this;
    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
{
    absolute->parent = this;
    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach" || name == "range" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::GlobalBlock::GlobalBlock()
    :
    range_end{YType::uint32, "range-end"},
    range_start{YType::uint32, "range-start"}
{

    yang_name = "global-block"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::GlobalBlock::~GlobalBlock()
{
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_data() const
{
    return range_end.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_end.yfilter)
	|| ydk::is_set(range_start.yfilter);
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::GlobalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-end" || name == "range-start")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::MappingServer()
    :
    prefix_sid_map(nullptr) // presence node
{

    yang_name = "mapping-server"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::~MappingServer()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_data() const
{
    return (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::PrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "prefix-sid-map"; yang_parent_name = "mapping-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "prefix-sid-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
{
    absolute->parent = this;
    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "index" || name == "ipprefix")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::DistributeList::AccesslistPrefixGateway::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::DistributeList::AccesslistPrefixGateway::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::DistributeList::AccesslistPrefixGateway::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};


}
}

