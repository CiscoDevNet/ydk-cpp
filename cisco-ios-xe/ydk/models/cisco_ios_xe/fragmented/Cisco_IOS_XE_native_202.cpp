
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_202.hpp"
#include "Cisco_IOS_XE_native_203.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
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
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
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
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Authentication()
    :
    mode{YType::enumeration, "mode"}
{

    yang_name = "authentication"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::has_data() const
{
    return mode.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"},
    restart_interval{YType::uint16, "restart-interval"}
    	,
    helper(nullptr) // presence node
{

    yang_name = "graceful-restart"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_data() const
{
    return disable.is_set
	|| restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "disable" || name == "restart-interval")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Manet()
    :
    hello{YType::enumeration, "hello"},
    willingness{YType::uint8, "willingness"}
    	,
    cache(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache>())
	,peering(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering>())
{
    cache->parent = this;
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::~Manet()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::has_data() const
{
    return hello.is_set
	|| willingness.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (peering !=  nullptr && peering->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(willingness.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (willingness.is_set || is_set(willingness.yfilter)) leaf_name_data.push_back(willingness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "willingness")
    {
        willingness = value;
        willingness.value_namespace = name_space;
        willingness.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "willingness")
    {
        willingness.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "peering" || name == "hello" || name == "willingness")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::Cache()
    :
    acknowledgement{YType::uint64, "acknowledgement"},
    update{YType::uint64, "update"}
{

    yang_name = "cache"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::~Cache()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::has_data() const
{
    return acknowledgement.is_set
	|| update.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledgement" || name == "update")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Peering()
    :
    selective(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective>())
{
    selective->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::~Peering()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::has_data() const
{
    return (selective !=  nullptr && selective->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| (selective !=  nullptr && selective->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selective")
    {
        if(selective == nullptr)
        {
            selective = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective>();
        }
        return selective;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selective != nullptr)
    {
        children["selective"] = selective;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selective")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::Selective()
    :
    disable{YType::empty, "disable"},
    per_interface{YType::empty, "per-interface"},
    redundancy{YType::uint8, "redundancy"}
{

    yang_name = "selective"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::~Selective()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::has_data() const
{
    return disable.is_set
	|| per_interface.is_set
	|| redundancy.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(per_interface.yfilter)
	|| ydk::is_set(redundancy.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selective";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (per_interface.is_set || is_set(per_interface.yfilter)) leaf_name_data.push_back(per_interface.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-interface")
    {
        per_interface = value;
        per_interface.value_namespace = name_space;
        per_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "per-interface")
    {
        per_interface.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "per-interface" || name == "redundancy")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    nssa_only{YType::empty, "nssa-only"},
    tag{YType::uint32, "tag"},
    not_advertise{YType::empty, "not-advertise"}
{

    yang_name = "summary-prefix"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::~SummaryPrefix()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| nssa_only.is_set
	|| tag.is_set
	|| not_advertise.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "nssa-only" || name == "tag" || name == "not-advertise")
        return true;
    return false;
}

Native::Router::Rip::Rip()
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
    default_information(std::make_shared<Native::Router::Rip::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Rip::Distance>())
	,distribute_list(std::make_shared<Native::Router::Rip::DistributeList>())
	,redistribute(std::make_shared<Native::Router::Rip::Redistribute>())
	,timers(std::make_shared<Native::Router::Rip::Timers>())
	,passive_interface(std::make_shared<Native::Router::Rip::PassiveInterface>())
	,disable(std::make_shared<Native::Router::Rip::Disable>())
	,traffic_share(std::make_shared<Native::Router::Rip::TrafficShare>())
	,address_family(std::make_shared<Native::Router::Rip::AddressFamily>())
	,default_(std::make_shared<Native::Router::Rip::Default>())
{
    default_information->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    redistribute->parent = this;
    timers->parent = this;
    passive_interface->parent = this;
    disable->parent = this;
    traffic_share->parent = this;
    address_family->parent = this;
    default_->parent = this;

    yang_name = "rip"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::~Rip()
{
}

bool Native::Router::Rip::has_data() const
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
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (address_family !=  nullptr && address_family->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Rip::has_operation() const
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
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Router::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Router::Rip::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        auto c = std::make_shared<Native::Router::Rip::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Rip::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Rip::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Rip::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "offset-list")
    {
        auto c = std::make_shared<Native::Router::Rip::OffsetList>();
        c->parent = this;
        offset_list.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Rip::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Rip::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Rip::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Rip::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Rip::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Rip::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Rip::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    count = 0;
    for (auto const & c : offset_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Router::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "network" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "offset-list" || name == "redistribute" || name == "timers" || name == "passive-interface" || name == "disable" || name == "traffic-share" || name == "address-family" || name == "default" || name == "auto-summary" || name == "maximum-paths" || name == "validate-update-source" || name == "default-metric" || name == "version" || name == "flash-update-threshold" || name == "input-queue" || name == "output-delay")
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
    char count=0;
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
    char count=0;
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

Native::Router::Rip::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Rip::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Rip::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Rip::DefaultInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Rip::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Rip::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Rip::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Rip::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Rip::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Rip::DefaultInformation::Originate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/default-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Rip::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
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
    char count=0;
    count = 0;
    for (auto const & c : distance_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
        auto c = std::make_shared<Native::Router::Rip::DistributeList::Accesslist>();
        c->parent = this;
        accesslist.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-ifname")
    {
        auto c = std::make_shared<Native::Router::Rip::DistributeList::AccesslistIfname>();
        c->parent = this;
        accesslist_ifname.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway")
    {
        auto c = std::make_shared<Native::Router::Rip::DistributeList::AccesslistPrefixGateway>();
        c->parent = this;
        accesslist_prefix_gateway.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway-ifname")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : accesslist)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : accesslist_ifname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : accesslist_prefix_gateway)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : accesslist_prefix_gateway_ifname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"},
    id{YType::str, "id"}
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
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set
	|| id.is_set;
}

bool Native::Router::Rip::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_routing_id.yfilter)
	|| ydk::is_set(isis_tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(id.yfilter);
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
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::DistributeList::AccesslistIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf" || name == "id")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    name{YType::str, "name"}
{

    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| prefix_gateway.is_set
	|| name.is_set;
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix_gateway.yfilter)
	|| ydk::is_set(name.yfilter);
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
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Router::Rip::DistributeList::AccesslistPrefixGateway::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::DistributeList::AccesslistPrefixGateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix-gateway" || name == "name")
        return true;
    return false;
}

Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
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

Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| prefix_gateway.is_set
	|| name.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
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
    if (prefix_gateway.is_set || is_set(prefix_gateway.yfilter)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.yfilter)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.yfilter)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
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
    char count=0;
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

bool Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "interface" || name == "prefix-gateway" || name == "name" || name == "interface-routing-id" || name == "isis-tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Rip::OffsetList::OffsetList()
    :
    in_out{YType::enumeration, "in-out"},
    offset{YType::uint8, "offset"},
    id{YType::str, "id"}
{

    yang_name = "offset-list"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::OffsetList::~OffsetList()
{
}

bool Native::Router::Rip::OffsetList::has_data() const
{
    return in_out.is_set
	|| offset.is_set
	|| id.is_set;
}

bool Native::Router::Rip::OffsetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(id.yfilter);
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
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Rip::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "offset" || name == "id")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Redistribute()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::RipMetricRouteMap>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,rip(nullptr) // presence node
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
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
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
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
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
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Rip::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
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
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Rip::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip::Redistribute::Rip_>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    count = 0;
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

void Native::Router::Rip::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "connected" || name == "bgp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "static" || name == "rip")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : isis_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : isoigrp_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(name == "vrf" || name == "match" || name == "rip-metric-route-map" || name == "process-id")
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
    char count=0;
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

Native::Router::Rip::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Rip::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Rip::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
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
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Rip::Redistribute::Ospf::Match::External>();
        }
        return external;
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
    char count=0;
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

void Native::Router::Rip::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Native::Router::Rip::Redistribute::Static::Static()
    :
    rip_metric_route_map(std::make_shared<Native::Router::Rip::Redistribute::Static::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Static::~Static()
{
}

bool Native::Router::Rip::Redistribute::Static::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Router::Rip::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Router::Rip::Redistribute::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Router::Rip::Redistribute::Static::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Rip::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Rip::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-rip:rip/redistribute/static/rip-metric-route-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : passive_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    count = 0;
    for (auto const & c : offset_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : distance_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist>();
        c->parent = this;
        accesslist.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-ifname")
    {
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname>();
        c->parent = this;
        accesslist_ifname.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway")
    {
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway>();
        c->parent = this;
        accesslist_prefix_gateway.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway-ifname")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : accesslist)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : accesslist_ifname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : accesslist_prefix_gateway)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : accesslist_prefix_gateway_ifname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
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
        auto c = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static>();
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
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    count = 0;
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : isis_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : isoigrp_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode::deployment {0, "deployment"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode::normal {1, "normal"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode::strict {2, "strict"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Hello::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Hello::multicast {1, "multicast"};

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


}
}

