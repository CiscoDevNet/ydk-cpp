
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_149.hpp"
#include "Cisco_IOS_XE_native_150.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match";
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
    return is_set(operation)
	|| is_set(nssa_external_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::~Rip_()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Timers()
    :
    basic(std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic>())
{
    basic->parent = this;

    yang_name = "timers"; yang_parent_name = "vrf";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::~Timers()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::has_data() const
{
    return (basic !=  nullptr && basic->has_data());
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::has_operation() const
{
    return is_set(operation)
	|| (basic !=  nullptr && basic->has_operation());
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic>();
        }
        return basic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::Basic()
    :
    flush{YType::uint32, "flush"},
    holddown{YType::uint32, "holddown"},
    invalid{YType::uint32, "invalid"},
    sleep{YType::uint32, "sleep"},
    updates{YType::uint32, "updates"}
{
    yang_name = "basic"; yang_parent_name = "timers";
}

Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::~Basic()
{
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::has_data() const
{
    return flush.is_set
	|| holddown.is_set
	|| invalid.is_set
	|| sleep.is_set
	|| updates.is_set;
}

bool Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::has_operation() const
{
    return is_set(operation)
	|| is_set(flush.operation)
	|| is_set(holddown.operation)
	|| is_set(invalid.operation)
	|| is_set(sleep.operation)
	|| is_set(updates.operation);
}

std::string Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Basic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.operation)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.operation)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (sleep.is_set || is_set(sleep.operation)) leaf_name_data.push_back(sleep.get_name_leafdata());
    if (updates.is_set || is_set(updates.operation)) leaf_name_data.push_back(updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flush")
    {
        flush = value;
    }
    if(value_path == "holddown")
    {
        holddown = value;
    }
    if(value_path == "invalid")
    {
        invalid = value;
    }
    if(value_path == "sleep")
    {
        sleep = value;
    }
    if(value_path == "updates")
    {
        updates = value;
    }
}

Native::Router::Rip::Default_::Default_()
    :
    auto_summary{YType::empty, "auto-summary"},
    default_metric{YType::empty, "default-metric"},
    flash_update_threshold{YType::empty, "flash-update-threshold"},
    input_queue{YType::empty, "input-queue"},
    maximum_paths{YType::uint8, "maximum-paths"},
    output_delay{YType::empty, "output-delay"},
    validate_update_source{YType::boolean, "validate-update-source"},
    version{YType::empty, "version"}
    	,
    address_family(std::make_shared<Native::Router::Rip::Default_::AddressFamily>())
	,default_information(std::make_shared<Native::Router::Rip::Default_::DefaultInformation>())
	,disable(std::make_shared<Native::Router::Rip::Default_::Disable>())
	,distance(std::make_shared<Native::Router::Rip::Default_::Distance>())
	,distribute_list(std::make_shared<Native::Router::Rip::Default_::DistributeList>())
	,passive_interface(std::make_shared<Native::Router::Rip::Default_::PassiveInterface>())
	,redistribute(std::make_shared<Native::Router::Rip::Default_::Redistribute>())
	,timers(std::make_shared<Native::Router::Rip::Default_::Timers>())
	,traffic_share(std::make_shared<Native::Router::Rip::Default_::TrafficShare>())
{
    address_family->parent = this;

    default_information->parent = this;

    disable->parent = this;

    distance->parent = this;

    distribute_list->parent = this;

    passive_interface->parent = this;

    redistribute->parent = this;

    timers->parent = this;

    traffic_share->parent = this;

    yang_name = "default"; yang_parent_name = "rip";
}

Native::Router::Rip::Default_::~Default_()
{
}

bool Native::Router::Rip::Default_::has_data() const
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
	|| default_metric.is_set
	|| flash_update_threshold.is_set
	|| input_queue.is_set
	|| maximum_paths.is_set
	|| output_delay.is_set
	|| validate_update_source.is_set
	|| version.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Rip::Default_::has_operation() const
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
    return is_set(operation)
	|| is_set(auto_summary.operation)
	|| is_set(default_metric.operation)
	|| is_set(flash_update_threshold.operation)
	|| is_set(input_queue.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(output_delay.operation)
	|| is_set(validate_update_source.operation)
	|| is_set(version.operation)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Rip::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_summary.is_set || is_set(auto_summary.operation)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (flash_update_threshold.is_set || is_set(flash_update_threshold.operation)) leaf_name_data.push_back(flash_update_threshold.get_name_leafdata());
    if (input_queue.is_set || is_set(input_queue.operation)) leaf_name_data.push_back(input_queue.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (output_delay.is_set || is_set(output_delay.operation)) leaf_name_data.push_back(output_delay.get_name_leafdata());
    if (validate_update_source.is_set || is_set(validate_update_source.operation)) leaf_name_data.push_back(validate_update_source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Rip::Default_::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Rip::Default_::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Rip::Default_::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Rip::Default_::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Rip::Default_::DistributeList>();
        }
        return distribute_list;
    }

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
        auto c = std::make_shared<Native::Router::Rip::Default_::Neighbor>();
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Rip::Default_::OffsetList>();
        c->parent = this;
        offset_list.push_back(c);
        return c;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Rip::Default_::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Rip::Default_::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Rip::Default_::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Rip::Default_::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : offset_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    return children;
}

void Native::Router::Rip::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-summary")
    {
        auto_summary = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "flash-update-threshold")
    {
        flash_update_threshold = value;
    }
    if(value_path == "input-queue")
    {
        input_queue = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "output-delay")
    {
        output_delay = value;
    }
    if(value_path == "validate-update-source")
    {
        validate_update_source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Router::Rip::Default_::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
{
    yang_name = "address-family"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Rip::Default_::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Rip::Default_::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Rip::Default_::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Rip::Default_::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Router::Rip::Default_::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::AddressFamily::Ipv4::Ipv4()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::Router::Rip::Default_::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::Rip::Default_::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return unicast.is_set;
}

bool Native::Router::Rip::Default_::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Router::Rip::Default_::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Default_::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ipv4";
}

Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::~Vrf()
{
}

bool Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Rip::Default_::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
{
    yang_name = "neighbor"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::Neighbor::~Neighbor()
{
}

bool Native::Router::Rip::Default_::Neighbor::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::Default_::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Router::Rip::Default_::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Router::Rip::Default_::Network::Network()
    :
    ip{YType::str, "ip"}
{
    yang_name = "network"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::Network::~Network()
{
}

bool Native::Router::Rip::Default_::Network::has_data() const
{
    return ip.is_set;
}

bool Native::Router::Rip::Default_::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Router::Rip::Default_::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Router::Rip::Default_::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{
    yang_name = "default-information"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Rip::Default_::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Rip::Default_::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(originate.operation);
}

std::string Native::Router::Rip::Default_::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.operation)) leaf_name_data.push_back(originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "originate")
    {
        originate = value;
    }
}

Native::Router::Rip::Default_::Distance::Distance()
    :
    distance_leaf{YType::uint8, "distance-leaf"}
{
    yang_name = "distance"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::Distance::~Distance()
{
}

bool Native::Router::Rip::Default_::Distance::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return distance_leaf.is_set;
}

bool Native::Router::Rip::Default_::Distance::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(distance_leaf.operation);
}

std::string Native::Router::Rip::Default_::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance_leaf.is_set || is_set(distance_leaf.operation)) leaf_name_data.push_back(distance_leaf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Distance::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Default_::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance-leaf")
    {
        distance_leaf = value;
    }
}

Native::Router::Rip::Default_::Distance::DistanceList::DistanceList()
    :
    number{YType::uint8, "number"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    access_list{YType::str, "access-list"}
{
    yang_name = "distance-list"; yang_parent_name = "distance";
}

Native::Router::Rip::Default_::Distance::DistanceList::~DistanceList()
{
}

bool Native::Router::Rip::Default_::Distance::DistanceList::has_data() const
{
    return number.is_set
	|| ip.is_set
	|| mask.is_set
	|| access_list.is_set;
}

bool Native::Router::Rip::Default_::Distance::DistanceList::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| is_set(access_list.operation);
}

std::string Native::Router::Rip::Default_::Distance::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[number='" <<number <<"']" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Distance::DistanceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/distance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Distance::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Distance::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Distance::DistanceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Router::Rip::Default_::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::DistributeList::~DistributeList()
{
}

bool Native::Router::Rip::Default_::DistributeList::has_data() const
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

bool Native::Router::Rip::Default_::DistributeList::has_operation() const
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
    return is_set(operation);
}

std::string Native::Router::Rip::Default_::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::DistributeList::Accesslist>();
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
        auto c = std::make_shared<Native::Router::Rip::Default_::DistributeList::AccesslistIfname>();
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
        auto c = std::make_shared<Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway>();
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
        auto c = std::make_shared<Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname>();
        c->parent = this;
        accesslist_prefix_gateway_ifname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::DistributeList::get_children() const
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

void Native::Router::Rip::Default_::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::DistributeList::Accesslist::Accesslist()
    :
    in_out{YType::enumeration, "in-out"},
    id{YType::str, "id"}
{
    yang_name = "accesslist"; yang_parent_name = "distribute-list";
}

Native::Router::Rip::Default_::DistributeList::Accesslist::~Accesslist()
{
}

bool Native::Router::Rip::Default_::DistributeList::Accesslist::has_data() const
{
    return in_out.is_set
	|| id.is_set;
}

bool Native::Router::Rip::Default_::DistributeList::Accesslist::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(id.operation);
}

std::string Native::Router::Rip::Default_::DistributeList::Accesslist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist" <<"[in-out='" <<in_out <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::DistributeList::Accesslist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/distribute-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::DistributeList::Accesslist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::DistributeList::Accesslist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::DistributeList::Accesslist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Rip::Default_::DistributeList::AccesslistIfname::AccesslistIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    id{YType::str, "id"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{
    yang_name = "accesslist-ifname"; yang_parent_name = "distribute-list";
}

Native::Router::Rip::Default_::DistributeList::AccesslistIfname::~AccesslistIfname()
{
}

bool Native::Router::Rip::Default_::DistributeList::AccesslistIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| id.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::Default_::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(interface.operation)
	|| is_set(id.operation)
	|| is_set(interface_routing_id.operation)
	|| is_set(isis_tag.operation)
	|| is_set(vrf.operation);
}

std::string Native::Router::Rip::Default_::DistributeList::AccesslistIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::DistributeList::AccesslistIfname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/distribute-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.operation)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.operation)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::DistributeList::AccesslistIfname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    name{YType::str, "name"},
    prefix_gateway{YType::enumeration, "prefix-gateway"}
{
    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list";
}

Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| name.is_set
	|| prefix_gateway.is_set;
}

bool Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(name.operation)
	|| is_set(prefix_gateway.operation);
}

std::string Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway" <<"[in-out='" <<in_out <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/distribute-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.operation)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
    }
}

Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    name{YType::str, "name"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    vrf{YType::str, "vrf"}
{
    yang_name = "accesslist-prefix-gateway-ifname"; yang_parent_name = "distribute-list";
}

Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| name.is_set
	|| prefix_gateway.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(interface.operation)
	|| is_set(interface_routing_id.operation)
	|| is_set(isis_tag.operation)
	|| is_set(name.operation)
	|| is_set(prefix_gateway.operation)
	|| is_set(vrf.operation);
}

std::string Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/distribute-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.operation)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.operation)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.operation)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Rip::Default_::OffsetList::OffsetList()
    :
    in_out{YType::enumeration, "in-out"},
    id{YType::str, "id"},
    offset{YType::uint8, "offset"}
{
    yang_name = "offset-list"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::OffsetList::~OffsetList()
{
}

bool Native::Router::Rip::Default_::OffsetList::has_data() const
{
    return in_out.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Router::Rip::Default_::OffsetList::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(id.operation)
	|| is_set(offset.operation);
}

std::string Native::Router::Rip::Default_::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list" <<"[in-out='" <<in_out <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::OffsetList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::OffsetList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
}

Native::Router::Rip::Default_::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{
    yang_name = "passive-interface"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Rip::Default_::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Rip::Default_::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Rip::Default_::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Rip::Default_::Disable::Disable()
{
    yang_name = "disable"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::Disable::~Disable()
{
}

bool Native::Router::Rip::Default_::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Rip::Default_::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Rip::Default_::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Rip::Default_::Disable::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{
    yang_name = "passive-interface"; yang_parent_name = "disable";
}

Native::Router::Rip::Default_::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Rip::Default_::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Rip::Default_::Disable::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Rip::Default_::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Disable::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/disable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Rip::Default_::Disable::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Redistribute()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    yang_name = "redistribute"; yang_parent_name = "default";
}

Native::Router::Rip::Default_::Redistribute::~Redistribute()
{
}

bool Native::Router::Rip::Default_::Redistribute::has_data() const
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
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::has_operation() const
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
    return is_set(operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected>();
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr>();
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
        auto c = std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::get_children() const
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

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/connected/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/connected/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Rip::Default_::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Rip::Default_::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp";
}

Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area";
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
    return is_set(operation)
	|| is_set(isis_level_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipIsisRedist' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis";
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
    return is_set(operation)
	|| is_set(isis_level_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/rip-isis-redist/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/isis/rip-isis-redist/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp";
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
    return is_set(operation)
	|| is_set(iso_area_tag.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/iso-igrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.operation)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
    }
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/iso-igrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/iso-igrp/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/mobile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/mobile/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/odr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/odr/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
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

    yang_name = "ospf"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ospf";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
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
    return is_set(operation)
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

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match";
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
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match";
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
    return is_set(operation)
	|| is_set(nssa_external_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/static/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute";
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
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Rip_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Rip_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip";
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
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
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
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/redistribute/rip/rip-metric-route-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Router::Rip::Default_::Timers::Timers()
    :
    basic{YType::empty, "basic"}
{
    yang_name = "timers"; yang_parent_name = "default";
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
    return is_set(operation)
	|| is_set(basic.operation);
}

std::string Native::Router::Rip::Default_::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic.is_set || is_set(basic.operation)) leaf_name_data.push_back(basic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "basic")
    {
        basic = value;
    }
}

Native::Router::Rip::Default_::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Rip::Default_::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "default";
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
    return is_set(operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Rip::Default_::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::TrafficShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::TrafficShare::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Rip::Default_::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{
    yang_name = "min"; yang_parent_name = "traffic-share";
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
    return is_set(operation)
	|| is_set(across_interfaces.operation);
}

std::string Native::Router::Rip::Default_::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Router::Rip::Default_::TrafficShare::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default/traffic-share/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.operation)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Router::Rip::Default_::TrafficShare::Min::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
    }
}

Native::ServiceChain::ServiceChain()
    :
    service_function_forwarder(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder>())
{
    service_function_forwarder->parent = this;

    yang_name = "service-chain"; yang_parent_name = "native";
}

Native::ServiceChain::~ServiceChain()
{
}

bool Native::ServiceChain::has_data() const
{
    for (std::size_t index=0; index<service_function.size(); index++)
    {
        if(service_function[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_path.size(); index++)
    {
        if(service_path[index]->has_data())
            return true;
    }
    return (service_function_forwarder !=  nullptr && service_function_forwarder->has_data());
}

bool Native::ServiceChain::has_operation() const
{
    for (std::size_t index=0; index<service_function.size(); index++)
    {
        if(service_function[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_path.size(); index++)
    {
        if(service_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_operation());
}

std::string Native::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-function")
    {
        for(auto const & c : service_function)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServiceFunction>();
        c->parent = this;
        service_function.push_back(c);
        return c;
    }

    if(child_yang_name == "service-function-forwarder")
    {
        if(service_function_forwarder == nullptr)
        {
            service_function_forwarder = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder>();
        }
        return service_function_forwarder;
    }

    if(child_yang_name == "service-path")
    {
        for(auto const & c : service_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServicePath>();
        c->parent = this;
        service_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_function)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_function_forwarder != nullptr)
    {
        children["service-function-forwarder"] = service_function_forwarder;
    }

    for (auto const & c : service_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceChain::set_value(const std::string & value_path, std::string value)
{
}

Native::ServiceChain::ServiceFunction::ServiceFunction()
    :
    name{YType::str, "name"}
    	,
    config_service_chain_sf_mode(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode>())
{
    config_service_chain_sf_mode->parent = this;

    yang_name = "service-function"; yang_parent_name = "service-chain";
}

Native::ServiceChain::ServiceFunction::~ServiceFunction()
{
}

bool Native::ServiceChain::ServiceFunction::has_data() const
{
    return name.is_set
	|| (config_service_chain_sf_mode !=  nullptr && config_service_chain_sf_mode->has_data());
}

bool Native::ServiceChain::ServiceFunction::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config_service_chain_sf_mode !=  nullptr && config_service_chain_sf_mode->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-function" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-service-chain-sf-mode")
    {
        if(config_service_chain_sf_mode == nullptr)
        {
            config_service_chain_sf_mode = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode>();
        }
        return config_service_chain_sf_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_service_chain_sf_mode != nullptr)
    {
        children["config-service-chain-sf-mode"] = config_service_chain_sf_mode;
    }

    return children;
}

void Native::ServiceChain::ServiceFunction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::ConfigServiceChainSfMode()
    :
    description{YType::str, "description"}
    	,
    encapsulation(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation>())
	,ip(std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip>())
{
    encapsulation->parent = this;

    ip->parent = this;

    yang_name = "config-service-chain-sf-mode"; yang_parent_name = "service-function";
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::~ConfigServiceChainSfMode()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_data() const
{
    return description.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-service-chain-sf-mode";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigServiceChainSfMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Encapsulation()
    :
    none{YType::empty, "none"}
    	,
    gre(nullptr) // presence node
{
    yang_name = "encapsulation"; yang_parent_name = "config-service-chain-sf-mode";
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::~Encapsulation()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_data() const
{
    return none.is_set
	|| (gre !=  nullptr && gre->has_data());
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Gre()
    :
    enhanced{YType::enumeration, "enhanced"}
{
    yang_name = "gre"; yang_parent_name = "encapsulation";
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::~Gre()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_data() const
{
    return enhanced.is_set;
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::has_operation() const
{
    return is_set(operation)
	|| is_set(enhanced.operation);
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gre' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enhanced.is_set || is_set(enhanced.operation)) leaf_name_data.push_back(enhanced.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enhanced")
    {
        enhanced = value;
    }
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "config-service-chain-sf-mode";
}

Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_data() const
{
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    local(nullptr) // presence node
{
    yang_name = "service-function-forwarder"; yang_parent_name = "service-chain";
}

Native::ServiceChain::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_data() const
{
    for (std::size_t index=0; index<service_ff_name.size(); index++)
    {
        if(service_ff_name[index]->has_data())
            return true;
    }
    return (local !=  nullptr && local->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::has_operation() const
{
    for (std::size_t index=0; index<service_ff_name.size(); index++)
    {
        if(service_ff_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-function-forwarder";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunctionForwarder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local>();
        }
        return local;
    }

    if(child_yang_name == "service-ff-name")
    {
        for(auto const & c : service_ff_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName>();
        c->parent = this;
        service_ff_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    for (auto const & c : service_ff_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::set_value(const std::string & value_path, std::string value)
{
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::ServiceFfName()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip>())
{
    ip->parent = this;

    yang_name = "service-ff-name"; yang_parent_name = "service-function-forwarder";
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::~ServiceFfName()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-ff-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "service-ff-name";
}

Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_data() const
{
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Local()
    :
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local::Ip>())
{
    ip->parent = this;

    yang_name = "local"; yang_parent_name = "service-function-forwarder";
}

Native::ServiceChain::ServiceFunctionForwarder::Local::~Local()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_data() const
{
    return description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunctionForwarder::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::ServiceChain::ServiceFunctionForwarder::Local::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "local";
}

Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::~Ip()
{
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_data() const
{
    return address.is_set;
}

bool Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-chain/Cisco-IOS-XE-service-chain:service-function-forwarder/local/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServiceFunctionForwarder::Local::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::ServiceChain::ServicePath::ServicePath()
    :
    service_path_id{YType::uint32, "service-path-id"}
    	,
    config_service_chain_path_mode(std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode>())
{
    config_service_chain_path_mode->parent = this;

    yang_name = "service-path"; yang_parent_name = "service-chain";
}

Native::ServiceChain::ServicePath::~ServicePath()
{
}

bool Native::ServiceChain::ServicePath::has_data() const
{
    return service_path_id.is_set
	|| (config_service_chain_path_mode !=  nullptr && config_service_chain_path_mode->has_data());
}

bool Native::ServiceChain::ServicePath::has_operation() const
{
    return is_set(operation)
	|| is_set(service_path_id.operation)
	|| (config_service_chain_path_mode !=  nullptr && config_service_chain_path_mode->has_operation());
}

std::string Native::ServiceChain::ServicePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-chain:service-path" <<"[service-path-id='" <<service_path_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServicePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_path_id.is_set || is_set(service_path_id.operation)) leaf_name_data.push_back(service_path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-service-chain-path-mode")
    {
        if(config_service_chain_path_mode == nullptr)
        {
            config_service_chain_path_mode = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode>();
        }
        return config_service_chain_path_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_service_chain_path_mode != nullptr)
    {
        children["config-service-chain-path-mode"] = config_service_chain_path_mode;
    }

    return children;
}

void Native::ServiceChain::ServicePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-path-id")
    {
        service_path_id = value;
    }
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ConfigServiceChainPathMode()
    :
    description{YType::str, "description"}
    	,
    service_index(std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex>())
{
    service_index->parent = this;

    yang_name = "config-service-chain-path-mode"; yang_parent_name = "service-path";
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::~ConfigServiceChainPathMode()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_data() const
{
    return description.is_set
	|| (service_index !=  nullptr && service_index->has_data());
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (service_index !=  nullptr && service_index->has_operation());
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-service-chain-path-mode";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigServiceChainPathMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        if(service_index == nullptr)
        {
            service_index = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex>();
        }
        return service_index;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_index != nullptr)
    {
        children["service-index"] = service_index;
    }

    return children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::ServiceIndex()
{
    yang_name = "service-index"; yang_parent_name = "config-service-chain-path-mode";
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::~ServiceIndex()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_data() const
{
    for (std::size_t index=0; index<services.size(); index++)
    {
        if(services[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<services.size(); index++)
    {
        if(services[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceIndex' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "services")
    {
        for(auto const & c : services)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services>();
        c->parent = this;
        services.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : services)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::set_value(const std::string & value_path, std::string value)
{
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::Services()
    :
    service_index_id{YType::uint8, "service-index-id"},
    service_function{YType::str, "service-function"},
    service_function_forwarder{YType::str, "service-function-forwarder"},
    terminate{YType::empty, "terminate"}
{
    yang_name = "services"; yang_parent_name = "service-index";
}

Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::~Services()
{
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_data() const
{
    return service_index_id.is_set
	|| service_function.is_set
	|| service_function_forwarder.is_set
	|| terminate.is_set;
}

bool Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::has_operation() const
{
    return is_set(operation)
	|| is_set(service_index_id.operation)
	|| is_set(service_function.operation)
	|| is_set(service_function_forwarder.operation)
	|| is_set(terminate.operation);
}

std::string Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services" <<"[service-index-id='" <<service_index_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Services' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_index_id.is_set || is_set(service_index_id.operation)) leaf_name_data.push_back(service_index_id.get_name_leafdata());
    if (service_function.is_set || is_set(service_function.operation)) leaf_name_data.push_back(service_function.get_name_leafdata());
    if (service_function_forwarder.is_set || is_set(service_function_forwarder.operation)) leaf_name_data.push_back(service_function_forwarder.get_name_leafdata());
    if (terminate.is_set || is_set(terminate.operation)) leaf_name_data.push_back(terminate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-index-id")
    {
        service_index_id = value;
    }
    if(value_path == "service-function")
    {
        service_function = value;
    }
    if(value_path == "service-function-forwarder")
    {
        service_function_forwarder = value;
    }
    if(value_path == "terminate")
    {
        terminate = value;
    }
}

Native::Performance::Performance()
    :
    monitor(std::make_shared<Native::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "native";
}

Native::Performance::~Performance()
{
}

bool Native::Performance::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Performance::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance";

    return path_buffer.str();

}

const EntityPath Native::Performance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Performance::set_value(const std::string & value_path, std::string value)
{
}

Native::Performance::Monitor::Monitor()
    :
    observation_point(std::make_shared<Native::Performance::Monitor::ObservationPoint>())
{
    observation_point->parent = this;

    yang_name = "monitor"; yang_parent_name = "performance";
}

Native::Performance::Monitor::~Monitor()
{
}

bool Native::Performance::Monitor::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return (observation_point !=  nullptr && observation_point->has_data());
}

bool Native::Performance::Monitor::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (observation_point !=  nullptr && observation_point->has_operation());
}

std::string Native::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:monitor";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/performance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Performance::Monitor::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    if(child_yang_name == "observation-point")
    {
        if(observation_point == nullptr)
        {
            observation_point = std::make_shared<Native::Performance::Monitor::ObservationPoint>();
        }
        return observation_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    if(observation_point != nullptr)
    {
        children["observation-point"] = observation_point;
    }

    return children;
}

void Native::Performance::Monitor::set_value(const std::string & value_path, std::string value)
{
}

Native::Performance::Monitor::Context::Context()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    profile{YType::enumeration, "profile"}
    	,
    default_(std::make_shared<Native::Performance::Monitor::Context::Default_>())
	,exporter(std::make_shared<Native::Performance::Monitor::Context::Exporter>())
	,traffic_monitor(std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor>())
{
    default_->parent = this;

    exporter->parent = this;

    traffic_monitor->parent = this;

    yang_name = "context"; yang_parent_name = "monitor";
}

Native::Performance::Monitor::Context::~Context()
{
}

bool Native::Performance::Monitor::Context::has_data() const
{
    return name.is_set
	|| description.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (exporter !=  nullptr && exporter->has_data())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_data());
}

bool Native::Performance::Monitor::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(profile.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (exporter !=  nullptr && exporter->has_operation())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_operation());
}

std::string Native::Performance::Monitor::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/performance/Cisco-IOS-XE-ezpm:monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Performance::Monitor::Context::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Native::Performance::Monitor::Context::Exporter>();
        }
        return exporter;
    }

    if(child_yang_name == "traffic-monitor")
    {
        if(traffic_monitor == nullptr)
        {
            traffic_monitor = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor>();
        }
        return traffic_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(exporter != nullptr)
    {
        children["exporter"] = exporter;
    }

    if(traffic_monitor != nullptr)
    {
        children["traffic-monitor"] = traffic_monitor;
    }

    return children;
}

void Native::Performance::Monitor::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Performance::Monitor::Context::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    exporter(std::make_shared<Native::Performance::Monitor::Context::Default_::Exporter>())
	,traffic_monitor(std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor>())
{
    exporter->parent = this;

    traffic_monitor->parent = this;

    yang_name = "default"; yang_parent_name = "context";
}

Native::Performance::Monitor::Context::Default_::~Default_()
{
}

bool Native::Performance::Monitor::Context::Default_::has_data() const
{
    return description.is_set
	|| (exporter !=  nullptr && exporter->has_data())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_data());
}

bool Native::Performance::Monitor::Context::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (exporter !=  nullptr && exporter->has_operation())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_operation());
}

std::string Native::Performance::Monitor::Context::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Native::Performance::Monitor::Context::Default_::Exporter>();
        }
        return exporter;
    }

    if(child_yang_name == "traffic-monitor")
    {
        if(traffic_monitor == nullptr)
        {
            traffic_monitor = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor>();
        }
        return traffic_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exporter != nullptr)
    {
        children["exporter"] = exporter;
    }

    if(traffic_monitor != nullptr)
    {
        children["traffic-monitor"] = traffic_monitor;
    }

    return children;
}

void Native::Performance::Monitor::Context::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Performance::Monitor::Context::Default_::Exporter::Exporter()
    :
    destination{YType::str, "destination"},
    port{YType::uint16, "port"},
    source{YType::str, "source"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"}
{
    yang_name = "exporter"; yang_parent_name = "default";
}

Native::Performance::Monitor::Context::Default_::Exporter::~Exporter()
{
}

bool Native::Performance::Monitor::Context::Default_::Exporter::has_data() const
{
    return destination.is_set
	|| port.is_set
	|| source.is_set
	|| transport.is_set
	|| vrf.is_set;
}

bool Native::Performance::Monitor::Context::Default_::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(port.operation)
	|| is_set(source.operation)
	|| is_set(transport.operation)
	|| is_set(vrf.operation);
}

std::string Native::Performance::Monitor::Context::Default_::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::TrafficMonitor()
    :
    all(nullptr) // presence node
	,application_client_server_stats(nullptr) // presence node
	,application_response_time(nullptr) // presence node
	,application_stats(nullptr) // presence node
	,application_traffic_stats(nullptr) // presence node
	,conversation_traffic_stats(nullptr) // presence node
	,media(nullptr) // presence node
	,url(nullptr) // presence node
{
    yang_name = "traffic-monitor"; yang_parent_name = "default";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::~TrafficMonitor()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_data())
	|| (application_response_time !=  nullptr && application_response_time->has_data())
	|| (application_stats !=  nullptr && application_stats->has_data())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_data())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_operation())
	|| (application_response_time !=  nullptr && application_response_time->has_operation())
	|| (application_stats !=  nullptr && application_stats->has_operation())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_operation())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-monitor";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::All>();
        }
        return all;
    }

    if(child_yang_name == "application-client-server-stats")
    {
        if(application_client_server_stats == nullptr)
        {
            application_client_server_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats>();
        }
        return application_client_server_stats;
    }

    if(child_yang_name == "application-response-time")
    {
        if(application_response_time == nullptr)
        {
            application_response_time = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime>();
        }
        return application_response_time;
    }

    if(child_yang_name == "application-stats")
    {
        if(application_stats == nullptr)
        {
            application_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats>();
        }
        return application_stats;
    }

    if(child_yang_name == "application-traffic-stats")
    {
        if(application_traffic_stats == nullptr)
        {
            application_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats>();
        }
        return application_traffic_stats;
    }

    if(child_yang_name == "conversation-traffic-stats")
    {
        if(conversation_traffic_stats == nullptr)
        {
            conversation_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats>();
        }
        return conversation_traffic_stats;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media>();
        }
        return media;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(application_client_server_stats != nullptr)
    {
        children["application-client-server-stats"] = application_client_server_stats;
    }

    if(application_response_time != nullptr)
    {
        children["application-response-time"] = application_response_time;
    }

    if(application_stats != nullptr)
    {
        children["application-stats"] = application_stats;
    }

    if(application_traffic_stats != nullptr)
    {
        children["application-traffic-stats"] = application_traffic_stats;
    }

    if(conversation_traffic_stats != nullptr)
    {
        children["conversation-traffic-stats"] = conversation_traffic_stats;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::set_value(const std::string & value_path, std::string value)
{
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::All()
    :
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "all"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::~All()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::ApplicationResponseTime()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "application-response-time"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::~ApplicationResponseTime()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(cache_type.operation)
	|| is_set(class_and.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-response-time";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationResponseTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.operation)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.operation)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
    }
    if(value_path == "class-and")
    {
        class_and = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::ApplicationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{
    yang_name = "application-traffic-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::~ApplicationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-traffic-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationTrafficStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::ConversationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "conversation-traffic-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::~ConversationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(cache_type.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conversation-traffic-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConversationTrafficStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.operation)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::Media()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "media"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::~Media()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| egress.is_set
	|| ingress.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_and.operation)
	|| is_set(class_replace.operation)
	|| is_set(egress.operation)
	|| is_set(ingress.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Media' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.operation)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.operation)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-and")
    {
        class_and = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "egress")
    {
        egress = value;
    }
    if(value_path == "ingress")
    {
        ingress = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::Url()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    sampling_rate{YType::uint32, "sampling-rate"}
{
    yang_name = "url"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::~Url()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| sampling_rate.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_and.operation)
	|| is_set(class_replace.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(sampling_rate.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.operation)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sampling_rate.is_set || is_set(sampling_rate.operation)) leaf_name_data.push_back(sampling_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-and")
    {
        class_and = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::ApplicationClientServerStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "application-client-server-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::~ApplicationClientServerStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(cache_type.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-client-server-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationClientServerStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.operation)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::ApplicationStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{
    yang_name = "application-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::~ApplicationStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
}

Native::Performance::Monitor::Context::Exporter::Exporter()
    :
    destination{YType::str, "destination"},
    port{YType::uint16, "port"},
    source{YType::str, "source"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"}
{
    yang_name = "exporter"; yang_parent_name = "context";
}

Native::Performance::Monitor::Context::Exporter::~Exporter()
{
}

bool Native::Performance::Monitor::Context::Exporter::has_data() const
{
    return destination.is_set
	|| port.is_set
	|| source.is_set
	|| transport.is_set
	|| vrf.is_set;
}

bool Native::Performance::Monitor::Context::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(port.operation)
	|| is_set(source.operation)
	|| is_set(transport.operation)
	|| is_set(vrf.operation);
}

std::string Native::Performance::Monitor::Context::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::TrafficMonitor()
    :
    all(nullptr) // presence node
	,application_client_server_stats(nullptr) // presence node
	,application_response_time(nullptr) // presence node
	,application_stats(nullptr) // presence node
	,application_traffic_stats(nullptr) // presence node
	,conversation_traffic_stats(nullptr) // presence node
	,media(nullptr) // presence node
	,url(nullptr) // presence node
{
    yang_name = "traffic-monitor"; yang_parent_name = "context";
}

Native::Performance::Monitor::Context::TrafficMonitor::~TrafficMonitor()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_data())
	|| (application_response_time !=  nullptr && application_response_time->has_data())
	|| (application_stats !=  nullptr && application_stats->has_data())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_data())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_operation())
	|| (application_response_time !=  nullptr && application_response_time->has_operation())
	|| (application_stats !=  nullptr && application_stats->has_operation())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_operation())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-monitor";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::All>();
        }
        return all;
    }

    if(child_yang_name == "application-client-server-stats")
    {
        if(application_client_server_stats == nullptr)
        {
            application_client_server_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats>();
        }
        return application_client_server_stats;
    }

    if(child_yang_name == "application-response-time")
    {
        if(application_response_time == nullptr)
        {
            application_response_time = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime>();
        }
        return application_response_time;
    }

    if(child_yang_name == "application-stats")
    {
        if(application_stats == nullptr)
        {
            application_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats>();
        }
        return application_stats;
    }

    if(child_yang_name == "application-traffic-stats")
    {
        if(application_traffic_stats == nullptr)
        {
            application_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats>();
        }
        return application_traffic_stats;
    }

    if(child_yang_name == "conversation-traffic-stats")
    {
        if(conversation_traffic_stats == nullptr)
        {
            conversation_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats>();
        }
        return conversation_traffic_stats;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::Media>();
        }
        return media;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(application_client_server_stats != nullptr)
    {
        children["application-client-server-stats"] = application_client_server_stats;
    }

    if(application_response_time != nullptr)
    {
        children["application-response-time"] = application_response_time;
    }

    if(application_stats != nullptr)
    {
        children["application-stats"] = application_stats;
    }

    if(application_traffic_stats != nullptr)
    {
        children["application-traffic-stats"] = application_traffic_stats;
    }

    if(conversation_traffic_stats != nullptr)
    {
        children["conversation-traffic-stats"] = conversation_traffic_stats;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::set_value(const std::string & value_path, std::string value)
{
}

Native::Performance::Monitor::Context::TrafficMonitor::All::All()
    :
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "all"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::All::~All()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::ApplicationResponseTime()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "application-response-time"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::~ApplicationResponseTime()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(cache_type.operation)
	|| is_set(class_and.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-response-time";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationResponseTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.operation)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.operation)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
    }
    if(value_path == "class-and")
    {
        class_and = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::ApplicationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{
    yang_name = "application-traffic-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::~ApplicationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-traffic-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationTrafficStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::ConversationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "conversation-traffic-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::~ConversationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(cache_type.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conversation-traffic-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConversationTrafficStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.operation)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::Media::Media()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "media"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::Media::~Media()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| egress.is_set
	|| ingress.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_and.operation)
	|| is_set(class_replace.operation)
	|| is_set(egress.operation)
	|| is_set(ingress.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::Media::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Media' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.operation)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.operation)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::Media::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-and")
    {
        class_and = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "egress")
    {
        egress = value;
    }
    if(value_path == "ingress")
    {
        ingress = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::Url::Url()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    sampling_rate{YType::uint32, "sampling-rate"}
{
    yang_name = "url"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::Url::~Url()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| sampling_rate.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_and.operation)
	|| is_set(class_replace.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(sampling_rate.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.operation)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sampling_rate.is_set || is_set(sampling_rate.operation)) leaf_name_data.push_back(sampling_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-and")
    {
        class_and = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::ApplicationClientServerStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "application-client-server-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::~ApplicationClientServerStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(cache_type.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-client-server-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationClientServerStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.operation)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::ApplicationStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{
    yang_name = "application-stats"; yang_parent_name = "traffic-monitor";
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::~ApplicationStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(class_replace.operation)
	|| is_set(interval_timeout.operation);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-stats";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationStats' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.operation)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.operation)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
    }
}

Native::Performance::Monitor::ObservationPoint::ObservationPoint()
    :
    encrypted_text{YType::empty, "encrypted-text"}
{
    yang_name = "observation-point"; yang_parent_name = "monitor";
}

Native::Performance::Monitor::ObservationPoint::~ObservationPoint()
{
}

bool Native::Performance::Monitor::ObservationPoint::has_data() const
{
    return encrypted_text.is_set;
}

bool Native::Performance::Monitor::ObservationPoint::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypted_text.operation);
}

std::string Native::Performance::Monitor::ObservationPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation-point";

    return path_buffer.str();

}

const EntityPath Native::Performance::Monitor::ObservationPoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/performance/Cisco-IOS-XE-ezpm:monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypted_text.is_set || is_set(encrypted_text.operation)) leaf_name_data.push_back(encrypted_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Performance::Monitor::ObservationPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::ObservationPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::ObservationPoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypted-text")
    {
        encrypted_text = value;
    }
}

Native::Otv::Otv()
    :
    site_identifier{YType::str, "Cisco-IOS-XE-otv:site-identifier"}
    	,
    fragmentation(std::make_shared<Native::Otv::Fragmentation>())
	,isis(std::make_shared<Native::Otv::Isis>())
{
    fragmentation->parent = this;

    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "native";
}

Native::Otv::~Otv()
{
}

bool Native::Otv::has_data() const
{
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return site_identifier.is_set
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::has_operation() const
{
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(site_identifier.operation)
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";

    return path_buffer.str();

}

const EntityPath Native::Otv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_identifier.is_set || is_set(site_identifier.operation)) leaf_name_data.push_back(site_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Otv::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "site")
    {
        for(auto const & c : site)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Otv::Site>();
        c->parent = this;
        site.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    for (auto const & c : site)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Otv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-identifier")
    {
        site_identifier = value;
    }
}

Native::Otv::Fragmentation::Fragmentation()
    :
    join_interface(std::make_shared<Native::Otv::Fragmentation::JoinInterface>())
{
    join_interface->parent = this;

    yang_name = "fragmentation"; yang_parent_name = "otv";
}

Native::Otv::Fragmentation::~Fragmentation()
{
}

bool Native::Otv::Fragmentation::has_data() const
{
    return (join_interface !=  nullptr && join_interface->has_data());
}

bool Native::Otv::Fragmentation::has_operation() const
{
    return is_set(operation)
	|| (join_interface !=  nullptr && join_interface->has_operation());
}

std::string Native::Otv::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:fragmentation";

    return path_buffer.str();

}

const EntityPath Native::Otv::Fragmentation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-interface")
    {
        if(join_interface == nullptr)
        {
            join_interface = std::make_shared<Native::Otv::Fragmentation::JoinInterface>();
        }
        return join_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(join_interface != nullptr)
    {
        children["join-interface"] = join_interface;
    }

    return children;
}

void Native::Otv::Fragmentation::set_value(const std::string & value_path, std::string value)
{
}

Native::Otv::Fragmentation::JoinInterface::JoinInterface()
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
    lisp{YType::uint16, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "join-interface"; yang_parent_name = "fragmentation";
}

Native::Otv::Fragmentation::JoinInterface::~JoinInterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::has_data() const
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

bool Native::Otv::Fragmentation::JoinInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Otv::Fragmentation::JoinInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-interface";

    return path_buffer.str();

}

const EntityPath Native::Otv::Fragmentation::JoinInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::get_children() const
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

void Native::Otv::Fragmentation::JoinInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "join-interface";
}

Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "join-interface";
}

Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Otv::Fragmentation::JoinInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "join-interface";
}

Native::Otv::Fragmentation::JoinInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Otv::Fragmentation::JoinInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Otv::Fragmentation::JoinInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "join-interface";
}

Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Otv::Isis::Isis()
    :
    site(std::make_shared<Native::Otv::Isis::Site>())
{
    site->parent = this;

    yang_name = "isis"; yang_parent_name = "otv";
}

Native::Otv::Isis::~Isis()
{
}

bool Native::Otv::Isis::has_data() const
{
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_data())
            return true;
    }
    return (site !=  nullptr && site->has_data());
}

bool Native::Otv::Isis::has_operation() const
{
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Otv::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:isis";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Overlay")
    {
        for(auto const & c : overlay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Otv::Isis::Overlay>();
        c->parent = this;
        overlay.push_back(c);
        return c;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Otv::Isis::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : overlay)
    {
        children[c->get_segment_path()] = c;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    return children;
}

void Native::Otv::Isis::set_value(const std::string & value_path, std::string value)
{
}

Native::Otv::Isis::Overlay::Overlay()
    :
    number{YType::uint16, "number"},
    delayed_deletion_interval{YType::uint32, "delayed-deletion-interval"},
    lsp_mtu{YType::uint32, "lsp-mtu"},
    lsp_refresh_interval{YType::uint32, "lsp-refresh-interval"},
    max_lsp_lifetime{YType::uint32, "max-lsp-lifetime"}
    	,
    authentication(std::make_shared<Native::Otv::Isis::Overlay::Authentication>())
	,default_(std::make_shared<Native::Otv::Isis::Overlay::Default_>())
	,hostname(std::make_shared<Native::Otv::Isis::Overlay::Hostname>())
	,log_adjacency_changes(nullptr) // presence node
	,lsp_gen_interval(std::make_shared<Native::Otv::Isis::Overlay::LspGenInterval>())
	,nsf(std::make_shared<Native::Otv::Isis::Overlay::Nsf>())
	,prc_interval(std::make_shared<Native::Otv::Isis::Overlay::PrcInterval>())
	,skeptical(std::make_shared<Native::Otv::Isis::Overlay::Skeptical>())
	,spf_interval(std::make_shared<Native::Otv::Isis::Overlay::SpfInterval>())
{
    authentication->parent = this;

    default_->parent = this;

    hostname->parent = this;

    lsp_gen_interval->parent = this;

    nsf->parent = this;

    prc_interval->parent = this;

    skeptical->parent = this;

    spf_interval->parent = this;

    yang_name = "Overlay"; yang_parent_name = "isis";
}

Native::Otv::Isis::Overlay::~Overlay()
{
}

bool Native::Otv::Isis::Overlay::has_data() const
{
    return number.is_set
	|| delayed_deletion_interval.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_lsp_lifetime.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data());
}

bool Native::Otv::Isis::Overlay::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(delayed_deletion_interval.operation)
	|| is_set(lsp_mtu.operation)
	|| is_set(lsp_refresh_interval.operation)
	|| is_set(max_lsp_lifetime.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation());
}

std::string Native::Otv::Isis::Overlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Overlay" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (delayed_deletion_interval.is_set || is_set(delayed_deletion_interval.operation)) leaf_name_data.push_back(delayed_deletion_interval.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.operation)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.operation)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.operation)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Isis::Overlay::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Overlay::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Otv::Isis::Overlay::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Overlay::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "lsp-gen-interval")
    {
        if(lsp_gen_interval == nullptr)
        {
            lsp_gen_interval = std::make_shared<Native::Otv::Isis::Overlay::LspGenInterval>();
        }
        return lsp_gen_interval;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Otv::Isis::Overlay::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Otv::Isis::Overlay::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Overlay::Skeptical>();
        }
        return skeptical;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Otv::Isis::Overlay::SpfInterval>();
        }
        return spf_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(lsp_gen_interval != nullptr)
    {
        children["lsp-gen-interval"] = lsp_gen_interval;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    if(spf_interval != nullptr)
    {
        children["spf-interval"] = spf_interval;
    }

    return children;
}

void Native::Otv::Isis::Overlay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval = value;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
    }
}

Native::Otv::Isis::Overlay::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{
    yang_name = "authentication"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Authentication::~Authentication()
{
}

bool Native::Otv::Isis::Overlay::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Isis::Overlay::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(mode.operation)
	|| is_set(send_only.operation);
}

std::string Native::Otv::Isis::Overlay::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.operation)) leaf_name_data.push_back(send_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "send-only")
    {
        send_only = value;
    }
}

Native::Otv::Isis::Overlay::Default_::Default_()
    :
    delayed_deletion_interval{YType::empty, "delayed-deletion-interval"},
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    lsp_gen_interval{YType::empty, "lsp-gen-interval"},
    lsp_mtu{YType::empty, "lsp-mtu"},
    lsp_refresh_interval{YType::empty, "lsp-refresh-interval"},
    max_lsp_lifetime{YType::empty, "max-lsp-lifetime"},
    prc_interval{YType::empty, "prc-interval"},
    spf_interval{YType::empty, "spf-interval"}
    	,
    authentication(std::make_shared<Native::Otv::Isis::Overlay::Default_::Authentication>())
	,hostname(std::make_shared<Native::Otv::Isis::Overlay::Default_::Hostname>())
	,nsf(std::make_shared<Native::Otv::Isis::Overlay::Default_::Nsf>())
	,skeptical(std::make_shared<Native::Otv::Isis::Overlay::Default_::Skeptical>())
{
    authentication->parent = this;

    hostname->parent = this;

    nsf->parent = this;

    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Default_::~Default_()
{
}

bool Native::Otv::Isis::Overlay::Default_::has_data() const
{
    return delayed_deletion_interval.is_set
	|| log_adjacency_changes.is_set
	|| lsp_gen_interval.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_lsp_lifetime.is_set
	|| prc_interval.is_set
	|| spf_interval.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Overlay::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(delayed_deletion_interval.operation)
	|| is_set(log_adjacency_changes.operation)
	|| is_set(lsp_gen_interval.operation)
	|| is_set(lsp_mtu.operation)
	|| is_set(lsp_refresh_interval.operation)
	|| is_set(max_lsp_lifetime.operation)
	|| is_set(prc_interval.operation)
	|| is_set(spf_interval.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Overlay::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_deletion_interval.is_set || is_set(delayed_deletion_interval.operation)) leaf_name_data.push_back(delayed_deletion_interval.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.operation)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (lsp_gen_interval.is_set || is_set(lsp_gen_interval.operation)) leaf_name_data.push_back(lsp_gen_interval.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.operation)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.operation)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.operation)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (prc_interval.is_set || is_set(prc_interval.operation)) leaf_name_data.push_back(prc_interval.get_name_leafdata());
    if (spf_interval.is_set || is_set(spf_interval.operation)) leaf_name_data.push_back(spf_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Isis::Overlay::Default_::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Otv::Isis::Overlay::Default_::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Otv::Isis::Overlay::Default_::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Overlay::Default_::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Overlay::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval = value;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
    }
    if(value_path == "lsp-gen-interval")
    {
        lsp_gen_interval = value;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
    }
    if(value_path == "prc-interval")
    {
        prc_interval = value;
    }
    if(value_path == "spf-interval")
    {
        spf_interval = value;
    }
}

Native::Otv::Isis::Overlay::Default_::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{
    yang_name = "authentication"; yang_parent_name = "default";
}

Native::Otv::Isis::Overlay::Default_::Authentication::~Authentication()
{
}

bool Native::Otv::Isis::Overlay::Default_::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(mode.operation)
	|| is_set(send_only.operation);
}

std::string Native::Otv::Isis::Overlay::Default_::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Default_::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.operation)) leaf_name_data.push_back(send_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "send-only")
    {
        send_only = value;
    }
}

Native::Otv::Isis::Overlay::Default_::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "hostname"; yang_parent_name = "default";
}

Native::Otv::Isis::Overlay::Default_::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Default_::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation);
}

std::string Native::Otv::Isis::Overlay::Default_::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Default_::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Otv::Isis::Overlay::Default_::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::empty, "interval"}
{
    yang_name = "nsf"; yang_parent_name = "default";
}

Native::Otv::Isis::Overlay::Default_::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Default_::Nsf::has_data() const
{
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(interval.operation);
}

std::string Native::Otv::Isis::Overlay::Default_::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Default_::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Otv::Isis::Overlay::Default_::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "default";
}

Native::Otv::Isis::Overlay::Default_::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Otv::Isis::Overlay::Default_::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Default_::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Skeptical' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Skeptical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Otv::Isis::Overlay::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "hostname"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation);
}

std::string Native::Otv::Isis::Overlay::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{
    yang_name = "log-adjacency-changes"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogAdjacencyChanges' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Otv::Isis::Overlay::LspGenInterval::LspGenInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{
    yang_name = "lsp-gen-interval"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::LspGenInterval::~LspGenInterval()
{
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds.operation)
	|| is_set(seconds.operation)
	|| is_set(wait.operation);
}

std::string Native::Otv::Isis::Overlay::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::LspGenInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspGenInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.operation)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Otv::Isis::Overlay::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::uint32, "interval"}
{
    yang_name = "nsf"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Nsf::has_data() const
{
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(interval.operation);
}

std::string Native::Otv::Isis::Overlay::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Otv::Isis::Overlay::PrcInterval::PrcInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{
    yang_name = "prc-interval"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::PrcInterval::~PrcInterval()
{
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds.operation)
	|| is_set(seconds.operation)
	|| is_set(wait.operation);
}

std::string Native::Otv::Isis::Overlay::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::PrcInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrcInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.operation)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::PrcInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Otv::Isis::Overlay::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Skeptical::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Otv::Isis::Overlay::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Skeptical' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Skeptical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Otv::Isis::Overlay::SpfInterval::SpfInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{
    yang_name = "spf-interval"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::SpfInterval::~SpfInterval()
{
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds.operation)
	|| is_set(seconds.operation)
	|| is_set(wait.operation);
}

std::string Native::Otv::Isis::Overlay::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.operation)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::SpfInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Otv::Isis::Site::Site()
    :
    net{YType::str, "net"}
    	,
    default_(std::make_shared<Native::Otv::Isis::Site::Default_>())
	,log_adjacency_changes(nullptr) // presence node
	,skeptical(std::make_shared<Native::Otv::Isis::Site::Skeptical>())
{
    default_->parent = this;

    skeptical->parent = this;

    yang_name = "site"; yang_parent_name = "isis";
}

Native::Otv::Isis::Site::~Site()
{
}

bool Native::Otv::Isis::Site::has_data() const
{
    return net.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::has_operation() const
{
    return is_set(operation)
	|| is_set(net.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net.is_set || is_set(net.operation)) leaf_name_data.push_back(net.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Site::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Site::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Site::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "net")
    {
        net = value;
    }
}

Native::Otv::Isis::Site::Default_::Default_()
    :
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    net{YType::empty, "net"}
    	,
    skeptical(std::make_shared<Native::Otv::Isis::Site::Default_::Skeptical>())
{
    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "site";
}

Native::Otv::Isis::Site::Default_::~Default_()
{
}

bool Native::Otv::Isis::Site::Default_::has_data() const
{
    return log_adjacency_changes.is_set
	|| net.is_set
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(log_adjacency_changes.operation)
	|| is_set(net.operation)
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.operation)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (net.is_set || is_set(net.operation)) leaf_name_data.push_back(net.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Default_::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Site::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
    }
    if(value_path == "net")
    {
        net = value;
    }
}

Native::Otv::Isis::Site::Default_::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "default";
}

Native::Otv::Isis::Site::Default_::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Otv::Isis::Site::Default_::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::Default_::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Default_::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Default_::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::Default_::Skeptical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

const Enum::YLeaf Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::EnhancedEnum::copy {0, "copy"};
const Enum::YLeaf Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::EnhancedEnum::divert {1, "divert"};

const Enum::YLeaf Native::Performance::Monitor::Context::ProfileEnum::application_experience {0, "application-experience"};
const Enum::YLeaf Native::Performance::Monitor::Context::ProfileEnum::application_performance {1, "application-performance"};
const Enum::YLeaf Native::Performance::Monitor::Context::ProfileEnum::application_statistics {2, "application-statistics"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::Exporter::TransportEnum::udp {0, "udp"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::CacheTypeEnum::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::CacheTypeEnum::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::CacheTypeEnum::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::CacheTypeEnum::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::CacheTypeEnum::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::CacheTypeEnum::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Exporter::TransportEnum::udp {0, "udp"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheTypeEnum::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheTypeEnum::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheTypeEnum::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheTypeEnum::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheTypeEnum::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheTypeEnum::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Otv::Isis::Overlay::Authentication::ModeEnum::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Isis::Overlay::Authentication::ModeEnum::text {1, "text"};

const Enum::YLeaf Native::Otv::Isis::Overlay::Default_::Authentication::ModeEnum::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Isis::Overlay::Default_::Authentication::ModeEnum::text {1, "text"};


}
}

